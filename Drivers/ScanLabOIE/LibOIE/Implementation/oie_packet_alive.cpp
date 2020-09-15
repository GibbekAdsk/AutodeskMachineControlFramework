/*++

Copyright (C) 2020 Autodesk Inc.

All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:
	* Redistributions of source code must retain the above copyright
	  notice, this list of conditions and the following disclaimer.
	* Redistributions in binary form must reproduce the above copyright
	  notice, this list of conditions and the following disclaimer in the
	  documentation and/or other materials provided with the distribution.
	* Neither the name of the Autodesk Inc. nor the
	  names of its contributors may be used to endorse or promote products
	  derived from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL AUTODESK INC. BE LIABLE FOR ANY
DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

*/

#include "oie_packet_alive.hpp"
#include "liboie_interfaceexception.hpp"

using namespace LibOIE::Impl;


CPacket_Alive::CPacket_Alive(uint32_t nSequenceNumber, bool bAliveState)
	: CPacket (nSequenceNumber), m_bAliveState(bAliveState)
{
}

CPacket_Alive::CPacket_Alive(CPacketReader& pReader)
	: CPacket (pReader.getSequenceNumber ()), m_bAliveState(false)
{

	pReader.beginVariableHeader();

	auto nVersion = pReader.getPacketVersion();
	switch (nVersion) {
	case 1:
		m_bAliveState = pReader.readVariableBoolean();
		pReader.checkNoPayload();
		break;

	default:
		throw ELibOIEInterfaceException(LIBOIE_ERROR_UNSUPPORTEDPACKETVERSION, "Alive #" + std::to_string (nVersion));

	}

	pReader.endVariableHeader();


}

CPacket_Alive::~CPacket_Alive()
{

}


void CPacket_Alive::serialize(CPacketWriter& packetWriter)
{	
	packetWriter.setVersion (1);
	packetWriter.beginVariableHeader(OIE_MAXNAMELENGTH * 3 + 1);
	packetWriter.writeVariableBoolean(m_bAliveState);
	packetWriter.endVariableHeader();
}


CPacket_AliveRequest::CPacket_AliveRequest(CPacketReader& pReader)
	: CPacket_Alive (pReader)
{

}

ePacketType CPacket_AliveRequest::getType()
{
	return ePacketType::AliveRequest;
}

CPacket_AliveReply::CPacket_AliveReply(CPacketReader& pReader)
	: CPacket_Alive(pReader)
{

}

ePacketType CPacket_AliveReply::getType()
{
	return ePacketType::AliveReply;
}

