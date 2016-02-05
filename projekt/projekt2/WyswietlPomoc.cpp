#include <iostream>
#include "WyswietlPomoc.h"
using namespace std;

void WyswietlPomoc() {
	cout << "Firma spedycyjna przyjmuje towary w centrali, skad rozsyla do odbiorcow" << endl;
	cout << "w calym kraju. Trasy miedzy miastami sa zapisane w pliku w nastepujacy sposob:" << endl;
	cout << "<miasto> <miasto> <odleglosc>" << endl << endl;
	cout << "W wyniku dzialania programu zostanie tworzony plik z trasami spedycyjnymi." << endl;
	cout << "Trasy spedycyjne maja najkrotsze mozliwe dlugosci." << endl << endl;
	cout << "Program uruchamiany jest z wykorzystaniem nastepujacych przelacznikow:" << endl;
	cout << "  -i    plik wejsciowy z drogami" << endl;
	cout << "  -o    plik wyjsciowy z trasami spedycyjnymi" << endl;
	cout << "  -s    nazwa miasta startowego, gdzie znajduje sie centrala" << endl;
}