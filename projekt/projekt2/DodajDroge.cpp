#include <iostream>
#include "DodajDroge.h"
#include "Struktury.h"
#include "ZnajdzMiasto.h"
#include "DodajMiasto.h"
#include "DodajSasiada.h"
using namespace std;

void DodajDroge(string &sMiastoPocz, string &sMiastoKonc, int &Koszt, Wezel* &Drzewo, Graf Lista[], int &LiczbaMiast) {
	Wezel* wMiastoPocz = ZnajdzMiasto(sMiastoPocz, Drzewo);
	if (!wMiastoPocz) wMiastoPocz = DodajMiasto(sMiastoPocz, Drzewo, Lista, LiczbaMiast);
	
	Wezel* wMiastoKonc = ZnajdzMiasto(sMiastoKonc, Drzewo);
	if (!wMiastoKonc) wMiastoKonc = DodajMiasto(sMiastoKonc, Drzewo, Lista, LiczbaMiast);

	DodajSasiada(wMiastoPocz, wMiastoKonc, Koszt, Lista);
}