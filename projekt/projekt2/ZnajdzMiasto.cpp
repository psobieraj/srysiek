#include <string>
#include "ZnajdzMiasto.h"
#include "Struktury.h"
using namespace std;

Wezel* ZnajdzMiasto(string &Miasto, Wezel* &Drzewo) {
	Wezel* tmp = Drzewo;
	while (tmp) {
		if (Miasto > tmp->NazwaMiasta) {
			tmp = tmp->prawy;
		} else if (Miasto < tmp->NazwaMiasta) {
			tmp = tmp->lewy;
		} else {
			return tmp;
		}
	}
	return nullptr;
}