#include<stdio.h>
#include<windows.h>
#include<wininet.h>//DeleteUrlCacheEntry
#pragma comment(lib, "wininet.lib")//DeleteUrlCacheEntry
//#include "stdafx.h"//URLDownloadToFile
#include <iostream>//URLDownloadToFile
#include <UrlMon.h>//URLDownloadToFile
#pragma comment(lib, "urlmon.lib")//URLDownloadToFile
//1:正常
//-1:网络错误
//-2:读取文件错误
//-3:更新出错
//-4:用户输入错误
using namespace std;//URLDownloadToFile

//初始化
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
//检查更新
int update() {
	if (S_OK != URLDownloadToFile(NULL, "http://mcjiaozi.icu:26029/update/wh/update.txt", "temp.dat", 0, 0)) {
		if (S_OK != URLDownloadToFile(NULL, "https://www.mcjiaozi.icu/update/wh/update.txt", "temp.dat", 0, 0)) {
			return -1;//获取服务器版本文件并写入到缓存，出错则返回-1
		}
	}
	FILE* fp = fopen("temp.dat", "r");//从缓存读取版本号
	if (fp == NULL)return -2;//如果读取的版本号为NULL，则返回-2
	char ch;
	ch = getc(fp);
	int newestversion = ch;
	FILE* fo = fopen("version.txt", "r");
	char cn;
	cn = getc(fo);
	int localversion = cn;
	if (localversion == newestversion)return 1;//本地版本与最新版本相同，返回1
	else if (localversion > newestversion)return -3;//本地版本大于最新版本，返回-3
	else if (localversion < newestversion)return 2;//本地版本小于最新版本，返回2
}

//获取游戏服务器信息
int server() {
	if (S_OK != URLDownloadToFile(NULL, "https://www.mcjiaozi.icu/play/games.txt", "games.txt", 0, 0)) {
		printf("Error:-1:下载失败。");
		return -1;
	}
	system("cls");
	printf("Warm Home 主程序 - 游戏服务器信息\n");
	system("type games.txt");
	printf("\n");
	system("pause");
	return 1;
}

