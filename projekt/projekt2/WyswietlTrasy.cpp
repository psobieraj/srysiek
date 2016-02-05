#include <string>
#include <fstream>
#include "WyswietlTrasy.h"
#include "WyswietlTrase.h"
#include "Struktury.h"
using namespace std;

void WyswietlTrasy(string &NazwaTrasy, Graf Lista[], int Odleglosci[], int Poprzednicy[], int &LiczbaMiast) {
	ofstream PlikTrasy;
	PlikTrasy.open(NazwaTrasy);
	for (int i = 0; i < LiczbaMiast; i++) {
		if (Poprzednicy[i] >= 0) {
			PlikTrasy << WyswietlTrase(i, Lista, Odleglosci, Poprzednicy) << ": " << Odleglosci[i] << endl;
		}
	}
	PlikTrasy.close();
}