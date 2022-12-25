#pragma once
#include <iostream>
using namespace std;
class Rectangle {
private:
	double _width;
	double _height;
public:
	void SetWidth(double width);
	void SetHeight(double height);
	double GetWidth();
	double GetHeight();
	Rectangle(double width, double height);
};
void Rectangle::SetWidth(double width) {
	_width = width;
}
void Rectangle::SetHeight(double height) {
	_height = height;
}
double Rectangle::GetWidth() {
	return _width;
}
double Rectangle::GetHeight() {
	return _height;
}
Rectangle::Rectangle(double width, double height) {
	SetWidth(width);
	SetHeight(height);
}
static class AreaCompactor {
public:
	static bool IsBigger(Rectangle& rectangle1, Rectangle& rectangle2) {
		double S1 = rectangle1.GetWidth() * rectangle1.GetHeight();
		double S2 = rectangle2.GetWidth() * rectangle2.GetHeight();
		if (S1 > S2) {
			return true;
		}
		else {
			return false;
		}
	}
};