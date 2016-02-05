#include "ZwolnijPamiecSasiad.h"
#include "Struktury.h"
using namespace std;

void ZwolnijPamiecSasiad(Sasiad* &ListaSasiadow) {
	if (ListaSasiadow->nastepny) {
		ZwolnijPamiecSasiad(ListaSasiadow->nastepny);
	}
	delete ListaSasiadow;
}