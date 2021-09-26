#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
#include "calculos.h"

/*
int pedirPrimerNumero(void);
int pedirSegundoNumero(void);
int calcularSuma(int primerNumero, int segundoNumero);
int calcularResta(int primerNumero, int segundoNumero);
int calcularMultiplicacion(int primerNumero, int segundoNumero);
int calcularDivision(int primerNumero, int segundoNumero);
int calcularFactorial(int primerNumeroIngresado);*/

int main() {
	int opcion;
	int primerNumeroIngresado;
	int segundoNumeroIngresado;
	int suma;
	int resta;
	int multiplicar;
	int dividir;
	int factorial;
	setbuf(stdout, NULL);

	do{
		printf("1. Suma\n");
		printf("2. Resta\n");
		printf("3. Multiplicacion\n");
		printf("4. Division\n");
		printf("5. Factorial\n");
		printf("6. Salir\n");
		printf("Que operacion desea realizar");
		scanf("%i", &opcion);


		switch(opcion)
		{
		case 1:
			primerNumeroIngresado = pedirPrimerNumero();
			segundoNumeroIngresado = pedirSegundoNumero();
			suma = calcularSuma(primerNumeroIngresado, segundoNumeroIngresado);
			printf("La suma de los dos numeros es: %d\n\n", suma);
		break;
		case 2:
			primerNumeroIngresado = pedirPrimerNumero();
			segundoNumeroIngresado = pedirSegundoNumero();
			resta = calcularResta(primerNumeroIngresado, segundoNumeroIngresado);
			printf("La resta de los dos numeros es: %d\n\n", resta);
		break;
		case 3:
			primerNumeroIngresado = pedirPrimerNumero();
			segundoNumeroIngresado = pedirSegundoNumero();
			multiplicar = calcularMultiplicacion(primerNumeroIngresado, segundoNumeroIngresado);
			printf("La multiplicacion de los dos numeros es: %d\n\n", multiplicar);
		break;
		case 4:
			primerNumeroIngresado = pedirPrimerNumero();
			segundoNumeroIngresado = pedirSegundoNumero();
			dividir = calcularDivision(primerNumeroIngresado, segundoNumeroIngresado);
			printf("La division de los dos numeros es: %d\n\n", dividir);
		break;
		case 5:
			primerNumeroIngresado = pedirPrimerNumero();
			factorial = calcularFactorial(primerNumeroIngresado);
			printf("El factorial del numero es: %d\n\n", factorial);
		break;
		case 6:
			printf("Usted ha salido del programa");
		break;
		default:
			printf("Error. Ingrese la opcion correcta\n");
		}
	}while(opcion !=6);
	return 0;
}
/*
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
}*/




