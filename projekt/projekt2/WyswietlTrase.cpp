#include <string>
#include <sstream>
#include "WyswietlTrase.h"
#include "Struktury.h"
using namespace std;

string WyswietlTrase(int &Miasto, Graf Lista[], int Odleglosci[], int Poprzednicy[]) {
	stringstream Output;
	if (Poprzednicy[Miasto] >= 0) {
		Output << WyswietlTrase(Poprzednicy[Miasto], Lista, Odleglosci, Poprzednicy);
		Output << " -> ";
	}
	Output << Lista[Miasto].Miasto->NazwaMiasta;
	return Output.str();
}