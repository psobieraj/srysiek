// Patryk Sobieraj gr 1 Teleinformatyka
#include <iostream>
#include <string>
#include<sstream>
using namespace std;
int i = 0;
int liczba, a, b = 0;

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

	/*string nazwa("abc");
	char n[] = "aba"; // 4 znaki, bo jeszcze znak konca
	//cin >> nazwa; // nazwa tylko do spacji
	getline(cin, nazwa); // wyswietla nie tylko do bialego znaku
	string str2 = " albo nie ma";
	string str3 = str2; // string str3(str2) to samo, jest to kopia
	//cout << nazwa + str2 << endl;  // laczenie dwoch wyrazow
	cout << str2.substr(6, 3); // po 6 znaku wyswietla 3 znaki */

// ---------------------------------------------------------------------------------------------------------------

// ZADANIE 2
	// cout << argc << "   " << argv << endl;

// ---------------------------------------------------------------------------------------------------------------

// ZADANIE 3
/*	string pierwszy, drugi;
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

// ---------------------------------------------------------------------------------------------------------------

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

// ---------------------------------------------------------------------------------------------------------------

// ZADANIE 5

/*	 cout << "Podaj wyraz gdzie litery A zostana zamienione na Z" << endl;
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

// ---------------------------------------------------------------------------------------------------------------

// ZADANIE 6 3 pierwsze litery imienia i nazwiska

/*	string imie, nazwisko, ina;
	cout << imie << endl;
	cin >> imie;
	cout << nazwisko << endl;
	cin >> nazwisko;
	cout << imie.substr(0, 3);
	cout << ina.append(nazwisko, 0, 3) << endl; */

// ---------------------------------------------------------------------------------------------------------------

// ZADANIE 7 zamiana string na int
/*	cout << "Podaj liczbe" << endl;
	int liczba;
	cin >> liczba;
	string napis;
	char n;

while(liczba>0)
	{
	if (liczba % 10 != 0)
	 {
		n = '0'+liczba % 10;
		liczba = (liczba) / 10;
		napis = n+napis;
	}
   }
cout << napis << endl; */

// ---------------------------------------------------------------------------------------------------------------

// ZADANIE 7 Zamiana odwrotna
 /* cout << "Podaj liczbe" << endl;
int liczba;
cin >> liczba;
string napis;
char n;

while(liczba>0)
{
if (liczba % 10 != 0)
{
n = '0'+liczba % 10;
liczba = (liczba) / 10;
napis = napis + n;
}

}

cout << napis << endl; */

// ---------------------------------------------------------------------------------------------------------------



// ZADANIE 7  konwersja string na int II wariant

/*string tekst;
cin >> tekst;
stringstream konwersja(tekst);
int liczba;
konwersja >> liczba;

cout << liczba << endl;

system("PAUSE"); */

// ---------------------------------------------------------------------------------------------------------------


// ZAD 8 Ulepszenie zamiany 
/* cout << "Podaj liczbe" << endl;
cin >> liczba;
string napis;
char n;
cout<<"Podaj Podstawe"<<endl;
cin>>a;
while(liczba>0)
	{
	if (liczba % a != 0)
	{
		n = '0' + liczba % a;
		b = liczba%a;
		liczba = (liczba) / a;
		switch (b)
		{
	case 10:
		napis = 'A' + napis;
		break;
	case 11:
		napis = 'B' + napis;
		break;
	case 12:
		napis = 'C' + napis;
		break;
	case 13:
		napis = 'D' + napis;
		break;
	case 14:
		napis = 'E' + napis;
		break;
	case 15:
		napis = 'F' + napis;
		break;
			default:
					napis = n + napis;
		}
	}
} 

cout << napis; */


// ---------------------------------------------------------------------------------------------------------------

// ZAD 8 Ulepszenie zamiany stoi

/* cout << "Podaj liczbe" << endl;
cin >> liczba;
string napis;
char n;
cout<<"Podaj Podstawe"<<endl;
cin>>a;
while(liczba>0)
	{
	if (liczba % a != 0)
	{
	n = '0' + liczba % a;
	b = liczba%a;
	liczba = (liczba) / a;
	switch (b)
	{
	case 10:
		napis = +'A';
		break;
	case 11:
		napis = +'B';
		break;
	case 12:
		napis = +'C';
		break;
	case 13:
		napis = +'D';
		break;
	case 14:
		napis = +'E';
		break;
	case 15:
		napis = +'F';
		break;
	default:
		napis = napis + n;
	}
	}
}

	cout << napis; */

// ---------------------------------------------------------------------------------------------------------------

// ZAD 9 KALKULATOR
 /*cout << "Podaj pierwsza liczbe" << endl;
int liczba1, liczba2=0;
double wynik = 0;
char dzialanie;
cin >> liczba1;
cout << "Podaj dzialanie jakie bedziesz wykonywal  ( Do wyboru :  + - / * ^ )"<<endl;
cin >> dzialanie;
cout << "Podaj druga liczbe" << endl;
cin >> liczba2;
	switch (dzialanie)
	{
		case '+':
		{
			wynik = liczba1 + liczba2;
			break;
		}
		case '-':
		{

			wynik = liczba1 - liczba2;
			break;
		}
		case '*':
		{
			wynik = liczba1 * liczba2;
			break;
		}
		case '/':
		{
			wynik = liczba1 / liczba2;
			break;
		}
		case '^':
		{
			wynik = pow(liczba1,liczba2);
			break;
		}
	}
cout << "Wynik Twojego dzialania wynosi " << wynik << endl; */



// ---------------------------------------------------------------------------------------------------------------


// ZAD 10
/* cout<< "Podaj dzialanie do obliczenia    ( mozliwe operacje + - * / ^ )" << endl;
int  liczba1, liczba2 = 0;
int k;
double wynik = 0;
string rownanie, dzialanie, pierwszy, drugi;



getline(cin,rownanie);
size_t found = rownanie.find_first_of("0123456789+-*^/");
	while (found != string::npos)
	{
	pierwszy = pierwszy + rownanie[found];
	found = rownanie.find_first_of("0123456789+-*^/", found + 1);
	}
size_t pos = pierwszy.find_first_of("+-*^/");
 rownanie= pierwszy;
 drugi = pierwszy.substr(pos+1);
 pierwszy = pierwszy.substr(0);
 liczba1 = stoi(pierwszy,nullptr,10);
 liczba2 = stoi(drugi,nullptr,10);

		switch (pierwszy[pos])
		{
			case '+':
				{
				wynik = liczba1 + liczba2;
				break;
				}
			case '-':
				{
				wynik = liczba1 - liczba2;
				break;
				}
			case '*':
				{
				wynik = liczba1 * liczba2;
				break;
				}
			case '/':
				{
				wynik = liczba1 / liczba2;
				break;
				}
			case '^':
				{
				wynik = pow(liczba1, liczba2);
				break;
				}
		}
cout << "Wynik Twojego dzialania to " << wynik << endl;


// Sprawdzenie czy napis jest palindromem 
	bool x=true;
	k = pierwszy.length()-1;
		for (int i = 0;i < pierwszy.length();i++)
		{
		if (pierwszy[i] != pierwszy[k])
		x = false;	k--;
		}
		if (x==true)
			cout <<"Napis jest palindromem" <<   endl;
		else
			cout << "Napis nie jest palindromem " <<  endl; */



return 0;

}