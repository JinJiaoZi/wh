#include<stdio.h>
#include<windows.h>
#include<wininet.h>//DeleteUrlCacheEntry
#pragma comment(lib, "wininet.lib")//DeleteUrlCacheEntry
//#include "stdafx.h"//URLDownloadToFile
#include <iostream>//URLDownloadToFile
#include <UrlMon.h>//URLDownloadToFile
#pragma comment(lib, "urlmon.lib")//URLDownloadToFile
//1:����
//-1:�������
//-2:��ȡ�ļ�����
//-3:���³���
//-4:�û��������
using namespace std;//URLDownloadToFile

//��ʼ��
int initialization() {
	system("ipconfig /flushdns");
	system("rd /s /q \"%temp%\\Warm Home\"");
	system("md \"%temp%\\Warm Home\"");
	DeleteUrlCacheEntry("http://mcjiaozi.icu:26029/update/wh/update.txt");
	DeleteUrlCacheEntry("http://mcjiaozi.icu:26029/update/wh/onlineupdate.exe");
	DeleteUrlCacheEntry("https://www.mcjiaozi.icu/update/wh/update.txt");
	DeleteUrlCacheEntry("https://www.mcjiaozi.icu/update/wh/onlineupdate.exe");
	DeleteUrlCacheEntry("https://www.mcjiaozi.icu/update/wh/update.txt");
	DeleteUrlCacheEntry("https://www.mcjiaozi.icu/play/games.txt");
	DeleteUrlCacheEntry("http://www.mcjiaozi.icu/update/wh/update.txt");
	DeleteUrlCacheEntry("http://www.mcjiaozi.icu/update/wh/onlineupdate.exe");
	DeleteUrlCacheEntry("http://www.mcjiaozi.icu/update/wh/update.txt");
	DeleteUrlCacheEntry("http://www.mcjiaozi.icu/play/games.txt");
	DeleteUrlCacheEntry("https://github.com/JinJiaoZi/jinjiaozi.github.io/releases/download/Update/onlineupdate.exe");
	return 1;
}
//������
int update() {
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

//��ȡ��Ϸ��������Ϣ
int server() {
	if (S_OK != URLDownloadToFile(NULL, "https://www.mcjiaozi.icu/play/games.txt", "games.txt", 0, 0)) {
		printf("Error:-1:����ʧ�ܡ�");
		return -1;
	}
	system("cls");
	printf("Warm Home ������ - ��Ϸ��������Ϣ\n");
	system("type games.txt");
	printf("\n");
	system("pause");
	return 1;
}

int main() {
	system("title Warm Home ������");
	system("mode con: COLS=120 LINES=30");
	printf("Warm Home ������\n\n\n\n\n\n");
	printf("           _____      _____    _______       ___   ___      _        ________      ______   ___\n");
	printf("           | |\\ \\    / /| |   /  ____|       | |   | |     / \\      / ______ \\    |___  /   | |\n");
	printf("           | | \\ \\  / / | |  /  /            | |   | |    / _ \\    | |      | |      / /    | |\n");
	printf("           | |  \\ \\/ /  | | |  |       ___   | |   | |   / /_\\ \\   | |      | |     / /     | |\n");
	printf("           | |   \\__/   | |  \\  \\____  \\ \\___/ /   | |  |  ___  |  | |______| |    / /___   | |\n");
	printf("           |_|          |_|   \\______|  \\_____/    |_|  |_|   |_|   \\________/    /______|  |_|\n\n                                                                                                       �汾 V1.3");
	printf("\n======\n");
	printf("���ڳ�ʼ��. . . ");
	initialization();
	system("cls");
	printf("Warm Home ������\n\n\n");
	printf("           _____      _____    _______       ___   ___      _        ________      ______   ___\n");
	printf("           | |\\ \\    / /| |   /  ____|       | |   | |     / \\      / ______ \\    |___  /   | |\n");
	printf("           | | \\ \\  / / | |  /  /            | |   | |    / _ \\    | |      | |      / /    | |\n");
	printf("           | |  \\ \\/ /  | | |  |       ___   | |   | |   / /_\\ \\   | |      | |     / /     | |\n");
	printf("           | |   \\__/   | |  \\  \\____  \\ \\___/ /   | |  |  ___  |  | |______| |    / /___   | |\n");
	printf("           |_|          |_|   \\______|  \\_____/    |_|  |_|   |_|   \\________/    /______|  |_|\n\n                                                                                                       �汾 V1.3");
	printf("\n======\n");
	printf("\n���ڼ�����. . . ");
	system("cls");
	printf("Warm Home ������\n\n\n");
	printf("           _____      _____    _______       ___   ___      _        ________      ______   ___\n");
	printf("           | |\\ \\    / /| |   /  ____|       | |   | |     / \\      / ______ \\    |___  /   | |\n");
	printf("           | | \\ \\  / / | |  /  /            | |   | |    / _ \\    | |      | |      / /    | |\n");
	printf("           | |  \\ \\/ /  | | |  |       ___   | |   | |   / /_\\ \\   | |      | |     / /     | |\n");
	printf("           | |   \\__/   | |  \\  \\____  \\ \\___/ /   | |  |  ___  |  | |______| |    / /___   | |\n");
	printf("           |_|          |_|   \\______|  \\_____/    |_|  |_|   |_|   \\________/    /______|  |_|\n\n                                                                                                       �汾 V1.3");
	printf("\n======\n");
	if (update() == 1) {
		printf("�����³ɹ�����ǰ�ͻ���Ϊ���°汾��\n");
		system("ping localhost -n 3 > nul");
	}
	else if (update() == 2) {
		printf("�����³ɹ������°汾���ã�\n���������������°汾����ʹ�ã�\n");
		printf("Ҫ������[Y/N]\n>");
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
					return -1;
				}
			}
			system("copy onlineupdate.exe \"%temp%\\Warm Home\\onlineupdate.exe\"");
			system("del onlineupdate.exe");
			printf("\n���سɹ������Ժ�. . . ");
			system("ping localhost -n 3 > nul");
			printf("\n\n\n\n");
			system("start /d \"%temp%\\Warm Home\\\" onlineupdate.exe");
			return 1;
		}
		return 1;
	}
	else if (update() == -1) {
		printf("Error:-1\n�����³���\n��Զ�̷�������ȡ�汾�ļ�ʧ�ܡ�����ϵ�����ߡ�\n�Ƿ���ʹ�����[Y/N]\n>");
		char a = getchar();
		if (a == 'y' || a == 'Y') {
			system("start https://www.mcjiaozi.icu");
		}
		return -3;
	}
	else if (update() == -2) {
		printf("Error:-2\n�����³���\n�޷���ȡ�����ļ�������ϵ������\n�Ƿ���ʹ�����[Y/N]\n>");
		char a = getchar();
		if (a == 'y' || a == 'Y') {
			system("start https://www.mcjiaozi.icu");
		}
		return -3;
	}
	else if (update() == -3) {
		printf("Error:-3\n�����³���\n�ͻ��˰汾�Ų�Ӧ�������°汾�š�����ϵ������\n�Ƿ���ʹ�����[Y/N]\n>");
		char a = getchar();
		if (a == 'y' || a == 'Y') {
			system("start https://www.mcjiaozi.icu");
		}
		return -3;
	}
	while (1) {
		system("cls");
		printf("Warm Home ������\nMade by MCjiaozi\n");
		printf("��ӭʹ�� Warm Home ����\n��ǰ��¼�û���Ϊ��");
		system("echo %username%\n");
		printf("�������Ϊ��");
		system("echo %computername%\n");
		printf("�����˵�\n");
		printf("||1.���ʹ���\n");
		printf("||2.���ʿ����ߵ� GitHub\n");
		printf("||3.�鿴ϵͳ��Ϣ\n");
		printf("||4.�鿴������־\n");
		printf("||5.����\n");
		printf("||6.��ȡ��Ϸ��������Ϣ\n");
		printf("||0.�˳�����\n");
		printf("����һ������\n>");
		int v;
		scanf_s("%d", &v);
		switch (v) {
		case 1:
			system("explorer https://www.mcjiaozi.icu");
			printf("\n��ʱ��������Ӧ�Ѵ򿪲���ת���ٷ���վ�������δ��ת�����ֶ�����http://www.mcjiaozi.icu\n");
			system("pause");
			break;
		case 2:
			system("explorer https://github.com/JinJiaoZi");
			printf("\n��ʱ��������Ӧ�Ѵ򿪲���ת�� GitHub �������δ��ת�����ֶ�����https://github.com/JinJiaoZi\n");
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
			system("explorer https://www.mcjiaozi.icu/donate");
			printf("\n��ʱ��������Ӧ�Ѵ򿪲���ת��������վ�������δ��ת�����ֶ�����https://afdian.net/@warmhome\n");
			system("pause");
			break;
		case 6:
			if (server() == 1) {
				break;
			}
			else if (server() == -1) {
				printf("Error:-1:�������");
				system("pause");
			}
			break;
		case 0:
			return 1;
		default:
			printf("\n�������������ַ�\n����������\n");
			system("pause");
			return -4;
		}
	}
}