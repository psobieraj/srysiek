#include <string>
#include <fstream>
#include "WczytajDane.h"
#include "Struktury.h"
#include "DodajDroge.h"
using namespace std;

bool WczytajDane(string &NazwaDrogi, Wezel* &Drzewo, Graf Lista[], int &LiczbaMiast) {
	ifstream PlikDrogi;
	PlikDrogi.open(NazwaDrogi);
	if (!PlikDrogi)
		return false;

	string sMiastoPocz, sMiastoKonc;
	int Koszt;
	while (!PlikDrogi.eof()) {
		PlikDrogi >> sMiastoPocz >> sMiastoKonc >> Koszt;
		DodajDroge(sMiastoPocz, sMiastoKonc, Koszt, Drzewo, Lista, LiczbaMiast);
	}
	PlikDrogi.close();

	return true;
}