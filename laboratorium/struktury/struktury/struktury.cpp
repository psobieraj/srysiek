#include <iostream>
#include <string>
using namespace std;

struct complex {

	//char i = 'i';
	double rzecz;
	double uro;
	char znak;

};


void zespolona(struct complex odczyt) {

		cout << odczyt.rzecz << " + " << odczyt.uro << 'i' << endl;
	
}

complex zespolona2(double rzecz, double uro, char znak ) {

	complex oblicz;
	oblicz.rzecz = rzecz;
	oblicz.uro = uro;
	oblicz.znak = znak;
	return oblicz;
}

 complex dodaj(complex pierwsza, complex druga) {

	complex dodaj;
	dodaj.uro = pierwsza.uro + druga.uro;
	dodaj.rzecz = pierwsza.rzecz + druga.rzecz;

	if ((pierwsza.znak = '-') || ((druga.znak = '-'))
		if ((pierwsza.znak = '-') && ((druga.znak = '-'))
			dodaj.znak = '+';
		else dodaj.znak = '-';
	else dodaj.znak = '-';

} 




struct Inna
{
	int a, b;

};
struct Person
{
	string Name;
	int Age;

};


enum OpcjeGry { NowaGra=2, Zapisz=6};

int main()
{
	
/*	Person tab[10];
	Person Ala = { "Ala" , 24 };
	Ala.Age = 24;
	Ala.Name = "Ala";

	Person* person;
	person->Name;
	Person p2 = person1;   */

//	complex odczyt = {10,15};
//	zespolona (odczyt);
	cout << "Recz";
	double rzecz, uro = 0;

	complex oblicz;
	 oblicz = zespolona2(rzecz, uro, znak);
	 cout << oblicz.rzecz << oblicz.uro;




}