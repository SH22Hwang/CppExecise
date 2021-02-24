#include <iostream>
using namespace std;

class Point {
private:
	int xpos, ypos;

public:
	void Init(int x, int y) {
		xpos = x;
		ypos = y;
	}

	void ShowPointInfo() const {
		cout << "[" << xpos << "," << ypos << "]" << endl;
	}
};

class Circle {
private:
	Point center;
	double radius;

public:
	void Init(int x, int y, double num) {
		center.Init(x, y);
		radius = num;
	}

	void ShowCircleInfo() const {
		cout << "radius: " << radius << endl;
		center.ShowPointInfo();
	}
};

class Ring {
private:
	Circle inner, outer;
public:
	void Init(int xIn, int yIn, double radiusIn, int xOut, int yOut, double radiusOut) {
		inner.Init(xIn, yIn, radiusIn);
		outer.Init(xOut, yOut, radiusOut);
	}

	void ShowRingInfo() const {
		cout << "Inner Circle Info..." << endl;
		inner.ShowCircleInfo();
		cout << "Outer Circle Info..." << endl;
		outer.ShowCircleInfo();
	}
};

//int main(void) {
//	Ring ring;
//	ring.Init(1, 1, 4, 2, 2, 9);
//	ring.ShowRingInfo();
//	return 0;
//}