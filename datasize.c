#include <stdio.h>

int inc(int number){
	return number + 1;
}

int dec(int number){
	return number - 1;
}

int invoke_ctr(void){
	static ctr = 0;
	ctr++;
	return ctr;
}

int main(void){

	int a;
	int *b;
	b = &a;
	int **c;
	c = &b;

	int d[100];
	int *e[100];
	e[0]=&a;
	int (*f)[100];
	f = &d;

	int(*g)(int);
	g = inc;
	a = g(2);
	printf("2 incremented -> %d\n",a);

	int(*h[2])(int);
	h[0] = inc;
	h[1] = dec;

	int i = 0;
	for(i = 0; i < 10; ++i){
		(void)invoke_ctr();
	}
	printf("Invoking ctr: %d\n",invoke_ctr());

	// Incomplete definitions obviously.
	// makes the var read only.
	// Same
	int const m;
	const int n;
	
	// Reverse reading
	
	// p is const and it points to an int
	int * const p;
	// q points to an int that is constant
	const int * q;

	// Both const
	const int * const r;

	// Used when s can be changed outside the code
	// program should always eval and never use cached value.

	volatile int s;

	return 0;
}
