//Patryk Sobieraj Teleinformatyka gr 1 

// zamiana string - int
#include<iostream>
#include<sstream>

using namespace std;

int main() {

	string tekst;
		cin >> tekst;
	stringstream konwersja(tekst);
	int liczba;
	konwersja >> liczba;

	cout << liczba << endl;

	system("PAUSE");

}