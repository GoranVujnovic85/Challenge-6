
#include <stdlib.h>
#include "array_list.h"

int add(int element, int* niz, int* size)
{
	if(*size >= MAXSIZE)
	{
		return 1;
	}

	niz[*size] = element;
	(*size)++;

	return 0;
}

int delate(int indeks, int* niz, int* size)
{
	if(indeks < 0 || indeks >= *size)
	{
		return 1;
	}

	for(int i = indeks; i < *size - 1; i++)
	{
		niz[i] = niz[i+1];
		(*size)--;
	}
	return 0;
}

void print(int* niz, int* size)
{
	printf("Niz: ");
	for (int i = 0; i < *size; i++)
	{
		printf("%d ", niz[i]);
	}
	printf("\n");
}
