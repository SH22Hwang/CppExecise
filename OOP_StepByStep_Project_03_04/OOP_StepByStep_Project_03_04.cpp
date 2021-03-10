/**
* Banking System ver. 0.4
* 작성자: 황승현
* 참고자료: 윤성우의 열혈 C++
*/

#include "Banking.h"

int main()
{
	int choice;

	while(true) {

		ShowMenu();

		cout << "선택: ";
		cin >> choice;

		switch (choice)
		{
		case 1:
			OpenAccount();
			break;
		case 2:
			Deposit();
			break;
		case 3:
			Withdrawal();
			break;
		case 4:
			ShowAllAcc();
			break;
		default:
			return 0;
		}
	}
}