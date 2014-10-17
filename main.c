#include <stdio.h>

int fact(int n) {
	if(n < 2) return n;
	return fact(n-1) * n;
}

int main(void) {
	printf("fact 4 = %d\n", fact(4));
	return 0;
}
