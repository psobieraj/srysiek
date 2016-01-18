// Patryk Sobieraj
#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

struct Osoba
{
	int wiek;
	string imie;
	Osoba *next;

};

void Add(Osoba *&head, int wiek, const string& imie)
{

	//ListElem *pozycja = nullptr;
	head = new Osoba{ wiek, imie, head};
	// head = pozycja;



};

void pokaz(Osoba *&head)
{


	while (head)
	{
		cout << head->imie << " "
			<< head->wiek << "\n";
		head = head->next;
	}

};


void save(const string& file_name, Osoba* head) {

	


};



int main() {

	Osoba *head = nullptr;
	int wiek;
	string imie;
	
	Add( head, 23, "Jarek");
	Add(head, 18, "Patryk");
	pokaz(head);
	return 0;
}