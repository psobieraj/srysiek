// Patryk Sobieraj, Teleinformatyka, gr.1 sekcja 1
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;
int proba;
int licznik = 0;



int main()
{
	cout << "Witaj, pomyslalem liczba z przedzialu 1-20 \n";
	srand(time(NULL));
	int liczba = rand() % 20 + 1;
	cout << liczba << endl;

	cout << "Sprobuj odgadnac jaka to liczba, masz 4 proby  " << endl;
	cin >> proba;

	if (proba == liczba)
	{
		cout << "Brawo, udalo sie !" << endl;

	}
	else {
		if (proba > liczba) cout << " Podales za duza liczbe " << endl;
		if (proba < liczba) cout << " Podales za mala liczbe " << endl;
		cin >> proba;
		if (proba == liczba) {
			cout << " Brawo, udalo sie ! " << endl;
		}
		else {
			if (proba > liczba) cout << " Podales za duza liczbe " << endl;
			if (proba < liczba) cout << " Podales za mala liczbe " << endl;
			cin >> proba;
			if (proba == liczba) {
				cout << " Brawo, udalo sie ! " << endl;
			}
			else {
				if (proba > liczba) cout << " Podales za duza liczbe " << endl;
				if (proba < liczba) cout << " Podales za mala liczbe " << endl;
				cin >> proba;
				if (proba == liczba) {
					cout << " Brawo, udalo sie ! " << endl;
				}
				else {
					cout << " Wykorzystales 4 proby, nie zgadles!" << endl;
				}


			}


		}
	}








	return 0;
}