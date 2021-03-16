#include "user_interface.h"
#include "arithmetic.h"

int main(){
	int a = 10;
	int b = 2;

	int c = add(10, 2);
	int d = subtract(10, 2);

	display(c);
	display(d);

	return 0;
}