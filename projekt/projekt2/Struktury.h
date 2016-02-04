#pragma once
#include <string>
using namespace std;

struct Wezel {
	string NazwaMiasta;
	int Indeks;
	Wezel* lewy;
	Wezel* prawy;
	Wezel(string Miasto, int Numer);
};

struct Sasiad {
	int IndeksSasiada;
	int Koszt;
	Sasiad* nastepny;
	Sasiad(int Indeks, int Droga);
};

struct Graf {
	Wezel* Miasto;
	Sasiad* ListaSasiadow;
	Graf();
};