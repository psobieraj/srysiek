#include "ZwolnijPamiec.h"
#include "ZwolnijPamiecSasiad.h"
#include "ZwolnijPamiecDrzewo.h"
#include "Struktury.h"
using namespace std;

void ZwolnijPamiec(Wezel* &Drzewo, Graf Lista[], int Odleglosci[], int Poprzednicy[], int &LiczbaMiast) {
	ZwolnijPamiecDrzewo(Drzewo);

	for (int i = 0; i < LiczbaMiast; i++) {
		ZwolnijPamiecSasiad(Lista[i].ListaSasiadow);
	}
	delete[] Lista;
	
	delete[] Odleglosci;
	delete[] Poprzednicy;
}