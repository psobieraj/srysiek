#include <iostream>
#include <string>
#include "Struktury.h"
#include "WczytajPrzelaczniki.h"
#include "WczytajDane.h"
#include "WyswietlPomoc.h"
#include "Dijkstra.h"
#include "WyswietlTrasy.h"
#include "ZwolnijPamiec.h"
using namespace std;

int main(int argc, char* argv[]) {
	const int Rozmiar = 100;
	Wezel* Drzewo = nullptr;
	Graf* Lista = new Graf[Rozmiar];
	string NazwaDrogi, NazwaTrasy, NazwaStart;
	int* Odleglosci = new int[Rozmiar];
	int* Poprzednicy = new int[Rozmiar];
	int LiczbaMiast = 0;

	if (WczytajPrzelaczniki(argc, argv, NazwaDrogi, NazwaTrasy, NazwaStart)) {
		if (WczytajDane(NazwaDrogi, Drzewo, Lista, LiczbaMiast)) {
			Dijkstra(NazwaStart, Drzewo, Lista, Odleglosci, Poprzednicy, LiczbaMiast);
			WyswietlTrasy(NazwaTrasy, Lista, Odleglosci, Poprzednicy, LiczbaMiast);
		} else {
			cout << "Nie udalo sie otworzyc pliku wejsciowego.";
		}
	} else {
		WyswietlPomoc();
	}

	ZwolnijPamiec(Drzewo, Lista, Odleglosci, Poprzednicy, LiczbaMiast);

	return 0;
}