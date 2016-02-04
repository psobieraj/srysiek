#include <iostream>
#include "InicjujTablice.h"
#include "Struktury.h"
#include "ZnajdzMiasto.h"
using namespace std;

void InicjujTablice(string &NazwaStart, Wezel* &Drzewo, int Odleglosci[], int Poprzednicy[], int &LiczbaMiast) {
	for (int i = 0; i < LiczbaMiast; i++) {
		Odleglosci[i] = INT_MAX;
		Poprzednicy[i] = -1;
	}

	Wezel* wMiastoPocz = ZnajdzMiasto(NazwaStart, Drzewo);
	int iMiastoPocz = wMiastoPocz->Indeks;
	Odleglosci[iMiastoPocz] = 0;
}