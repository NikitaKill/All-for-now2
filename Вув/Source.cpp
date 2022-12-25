#include <iostream>
#include <stdio.h>
#include <random>
#include <string>
#include "/ProgLab/Project3/Book.h"
#include "/ProgLab/Project3/Route.h"
#include "/ProgLab/Project3/Rectangle.h"
#include "/ProgLab/Project3/Flight.h"
#include "/ProgLab/Project3/SongAlbum.h"

using namespace std;

int FindBookByAuthor(Book* books, int booksCount, string author) {
	for (int i = 0; i < booksCount; i++)
	{
		for (int j = 0; j < books[i].GetAutorsCont(); j++)
		{
			if (books[i].GetAutors()[j] == author)
			{
				return i;
			}
		}
	}
	return -1;
}

Book ReadBookFromConsole() {
	string name;
	int year;
	int pages;
	string* Autors;
	int AutorsCont;
	cout << "Введите название книги" << endl;
	cin >> name;
	cout << "Введите год издания" << endl;
	cin >> year;
	cout << "Введите количество страниц" << endl;
	cin >> pages;
	cout << "Введите количество авторов" << endl;
	cin >> AutorsCont;

	Autors = new string[AutorsCont];
	for (int i = 0; i < AutorsCont; i++)
	{
		cout << "Введите автора №" << i << endl;
		cin >> Autors[i];
	}
	Book MyBook1 = Book(Autors, name, year, pages, AutorsCont);
	delete[] Autors;
	return MyBook1;
}

void DemoBook() {
	int numOfBooks = 0;
	cout << "Введите количество книг" << endl;
	cin >> numOfBooks;
	Book* AllMyRouts = new Book[numOfBooks];
	for (int i = 0; i < numOfBooks; i++)
	{
		cout << "Введите данные книги " << i << endl;
		AllMyRouts[i] = ReadBookFromConsole();
	}
	for (int i = 0; i < numOfBooks; i++)
	{
		AllMyRouts[i].WriteToConsole();
	}
	string SearchingStop;
	cout << "Введите искомого автора " << endl;
	cin >> SearchingStop;
	int i = FindBookByAuthor(AllMyRouts, numOfBooks, SearchingStop);
	if (i == -1)
	{
		cout << "не найдено книг с таким автором";
	}
	else
	{
		cout << "найдена книга: ";
	}
	AllMyRouts[i].WriteToConsole();
	delete[] AllMyRouts;
}

int FindRouteTo(Route* routs, int booksCount, string author) {
	for (int i = 0; i < booksCount; i++)
	{
		for (int j = 0; j < routs[i].GetStopCont(); j++)
		{
			if (routs[i].GetStop()[j] == author)
			{
				return i;
			}
		}
	}
	return -1;
}

Route ReadRouteFromConsole() {
	int time;
	int numb;
	int freq;
	string* Stop;
	int StopCont;
	cout << "Введите номер маршрута" << endl;
	cin >> numb;
	cout << "Введите продолжительность маршрута" << endl;
	cin >> time;
	cout << "Введите частоту" << endl;
	cin >> freq;
	cout << "Введите количество остановок" << endl;
	cin >> StopCont;

	Stop = new string[StopCont];
	for (int i = 0; i < StopCont; i++)
	{
		cout << "Введите остановку №" << i << endl;
		cin >> Stop[i];
	}
	Route MyRoute1 = Route(Stop, time, numb, freq, StopCont);
	return MyRoute1;
	delete[] Stop;
}

