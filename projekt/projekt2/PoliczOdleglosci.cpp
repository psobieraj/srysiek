#include "PoliczOdleglosci.h"
#include "Struktury.h"
#include "SortujKolejke.h"
using namespace std;

void PoliczOdleglosci(int Kolejka[], Graf Lista[], int Odleglosci[], int Poprzednicy[], int &LiczbaMiast) {
	for (int i = 0; i < LiczbaMiast; i++) {
		SortujKolejke(Kolejka, Odleglosci, LiczbaMiast);
		int iMiastoPocz = Kolejka[i];
		if (Odleglosci[iMiastoPocz] < INT_MAX) {
			Sasiad* ObecnySasiad = Lista[iMiastoPocz].ListaSasiadow;
			while (ObecnySasiad) {
				int iMiastoSasiad = ObecnySasiad->IndeksSasiada;
				int SasiadOdleglosc = ObecnySasiad->Koszt;
				if (Odleglosci[iMiastoSasiad] > Odleglosci[iMiastoPocz] + SasiadOdleglosc) {
					Odleglosci[iMiastoSasiad] = Odleglosci[iMiastoPocz] + SasiadOdleglosc;
					Poprzednicy[iMiastoSasiad] = iMiastoPocz;
				}
				ObecnySasiad = ObecnySasiad->nastepny;
			}
		}
	}
}