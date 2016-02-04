#include <string>
#include "UtworzKolejke.h"
#include "Struktury.h"
#include "ZnajdzMiasto.h"
using namespace std;

void UtworzKolejke(string &NazwaStart, int Kolejka[], Wezel* &Drzewo, int Odleglosci[], int &LiczbaMiast) {
	Wezel* wMiastoPocz = ZnajdzMiasto(NazwaStart, Drzewo);
	int iMiastoPocz = wMiastoPocz->Indeks;

	for (int i = 0; i < LiczbaMiast; i++) {
		Kolejka[i] = i;
	}
}