#include <iostream>
using namespace std;


struct ListElem

{

	int val;
	ListElem* next;
	

};


struct List
{

	ListElem* head;

};


void AddFront( List &lista, int b)
{

	//ListElem *pozycja = nullptr;
	lista.head = new ListElem{ b,lista.head };
	// head = pozycja;



};


void usuwanie(List& lista)
{
	ListElem* pozycja=lista.head;
	while (pozycja)
	{
		pozycja = pozycja->next;      // przesuwamy pozycje
		delete lista.head;					// usuwamy glowe
		lista.head = pozycja;
	}



};


void pokaz(List& lista)
{


	ListElem* pozycja=lista.head;
	while (pozycja != nullptr)   // wyswietlanie listy
	{
		cout << pozycja->val << endl;
		pozycja = pozycja->next;
	}

};

int main()
{

	

	ListElem* head = nullptr; // pusta

/*	head = new ListElem{ 5, nullptr };
	head->next = new ListElem{ 6, nullptr };
	head->next -> next = new ListElem{ 9, nullptr };
	head->next -> next -> next = new ListElem{ 10, nullptr };    */
	//ListElem* pozycja = head;

	
/*	while (pozycja)        // usuwanie elementow tablicy

	{

		pozycja = pozycja->next;      // przesuwamy pozycje
		delete head;					// usuwamy glowe
		head = pozycja;					//przypisanie glowy do pozycji

	} */
	List lista{ head };
	AddFront(lista, 5);
	AddFront(lista, 6);
	AddFront(lista, 10);
//	pozycja = head;
	pokaz(lista);
	usuwanie(lista);
	pokaz(lista);

/*	while (pozycja!= nullptr)   // wyswietlanie listy

	{
		
		cout << pozycja -> val << endl;
		pozycja = pozycja->next;
		
	}         */

	



}