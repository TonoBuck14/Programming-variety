#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE (42)

struct nodo{
	char valor;
	struct nodo* hijos[SIZE];
	int terminal; //valor 0 o 1 para determinar si es caracter final
	};

struct nodo* crearNodo(char valor){
	struct nodo* nuevoNodo = calloc(1, sizeof(struct nodo));
	nuevoNodo->valor = valor;
	nuevoNodo->terminal = 0;
	for(int i=0; i<SIZE; i++){
		nuevoNodo->hijos[i]=NULL;
		}
	return nuevoNodo;
	
	}

void insertarNodo(struct nodo* raiz, char* s){
	struct nodo* act = raiz;
	for(int i = 0; i<strlen(s); i++){
		char caracter = s[i];
		if(caracter>=97 && caracter<=122){
			if(act->hijos[caracter-97]==NULL){
				struct nodo* nuevoNodo = crearNodo(caracter);
				act->hijos[caracter-97] = nuevoNodo;
				}
				act = act->hijos[caracter-97];
			}
		else if(caracter>=65 && caracter<=90){
			if(act->hijos[caracter-65]==NULL){
				struct nodo* nuevoNodo = crearNodo(caracter);
				act->hijos[caracter-65] = nuevoNodo;
				}
				act = act->hijos[caracter-65];
			
			}
		else{
			printf("Caracter invalido: %c\n", caracter);
			return;
			}
			
		act->terminal = 1;
	}
}

int buscarPalabra(struct nodo* raiz, char* s){
	struct nodo* act = raiz;
	for(int i = 0; i<strlen(s); i++){
		char caracter = s[i];
		if(caracter>=97 && caracter<=122){
			if(act->hijos[caracter-97]==NULL){
				return 0;
				}
				act = act->hijos[caracter-97];
			}
		else if(caracter>=65 && caracter<=90){
			if(act->hijos[caracter-65]==NULL){
				return 0;
				}
				act = act->hijos[caracter-65];
			}
		
		}
		
	return 1;
	}

int main(){
	
	
	//char x = 'b';
	//printf("%d", x-97);
	struct nodo* raiz = crearNodo('\0');
	/*
	char p[] = "carmelo";
	char p2[] = "abcd";
	char p3[] = "baca";
	char p4[] = "cbd";
	char p5[] = "Daniel";
	char p6[] = "david";
	insertarNodo(raiz, p);
	insertarNodo(raiz, p2);
	insertarNodo(raiz, p3);
	insertarNodo(raiz, p4);
	insertarNodo(raiz, p5);
	insertarNodo(raiz, p6);
	
	if(buscarPalabra(raiz, "david")){
		printf(":) aca esta\n");
		}
	else{
		printf("Mierda\n");
		}
	*/
	char palabramala[] = "Qu?.";
	insertarNodo(raiz, palabramala);
	return 0;
	}
