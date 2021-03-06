// Distributed under GPLv3 only as specified in repository's root LICENSE file

#pragma once
#include "ChannelType.h"
#include "PacketType.h"
#include <vector>
#include <cstdint>

class Packet {
public:
  PacketType packetType;
  uint8_t channelNumber;
  uint8_t specific;
  std::vector<uint8_t> data;
};
