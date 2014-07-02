#pragma once

class SFBaseProtocol
{
public:
	SFBaseProtocol();
	virtual ~SFBaseProtocol();

	static INT m_ioSize;
	static USHORT m_packetSize;
	static UINT m_packetOption;

	inline static INT GetIOSize()			{ return m_ioSize; }
	inline static USHORT GetPacketSize()	{ return m_packetSize; }
	inline static UINT GetPacketOption()	{ return m_packetOption; }	

	static void SetPacketOption(UINT packetOption) { m_packetOption = packetOption; }
};