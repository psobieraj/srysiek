#include <string>
#include "DodajSasiada.h"
#include "Struktury.h"
using namespace std;

void DodajSasiada(Wezel* &wMiastoPocz, Wezel* &wMiastoKonc, int &Koszt, Graf Lista[]) {
	int iMiastoPocz = wMiastoPocz->Indeks;
	int iMiastoKonc = wMiastoKonc->Indeks;

	Sasiad* tmp = Lista[iMiastoPocz].ListaSasiadow;

	if (tmp) {
		while (tmp->nastepny) {
			tmp = tmp->nastepny;
		}
		tmp->nastepny = new Sasiad(iMiastoKonc, Koszt);
	} else {
		Lista[iMiastoPocz].ListaSasiadow = new Sasiad(iMiastoKonc, Koszt);
	}
}