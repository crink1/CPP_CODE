//#define _WINSOCK_DEPRECATED_NO_WARNINGS 1
//#include <iostream>
//#include <winsock2.h>
//#include <Windows.h>
//#include <string>
//using namespace std;
//
//#pragma comment(lib,"ws2_32.lib")
//#define  PORT 6000
//int main(int argc, char* argv[])
//{
//	//��ʼ�����绷��
//	WSADATA wsa;
//	if (WSAStartup(MAKEWORD(2, 2), &wsa) != 0)
//	{
//		printf("WSAStartup failed\n");
//		return -1;
//	}
//	//����һ��UDP��socket
//	SOCKET sockClient = socket(AF_INET, SOCK_DGRAM, IPPROTO_UDP);
//	if (sockClient == INVALID_SOCKET)
//	{
//		printf("create socket failed\n");
//		return -1;
//	}
//	// ����һ�������ַ��Ϣ�Ľṹ�壬����������ĵ�ַ��Ϣ
//	sockaddr_in addr = { 0 };
//	addr.sin_family = AF_INET;
//	addr.sin_port = htons(8080);
//	addr.sin_addr.S_un.S_addr = inet_addr("8.222.135.223");
//
//	while (true)
//	{
//		string msg;
//		getline(cin, msg);
//		//��������
//		int dwSent = sendto(sockClient, msg.c_str(), msg.size(), 0, (SOCKADDR*)&addr, sizeof(SOCKADDR));
//		if (dwSent == 0)
//		{
//			printf("send  failed");
//			return -1;
//		}
//
//		char recvBuf[512];
//		memset(recvBuf, 0, 512);
//
//		sockaddr_in addrSever = { 0 };
//		int nServerAddrLen = sizeof(sockaddr_in);
//		// ��������
//		int dwRecv = recvfrom(sockClient, recvBuf, 512, 0, (SOCKADDR*)&addrSever, &nServerAddrLen);
//		printf("Recv msg from server : %s\n", recvBuf);
//	}
//	
//	//�ر�SOCKET����
//	closesocket(sockClient);
//	//�������绷��
//	WSACleanup();
//	system("pause");
//	return 0;
//}
//
//
//class Solution {
//public:
//	int maxProfit(vector<int>& prices) {
//		int ret = 0;
//		int left = 0;
//		int right = 0;
//		while (left < prices.size())
//		{
//			right = left + 1;
//			while (right < prices.size() && prices[right] > prices[right - 1])
//			{
//				right++;
//			}
//			ret += prices[right - 1] - prices[left];
//			left = right;
//		}
//		return ret;
//	}
//};