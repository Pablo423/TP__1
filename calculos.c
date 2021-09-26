#include "calculos.h"

int pedirPrimerNumero(void){
	int primerNumeroIngresado;

	printf("Ingrese el primer numero: ");
	scanf("%i", &primerNumeroIngresado);

	return primerNumeroIngresado;
}

int pedirSegundoNumero(void){
	int segundoNumeroIngresado;

	printf("Ingrese el segundo numero: ");
	scanf("%i", &segundoNumeroIngresado);

	return segundoNumeroIngresado;
}

int calcularSuma(int primerNumero, int segundoNumero)
{
	int suma;

	suma = primerNumero + segundoNumero;

	return suma;
}

int calcularResta(int primerNumero, int segundoNumero){
	int resta;

	resta = primerNumero - segundoNumero;

	return resta;
}

int calcularMultiplicacion(int primerNumero, int segundoNumero){
	int multiplicar;

	multiplicar = primerNumero * segundoNumero;

	return multiplicar;
}


int calcularDivision(int primerNumero, int segundoNumero){
	int dividir;

	dividir = primerNumero / segundoNumero;

	return dividir;
}

int calcularFactorial(int primerNumeroIngresado){
	int factorial;
	if(primerNumeroIngresado == 0){
		factorial = 1;
	}
	else{
		factorial = primerNumeroIngresado * calcularFactorial(primerNumeroIngresado - 1);
	}
	return factorial;
}