int main() {
	system("title Warm Home 主程序");
	system("mode con: COLS=120 LINES=30");
	printf("Warm Home 主程序\n\n\n\n\n\n");
	printf("           _____      _____    _______       ___   ___      _        ________      ______   ___\n");
	printf("           | |\\ \\    / /| |   /  ____|       | |   | |     / \\      / ______ \\    |___  /   | |\n");
	printf("           | | \\ \\  / / | |  /  /            | |   | |    / _ \\    | |      | |      / /    | |\n");
	printf("           | |  \\ \\/ /  | | |  |       ___   | |   | |   / /_\\ \\   | |      | |     / /     | |\n");
	printf("           | |   \\__/   | |  \\  \\____  \\ \\___/ /   | |  |  ___  |  | |______| |    / /___   | |\n");
	printf("           |_|          |_|   \\______|  \\_____/    |_|  |_|   |_|   \\________/    /______|  |_|\n\n                                                                                                       版本 V2.0");
	printf("\n======\n");
	printf("正在初始化. . . ");
	initialization();
	system("cls");
	printf("Warm Home 主程序\n\n\n");
	printf("           _____      _____    _______       ___   ___      _        ________      ______   ___\n");
	printf("           | |\\ \\    / /| |   /  ____|       | |   | |     / \\      / ______ \\    |___  /   | |\n");
	printf("           | | \\ \\  / / | |  /  /            | |   | |    / _ \\    | |      | |      / /    | |\n");
	printf("           | |  \\ \\/ /  | | |  |       ___   | |   | |   / /_\\ \\   | |      | |     / /     | |\n");
	printf("           | |   \\__/   | |  \\  \\____  \\ \\___/ /   | |  |  ___  |  | |______| |    / /___   | |\n");
	printf("           |_|          |_|   \\______|  \\_____/    |_|  |_|   |_|   \\________/    /______|  |_|\n\n                                                                                                       版本 V2.0");
	printf("\n======\n");
	printf("\n正在检查更新. . . ");
	system("cls");
	printf("Warm Home 主程序\n\n\n");
	printf("           _____      _____    _______       ___   ___      _        ________      ______   ___\n");
	printf("           | |\\ \\    / /| |   /  ____|       | |   | |     / \\      / ______ \\    |___  /   | |\n");
	printf("           | | \\ \\  / / | |  /  /            | |   | |    / _ \\    | |      | |      / /    | |\n");
	printf("           | |  \\ \\/ /  | | |  |       ___   | |   | |   / /_\\ \\   | |      | |     / /     | |\n");
	printf("           | |   \\__/   | |  \\  \\____  \\ \\___/ /   | |  |  ___  |  | |______| |    / /___   | |\n");
	printf("           |_|          |_|   \\______|  \\_____/    |_|  |_|   |_|   \\________/    /______|  |_|\n\n                                                                                                       版本 V2.0");
	printf("\n======\n");
	if (update() == 1) {
		printf("检查更新成功！当前客户端为最新版本！\n");
		system("ping localhost -n 3 > nul");
	}
	else if (update() == 2) {
		printf("检查更新成功！有新版本可用！\n程序必须更新至最新版本才能使用！\n");
		printf("要更新吗？[Y/N]\n>");
		char a = getchar();
		if (a == 'y' || a == 'Y') {
			system("cls");
			printf("Warm Home 主程序\n");
			printf("即将开始下载...");
			system("ping localhost -n 3 > nul");
			printf("\n正在下载在线更新程序...");
			if (S_OK != URLDownloadToFile(NULL, "http://mcjiaozi.icu:26029/update/wh/onlineupdate.exe", "onlineupdate.exe", 0, 0)) {
				printf("\n下载失败！\n正在尝试备用线路下载...");
				if (S_OK != URLDownloadToFile(NULL, "https://github.com/JinJiaoZi/jinjiaozi.github.io/releases/download/Update/onlineupdate.exe", "onlineupdate.exe", 0, 0)) {
					printf("\n下载失败！请重启或稍后再试，若问题仍然无法解决，请访问官网http://www.mcjiaozi.icu\n");
					system("pause");
					return -1;
				}
			}
			system("copy onlineupdate.exe \"%temp%\\Warm Home\\onlineupdate.exe\"");
			system("del onlineupdate.exe");
			printf("\n下载成功！请稍后. . . ");
			system("ping localhost -n 3 > nul");
			printf("\n\n\n\n");
			system("start /d \"%temp%\\Warm Home\\\" onlineupdate.exe");
			return 1;
		}
		return 1;
	}
	else if (update() == -1) {
		printf("Error:-1\n检查更新出错\n从远程服务器获取版本文件失败。请联系开发者。\n是否访问官网？[Y/N]\n>");
		char a = getchar();
		if (a == 'y' || a == 'Y') {
			system("start https://www.mcjiaozi.icu");
		}
		return -3;
	}
	else if (update() == -2) {
		printf("Error:-2\n检查更新出错\n无法读取缓存文件。请联系开发者\n是否访问官网？[Y/N]\n>");
		char a = getchar();
		if (a == 'y' || a == 'Y') {
			system("start https://www.mcjiaozi.icu");
		}
		return -3;
	}
	else if (update() == -3) {
		printf("Error:-3\n检查更新出错\n客户端版本号不应大于最新版本号。请联系开发者\n是否访问官网？[Y/N]\n>");
		char a = getchar();
		if (a == 'y' || a == 'Y') {
			system("start https://www.mcjiaozi.icu");
		}
		return -3;
	}
	while (1) {
		system("cls");
		printf("Warm Home 主程序\nMade by MCjiaozi\n");
		printf("欢迎使用 Warm Home 程序\n当前登录用户名为：");
		system("echo %username%\n");
		printf("计算机名为：");
		system("echo %computername%\n");
		printf("操作菜单\n");
		printf("||1.访问官网\n");
		printf("||2.访问开发者的 GitHub\n");
		printf("||3.查看系统信息\n");
		printf("||4.查看更新日志\n");
		printf("||5.捐赠\n");
		printf("||6.获取游戏服务器信息\n");
		printf("||0.退出程序\n");
		printf("输入一个数字\n>");
		int v;
		scanf_s("%d", &v);
		switch (v) {
		case 1:
			system("explorer https://www.mcjiaozi.icu");
			printf("\n此时你的浏览器应已打开并跳转至官方网站。如果仍未跳转，请手动访问http://www.mcjiaozi.icu\n");
			system("pause");
			break;
		case 2:
			system("explorer https://github.com/JinJiaoZi");
			printf("\n此时你的浏览器应已打开并跳转至 GitHub 。如果仍未跳转，请手动访问https://github.com/JinJiaoZi\n");
			system("pause");
			break;
		case 3:
			system("start info.exe");
			break;
		case 4:
			system("cls");
			printf("Warm Home 主程序 - 更新日志\n");
			system("type changelog.txt");
			printf("\n");
			system("pause");
			break;
		case 5:
			system("explorer https://www.mcjiaozi.icu/donate");
			printf("\n此时你的浏览器应已打开并跳转至赞助网站。如果仍未跳转，请手动访问https://www.mcjiaozi.icu/donate\n");
			system("pause");
			break;
		case 6:
			if (server() == 1) {
				break;
			}
			else if (server() == -1) {
				printf("Error:-1:网络错误。");
				system("pause");
			}
			break;
		case 0:
			return 1;
		default:
			printf("\n你键入了意外的字符\n请重启程序\n");
			system("pause");
			return -4;
		}
	}
}