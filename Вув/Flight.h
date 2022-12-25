#pragma once
#include <iostream>
#include <stdio.h>
#include <math.h>
#include <string>

using namespace std;

class Time
{
private:
	int year;
	int month;
	int day;
	int hour;
	int minut;
	int second;
public:

	void Setyear(int val){
		if (val < 0 && val > 3000)
		{
			throw exception("wrong value");
		}
		year = val;
	}
	void Setmonth(int val){
		if (val < 0 && val > 12)
		{
			throw exception("wrong value");
		}
		month = val;
	}
	void Setday(int val){
		if (val < 0 && val > 30)
		{
			throw exception("wrong value");
		}
		day = val;
	}
	void Sethour(int val){
		if (val < 0 && val > 24)
		{
			throw exception("wrong value");
		}
		hour = val;
	}
	void Setminut(int val){
		if (val < 0 && val > 60)
		{
			throw exception("wrong value");
		}
		minut = val;
	}
	void Setsecond(int val){
		if (val < 0 && val > 60)
		{
			throw exception("wrong value");
		}
		second = val;
	}

	int Getyear() {
		return year;
	}
	int Getmonth() {
		return month;
	}
	int Getday() {
		return day;
	}
	int Gethour() {
		return hour;
	}
	int Getminut() {
		return minut;
	}
	int Getsecond() {
		return second;
	}

	string GetTimeInHours() {
		string res = to_string(hour) + ':' + to_string(minut);;
		return res;
	}
	Time(int Year = 0, int Month = 0, int Day = 0, int Hour = 0, int Minut = 0, int Second = 0) {
		Setyear(Year);
		Setmonth(Month);
		Setday(Day);
		Sethour(Hour);
		Setminut(Minut);
		Setsecond(Second);
	};

	int ResultTime() {
		int res = second+(minut*60)+(hour*3600) + (day*24*3600);
		return res;
	}
};


class Flight
{
private:
	string FlyNum;
	string CityOut;
	string CityIn;
	Time TimeOut;
	Time TimeIn;
public:
	void SetFlyNum(string flyNum) {
		FlyNum = flyNum;
	}
	void SetCityOut(string cityOut) {
		CityOut = cityOut;
	}
	void SetCityIn(string cityIn) {
		CityIn = cityIn;
	}
	void SetTimeOut(Time timeOut) {
		TimeOut = timeOut;
	}
	void SetTimeIn(Time timeIn) {
		if (timeIn.ResultTime() < TimeOut.ResultTime())
		{
			throw exception("Wrong Time out");
		}
		TimeIn = timeIn;
	}

	string GetFlyNum(){
		return FlyNum;
	};
	string GetCityOut(){
		return CityOut;
	};
	string GetCityIn(){
		return CityIn;
	};
	Time GetTimeOut(){
		return TimeOut;
	};
	Time GetTimeIn(){
		return TimeIn;
	};

	string GetFlightTimeMinutes() {
		string res;
		int secinfly = (TimeIn.Getminut() + TimeIn.Gethour() * 60) - (TimeOut.Getminut() + TimeOut.Gethour() * 60);
		res = to_string(secinfly/60) + " ч " + to_string((secinfly % 60)) + " мин";
		return res;
	}

	void WriteToConsole() {
		cout << FlyNum << " " << CityOut << "-" << CityIn << " отбытие " << TimeOut.GetTimeInHours() << " прибытие " << TimeIn.GetTimeInHours();
		cout << " длительность " << GetFlightTimeMinutes() << endl;
	}

	Flight(string flyNum = "", string cityOut = "", string cityIn = "", Time timeOut = Time(), Time timeIn = Time()) {
		SetFlyNum(flyNum);
		SetCityOut(cityOut);
		SetCityIn(cityIn);
		SetTimeOut(timeOut);
		SetTimeIn(timeIn);
	};

};
