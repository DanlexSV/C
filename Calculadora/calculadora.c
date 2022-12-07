#include <stdio.h>
#include <stdlib.h>

int suma(int num1, int num2){
	return num1 + num2;
}

int resta(int num1, int num2){
	return num1 - num2;
}

int dividir(int num1, int num2){
	return num1 / num2;
}

int multiplicar(int num1, int num2){
	return num1 * num2;
}

void calculadora(){

	int num1, num2;

	printf("Escribe un numero: \n");
	scanf("%i", &num1);
	printf("Escribe otro numero: \n");
	scanf("%i", &num2);
	
	printf("La suma es: %i",  suma(num1, num2));	
	printf("La resta es: %i",  resta(num1, num2));	
	printf("La division es: %i",  dividir(num1, num2));
	printf("La multiplicasion es: %i",  multiplicar(num1, num2));	

}

int main(){
	
	calculadora();
	return EXIT_SUCCESS;

}
