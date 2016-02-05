#include "ZwolnijPamiecDrzewo.h"
#include "Struktury.h"
using namespace std;

void ZwolnijPamiecDrzewo(Wezel* &Drzewo) {
	if (Drzewo->lewy) ZwolnijPamiecDrzewo(Drzewo->lewy);
	if (Drzewo->prawy) ZwolnijPamiecDrzewo(Drzewo->prawy);
	delete Drzewo;
}