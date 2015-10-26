// Patryk Sobieraj Teleinformatyka gr1 sekcja 1
#include <iostream>
#include <ctime>
#include <cmath>
using namespace std;
const int N = 20;
int tab[10];
int i, min, ind, max, tmp, wynik;

int main ()

{		srand(time(NULL));
		for (int i = 0; i < 10; ++i)
		{
				tab[i] = rand() % 20;
				cout << tab[i] << endl;
				wynik = tab[0];
		}

		min = tab[0];
		max = min;
		int pozycja;
		for (int i = 0; i<10; i++)
		{
			
			if (max < tab[i])
				max = tab[i];
			if (min > tab[i])
			{
				min = tab[i];
				pozycja = i;
			}
		}
		cout << "min: " << min << endl;
		cout << "max: " << max << endl;

		if (tab[0] != min)
			{
				 tmp = tab[pozycja];
				tab[pozycja] = tab[0];
				tab[0] = tmp;

				
				
				
		};

		for (i = 0; i < 10; i++)
			cout << tab[i] << endl;
			

		cout << "min: " << min << endl;
		cout << "max: " << max << endl;
		
		
		return 0;
	} 


















