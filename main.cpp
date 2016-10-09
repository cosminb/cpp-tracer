#include <stdio.h>


class A {
public:
	void test ( ) {
		
	}
};

A a;


void foo( int );

void foo2(int i) {
	a.test();
	if ( i > 0 ) 
		foo( i );
}
void foo(int i) {
	printf("foo\n");
	
	if ( i > 0 ) 
		foo2( i -1 );
}


int main() {
	
	
	foo(5);
	
	return 0;
}
