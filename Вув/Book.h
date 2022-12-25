#pragma once
#include <iostream>
#include <stdio.h>


using namespace std;


class Book
{
private:
	string name;
	int year;
	int pages;
	string Autors[10];
	int AutorsCont;
public:
	void SetName(string nam) {
		if (nam == "")
		{
			throw exception("Empty name");
		}
		name = nam;
	}
	void SetYear(int yea) {
		if (!yea)
		{
			throw exception("Null or negative year");
		}
		year = yea;
	}
	void SetPages(int page) {
		if (!page)
		{
			throw exception("Null or negative pages");
		}
		pages = page;
	}
	void SetAutors(string* Autor, int cont) {
		if (!cont || cont > 10)
		{
			throw exception("Null or negative AutorsCont");
		}
		for (int i = 0; i < cont; i++)
		{
			Autors[i] = Autor[i];
		}
		AutorsCont = cont;
	}
	string GetName() {
		return name;
	}
	int GetYear() {
		return year;
	}
	int GetPages() {
		return pages;
	}
	string* GetAutors() {
		return Autors;
	}
	int GetAutorsCont() {
		return AutorsCont;
	}
	Book(string* Autor = nullptr, string nam = "empty", int yea = 666, int page = 666, int cont = 10)
	{
		SetName(nam);
		SetYear(yea);
		SetPages(page);
		if (Autor != nullptr)
		{
			SetAutors(Autor, cont);
		}
	}
	void WriteToConsole() {
		for (int i = 0; i < AutorsCont; i++)
		{
			cout << Autors[i];
			if (i == (AutorsCont-1) && i)
			{
				cout << ", ";
			}
			else {
				cout << ". ";
			}
		}

		cout << name << ". " << year << ". - " << pages << "ñ." << endl;
	}
};
