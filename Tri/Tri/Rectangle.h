#pragma once
#include <iostream>
#include <stdio.h>

using namespace std;

class Point
{
public:
	int getXcord() {
		return xCord;
	}
	int getYcord() {
		return yCord;
	}
	void SetXcord(int x) {
		if (!x)
		{
			throw exception("Negative or null X coord");
		}
		xCord = x;
	}
	void SetYcord(int y) {
		if (!y)
		{
			throw exception("Negative or null Y coord");
		}
		yCord = y;
	}
	Point(int x = 1, int y = 1) {
		SetXcord(x);
		SetYcord(y);
	};

private:
	int xCord;
	int yCord;
};

class Rectangle
{
public:
	void SetLength(int x) {
		if (!x)
		{
			throw exception("Negative or null Length");
		}
		length = x;
	}
	void SetWidth(int y) {
		if (!y)
		{
			throw exception("Negative or null width");
		}
		width = y;
	}
	void SetPoint(Point Cent) {
		Center = Cent;
	}
	int GetWidth() {
		return width;
	}
	int GetLength() {
		return length;
	}
	Point* GetCenter() {
		return &Center;
	}
	Rectangle(Point Cent = Point(1, 1), int h = 1, int w = 1) {
		SetPoint(Cent);
		SetLength(h);
		SetWidth(w);
	};
	void WriteToConsole() {
		cout << "X = " << Center.getXcord() << " Y = " << Center.getXcord() << " Length = " << length << " Width = " << width <<endl;
	}
private:
	Point Center;
	int length;
	int width;
};
