// Patryk Sobieraj Teleinformatyka gr 1 
#include <iostream>
#include <iostream>
#include <ctime>
#include <cmath>
#include <conio.h>
#include <cstdlib>
using namespace std;



void dodawanie(double a, double b) {
	cout << "Suma podanych przez Ciebie liczb wynosi : " << a + b << endl;
}

void zamiana(int pierwsza, int druga) {
	int tmp;
	tmp = pierwsza;
	pierwsza = druga;
	druga = tmp;
	cout <<  "Po zamianie  L1 = " << pierwsza << " L2 = " << druga << endl;
}



int fibrek(int n)
{
	if (n<3)
		return 1;

	return fibrek(n - 2) + fibrek(n - 1);
}

void fibiter(int n)
{
	long long a = 0, b = 1;

	for (int i = 0; i<n; i++)
	{
		cout << b << " ";
		b += a; 
		a = b - a;
	}
}
float potega(float liczba, int wykladnik)
{
	float wynik = 1;
	if (wykladnik != 0);

	{
		for (int i = 0; i < wykladnik; i++)
		{
			wynik = wynik * liczba;

		}
	}
	return wynik;
}









int main(){
	double a, b;
	float liczba;
	int pierwsza, druga, n, wykladnik;


	// -------D O D A W A N I E ---------

	/* cout << "Podaj liczbe  a oraz b " << endl;
	cin >> a; 
	cin >> b;
	dodawanie(a, b); */

	// -------- Z A M I A N A    Z M I E N N Y C H -------------

	/* cout << "Podaj pierwsza i druga liczbe " << endl;
	cin >> pierwsza;
	cin >> druga;
	cout << "Przed zamiana L1 = " << pierwsza << " L2 = " << druga << endl;
	zamiana(pierwsza, druga); */

	// -------------- F I B O N A C C I     R E K U R E N C J A -------------
	
 /* cout << "Podaj nr wyrazu ciagu: ";
	cin >> n;
	cout << n << " wyraz ciagu ma wartosc " << fibrek(n) << endl; */


	// ----------- F I B O N A C C I        I T E R A C J A -------------
/*	cout << "Ile wyrazow ciagu Fibonacciego ma zostac wypisanych ? : ";
	cin >> n;
	fibiter(n); */
	
	// ----------------------------- P O T E G O W A N I E -------------------------
	cout << "Podaj liczbe ktora chcesz podniesc do potegi " << endl;
	cin >> liczba;
	cout << "Podaj wykladnik" << endl;
	cin >> wykladnik;

	cout << "Twoja liczba podniesiona do danej potegi wynosi : " << potega(liczba, wykladnik)<< endl;


	
	

	

	return 0;
}