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
	DeleteUrlCacheEntry("https://www.mcjiaozi.icu/update/wh/update.txt");
	DeleteUrlCacheEntry("https://github.com/JinJiaoZi/jinjiaozi.github.io/releases/download/Update/onlineupdate.exe");
	return 1;
}
//������
int update(int updat) {
	if (S_OK != URLDownloadToFile(NULL, "http://mcjiaozi.icu:26029/update/wh/update.txt", "temp.dat", 0, 0)) {
		if (S_OK != URLDownloadToFile(NULL, "https://www.mcjiaozi.icu/update/wh/update.txt", "temp.dat", 0, 0)) {
			return -1;//��ȡ�������汾�ļ���д�뵽���棬�����򷵻�-1
		}
	}
	FILE* fp = fopen("temp.dat", "r");//�ӻ����ȡ�汾��
	if (fp == NULL)return -2;//�����ȡ�İ汾��ΪNULL���򷵻�-2
	char ch;
	ch = getc(fp);
	int newestversion = ch;
	FILE* fo = fopen("version.txt", "r");
	char cn;
	cn = getc(fo);
	int localversion = cn;
	if (localversion == newestversion)return 1;//���ذ汾�����°汾��ͬ������1
	else if (localversion > newestversion)return -3;//���ذ汾�������°汾������-3
	else if (localversion < newestversion)return 2;//���ذ汾С�����°汾������2
}
int main() {
	system("mode con: COLS=120 LINES=30");
	printf("Warm Home ������\n\n\n\n\n\n\n\n\n\n");
	printf("           _____          _____    _______       ___   ___      _        ________      ______   ___\n");
	printf("           | |\\ \\        / /| |   /  ____|       | |   | |     / \\      / ______ \\    |___  /   | |\n");
	printf("           | | \\ \\      / / | |  /  /            | |   | |    / _ \\    | |      | |      / /    | |\n");
	printf("           | |  \\ \\    / /  | | |  |       ___   | |   | |   / /_\\ \\   | |      | |     / /     | |\n");
	printf("           | |   \\ \\  / /   | |  \\  \\____  \\ \\___/ /   | |  |  ___  |  | |______| |    / /___   | |\n");
	printf("           |_|    \\_\\/_/    |_|   \\______|  \\_____/    |_|  |_|   |_|   \\________/    /______|  |_|\n\n                                                                                                       �汾 V1.2");
	printf("\n======\n");
	printf("���ڳ�ʼ��...");
	int initializatio = 0;
	if (initialization(initializatio) == 1) {
		system("cls");
		printf("Warm Home ������\n\n\n\n\n\n\n\n\n\n");
		printf("           _____          _____    _______       ___   ___      _        ________      ______   ___\n");
		printf("           | |\\ \\        / /| |   /  ____|       | |   | |     / \\      / ______ \\    |___  /   | |\n");
		printf("           | | \\ \\      / / | |  /  /            | |   | |    / _ \\    | |      | |      / /    | |\n");
		printf("           | |  \\ \\    / /  | | |  |       ___   | |   | |   / /_\\ \\   | |      | |     / /     | |\n");
		printf("           | |   \\ \\  / /   | |  \\  \\____  \\ \\___/ /   | |  |  ___  |  | |______| |    / /___   | |\n");
		printf("           |_|    \\_\\/_/    |_|   \\______|  \\_____/    |_|  |_|   |_|   \\________/    /______|  |_|\n\n                                                                                                       �汾 V1.2");
		printf("\n======\n");
		printf("��ʼ���ɹ���\n\n");
		system("ping localhost -n 2 > nul");
	}
	int updat = 0;
	system("cls");
	printf("Warm Home ������\n\n\n");
	printf("           _____          _____    _______       ___   ___      _        ________      ______   ___\n");
	printf("           | |\\ \\        / /| |   /  ____|       | |   | |     / \\      / ______ \\    |___  /   | |\n");
	printf("           | | \\ \\      / / | |  /  /            | |   | |    / _ \\    | |      | |      / /    | |\n");
	printf("           | |  \\ \\    / /  | | |  |       ___   | |   | |   / /_\\ \\   | |      | |     / /     | |\n");
	printf("           | |   \\ \\  / /   | |  \\  \\____  \\ \\___/ /   | |  |  ___  |  | |______| |    / /___   | |\n");
	printf("           |_|    \\_\\/_/    |_|   \\______|  \\_____/    |_|  |_|   |_|   \\________/    /______|  |_|\n\n                                                                                                       �汾 V1.2");
	printf("\n======\n");
	printf("\n���ڼ�����...");
	system("cls");
	printf("Warm Home ������\n\n\n");
	printf("           _____          _____    _______       ___   ___      _        ________      ______   ___\n");
	printf("           | |\\ \\        / /| |   /  ____|       | |   | |     / \\      / ______ \\    |___  /   | |\n");
	printf("           | | \\ \\      / / | |  /  /            | |   | |    / _ \\    | |      | |      / /    | |\n");
	printf("           | |  \\ \\    / /  | | |  |       ___   | |   | |   / /_\\ \\   | |      | |     / /     | |\n");
	printf("           | |   \\ \\  / /   | |  \\  \\____  \\ \\___/ /   | |  |  ___  |  | |______| |    / /___   | |\n");
	printf("           |_|    \\_\\/_/    |_|   \\______|  \\_____/    |_|  |_|   |_|   \\________/    /______|  |_|\n\n                                                                                                       �汾 v1.2");
	printf("\n======\n");
	if (update(updat) == -1) {
		printf("�����³���\n��Զ�̷�������ȡ�汾�ļ�ʧ�ܡ�����ϵ�����ߡ�\n�Ƿ���ʹ�����[Y/N]\n");
		char a = getchar();
		if (a == 'y' || a == 'Y') {
			system("start https://www.mcjiaozi.icu");
		}
		return -1;
	}
	else if (update(updat) == -2) {
		printf("�����³���\n�޷���ȡ�����ļ�������ϵ������\n�Ƿ���ʹ�����[Y/N]\n");
		char a = getchar();
		if (a == 'y' || a == 'Y') {
			system("start https://www.mcjiaozi.icu");
		}
		return -2;
	}
	else if (update(updat) == -3) {
		printf("�����³���\n�ͻ��˰汾�Ų�Ӧ�������°汾�š�����ϵ������\n�Ƿ���ʹ�����[Y/N]\n");
		char a = getchar();
		if (a == 'y' || a == 'Y') {
			system("start https://www.mcjiaozi.icu");
		}
		return -3;
	}
	else if (update(updat) == 1) {
		printf("�����³ɹ�����ǰ�ͻ���Ϊ���°汾��\n");
		system("ping localhost -n 3 > nul");
	}
	else if (update(updat) == 2) {
		printf("�����³ɹ������°汾���ã�\n");
		printf("Ҫ������[Y/N]>");
		char a = getchar();
		if (a == 'y' || a == 'Y') {
			system("cls");
			printf("Warm Home ������\n");
			printf("������ʼ����...");
			system("ping localhost -n 3 > nul");
			printf("\n�����������߸��³���...");
			if (S_OK != URLDownloadToFile(NULL, "http://mcjiaozi.icu:26029/update/wh/onlineupdate.exe", "onlineupdate.exe", 0, 0)) {
				printf("\n����ʧ�ܣ�\n���ڳ��Ա�����·����...");
				if (S_OK != URLDownloadToFile(NULL, "https://github.com/JinJiaoZi/jinjiaozi.github.io/releases/download/Update/onlineupdate.exe", "onlineupdate.exe", 0, 0)) {
					printf("\n����ʧ�ܣ����������Ժ����ԣ���������Ȼ�޷����������ʹ���http://www.mcjiaozi.icu\n");
					system("pause");
					return -4;
				}
			}
			system("copy onlineupdate.exe \"%temp%\\Warm Home\\onlineupdate.exe\"");
			system("del onlineupdate.exe");
			printf("\n���سɹ������Ժ�...");
			system("ping localhost -n 3 > nul");
			printf("\n\n\n\n");
			system("start /d \"%temp%\\Warm Home\\\" onlineupdate.exe");
			return 2;
		}
		return -5;
	}
	while (1) {
		system("cls");
		printf("Warm Home ������\nMade by MCjiaozi\n");
		printf("��ӭʹ�� Warm Home ����\n��ǰ��¼�û���Ϊ��");
		system("echo %username%\n");
		printf("�������Ϊ��");
		system("echo %computername%\n");
		printf("������ʲô��\n");
		printf("||1.���ʹ���\n");
		printf("||2.���� GitHub ��Ŀ�ֿ�\n");
		printf("||3.�鿴ϵͳ��Ϣ\n");
		printf("||4.�鿴������־\n");
		printf("||5.����\n");
		printf("||6.�˳�����\n");
		printf(">");
		int v;
		scanf_s("%d", &v);
		switch (v) {
		case 1:
			system("explorer https://www.mcjiaozi.icu");
			printf("\n��ʱ��������Ӧ�Ѵ򿪲���ת���ٷ���վ�������δ��ת�����ֶ�����http://www.mcjiaozi.icu\n");
			system("pause");
			break;
		case 2:
			system("explorer https://github.com/JinJiaoZi/wh");
			printf("\n��ʱ��������Ӧ�Ѵ򿪲���ת�� GitHub �������δ��ת�����ֶ�����https://github.com/JinJiaoZi/wh\n");
			system("pause");
			break;
		case 3:
			system("start info.exe");
			break;
		case 4:
			system("cls");
			printf("Warm Home ������ - ������־\n");
			system("type changelog.txt");
			printf("\n");
			system("pause");
			break;
		case 5:
			system("explorer https://afdian.net/@warmhome");
			printf("\n��ʱ��������Ӧ�Ѵ򿪲���ת�������硣�����δ��ת�����ֶ�����https://afdian.net/@warmhome\n");
			system("pause");
			break;
		case 6:
			return 1;
		default:
			printf("\n�������������ַ�\n����������\n");
			system("pause");
			return -6;
		}
	}
}