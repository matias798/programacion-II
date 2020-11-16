#include <stdio.h>

int main()
{
	int numb1, numb2;
	int residuo, mcd;
	
	printf("Escribe el primer numero: ");
	scanf("%d", &numb1);
	
	printf("Escribe el segundo numero: ");
	scanf("%d", &numb2);
	
	do {
		residuo = numb1 % numb2;
		
		if (residuo != 0) {
			numb1 = numb2;
			numb2 = residuo;
			
		} else {
			mcd = numb2;
		}
		
	} while (residuo != 0);
	
	printf("\n El maximo comun divisor entre ambos es: %d\n", mcd);
	
	getchar();
	getchar();
	
	return 0;
}
