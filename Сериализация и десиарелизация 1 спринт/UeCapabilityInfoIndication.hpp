#pragma once

#include "itti_structs/types.hpp"

#define RAPIDJSON_HAS_STDSTRING 1
#include <rapidjson/document.h>
#include <rapidjson/stringbuffer.h>
#include <rapidjson/writer.h>


using UeCapabilityInfoIndication = vran::s1ap::lte::UeCapabilityInfoIndication;



struct UeCapabilityInfoIndicationMessage {
	UeCapabilityInfoIndication message;
	std::string payload_buffer;

	UeCapabilityInfoIndicationMessage() {
		message.cp_ue_id = -1;
		message.ue_radio_cap.size = 0;
		message.ue_radio_cap.payload = nullptr;
	}
	
	void Init(uint32_t id, const char *payload_str) {
		message.cp_ue_id = id;
		payload_buffer = std::string(payload_str);
		message.ue_radio_cap.size = payload_buffer.size();
		message.ue_radio_cap.payload = (uint8_t *)payload_buffer.data();
	}
	void Serialize(rapidjson::Document &document) {
		document.SetObject();
		auto allocator = document.GetAllocator();
		document.AddMember("cp_ue_id", rapidjson::Value(message.cp_ue_id), allocator);
		rapidjson::Value payload(rapidjson::kObjectType);
		

		payload.AddMember("payload", payload_buffer, allocator);
		payload.AddMember("size", payload_buffer.size(), allocator);
		document.AddMember("ue_radio_cap", payload, allocator);
	}
	void Deserialize(const rapidjson::Document &document) {
		message.cp_ue_id = document["cp_ue_id"].GetUint();
		payload_buffer = std::string(document["ue_radio_cap"]["payload"].GetString());
		message.ue_radio_cap.payload = (uint8_t *)payload_buffer.data();
		message.ue_radio_cap.size = payload_buffer.size();
	}

};

void TestSerialization() {
	UeCapabilityInfoIndicationMessage m1;
	m1.Init(1000, "Hello World!");

	rapidjson::Document d1;
	m1.Serialize(d1);
	rapidjson::StringBuffer buffer;
	rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
	d1.Accept(writer);
	auto json_result = buffer.GetString();

	rapidjson::Document d2;
	UeCapabilityInfoIndicationMessage m2;
	d2.Parse(json_result);
	m2.Deserialize(d2);
	assert(m1.message.cp_ue_id == m2.message.cp_ue_id);
	assert(strcmp((char *)m1.message.ue_radio_cap.payload, (char *)m2.message.ue_radio_cap.payload) == 0);
	assert(m1.message.ue_radio_cap.size == m2.message.ue_radio_cap.size);
	printf("%s\n", json_result);
}