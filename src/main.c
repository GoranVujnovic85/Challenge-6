/*
 ============================================================================
 Name        : Challenge_20.c
 Author      : Goran Vujnovic
 Version     :
 Copyright   : Your copyright notice
 Description : zadatak 1:
               U array_list.c implementirati funkcije
               add - parametri funkcije: vrednost elementa koji se dodaje u niz, adresa niza.Funkcija dodaje element na kraj niza
                     funkcija vraca OK (0) ako je u redu, ERR (1) ako se dodaje na poziciju izvan velicine niza.
               delete - parametri funkcije: indeks elementa koji se brise, adresa niza. funkcija vraca 0 ako je element obrisan.              1 ako nema element na tom mestu (0 i 1 definisati kao makroe OK i ERR)
               print - parametri funkcije: adresa niza, funkcija ispisuje sve elemente niza.

               u array_list.h deklarisati prethodne funkcije

               u main.c pozvati implementirane funkcije i proveriti da li funkcionisu ispravno
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "array_list.h"


int main()
{
	int niz[MAXSIZE];

	int size = 0;

	add(10, niz, &size);
	add(15, niz, &size);
	add(19, niz, &size);

	print(niz, &size);


	delate(1, niz, &size);

	print(niz, &size);
	return 0;
}
