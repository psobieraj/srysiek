#include <string>
#include "Dijkstra.h"
#include "Struktury.h"
#include "InicjujTablice.h"
#include "UtworzKolejke.h"
#include "PoliczOdleglosci.h"
using namespace std;

void Dijkstra(string &NazwaStart, Wezel* &Drzewo, Graf Lista[], int Odleglosci[], int Poprzednicy[], int &LiczbaMiast) {
	int* Kolejka = new int[LiczbaMiast];
	InicjujTablice(NazwaStart, Drzewo, Odleglosci, Poprzednicy, LiczbaMiast);
	UtworzKolejke(NazwaStart, Kolejka, Drzewo, Odleglosci, LiczbaMiast);
	PoliczOdleglosci(Kolejka, Lista, Odleglosci, Poprzednicy, LiczbaMiast);
}