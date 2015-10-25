// Patryk Sobieraj Teleinformatyka gr1 sekcja 1
#include <iostream>
#include <ctime>
#include <cmath>
using namespace std;
int n, i, wybor1, wybor2, licznik, proba;
double srednia, najw, najm, s,z, podstawa, liczba, odchylenie, sumator;
double l = 1;
int k = 1;
int wynik;
int start, stop,wykladnik, dzielnik=0;

int main()

{
// Pierwsze zadanie (Wypisanie n liczb)

	/* cout << "Podaj ile wynosi Twoje n : " ;
	cin >> n;
	for (i = 1 ;i <= n;i++)
		cout << i << endl; */

// Drugie zadanie ( wypisanie n liczb od konca )

/* cout << "\n" << "Podaj ile wynosi Twoje n : ";
		cin >> n;
		for (int i = n; i >= 1; i--)
		{
			cout << i << "\n";
		} */

// Trzecie zadanie ( wypisanie liczb podzielnych przez dzielnik)

	/*	cout << " Podaj start \n";
		cin >> start;
		cout << " Podaj stop \n";
		cin >> stop;
		cout << " Podaj dzielnik liczb \n";
		cin >> dzielnik;
		for (i = start; i < stop; i++ )
		{
			if ((i % dzielnik) == 0)
			{
				cout << " Liczba podzielne przez Twoj dzielnik to : " << i << endl;
			}
		} */

// Czwarte zadanie ( podnoszeni liczby do danej potegi)

/* cout << "Wprowadz podstawe : ";
	cin >> podstawa;
	cout << "\n" << "Wprowadz wykladnik : ";
	cin >> wykladnik;
	z = 1;
	for (int i = 1; 1; i++)
	{
		z = z * podstawa;

		if (i == wykladnik)
		{
			break;
		}
	}
 cout << "Twoja liczba wynosi : "  << z << " \n"; */

// Piate zadanie ( sprawdzenie czy podana przez uzytkownika liczba jest pierwsza czy zlozona)
 /*cout << "Podaj Twoja liczbe naturalna : ";
 cin >> n;
 if (n == 0)
 { 
	 cout << "Podana przez Ciebie liczba nie ma zadnych dzielnikow \n";
 }
 else if (n == 1)
 { 
	 cout << " Podana przez Ciebie liczba, nie jest liczba pierwsza ani zlozona \n"; 
 }
 else if (n < 1)
 { 
	 cout << "Podana przez Ciebie liczba nie jest liczba naturalna \n"; 
 }
 else
 { int max = n - 1;
 for (int k = 2; k < max; k++)
 { if (n%k == 0) {
					cout  << "Podana przez Ciebie liczba jest liczba zlozona \n";
					return 0;
				 }
					else
						{
						 k++;
						}  
 }
 cout << "Podana przez Ciebie liczba jest liczba pierwsza \n";
 } */

// Szoste zadanie ( Losowanie za pomoca do ... while)
	
		/*cout << "Witaj, pomyslalem liczba z przedzialu 1-20 \n";
		srand(time(NULL));
		int liczba = rand() % 20 + 1;
		do {
			cin >> proba;
			if (proba < liczba) cout << "podaj wieksza liczbe \n";
			if (proba > liczba) cout << "podaj mniejsza liczbe \n";
			} while (proba != liczba); cout << "gratulacje, zgadles \n"; */

// Siodme zadanie ( Losowanie za pomoca while)

	/* cout << "Witaj, pomyslalem liczba z przedzialu 1-20 \n";
	srand(time(NULL));
	int liczba = rand() % 20+ 1;
	while (proba != liczba)
	{
		cin >> proba;

		if (proba == liczba)
		{
			cout << "gratulacje, zgadles ! \n";
		}
		else if (proba < liczba)
		{
			cout << "podaj wieksza liczbe \n";
		}
		else if (proba > liczba)
		{
			cout << "podaj mniejsza liczbe \n";
		}
	} */

// Osme zadanie ( losowanie za pomoca for)

 	/* cout << "Witaj, pomyslalem liczba z przedzialu 1-20 \n";
	srand(time(NULL));
	int liczba = rand() % 20 + 1;
	for (int i = 1; i++;)
	{
		cin >> proba;
		if (proba == liczba) { cout << " gratulacje, zgadles \n";
							   break;
							 }
		else if (proba < liczba) { cout << "Podaj wieksza liczbe \n"; }
		else if (proba > liczba) { cout << "Podaj mniejsza iczbe \n"; }
	} */

//Dziewiate zadanie ( losowanie z ograniczeniem do 5 prob )

  /* cout << "Witaj, pomyslalem liczba z przedzialu 1-20 \n \n";
		 srand(time(NULL));
		 int liczba = rand() % 20 + 1;
		 cout << "Na odgadniecie liczby masz 5 prob " << endl << endl; ;
		 for (int i = 1; i <= 5; i++)
		 {

			 cin >> proba;
			 if (proba < liczba) cout << "podaj wieksza liczbe, to jest Twoja " << i << " powtorka \n" << endl;
			 if (proba > liczba) cout << "podaj mniejsza liczbe, to jest Twoja  " << i << " powtorka \n " << endl;
			 if (proba == liczba) cout << "gratulacje, zgadles za  " << i << " razem \n \n" << endl;
			 else if (i == 5) {
				 cout << "Wykorzystales 5 szans,  nie udalo Ci sie odgadnac \n";
				 //system("pause");
				 break;
				 
			 }
		 } */

// Program dziesiaty ( Podanie ilosci wprowadzonych liczb, wykazanie liczby najmniejszej, najwiekszej oraz sredniej )

/* cout  << "Wprowadz liczbe :  ";
cin >> liczba;
s = liczba;
najm = liczba;
najw = liczba;
cout << "Czy to byla ostatnia liczba ? (Tak - 1       Nie - 0 )   " ;
cin >> wybor2;
if (wybor2 == 0)
{
	do
	{
		cout << "Wprowadz liczbe : ";
		cin >> z;
		s = s + z;
		l++;
		srednia = s / l;
		

		if (najm <= z) {}

		else if (najw > z)
		{najm = z;}

		if (najw >= z) {}

		else if (najw < z)
		{najw = z;}

		liczba = z;
		sumator = sumator + pow(liczba, 2);
		cout << "Czy to byla ostatnia liczba ? (Tak - 1       Nie - 0 )   " ;
		cin >> wybor1;
	} while (wybor1 == 0);
	odchylenie = sqrt(sumator / l - pow(srednia, 2));

	cout << endl << endl << "                    PODSUMOWANIE           " << endl << endl;
	cout << "Ilosc wprowadzonych liczb - " << l << endl;
	cout << "Srednia wprowadzonych liczb - " << srednia << endl;
	cout << "Najmniejsza z wprowadzonych liczb - " << najm << endl;
	cout << "Najwieksza z wprowadzonych liczb- " << najw << endl;
	cout << "Odchylenie standardowe wprowadzonych liczb wynosi " << odchylenie << endl;
	
}
else if (wybor2 == 1)
{
	srednia = liczba;
	najm = liczba;
	najw = liczba;
	odchylenie = sqrt(sumator / l - pow(srednia, 2));
	cout << endl << endl << "                   PODSUMOWANIE           " << endl << endl;
	cout << "Ilosc wprowadzonych liczb - " << l << endl;
	cout << "Srednia wprowadzonych liczb - " << srednia << endl;
	cout << "Najmniejsza z wprowadzonych liczb - " << najm << endl;
	cout << "Najwieksza z wprowadzonych liczb- " << najw << endl; 
	cout << "Odchylenie standardowe wprowadzonych liczb wynosi " << odchylenie << endl;
	
} */

return 0;


	}
