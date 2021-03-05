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
//int accNum = 0; // 모든 계좌의 수
//
//void ShowMenu() {
//	printf("-----Menu-----\n1. 계좌개설\n2. 입금\n3. 출금\n4. 전체 고객 조회\n\n");
//}
//
//void OpenAccount() {
//	int id = 0;
//	char name[20];
//	int balance;
//
//	printf("[계좌 개설]\n");
//	printf("id: ");
//	scanf(" %d", &id);
//
//	printf("이름: ");
//	scanf(" %s", name);
//
//	printf("입금액: ");
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
//	printf("[입금]\n");
//	printf("id: ");
//	scanf("%d", &id);
//	printf("입금할 금액: ");
//	scanf("%d", &money);
//
//	for (int i = 0; i < accNum; i++) {
//		if (accArr[i].accId == id) {
//			accArr[i].balance += money;
//			printf("입금 완료\n");
//			return;
//		}
//	}
//	printf("없는 ID");
//}
//
//void Withdrawal() {
//	int id, money;
//	printf("[출금]\n");
//	printf("id: ");
//	scanf("%d", &id);
//	printf("출금할 금액: ");
//	scanf("%d", &money);
//
//	for (int i = 0; i < accNum; i++) {
//		if (accArr[i].accId == id) {
//			accArr[i].balance -= money;
//			printf("출금 완료\n");
//			return;
//		}
//	}
//	printf("없는 ID");
//}
//
//void ShowAllAcc() {
//	printf("[전체 고객 조회]\n");
//	for (int i = 0; i < accNum; i++) {
//		printf("사용자 id: %d", accArr[i].accId);
//		printf("\n사용자 이름: %s", accArr[i].cusName);
//		printf("\n잔액: %d", accArr[i].balance);
//		printf("\n\n");
//	}
//}
//
//int main(void) {
//	int choice;
//
//	while (1) {
//		ShowMenu();
//		printf("메뉴를 선택하세요: ");
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
