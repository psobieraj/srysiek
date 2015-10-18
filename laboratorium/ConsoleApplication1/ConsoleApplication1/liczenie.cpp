// Patryk Sobieraj, Teleinformatyka, gr.1 sekcja 1
#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int main(int argc, char**argv)

{
	double a,b,c,d,x1,x2=0;
	cout << "Podaj a\n";
	cin >> a;
	cout << "Podaj b\n";
	cin >> b;
	cout << "Podaj c\n";
	cin >> c;
	d = (b*b) -(4 * a * c);
	cout << " Twoja delta to : " << d << endl;

	if (d < 0)

	{

		cout << "Rozwiazania urojone to  " << " x1 : " << -b / (2 * a) << "+" << sqrt(-d) / (2 * a) << "i"  << " x2 : " << -b / (2 * a) << "-" << sqrt(-d) / (2 * a) << "i" << endl;


	}

	if (d == 0)

	{
		cout << "Miejsce zerowe wynosi  :  " << -b / (2 * a);

	}

	if (d > 0)

	{

		cout << "Twoje miejsca zerowe wynosza : " << "  x1 = " << (-b - sqrt(d)) / (2 * a) << "  x2 = " << (-b + sqrt(d)) / (2 * a) << endl;


	}





	return 0;













}