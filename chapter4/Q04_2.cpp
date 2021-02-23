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

};