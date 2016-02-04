#include "SortujKolejke.h"
using namespace std;

void SortujKolejke(int Kolejka[], int Odleglosci[], int &LiczbaMiast) {
	for (int i = 0; i < LiczbaMiast - 1; i++) {
		for (int j = 0; j < LiczbaMiast - 1 - i; j++) {
			if (Odleglosci[Kolejka[j]] > Odleglosci[Kolejka[j + 1]]) {
				int tmp = Kolejka[j];
				Kolejka[j] = Kolejka[j + 1];
				Kolejka[j + 1] = tmp;
			}
		}
	}
}