// Patryk Sobieraj, Teleinformatyka, gr.1 sekcja 1
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

float a, b, c, d, e, f, wx, wy, w, x, y;

int main()
{
	

	cout << " Podaj a :  \n";
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

	
	// w = ae - db              wx = ce - fb            wy = af - dc

	w = (a*e) - (b*d); 
	wx = (c*e) - (b*f);
	wy = (a*f) - (c*d);

	if (w != 0)
	{
		cout << "Wspolczynnik x  = "  << " ( " << c << " * " << e << " ) " << " - " << " ( " << b << " * " << f << " ) "  << " / " << " ( "  << a << " * " << e << " ) " << " - " << " ( " << b << " * " << d << " ) "<< " = " << wx / w << "\n";
		cout << "Wspolczynnik y  =  " << " ( " << a << " * " << f << " ) " << " - " << " ( " << c << " * " << d << " ) " << " / " << " ( "  << a << " * " << e << " ) " << " - " << " ( " <<  b << " * " << d << " ) " << " = " << wy / w << "\n";
	}
	else
		if (wx == 0 && wy == 0)
			cout << "Ten uklad ma nieskonczenie wiele rozwiazan";
		else
			cout << "Jest to uklad sprzeczny \n";


	

	return 0;
}