#include <stdio.h>

int nod(int a, int b) {

	while (a != b && b != 0) {
		
		if (a >= b) {
			a = a % b;
		} else {
			b = b % a;
		}
	}

	return a + b;
}

int main()
{
	int a, b;
	scanf("%i", &a);
	scanf("%i", &b);

	printf("Наибольший общий делитель=%i", nod(a, b));

    return 0;
}