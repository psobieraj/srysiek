#include<stdio.h>
int foo(int, int);
void main() {


	int a = 1, b = 2, c = 4;
	/*1*/ a = foo(b, c);
	/*2*/ printf("%d %d %d  \n", a, b, c);
	


}
int foo(int b, int c)
{

	b = b * 2;
	c = c - 3;
	return (b - c);

}
