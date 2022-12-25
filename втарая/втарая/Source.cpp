#include <iostream>
#include <exception>
#include <string>
using namespace std;


void Sort(double* values, int count) //2211
{
	double swap;
	for (int i = 0; i < count; i++)
	{
		for (int j = 0; j < count; j++)
		{
			if (values[i] < values[j])
			{
				swap = values[i];
				values[i] = values[j];
				values[j] = swap;
			}
		}
	}
}
void DemoSort() //2212
{
	int count = 5;
	double* values = new double[count] {100.0, 249.0, 12.0, 45.0, 23.5};
	Sort(values, count);
	try {
		count = -1;
		if (count > 0)
			Sort(values, count);
		else
			throw "Can not take sqrt of negative number";
	}
	catch (const char* exception)
	{
		cout << "Error: " << exception << endl;
	}
}
void Task2212()
{
	DemoSort();
}
struct Priamoygolnik //2221 and 2222
{
	double dlina;
	double shirina;
	string cvet;
};
struct Reis
{
	string vilet;
	string naznach;
	int timepoletmin;
};
struct Film
{
	string name;
	int time;
	int year;
	string janre;
	double rating;
};
struct Time
{
	int hour;
	int minute;
	int second;
};
struct Contact
{
	string name;
	string surname;
	int nomer;
	string opisanie;
};
struct music
{
	string name;
	string janre;
	int yearof_vipuska;
	int time;
};
struct Discipline
{
	string name;
	string teacher;
	int alltime;
};
void WritePriamoygolnik(Priamoygolnik& priamoygolnik);
void Exchange(Priamoygolnik& Priamoygolnik1, Priamoygolnik& Priamoygolnik2);
void DemoPriamoygolnik() //2231-2232 2241-2243
{
	Priamoygolnik per1;
	per1.dlina = 6;
	per1.shirina = 21;
	per1.cvet = "�����������";
	Priamoygolnik per2;
	cout << endl << "per2.dlina = ";
	cin >> per2.dlina;
	cout << endl << "per2.shirina = ";
	cin >> per2.shirina;
	cout << endl << "per2.cvet = ";
	cin >> per2.cvet;
	Priamoygolnik per3;
	per3.dlina = 19;
	per3.shirina = 22;
	per3.cvet = "�������";
	Priamoygolnik mass[3] = { per1,per2,per3 };
	for (int i = 0; i < 3; i++)
	{
		cout << "������������� ����� ��������� �������: ����� ����� - " << mass[i].dlina << " " << "������ ����� - " << mass[i].shirina << " � ���� �������������� " << mass[i].cvet << endl;
	}
	Priamoygolnik* ykazatel = new Priamoygolnik;
	ykazatel = &per1;
	cout << ykazatel->dlina << endl;
	cout << ykazatel->shirina << endl;
	cout << ykazatel->cvet << endl;
	ykazatel->cvet = "���������";
	ykazatel->dlina = 29;
	ykazatel->shirina = 33;
	Priamoygolnik* ykazatel1 = new Priamoygolnik;
	ykazatel1 = &per1;
	cout << &ykazatel->dlina << " " << &ykazatel->dlina << endl;
	cout << &ykazatel->shirina << " " << &ykazatel->shirina << endl;
	cout << &ykazatel->cvet << " " << &ykazatel->cvet << endl;
	Exchange(per1, per2);

}
void DemoReis()
{
	Reis flight;
	flight.vilet = "������";
	flight.naznach = "��������";
	flight.timepoletmin = 145;
	Reis flight2;
	cout << endl << "flight2.vilet";
	cin >> flight2.vilet;
	cout << endl << "flight2.pnaz";
	cin >> flight2.naznach;
	cout << endl << "flight2.timepoletmin";
	cin >> flight2.timepoletmin;
	Reis flight3;
	flight3.vilet = "�����";
	flight3.naznach = "���������";
	flight3.timepoletmin = 106;
	Reis mass[3] = { flight, flight2, flight3 };
	for (int i = 0; i < 3; i++)
	{
		cout << "���� " << i + 1 << " " << mass[i].vilet << "-" << mass[i].naznach << " ����� " << mass[i].timepoletmin << "����� " << endl;
	}
	Reis* ykazatel = new Reis;
	ykazatel = &flight;
	cout << ykazatel->vilet << endl;
	cout << ykazatel->naznach << endl;
	cout << ykazatel->timepoletmin << endl;
	ykazatel->vilet = "���������";
	ykazatel->naznach = "������";
	ykazatel->timepoletmin = 79;
	Reis* ykazatel2 = new Reis;
	ykazatel2 = &flight;
	cout << &ykazatel->vilet << " " << &ykazatel2->vilet << endl;
	cout << &ykazatel->naznach << " " << &ykazatel2->naznach << endl;
	cout << &ykazatel->timepoletmin << " " << &ykazatel2->timepoletmin << endl;
}
void DemoFilm()
{
	Film movie;
	movie.time = 107;
	movie.name = "������� ����";
	movie.rating = 8.5;
	movie.year = 2008;
	movie.janre = "Comedy";
	Film movie2;
	cout << endl << "movie2.time = ";
	cin >> movie2.time;
	cout << endl << "movie2.name = ";
	cin >> movie2.name;
	cout << endl << "movie2.rating = ";
	cin >> movie2.rating;
	cout << endl << "movie2.year = ";
	cin >> movie2.year;
	cout << endl << "movie2.janre = ";
	cin >> movie2.janre;
	Film movie3;
	movie3.time = 120;
	movie3.name = "��������� �����";
	movie3.rating = 10.0;
	movie3.year = 2077;
	movie3.janre = "�����������";
	Film mass[3] = { movie, movie2, movie3 };
	for (int i = 0; i < 3; i++)
	{
		cout << "����� " << mass[i].name << ", ������� " << mass[i].time << " �����, � ��������� " << mass[i].rating << ", � ������ " << mass[i].janre << " � ����� �������� - " << mass[i].year << endl;
	}
	Film* ykazatel = new Film;
	ykazatel = &movie;
	cout << ykazatel->name << endl;
	cout << ykazatel->time << endl;
	cout << ykazatel->rating << endl;
	cout << ykazatel->janre << endl;
	cout << ykazatel->year << endl;
	ykazatel->name = "������������ ��������";
	ykazatel->time = 117;
	ykazatel->rating = 9.4;
	ykazatel->janre = "REZNIA";
	ykazatel->year = 2003;
	Film* ykazatel1 = new Film;
	ykazatel1 = &movie2;
	cout << &ykazatel->name << " " << &ykazatel1->name << endl;
	cout << &ykazatel->time << " " << &ykazatel1->time << endl;
	cout << &ykazatel->rating << " " << &ykazatel1->rating << endl;
	cout << &ykazatel->janre << " " << &ykazatel1->janre << endl;
	cout << &ykazatel->year << " " << &ykazatel1->year << endl;
}
void DemoTime()
{
	Time time1;
	time1.hour = 12;
	time1.minute = 51;
	time1.second = 07;
	Time time2;
	cout << endl << "time2.hour = ";
	cin >> time2.hour;
	cout << endl << "time2.minute = ";
	cin >> time2.minute;
	cout << endl << "time2.second = ";
	cin >> time2.second;
	Time time3;
	time3.hour = 18;
	time3.minute = 59;
	time3.second = 23;
	Time mass[3] = { time1, time2, time3 };
	for (int i = 0; i < 3; i++)
	{
		cout << "���� " << mass[i].hour << " ������ " << mass[i].minute << " ������� " << mass[i].second << endl;
	}
	Time* ykazatel = new Time;
	ykazatel = &time1;
	cout << ykazatel->hour << endl;
	cout << ykazatel->minute << endl;
	cout << ykazatel->second << endl;
	ykazatel->hour = 16;
	ykazatel->minute = 18;
	ykazatel->second = 39;
	Time* ykazatel1 = new Time;
	ykazatel1 = &time1;
	cout << &ykazatel->hour << " " << &ykazatel1->hour << endl;
	cout << &ykazatel->minute << " " << &ykazatel1->minute << endl;
	cout << &ykazatel->second << " " << &ykazatel1->second << endl;
}
void WrongPointers()//2244
{
	int a;
	cout << "0 or 1: ";
	cin >> a;
	if (a == 0)
	{
		Reis flight;
		Film movie;
		Reis* fly = new Reis;
		Film* filmech = new Film;
		fly = &flight;
		filmech = &movie;
	}
	else
	{
		/*Flight flight;
		Movie movie;
		Flight* flt = new Flight;
		Movie* mov = new Movie;
		flt = &movie;
		mov = &flight;*/
	}
}
void WriteRectangle(Priamoygolnik& priamoygolnik) //2251
{
	cout << "������������� ����� �������  " << priamoygolnik.dlina << "�" << priamoygolnik.shirina << endl;
}
void ReadRectangle(Priamoygolnik& priamoygolnik) //2252
{
	cout << "������� ����� ��������������: ";
	cin >> priamoygolnik.dlina;
	cout << "������� ������ ��������������: ";
	cin >> priamoygolnik.shirina;
}
void DemoReadAndWriteRectangles() //2253
{
	Priamoygolnik per1, per2, per3, per4, per5;
	Priamoygolnik rectangles[5] = { per1, per2, per3, per4, per5 };
	for (int i = 0; i < 5; i++)
	{
		ReadRectangle(rectangles[i]);
		WriteRectangle(rectangles[i]);
	}
}
void Exchange(Priamoygolnik& priamoygolnik1, Priamoygolnik& priamoygolnik2) //2254
{
	WriteRectangle(priamoygolnik1);
	WriteRectangle(priamoygolnik2);
	double a, b;
	a = priamoygolnik2.dlina;
	b = priamoygolnik2.shirina;
	priamoygolnik2.dlina = priamoygolnik1.dlina;
	priamoygolnik1.dlina = a;
	priamoygolnik2.shirina = priamoygolnik1.shirina;
	priamoygolnik1.shirina = b;
	WriteRectangle(priamoygolnik1);
	WriteRectangle(priamoygolnik2);
}
void FindRectangle(Priamoygolnik* priamoygolniki, int count) //2255
{
	double a, b;
	a = 0;
	b = 0;
	for (int i = 0; i < count; i++)
	{
		if (a < priamoygolniki[i].dlina)
		{
			a = priamoygolniki[i].dlina;
			b = priamoygolniki[i].shirina;
		}
	}
	cout << "������������� � ������������ ������ ����� ������ " << a << "x" << b;
}
void FindMaxRectangle(Priamoygolnik* priamoygolniki, int count) //2256
{
	double a, b;
	a = 0;
	b = 0;
	for (int i = 0; i < count; i++)
	{
		if ((a * b) < (priamoygolniki[i].dlina * priamoygolniki[i].shirina))
		{
			a = priamoygolniki[i].dlina;
			b = priamoygolniki[i].shirina;
		}
	}
	cout << "������������� � ������������ �������� ����� ������ " << a << "x" << b;

}
void DemoReadAndWriteFlights(Reis* flights, int count) //2261
{
	for (int i = 0; i < count; i++)
	{
		Reis* pFlt = new Reis;
		pFlt = &flights[i];
		cout << endl << i + 1 << " vilet= ";
		cin >> pFlt->vilet;
		cout << endl << i + 1 << " naznach= ";
		cin >> pFlt->naznach;
		cout << endl << i + 1 << " poletVmin= ";
		cin >> pFlt->timepoletmin;
		cout << "���� " << i + 1 << " " << pFlt->vilet << "-" << pFlt->naznach << " ��������� � ������ " << pFlt->timepoletmin << " ����� " << endl;
		pFlt = NULL;
		delete pFlt;
	}
}
void DemoDynamicFlight() //2262
{
	Reis Flt;
	Reis* pFlt = new Reis;
	pFlt = &Flt;
	pFlt->vilet = "Chernobil";
	pFlt->naznach = "Tomsk";
	pFlt->timepoletmin = 45;
	//���� ��������� - ����� ��������� � ������ 45 �����
	cout << "���� " << pFlt->vilet << "-" << pFlt->naznach << " ��������� � ������ " << pFlt->timepoletmin <<" ����� " << endl;
	pFlt = NULL;
	delete[] pFlt;
}
void FindShortestFlight(Reis* flights, int count) //2263
{
	int a = 9999;
	string vil;
	string naz;
	for (int i = 0; i < count; i++)
	{
		if (a > flights[i].timepoletmin)
		{
			a = flights[i].timepoletmin;
			vil = flights[i].vilet;
			naz = flights[i].timepoletmin;
		}
	}
	cout << "����� �������� ���� " << vil << "-" << naz << " ��������� � ������ " << a << " ����� " << endl;
}
struct Circle // 2271
{
	double X; // X-���������� ������ �����
	double Y; // Y-���������� ������ �����
	double Radius; // ������
	string Color; // ����
};
Circle* MakeCircle(double X, double Y, double Radius, string Color) {
	Circle* c = new Circle();
	c->X = X;
	c->Y = Y;
	c->Radius = Radius;
	c->Color = Color;
	return c;
}
Circle* CopyCircle(Circle& circle) {
	Circle* copiedCircle = new Circle();
	copiedCircle->X = circle.X;
	copiedCircle->Y = circle.Y;
	copiedCircle->Radius = circle.Radius;
	copiedCircle->Color = circle.Color;
	cout << "����� �����: " << circle.X << ", " << "������ �����: " << ", " << " ������ �����: " << circle.Radius << ", " << " ���� �����: " << circle.Color << endl;
	return copiedCircle;
}
void DemoCircle() {
	Circle* circle1 = MakeCircle(6.6, 6.1, 12.8, "�����������");
	Circle* circle2 = MakeCircle(19.0, 7.3, 10.07, "������");
	Circle* circle3 = MakeCircle(7.2, 10.0, 7.8, "���������");
	Circle* copiedCircle1 = CopyCircle(*circle1);
	Circle* copiedCircle2 = CopyCircle(*circle2);
	Circle* copiedCircle3 = CopyCircle(*circle3);
}

