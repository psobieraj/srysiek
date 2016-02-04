#include <string>
#include "DodajMiasto.h"
#include "Struktury.h"
using namespace std;

Wezel* DodajMiasto(string &Miasto, Wezel* &Drzewo, Graf Lista[], int &LiczbaMiast) {
	Wezel* tmp = Drzewo;
	if (tmp) {
		while (tmp) {
			if (Miasto > tmp->NazwaMiasta) {
				if (tmp->prawy) {
					tmp = tmp->prawy;
				} else {
					tmp->prawy = new Wezel(Miasto, LiczbaMiast);
					tmp = tmp->prawy;
					break;
				}
			
			} else if (Miasto < tmp->NazwaMiasta) {
				if (tmp->lewy) {
					tmp = tmp->lewy;
				} else {
					tmp->lewy = new Wezel(Miasto, LiczbaMiast);
					tmp = tmp->lewy;
					break;
				}
			}
		}
	} else {
		tmp = new Wezel(Miasto, LiczbaMiast);
		Drzewo = tmp;
	}

	Lista[LiczbaMiast].Miasto = tmp;
	LiczbaMiast++;

	return tmp;
}