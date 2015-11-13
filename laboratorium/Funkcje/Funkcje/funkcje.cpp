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

void odleglosc(int x1, int x2, int y1, int y2) {


	cout << "Odleglosc miedzy punktami A i B wynosi : " << sqrt(pow((x2 - x1),2) + pow((y2 - y1),2))<<endl;


}

void wypelnianie(int tab[]) {

	srand(time(NULL));
	for (int i = 0; i < 10; ++i)
	{
		tab[i] = rand() % 20;
		cout  <<  tab[i] << " " ;

	}
	cout << endl;

}

void uklad(float a, float b, float c, float d, float e, float f) {
		// w = ae - db              wx = ce - fb            wy = af - dc
	float w,x,y,wx, wy;
		w = (a*e) - (b*d);
		wx = (c*e) - (b*f);
		wy = (a*f) - (c*d);

		if (w != 0)
		{
			cout << "Wspolczynnik x  = " << " ( " << c << " * " << e << " ) " << " - " << " ( " << b << " * " << f << " ) " << " / " << " ( " << a << " * " << e << " ) " << " - " << " ( " << b << " * " << d << " ) " << " = " << wx / w << "\n";
			cout << "Wspolczynnik y  =  " << " ( " << a << " * " << f << " ) " << " - " << " ( " << c << " * " << d << " ) " << " / " << " ( " << a << " * " << e << " ) " << " - " << " ( " << b << " * " << d << " ) " << " = " << wy / w << "\n";
		}
		else
			if (wx == 0 && wy == 0)
				cout << "Ten uklad ma nieskonczenie wiele rozwiazan";
			else
				cout << "Jest to uklad sprzeczny \n";
}








int main(){
	//double a, b;
	float liczba, a, b, c, d, e, f, wx, wy, w, x, y;
	int pierwsza, druga, n, wykladnik,x1,x2,y1,y2,i, tablica[10];;
	const int N = 10;


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
/*  cout << "Podaj liczbe ktora chcesz podniesc do potegi " << endl;
	cin >> liczba;
	cout << "Podaj wykladnik" << endl;
	cin >> wykladnik;
	cout << "Twoja liczba podniesiona do danej potegi wynosi : " << potega(liczba, wykladnik)<< endl; */


	//------------------------------ O D L E G L O S C   D W O C H   P U N K T O W ------------------------------

/*	cout << "Podaj x1 dla punktu A :" << " ";
	cin >> x1;
	cout << "Podaj y1 dla punktu A :" << " ";
	cin >> y1;
	cout << "Podaj x2 dla punktu B :" << " ";
	cin >> x2;
	cout << "Podaj y2 dla punktu B :" << " ";
	cin >> y2;
	odleglosc(x1, y1, x2, y2); */
	
// ------------- W Y P E L N I A N I E      T A B L I C Y -----------------------------

/*	wypelnianie(tablica);  */
	
// ------------------------------ U K L A D   R O W N A N ------------------------------


/*	cout << " Podaj a :  \n";
	cin >> a;
	cout << " Podaj b :  \n";
	cin >> b;
	cout << " Podaj c :  \n";
	cin >> c;
	cout << " Podaj d :  \n";
	cin >> d;
	cout << " Podaj e :  \n";
	cin >> e;
	cout << " Podaj f :  \n";
	cin >> f;

	uklad(a, b, c, d, e, f);  */

	
	

	

	return 0;
}