Priamoygolnik* MakePriamoygolnik(int dlina, int shirina, string cvet) //2272
{
	Priamoygolnik* r = new Priamoygolnik();
	r->dlina = dlina;
	r->shirina = shirina;
	r->cvet = cvet;
	return r;
}
Priamoygolnik* CopyPriamoygolnik(Priamoygolnik& R)
{
	Priamoygolnik* copy = new Priamoygolnik();
	copy->dlina = R.dlina;
	copy->shirina = R.shirina;
	copy->cvet = R.cvet;
	cout << "������������� ����� �������  " << R.dlina << "x" << R.shirina << " � ���� " << R.cvet << endl;
	return copy;
}
void Demopriamoygolnik()
{
	Priamoygolnik* r1 = MakePriamoygolnik(25.7, 12.2, "�����������");			
	Priamoygolnik* r2 = MakePriamoygolnik(25.0, 17.8, "������");
	Priamoygolnik* r3 = MakePriamoygolnik(2.5, 7.7, "���������");
	Priamoygolnik* copyr1 = CopyPriamoygolnik(*r1);
	Priamoygolnik* copyr2 = CopyPriamoygolnik(*r2);
	Priamoygolnik* copyr3 = CopyPriamoygolnik(*r3);
}

Reis* MakeFly(string vilet, string naznach, int timepoletmin)
{
	Reis* f = new Reis();
	f->vilet = vilet;
	f->naznach = naznach;
	f->timepoletmin = timepoletmin;
	return f;
}
Reis* CopyFly(Reis& F) {
	Reis* copy = new Reis();
	copy->vilet = F.vilet;
	copy->naznach = F.naznach;
	copy->timepoletmin = F.timepoletmin;
	cout << "���� " << F.vilet << " - " << F.naznach << " ��������� � ���� " << F.timepoletmin << endl;
	return copy;
}
void Demoflight() {
	Reis* f1 = MakeFly("�����", "���������", 1007);
	Reis* f2 = MakeFly("������", "������", 1945);
	Reis* f3 = MakeFly("���������", "���-����", 825);
	Reis* copyfly1 = CopyFly(*f1);
	Reis* copyfly2 = CopyFly(*f2);
	Reis* copyfly3 = CopyFly(*f3);
}

