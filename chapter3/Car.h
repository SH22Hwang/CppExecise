#ifndef __CAR_H__
#define __CAR_H__

namespace CAR_CONST {
	enum {
		ID_LEN = 20, MAX_SPD = 200,
		FUEL_STEP = 2, ACC_STEP = 10, BRK_STEP = 10
	};
}

class Car
{
private:
	char gamerID[CAR_CONST::ID_LEN];
	int fuelGauge;
	int curSpeed; // 멤버 변수
public:
	void InitMembers(const char* ID, int fuel); // 책과 다르게 const char*를 사용함.
	void ShowCarState();
	void Accel();
	void Break(); // 멤버 함수
};

#endif // 헤더 파일의 중복포함 문제 해결