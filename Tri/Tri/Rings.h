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
	Point(int x = 1, int y = 1) {
		SetXcord(x);
		SetYcord(y);
	};

private:
	void AssertOnPositiveValue(double value) {
		if (value < 0)
		{
			throw exception("NegativeValue");
		}
	}
	void SetXcord(int x) {
		AssertOnPositiveValue(x);
		xCord = x;
	}
	void SetYcord(int y) {
		AssertOnPositiveValue(y);
		yCord = y;
	}
	int xCord;
	int yCord;
};

class Ring
{
public:
	static int GetAllcount() {
		return Ring::Allcount;
	}

	void setInternalRadius(double radIn) {
		AssertOnPositiveValue(radIn);
		internal_radius = radIn;
	}
	void setExternalRadius(double radEx) {
		AssertOnPositiveValue(radEx);
		if (radEx < internal_radius)
		{
			throw exception("External radius cant be lesser than internal");
		}
		external_radius = radEx;
	}
	void setCenterCords(Point centPoint) {
		Point center_point = centPoint;
	}
	double GetArea() {
		return (PI * ((external_radius * external_radius) - (internal_radius * internal_radius)));
	}
	Ring(double radIn = 0.0, double radEx = 0.0, Point centPoint = Point())
	{
		setInternalRadius(radIn);
		setExternalRadius(radEx);
		setCenterCords(centPoint);
	}
	static void init() {
		Allcount = 0;
	}
private:

	void AssertOnPositiveValue(double value) {
		if (value < 0)
		{
			throw exception("NegativeValue");
		}
	}
	const double PI = 3.1415926;
	Point center_point;
	double internal_radius;
	double external_radius;
	static int Allcount;
};