Film* MakeFilm(string name, int time, int year, string janre, double rating)
{
	Film* m = new Film();
	m->name = name;
	m->time = time;
	m->year = year;
	m->janre = janre;
	m->rating = rating;
	return m;
}
Film* CopyFilm(Film& M)
{
	Film* copy = new Film();
	copy->name = M.name;
	copy->time = M.time;
	copy->year = M.year;
	copy->janre = M.janre;
	copy->rating = M.rating;
	cout << "�������� ������: " << M.name << endl << "������������: " << M.time << endl << "��� ������ ������: " << M.year << endl << "���� ������: " << M.janre << endl << "������� ������: " << M.rating << endl;
	return copy;
}
void Demofilm()
{
	Film* m1 = MakeFilm("��� �����", 9460800, 2003, "�����", 0.1);
	Film* m2 = MakeFilm("������� �� ������", 126, 2014, "�����", 10.0);
	Film* m3 = MakeFilm("�����", 135, 2016, "�����", 10.0);
	Film* copym1 = CopyFilm(*m1);
	Film* copym2 = CopyFilm(*m2);
	Film* copym3 = CopyFilm(*m3);
}

Time* MakeTime(int hour, int minute, int second) {
	Time* t = new Time();
	t->hour = hour;
	t->minute = minute;
	t->second = second;
	return t;
}
Time* CopyTime(Time& T) {
	Time* copy = new Time();
	copy->hour = T.hour;
	copy->minute = T.minute;
	copy->second = T.second;
	cout << "Time: " << endl << T.hour << ":" << T.minute << ":" << T.second << endl;
	return copy;
}
void Demotimes() {
	Time* t1 = MakeTime(23, 14, 23);
	Time* t2 = MakeTime(21, 54, 34);
	Time* t3 = MakeTime(12, 56, 32);
	Time* copyt1 = CopyTime(*t1);
	Time* copyt2 = CopyTime(*t2);
	Time* copyt3 = CopyTime(*t3);
}
void Task2272_2273() {
	int choice;
	cout << "������������� - 1; ���� - 2; ����� - 3; ����� - 4" << endl;
	cin >> choice;
	switch (choice) {
	case 1:
		Demopriamoygolnik();
		break;
	case 2:
		Demoflight();
		break;
	case 3:
		DemoFilm();
		break;
	case 4:
		Demotimes();
		break;
	}
}
//2281
enum Color { Red, Orange, Yellow, Green, Sky, Blue, Purple };
enum Week { Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday };
enum Genre { Comedy, Drama, Thriller, Action, Horror, blockbuster };
//2282
enum Study { Full, Part, Evening, Distance };
enum Smartphone { Samsung, Lenovo, Rocco, Apple };
enum year { Winter, Summer, Autumn, Spring };
//2283 and 2284
void DemoEnums() {
	enum class Color { Red = 0, Orange, Yellow, Green, Sky, Blue, Purple };
	enum class Week { Monday = 0, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday };
	enum class Genre { Comedy = 0, Drama, Thriller, Action, Horror, blockbuster };
	enum class Study { Full = 0, Part, Evening, Distance };
	enum class names { Nikita = 0, Pavel, Goddan, Igor, Egor, Maksim };
	enum class year { Winter = 0, Summer, Autumn, Spring };
}
//2285
void WriteColor(Color color) {
	switch (color)
	{
	case Red:
		cout << "������� ����" << endl;
		break;
	case Orange:
		cout << "�������� ����" << endl;
		break;
	case Yellow:
		cout << "������ ����" << endl;
		break;
	case Green:
		cout << "������� ����" << endl;
		break;
	case Sky:
		cout << "�������� ����" << endl;
		break;
	case Blue:
		cout << "����� ����" << endl;
		break;
	case Purple:
		cout << "���������� ����" << endl;
		break;
	}
}
void Task2285()
{
	Color color1 = Red;
	WriteColor(color1);
	Color color2 = Green;
	WriteColor(color2);
	Color color3 = Blue;
	WriteColor(color3);
}
//2286
Color ReadColor() {
	int n;
	cout << "������� ����� �� 0 �� 6 (0 - �������, 1 - ���������, 2 - ������, 3 - �������, 4 - �������, 5 - �����, 6 - ����������" << endl;
	cin >> n;
	switch (n) {
	case 0: {
		Color color = Red;
		return color; }
		  break;
	case 1: {
		Color color = Orange;
		return color; }
		  break;
	case 2: {
		Color color = Yellow;
		return color; }
		  break;
	case 3: {
		Color color = Green;
		return color; }
		  break;
	case 4: {
		Color color = Sky;
		return color; }
		  break;
	case 5: {
		Color color = Blue;
		return color; }
		  break;
	case 6: {
		Color color = Purple;
		return color; }
		  break;
	}
}
void Task2286() {
	WriteColor(ReadColor());
}
//2287
int CountRed(Color* colors, int count) {
	int a = 0;
	for (int i = 0; i < count; i++) {
		if (colors[i] == 0)
			a++;
	}
	return a;
}
void Task2287() {
	Color color[6] = { Red, Blue, Sky, Red, Purple, Green };
	int n = 6;
	cout << CountRed(color, n);
}
//2288
int CountColor(Color* colors, int count, Color findedColor) {
	int a = 0;
	for (int i = 0; i < count; i++) {
		if (findedColor == colors[i])
			a++;
	}
	return a;
}
void Task2288() {
	Color color[6] = { Red, Blue, Red, Red, Purple, Green };
	int count = 6;
	Color findedColor = ReadColor();
	cout << CountColor(color, count, findedColor);
}
//2291
struct Movie1 {
	string name;
	int time;
	int year;
	Genre genre;
	double rating;
};
//2292
Movie1* MakeMovie1(string name, int time, int year, double rating);
int CountMoviesByGenre(Movie1* movies, int count, Genre findGenre);
Movie1* FindBestGenreMovie(Movie1* movies, int count, Genre findGenre);
void DemoMovieWithGenre() {
	Movie1 movie;
	int n;
	cout << "������� �������� ������" << endl;
	cin >> movie.name;
	cout << "������� ������������ ������" << endl;
	cin >> movie.time;
	cout << "������� ���� ������" << endl;
	cin >> movie.year;
	cout << "������� ���� ������ (0 - Comedy, 1 - Drama, 2 - Thriller, 3 - Action, 4 - Horror, 5 - blockbuster" << endl;
	cin >> n;
	switch (n) {
	case 0:
		cout << "Comedy" << endl;
		break;
	case 1:
		cout << "Drama" << endl;
		break;
	case 2:
		cout << "Thriller" << endl;
		break;
	case 3:
		cout << "Action" << endl;
		break;
	case 4:
		cout << "Horror" << endl;
		break;
	case 5:
		cout << "Blockbuster" << endl;
		break;
	}
	cout << "������� ������� ������" << endl;
	cin >> movie.rating;
	Movie1* movie1 = new Movie1;
	movie1 = MakeMovie1(movie.name, movie.time, movie.year, movie.rating);
	cout << "������� ���������� ��������������� �������: " << endl;
	int kolvo;
	cin >> kolvo;
	
	Movie1* movies = new Movie1[kolvo];
	for (int i = 0; i < kolvo; i++)
	{
		cout << "������� �������� ������: " << endl;
		cin >> movies[i].name;
		cout << "������� ������������ ������: " << endl;
		cin >> movies[i].time;
		cout << "������� ��� ������� ������: " << endl;
		cin >> movies[i].year;
		cout << "������� ������� ������: " << endl;
		cin >> movies[i].rating;
		cout << "������� ���� ������ (0 - Comedy, 1 - Thriller, 2 - Action, 3 - Horror)" << endl;
		int choice;
		cin >> choice;
		switch (choice) {
		case 0:
			movies[i].genre = Comedy;
			break;
		case 1:
			movies[i].genre = Thriller;
			break;
		case 2:
			movies[i].genre = Action;
			break;
		case 3:
			movies[i].genre = Horror;
			break;
		}
	}
	Genre findGenre = Comedy;
	int a;
	a = CountMoviesByGenre(movies, kolvo, findGenre);
	cout << "����� " << a << " ������� ����� " << findGenre << endl;
	Movie1* Bmovie = new Movie1;
	Bmovie = FindBestGenreMovie(movies, kolvo, findGenre);
}
Genre ReadGenre() {
	int n;
	cout << "������� ���� ������ (0 - Comedy, 1 - Drama, 2 - Thriller, 3 - Action, 4 - Horror, 5 - blockbuster)" << endl;
	cin >> n;
	switch (n) {
	case 0: {
		Genre genre = Comedy;
		return genre; }
		  break;
	case 1: {
		Genre genre = Drama;
		return genre; }
		  break;
	case 2: {
		Genre genre = Thriller;
		return genre; }
		  break;
	case 3: {
		Genre genre = Action;
		return genre; }
		  break;
	case 4: {
		Genre genre = Horror;
		return genre; }
		  break;
	case 5: {
		Genre genre = blockbuster;
		return genre; }
		  break;
	}
}
Movie1* MakeMovie1(string name, int time, int year, double rating)
{
	Movie1* m = new Movie1;
	m->name = name;
	m->time = time;
	m->year = year;
	m->genre = ReadGenre();
	m->rating = rating;
	return m;
	delete[] m;
}
int CountMoviesByGenre(Movie1* movies, int count, Genre findGenre)
{
	int a = 0;
	double rating1 = 0;
	for (int i = 0; i < count; i++)
	{
		if (movies[i].genre == findGenre)
		{
			a++;
		}
	}
	return a;
}
Movie1* FindBestGenreMovie(Movie1* movies, int count, Genre findGenre)
{
	Movie1* M = new Movie1;
	double rating1 = 0;

	for (int i = 0; i < count; i++)
	{
		if (movies[i].genre == findGenre)
		{
			if (movies[i].rating > rating1)
			{
				rating1 = movies[i].rating;
				M->name = movies[i].name;
				M->time = movies[i].time;
				M->year = movies[i].year;
				M->genre = movies[i].genre;
				M->rating = movies[i].rating;

				cout << "���������� ������� = " << rating1;
			}
			else return nullptr;
		}
	}
	return M;
	delete[] M;
}


