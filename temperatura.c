#include <stdio.h>
int main(void) {
	int temperatura = 25;
	if (temperatura > 20) {
		printf("Temperatura por encima de 20 grados\n");
	}else {
		printf ("Temperatura por debajo de 20 grados\n");
	}
		
	printf("Temperatura: %d degrees \n", temperatura);
	return 0;
}
