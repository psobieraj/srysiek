#include <string>
#include "Struktury.h"
using namespace std;

Wezel::Wezel(string Miasto, int Numer) {
	NazwaMiasta = Miasto;
	Indeks = Numer;
	lewy = nullptr;
	prawy = nullptr;
}

Sasiad::Sasiad(int Indeks, int Droga) {
	IndeksSasiada = Indeks;
	Koszt = Droga;
	nastepny = nullptr;
}

Graf::Graf() {
	Miasto = nullptr;
	ListaSasiadow = nullptr;
}