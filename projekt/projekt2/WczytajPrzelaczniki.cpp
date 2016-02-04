#include <string>
#include "WczytajPrzelaczniki.h"
using namespace std;

const string PrzelacznikDrogi = "-i";
const string PrzelacznikTrasy = "-o";
const string PrzelacznikStart = "-s";

bool WczytajPrzelaczniki(int &argc, char* argv[], string &NazwaDrogi, string &NazwaTrasy, string &NazwaStart) {
	NazwaDrogi = "";
	NazwaTrasy = "";
	NazwaStart = "";

	for (int i = 1; i < argc - 1; i++) {
		if (argv[i] == PrzelacznikDrogi) {
			NazwaDrogi = argv[i + 1];
		} else if (argv[i] == PrzelacznikTrasy) {
			NazwaTrasy = argv[i + 1];
		} else if (argv[i] == PrzelacznikStart) {
			NazwaStart = argv[i + 1];
		}
	}

	if (NazwaDrogi == "" || NazwaTrasy == "" || NazwaStart == "")
		return false;

	return true;
}