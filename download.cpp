#include<stdio.h>
#include<windows.h>
#include<wininet.h>//DeleteUrlCacheEntry
#pragma comment(lib, "wininet.lib")//DeleteUrlCacheEntry
//#include "stdafx.h"//URLDownloadToFile
#include <iostream>//URLDownloadToFile
#include <UrlMon.h>//URLDownloadToFile
#pragma comment(lib, "urlmon.lib")//URLDownloadToFile
using namespace std;//URLDownloadToFile
//��ʼ��
int initialization(int initializatio) {
	system("ipconfig /flushdns");
	system("rd /s /q \"%temp%\\Warm Home\"");
	system("md \"%temp%\\Warm Home\"");
	DeleteUrlCacheEntry("http://mcjiaozi.icu:26029/update/wh/update.txt");
	DeleteUrlCacheEntry("http://mcjiaozi.icu:26029/update/wh/onlineupdate.exe");
	DeleteUrlCacheEntry("http://www.mcjiaozi.icu/update/wh/update.txt");
	DeleteUrlCacheEntry("http://www.mcjiaozi.icu/update/wh/onlineupdate.exe");
	return 1;
}
int main() {
	system("mode con: COLS=120 LINES=30");
	printf("Warm Home ���߸��³���\n\n\n\n\n\n\n\n\n\n");
	printf("           _____          _____    _______       ___   ___      _        ________      ______   ___\n");
	printf("           | |\\ \\        / /| |   /  ____|       | |   | |     / \\      / ______ \\    |___  /   | |\n");
	printf("           | | \\ \\      / / | |  /  /            | |   | |    / _ \\    | |      | |      / /    | |\n");
	printf("           | |  \\ \\    / /  | | |  |       ___   | |   | |   / /_\\ \\   | |      | |     / /     | |\n");
	printf("           | |   \\ \\  / /   | |  \\  \\____  \\ \\___/ /   | |  |  ___  |  | |______| |    / /___   | |\n");
	printf("           |_|    \\_\\/_/    |_|   \\______|  \\_____/    |_|  |_|   |_|   \\________/    /______|  |_|\n\n                                                                                                       ���߸��³���");
	printf("\n======\n");
	printf("���ڳ�ʼ��...");
	int initializatio = 0;
	if (initialization(initializatio) == 1) {
		system("cls");
		printf("Warm Home ���߸��³���\n\n\n\n\n\n\n\n\n\n");
		printf("           _____          _____    _______       ___   ___      _        ________      ______   ___\n");
		printf("           | |\\ \\        / /| |   /  ____|       | |   | |     / \\      / ______ \\    |___  /   | |\n");
		printf("           | | \\ \\      / / | |  /  /            | |   | |    / _ \\    | |      | |      / /    | |\n");
		printf("           | |  \\ \\    / /  | | |  |       ___   | |   | |   / /_\\ \\   | |      | |     / /     | |\n");
		printf("           | |   \\ \\  / /   | |  \\  \\____  \\ \\___/ /   | |  |  ___  |  | |______| |    / /___   | |\n");
		printf("           |_|    \\_\\/_/    |_|   \\______|  \\_____/    |_|  |_|   |_|   \\________/    /______|  |_|\n\n                                                                                                       ���߸��³���");
		printf("\n======\n");
		printf("��ʼ���ɹ���\n\n");
		system("ping localhost -n 2 > nul");
	}
	system("cls");
	printf("Warm Home ���߸��³���\n\n\n");
	printf("           _____          _____    _______       ___   ___      _        ________      ______   ___\n");
	printf("           | |\\ \\        / /| |   /  ____|       | |   | |     / \\      / ______ \\    |___  /   | |\n");
	printf("           | | \\ \\      / / | |  /  /            | |   | |    / _ \\    | |      | |      / /    | |\n");
	printf("           | |  \\ \\    / /  | | |  |       ___   | |   | |   / /_\\ \\   | |      | |     / /     | |\n");
	printf("           | |   \\ \\  / /   | |  \\  \\____  \\ \\___/ /   | |  |  ___  |  | |______| |    / /___   | |\n");
	printf("           |_|    \\_\\/_/    |_|   \\______|  \\_____/    |_|  |_|   |_|   \\________/    /______|  |_|\n\n                                                                                                       ���߸��³���");
	printf("\n======\n");
	printf("������ʼ����...");
	system("ping localhost -n 3 > nul");
	system("cls");
	printf("Warm Home ���߸��³���\n");
	printf("��������...");
	if (S_OK != URLDownloadToFile(NULL, "http://mcjiaozi.icu:26029/update/wh/wh_install.exe", "wh_install.exe", 0, 0)) {
		printf("\n����ʧ�ܣ����������Ժ����ԣ���������Ȼ�޷����������ʹ���http://www.mcjiaozi.icu\n");
		system("pause");
		return -1;
	}
	printf("\n���سɹ���������ʼ��װ...");
	system("ping localhost -n 3 > nul");
	printf("\n\n\n\n");
	system("start wh_install.exe");
	return 1;
}