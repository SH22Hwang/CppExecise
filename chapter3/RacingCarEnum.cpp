#include <iostream>
using namespace std;

//#define ID_LEN 20
//#define MAX_SPD 200
//#define FUEL_STEP 2
//#define ACC_STEP 10
//#define BRK_STEP 10

namespace CAR_CONST {
	enum {
		ID_LEN = 20,
		MAX_SPD = 200,
		FUEL_STEP  = 2,
		ACC_STEP = 10,
		BRK_STEP = 10
	};
}

struct Car
{
0	char gamerID[CAR_CONST::ID_LEN];
	int fuelGauge;
	int curSpeed;

	void ShowCarState() {
		cout << "소유자 ID: " << gamerID << endl;
		cout << "연료량: " << fuelGauge << "%" << endl;
		cout << "현재 속도: " << curSpeed << "km/s" << endl << endl;
	}

	void Accel() {
		if (fuelGauge <= 0)
			return;
		else
			fuelGauge -= CAR_CONST::FUEL_STEP;

		if (curSpeed + CAR_CONST::ACC_STEP >= CAR_CONST::MAX_SPD) {
			curSpeed = CAR_CONST::MAX_SPD;
			return;
		}

		curSpeed += CAR_CONST::ACC_STEP;
	}

	void Break() {
		if (curSpeed < CAR_CONST::BRK_STEP) {
			curSpeed = 0;
			return;
		}

		curSpeed -= CAR_CONST::BRK_STEP;
	}
};

int main(void) {
	Car run99 = { "run99", 100, 0 };
	run99.Accel();
	run99.Accel();
	run99.ShowCarState();
	run99.Break();
	run99.ShowCarState();

	Car sped77 = { "sped77", 100, 0 };
	sped77.Accel();
	sped77.Accel();
	sped77.ShowCarState();
	sped77.Break();
	sped77.ShowCarState();
	return 0;
}

// CAR_CONST:: 가 붙어 어느 곳에서 쓰이는 상수인지 확실해져, 가독성이 좋아졌다. 