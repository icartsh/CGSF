#pragma once

class SFTCPNetwork;
class SFUDPNetwork;
class INetworkCallback;
class IUDPNetworkCallback;

class SFNetworkEntry
{
public:
	SFNetworkEntry(void);
	virtual ~SFNetworkEntry(void);

	BOOL Initialize(INetworkCallback* pTCPCallBack, IUDPNetworkCallback* pUDPCallback);
	BOOL Finally();

	BOOL Run();
	BOOL Update();

	bool TCPSend( USHORT PacketID, char* pMessage, int BufSize );
	bool UDPSend(unsigned char* pMessage, int BufSize );
	//bool TCPSend( USHORT PacketID, NetworkMessage* pMessage, int Size );

	SFTCPNetwork* GetTCPNetwork(){return m_pTCPNetwork;}
	SFUDPNetwork *GetUDPNetwork(){return m_pUDPNetwork;}

	bool AddPeer(int Serial, int ExternalIP, short ExternalPort, int LocalIP, short LocalPort);
	bool DeletePeer(int Serial);

protected:

private:
	SFTCPNetwork* m_pTCPNetwork; //tcp
	SFUDPNetwork *m_pUDPNetwork; // UDP
};
