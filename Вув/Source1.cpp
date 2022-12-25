#include <iostream>
#include <stdio.h>
#include <random>
#include <string>
#include "Rings.h"

using namespace std;

void DemoRing() {
	srand(time(0));
	Ring rings[3];
	for (int i = 0; i < 3; i++)
	{
		double in_rad = rand() % 20;
		double ex_rad = rand() % 40 + 20;
		rings[i].setCenterCords(Point(1, 1));
		rings[i].setInternalRadius(in_rad);
		rings[i].setExternalRadius(ex_rad);
	}
	for (int i = 0; i < 3; i++)
	{
		cout << "Area " << i << " " << rings[i].GetArea() << endl;
	}
	int allcount = 0;//Ring::GetAllRingsCount();
	cout << allcount << endl;
}

int main() {
	DemoRing();
	Ring::init();
	return 0;
}