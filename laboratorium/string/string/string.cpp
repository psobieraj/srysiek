// Patryk Sobieraj gr 1 Teleinformatyka
#include <iostream>
#include <string>
using namespace std;
int i = 0;

int main(int argc, char**argv)
{
	/* int opt;
	cin >> opt;
	switch (opt)
	{
	case 1:
		cout << "siema \n";
		break;
	case 2:
		cout << "siema 2 \n";
		break;
	} */

// ZADANIE 1	

	/* string nazwa("abc");
	char n[] = "aba"; // 4 znaki, bo jeszcze znak konca
	//cin >> nazwa; // nazwa tylko do spacji
	getline(cin, nazwa); // wyswietla nie tylko do bialego znaku
	string str2 = " albo nie ma";
	string str3 = str2; // string str3(str2) to samo, jest to kopia
	//cout << nazwa + str2 << endl;  // laczenie dwoch wyrazow
	cout << str2.substr(6, 3); // po 6 znaku wyswietla 3 znaki */

// ZADANIE 2
	// cout << argc << "   " << argv << endl;

// ZADANIE 3
	/* string pierwszy, drugi;
	int p1, p2 = 0;
	cout << " podaj pierwszy " << endl;
	cin >> pierwszy;
	cout << " podaj drugi " << endl;
	cin >> drugi;

	p1 = pierwszy.length();
	p2 = drugi.length();

	if (p1 > p2)

		cout << " Dluzszy wyraz to : " << pierwszy << endl;
	else
		cout << " Dluzszy wyraz to : " << drugi << endl; ; */

// ZADANIE 4

	/*string pierwszy, drugi;
	int p1, p2 = 0;
	cout << " podaj pierwszy " << endl;
	cin >> pierwszy;
	cout << " podaj drugi " << endl;
	cin >> drugi;

	
	if (pierwszy.compare(drugi) >0)

		cout << " Krotszy wyraz to : " << pierwszy << endl;
	else
		cout << " Krotszy wyraz to : " << drugi << endl; */

// ZADANIE 5

	/* cout << "Podaj wyraz gdzie litery A zostana zamienione na Z" << endl;
	string pierwszy;
	cin >> pierwszy;
	int n = pierwszy.length();
	char litera;
	for (int i = 0; i< n; i++)
	{
		if (pierwszy[i] == 'A')
		pierwszy[i] = 'Z';
		if (pierwszy[i] == 'a')
			pierwszy[i] = 'z'; 
	}
	
	cout << pierwszy << endl; */

// ZADANIE 6

	/* string imie, nazwisko, ina;
	cout << imie << endl;
	cin >> imie;
	cout << nazwisko << endl;
	cin >> nazwisko;
	cout << imie.substr(0, 3);
	cout << ina.append(nazwisko, 0, 3) << endl; */

// ZADANIE 7
	cout << " Podaj liczbe " << endl;
	int liczba;
	cin >> liczba;
	char n;
	string napis;
	//string zamiana = std::to_string(liczba);
	//cout << zamiana << "\n";

	
	for (i = 0; i < liczba; i++)
	{
		if (liczba % 10 != 0)
			n = '0' + liczba % 10;
		liczba = (liczba) / 10;
		napis = napis + n;
	}
	cout << napis << endl;
	return 0 ;

}