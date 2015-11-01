// Patryk Sobieraj Teleinformatyka gr1 sekcja 1
#include <iostream>
#include <ctime>
#include <cmath>
#include <conio.h>
using namespace std;
const int N = 15;
int tab[N];
int tmp, tmp1 = 0;

int main() 
{
	srand(time(NULL));
	cout << "                                   PRZED SORTOWANIEM       " << endl;
	for (int i = 0; i < N; i++) {
		tab[i] = rand() % 100;
		cout << tab[i] << endl;
	}
	cout << endl << endl;
	do {
		tmp = 0;
		for (int i = 0; i < 14; i++) {
			if (tab[i] > tab[i + 1]) {
				tmp = tmp + 1;
				tmp1 = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = tmp1;
				}
			}
	} while (tmp != 0);

	cout << "                                   PO SORTOWANIU      " << endl;
	for (int j = 0; j < N; j++) {
		cout << tab[j] << endl;
	}
	return 0;
}
	