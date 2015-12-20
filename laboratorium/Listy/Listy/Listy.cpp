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


void AddFront(List &lista, int b)
{

	//ListElem *pozycja = nullptr;
	lista.head = new ListElem{ b,lista.head };
	// head = pozycja;



};

/* void Addback(List lista, int b) {
;
if (!lista.head)
{
lista.head = new ListElem{ b, lista.head };
return;
}
else
auto poz = lista.head;
while (poz->next) {
poz = poz->next;
}
poz->next = new ListElem{ b, lista.head };


}; */



void usuwanie(List& lista)
{
	ListElem* pozycja = lista.head;
	while (pozycja)
	{
		pozycja = pozycja->next;      // przesuwamy pozycje
		delete lista.head;                                      // usuwamy glowe
		lista.head = pozycja;
	}



};


void sortdod(List& lista, int element, int rozmiar)
{
	AddFront(lista, element);
	ListElem* poz = lista.head;

	int* tab = new int[rozmiar];
	for (int i = 0; i < rozmiar; i++)
	{
		tab[i] = poz->val;
		poz = poz->next;
	}
	for (int i = 0; i < rozmiar; i++) {
		for (int j = 0; j < rozmiar - 1; j++) {

			if (tab[j] > tab[j + 1])
				swap(tab[j], tab[j + 1]);
		}
		poz = lista.head;
		for (int i = 0; i < rozmiar; i++)
		{
			poz->val = tab[i];
			poz = poz->next;
		}

	};
	delete[] tab;
}


void pokaz(List& lista)
{


	ListElem* pozycja = lista.head;
	while (pozycja != nullptr)   // wyswietlanie listy
	{
		cout << pozycja->val << endl;
		pozycja = pozycja->next;
	}

};




void rek(ListElem* head) {

	if (head)
	{
		rek(head->next);
		cout << head->val << " ";
	};



};


bool szukanie(List& lista, int znak)
{
	ListElem* pozycja = lista.head;
	while (pozycja)
	{
		if (pozycja->val == znak) return true;
		pozycja = pozycja->next;


	}
	return false;


};


void usuwanie(List& lista, int element)
{
	int licznik = 0;
	ListElem* pozycja = lista.head;
	ListElem* poprzedni = lista.head;
	ListElem* nastepny = lista.head;
	while (pozycja)
	{
		licznik++;

		if (pozycja->val == element) {

			nastepny = pozycja->next;
			delete lista.head;


		}


	}



};

// Napisz funkcje ktora dodaje do listy elementy w ten sposob ze sa one posortowane

int main()
{



	//ListElem* head = nullptr; // pusta

	/*      head = new ListElem{ 5, nullptr };
	head->next = new ListElem{ 6, nullptr };
	head->next -> next = new ListElem{ 9, nullptr };
	head->next -> next -> next = new ListElem{ 10, nullptr };    */
	//ListElem* pozycja = head;


	/*      while (pozycja)        // usuwanie elementow tablicy

	{

	pozycja = pozycja->next;      // przesuwamy pozycje
	delete head;                                    // usuwamy glowe
	head = pozycja;                                 //przypisanie glowy do pozycji

	} */


	List lista{ nullptr };
	for (int i = 1; i < 5; i++)
		AddFront(lista, i);
	//now(lista.head, i);
	//AddFront(lista, 6);
	//AddFront(lista, 10);
	//      pozycja = head;
	//pokaz(lista);
	//usuwanie(lista);
	pokaz(lista);
	sortdod(lista, 3, 10);
		//rek(lista.head);

		/*      while (pozycja!= nullptr)   // wyswietlanie listy

		{

		cout << pozycja -> val << endl;
		pozycja = pozycja->next;

		}         */





}