// Patryk Sobieraj Teleinformatyka gr1 sekcja 1
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <conio.h>
using namespace std;
const int N = 20;
int tab[20][20];
int i,j;

int main()
{		for (i = 1; i < 18; i++)
		for (j = 1; j < 18; j++)
		{
			tab[i][j] = i*j;
		}
cout << "|";

	
	for (i = 1; i < 17; i++)
		cout << setw(4) << hex << i;
		cout << " \n";
	for (i = 0; i < 80; i++)
			cout << "-";
	for (i = 1; i < 17; i++)
	for (j = 1; j < 17; j++)
		{
			if (j == 1)
			{
				cout << setw(4) << hex << i << "|";
			}
			else
				cout << setw(4) << hex << tab[i][j];
			if (j == 16) cout << "  \n";
		}
	return 0;
}