void DemoRoute() {
	int numOfRouts = 0;
	cout << "Введите количество книг" << endl;
	cin >> numOfRouts;
	Route* AllMyRouts = new Route[numOfRouts];
	for (int i = 0; i < numOfRouts; i++)
	{
		cout << "Введите данные книги " << i << endl;
		AllMyRouts[i] = ReadRouteFromConsole();
	}
	for (int i = 0; i < numOfRouts; i++)
	{
		AllMyRouts[i].WriteToConsole();
	}
	string SearchingStop;
	cout << "Введите искомую остановку " << endl;
	cin >> SearchingStop;
	int i = FindRouteTo(AllMyRouts, numOfRouts, SearchingStop);
	if (i == -1)
	{
		cout << "не найдено автобусов с такой остановкой";
	}
	else
	{
		cout << "найден маршрут: ";
	}
	AllMyRouts[i].WriteToConsole();
}

void DemoFlightWithTime() {
	Flight flyarr[5];
	for (int i = 0; i < 5; i++)
	{
		Time TimeOut = Time(0, 0, 0, (i+1) * 3, (i + 1) * 5, 0);
		Time TimeIn = Time(0, 0, 0, (i + 1) * 4, (i + 1) * 8, 0);
		flyarr[i] = Flight(to_string(i), "Москва", "Питер", TimeOut, TimeIn);
	}
	for (int i = 0; i < 5; i++)
	{
		flyarr[i].WriteToConsole();
	}

}

void DemoRectangleWithPoint() {
	int RectangleCount = 0;
	cout << "Введите количество прямоугольников ";
	cin >> RectangleCount;
	Rectangle* rects = new Rectangle[RectangleCount];
	for (int i = 0; i < RectangleCount; i++)
	{
		Point cent = Point(rand() % 100 + 1, rand() % 100 + 1);
		rects[i] = Rectangle(cent, rand() % 20 + 1, rand() % 20 + 1);
	}
	double sumXcord = 0.0;
	double sumYcord = 0.0;
	for (int i = 0; i < RectangleCount; i++)
	{
		sumXcord += rects[i].GetCenter()->getXcord();
		sumYcord += rects[i].GetCenter()->getYcord();
		rects[i].WriteToConsole();
	}
	sumXcord /= RectangleCount;
	sumYcord /= RectangleCount;
	cout << "Среднее значение X " << sumXcord << " среднее значение Y " << sumYcord;
	delete[] rects;
}


void DemoBand() {
	Song songs1[12];
	for (int i = 0; i < 12; i++)
	{
		songs1[i].SetName("SongA" + to_string(i + 1));
		songs1[i].SetDuration((i + 1) * 4);
		songs1[i].SetSongGenre(Classic);
	}
	Album alb1 = Album("Театр демона", 2010, 12, songs1);
	Song songs2[17];
	for (int i = 0; i < 17; i++)
	{
		songs2[i].SetName("SongB" + to_string(i + 1));
		songs2[i].SetDuration((i+1)*5);
		songs2[i].SetSongGenre(Rock);
	}
	Album alb2 = Album("Продавец кошмаров", 2006, 17, songs2);
	Album albs[2] = {alb1, alb2};
	Band Kish = Band("КиШ", "Горшок жив", 2, albs);
	string searchingSong;
	cout << "Введите искомую песню ";
	cin >> searchingSong;
	Song* FoundSong = Kish.FindSong(searchingSong);
	if (FoundSong != nullptr)
	{
		cout << "Эта песня длится " << FoundSong->GetDuration() << " сек. и находится в альбоме " << Kish.FindAlbum(FoundSong)->GetName() << endl;
	}
	else {
		cout << "Нет такой " << endl;
	}
	int GenreSongs;
	Song* songsfind = Kish.GetAllGenreSongs(GenreSongs, Rock);
	for (int i = 0; i < GenreSongs; i++)
	{
		cout << songsfind[i].GetName() << endl;
	}
	delete[] songsfind;
	delete[] songs1;
	delete[] songs2;
}

int main() {
	srand(time(0));
	setlocale(LC_ALL, "Russian");
	//DemoBook();// всё до 3.2.5 включительно
	//DemoRoute();//3.2.6
	//DemoRectangleWithPoint();//3.3.5
	//DemoFlightWithTime();
	DemoBand();
	return 0;
}