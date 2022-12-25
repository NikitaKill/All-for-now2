#pragma once
#include <iostream>
#include <stdio.h>


using namespace std;


class Route
{
public:
	void SetTime(int nam) {
		if (nam == 0)
		{
			throw exception("Empty time");
		}
		time = nam;
	}
	void SetNumb(int yea) {
		if (!yea)
		{
			throw exception("Null or negative numb");
		}
		numb = yea;
	}
	void SetFreq(int page) {
		if (!page)
		{
			throw exception("Null or negative freq");
		}
		freq = page;
	}
	void SetStop(string* Autor, int cont) {
		if (!cont || cont > 10)
		{
			throw exception("Null or negative StopCont");
		}
		for (int i = 0; i < cont; i++)
		{
			Stop[i] = Autor[i];
		}
		StopCont = cont;
	}
	int Gettime() {
		return time;
	}
	int GetNumb() {
		return numb;
	}
	int GetFreq() {
		return freq;
	}
	string* GetStop() {
		return Stop;
	}
	int GetStopCont() {
		return StopCont;
	}
	Route(string* Sto = nullptr, int nam = 123, int num = 666, int fre = 666, int cont = 10)
	{
		SetTime(nam);
		SetNumb(num);
		SetFreq(fre);
		if (Sto != nullptr)
		{
			SetStop(Sto, cont);
		}
	}
	void WriteToConsole() {
		cout << "Маршрут номер " << numb << " ходит с частотой раз в " << freq << " имеет продолжительность " << time << " минут\n";
		cout << "Имеет следующие остановки\n";
		for (int i = 0; i < StopCont; i++)
		{
			cout << Stop[i] << endl;
		}
	}

private:
	int time;
	int numb;
	int freq;
	string Stop[10];
	int StopCont;
};
