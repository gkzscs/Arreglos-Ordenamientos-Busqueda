//Bibliotecas
#include<stdio.h> 
#include<stdlib.h>

//Declaramos nuestro vector, su tamano y los elementos que conforman este.
//char vector[52]={'a','b','c','d','e','f','g', 'h', 'i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','A','B','C','D','E','F','G', 'H', 'I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};

//Declaramos las funcion busca para buscar en que posicion se encuentran los elementos de nuestro vector.
char busca; 
//	int i; 

//Inicia programa
main () 
	{ //Abre main

	// Create a vector
	char vector[52];
	int n = 0;
	for (char ch = 'a'; ch <= 'z'; ++ch) vector[n++] = ch;
	for (char ch = 'A'; ch <= 'Z'; ++ch) vector[n++] = ch;

//Imprime en pantalla mensaje de INGRESA UNA LETRA Y - O CARACTER A BUSCAR
	printf("Ingresa una letra a buscar:\n"); 
		//Lee lo que hayamos ingresado por teclado
		scanf("%c", &busca);
		
//	for(i = 0; i<52; i++)
	for (int i = 0, len = sizeof(vector)/sizeof(vector[0]); i < len; ++i)
		{ //Abre for
		//Se encuentra el lugar donde se encuentra situada nuestra letra
		if (vector[i]==busca) printf("\nSe encontro coincidencia en el lugar: %d\n", i + 1); 
		}  //Cierra for
	} //Termina Programa 
