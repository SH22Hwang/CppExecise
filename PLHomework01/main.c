//#include "stdio.h"
//#include "stdlib.h"
//#include "string.h"
//#define _CRT_SECURE_NO_WARNINGS
//#pragma warning(disable:4996)
//
//#define ACCOUNT_LENTH 999
//
//typedef struct Account {
//	int accId;
//	char cusName[20];
//	int balance;
//} Account;
//
//Account accArr[ACCOUNT_LENTH];
//int accNum = 0; // ��� ������ ��
//
//void ShowMenu() {
//	printf("-----Menu-----\n1. ���°���\n2. �Ա�\n3. ���\n4. ��ü �� ��ȸ\n\n");
//}
//
//void OpenAccount() {
//	int id = 0;
//	char name[20];
//	int balance;
//
//	printf("[���� ����]\n");
//	printf("id: ");
//	scanf(" %d", &id);
//
//	printf("�̸�: ");
//	scanf(" %s", name);
//
//	printf("�Աݾ�: ");
//	scanf(" %d", &balance);
//
//	accArr[accNum].accId = id;
//	strcpy(accArr[accNum].cusName, name);
//	accArr[accNum++].balance = balance;
//}
//
//void Deposit() {
//	int id, money;
//
//	printf("[�Ա�]\n");
//	printf("id: ");
//	scanf("%d", &id);
//	printf("�Ա��� �ݾ�: ");
//	scanf("%d", &money);
//
//	for (int i = 0; i < accNum; i++) {
//		if (accArr[i].accId == id) {
//			accArr[i].balance += money;
//			printf("�Ա� �Ϸ�\n");
//			return;
//		}
//	}
//	printf("���� ID");
//}
//
//void Withdrawal() {
//	int id, money;
//	printf("[���]\n");
//	printf("id: ");
//	scanf("%d", &id);
//	printf("����� �ݾ�: ");
//	scanf("%d", &money);
//
//	for (int i = 0; i < accNum; i++) {
//		if (accArr[i].accId == id) {
//			accArr[i].balance -= money;
//			printf("��� �Ϸ�\n");
//			return;
//		}
//	}
//	printf("���� ID");
//}
//
//void ShowAllAcc() {
//	printf("[��ü �� ��ȸ]\n");
//	for (int i = 0; i < accNum; i++) {
//		printf("����� id: %d", accArr[i].accId);
//		printf("\n����� �̸�: %s", accArr[i].cusName);
//		printf("\n�ܾ�: %d", accArr[i].balance);
//		printf("\n\n");
//	}
//}
//
//int main(void) {
//	int choice;
//
//	while (1) {
//		ShowMenu();
//		printf("�޴��� �����ϼ���: ");
//		scanf(" %d", &choice);
//
//		switch (choice)
//		{
//		case 1:
//			OpenAccount();
//			break;
//		case 2:
//			Deposit();
//			break;
//		case 3:
//			Withdrawal();
//			break;
//		case 4:
//			ShowAllAcc();
//			break;
//		default:
//			return 0;
//		}
//	}
//}
