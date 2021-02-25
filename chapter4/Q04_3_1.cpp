//#include <iostream>
//using namespace std;
//
//class Point {
//private:
//	int xpos, ypos;
//
//public:
//	Point(int x, int y)
//		: xpos(x), ypos(y) {}
//
//	//void Init(int x, int y) {
//	//	xpos = x;
//	//	ypos = y;
//	//}
//
//	void ShowPointInfo() const {
//		cout << "[" << xpos << "," << ypos << "]" << endl;
//	}
//};
//
//class Circle {
//private:
//	Point center;
//	double radius;
//
//public:
//	Circle(int x, int y, double num)
//		:center(x, y), radius(num) {}
//
//	//void Init(int x, int y, double num) {
//	//	center.Init(x, y);
//	//	radius = num;
//	//}
//
//	void ShowCircleInfo() const {
//		cout << "radius: " << radius << endl;
//		center.ShowPointInfo();
//	}
//};
//
//class Ring {
//private:
//	Circle inner, outer;
//public:
//	Ring(int xIn, int yIn, double radiusIn, int xOut, int yOut, double radiusOut) 
//		:inner(xIn, yIn, radiusIn), outer(xOut, yOut, radiusOut) {}
//
//	//void Init(int xIn, int yIn, double radiusIn, int xOut, int yOut, double radiusOut) {
//	//	inner.Init(xIn, yIn, radiusIn);
//	//	outer.Init(xOut, yOut, radiusOut);
//	//}
//
//	void ShowRingInfo() const {
//		cout << "Inner Circle Info..." << endl;
//		inner.ShowCircleInfo();
//		cout << "Outer Circle Info..." << endl;
//		outer.ShowCircleInfo();
//	}
//};
//
//int main(void) {
//	Ring ring(1, 1, 4, 2, 2, 9);
//	ring.ShowRingInfo();
//	return 0;
//}