int main()
{
	setlocale(LC_ALL, "Russian");
	int choice;
	cout << "������� ����� �������: " << endl;
	cin >> choice;
	switch (choice) {
	case 1://2211
	{
		DemoSort();
		break;
	}
	case 2://2212
	{
		cout << "�  ����� 2.2.2 ������ �������� �� ����....";
		break;
	}
	case 3://2231-2233
	{
		DemoPriamoygolnik();
		DemoReis();
		DemoFilm();
		DemoTime();
		break;
	}
	case 4://2241
	{
		DemoPriamoygolnik();
		DemoReis();
		DemoFilm();
		DemoTime();
		break;
	}
	case 5://2251
	{
		Priamoygolnik rectangle1;
		rectangle1.dlina = 15.0;
		rectangle1.shirina = 20.0;
		WriteRectangle(rectangle1);
		Priamoygolnik rectangle2;
		ReadRectangle(rectangle2);
		break;
	}
	case 6://2253
	{
		DemoReadAndWriteRectangles();
		break;
	}
	case 7://2254
	{
		DemoPriamoygolnik();
		break;
	}
	case 8://2255
	{
		Priamoygolnik per1, per2, per3;
		Priamoygolnik rectangles[3] = { per1, per2, per3 };
		int count = 3;
		for (int i = 0; i < 3; i++)
		{
			ReadRectangle(rectangles[i]);
			WriteRectangle(rectangles[i]);
		}
		FindRectangle(rectangles, count);
		break;
	}
	case 9://2256
	{
		Priamoygolnik per1, per2, per3;
		Priamoygolnik rectangles[3] = { per1, per2, per3 };
		int count = 3;
		for (int i = 0; i < 3; i++)
		{
			ReadRectangle(rectangles[i]);
			WriteRectangle(rectangles[i]);
		}
		FindMaxRectangle(rectangles, count);
		break;
	}
	case 10://2261
	{
		DemoDynamicFlight();
		break;
	}
	case 11://2262-3
	{
		DemoDynamicFlight();
		break;
	}
	case 12://2272-3
	{
		Task2272_2273();
		break;
	}
	case 13://2285
	{
		Task2285();
		break;
	}
	case 14://2286
	{
		Task2286();
		break;
	}
	case 15://2287
	{
		Task2287();
		break;
	}
	case 16://2288
	{
		Task2288();
		break;
	}
	case 17://2292
	{
		DemoMovieWithGenre();
		break;
	}
	case 18://2294-95
	{
		DemoMovieWithGenre();
		break;
	}
	}

}
