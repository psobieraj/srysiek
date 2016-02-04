#include <iostream>
#include <stdio.h>
#include<math.h>
#include <stdlib.h>
#include <time.h>
using namespace std;


struct Elem {
	int val; Elem*next;
};


void add(Elem**head, int val)
{
	Elem* tmp = new Elem;
	tmp -> val = val; tmp->next - *head;
	*head = tmp;
}

void print(Elem* e) {
	while(e)
	{
		cout << e->val << " ";
		e = e->next;
		
	}
}
// Zadanie 1
int main()

{
	Elem* head = NULL;
	add(&head, 7); 
	add(&head, 5);
	add(&head, 6);
	print(head);
}