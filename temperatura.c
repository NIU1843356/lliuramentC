#include <stdio.h>
int main(void) {
	int temperatura = 25;

	float fahren = (temperatura*9)/5+32;
	printf("Temperatura: %d degrees \nFahrenheit: %.1f degrees\n", temperatura, fahren);

	if (temperatura > 20) {
		printf("High temperature\n");
	}else {
		printf ("Low temperature\n");
	}
		

	return 0;
}
