﻿#pragma warning (disable : 4996)

#include <stdio.h>

#define ZADATAK 7

#if ZADATAK == 1
//Definirati funkciju koja prima kao parametar broj N, a vraca kao rezultat sumu od 1 do N.

int sumaDoN(int N);

void main()
{
	int N = 0; // Deklaracija i inicijalizcija

	while (N == 0 || N < 0)
	{
		printf("Unesi N: ");
		scanf("%d", &N);
		if (N == 0 || N < 0) printf("Krivo!!\n");
	}

	int suma = 0;
	suma = sumaDoN(N);

	printf("Suma od 1 do %d iznosi: %d\n", N, suma);

	system("PAUSE");
}

int sumaDoN(int N)
{
	int suma = 0;

	for (int i = 1; i <= N; ++i)
	{
		suma += i;
	}

	return suma;
}


#elif ZADATAK == 2
//Definirati funkciju koja prima kao parametar broj N, a vraca kao rezultat umnozak svih parnih brojeva od 1 do N.

int umnozakParnih(int N);

void main()
{
	int N = 0; // Deklaracija i inicijalizcija

	while (N == 0 || N < 0)
	{
		printf("Unesi N: ");
		scanf("%d", &N);
		if (N == 0 || N < 0) printf("Krivo!!\n");
	}

	int umnozak = 0;

	umnozak = umnozakParnih(N);

	printf("Umnozak parnih brojeva od 1 do %d iznosi: %d\n", N, umnozak);

	system("PAUSE");
}

int umnozakParnih(int N)
{
	int umnozak = 1;

	for (int i = 1; i <= N; ++i)
	{
		if (i % 2 == 0)
		{
			umnozak = umnozak * i;
		}
	}


	return umnozak;
}

#elif ZADATAK == 3
//Definirati funkciju koja prima broj N, a kao rezultat vraca sumu od 1 do N i umnozak svih parnih brojeva od 1 do N.

void sumaIUmnozak(int *arr, int N); // Deklaracija funkcije; da main() funkcija zna da postoji

void main()
{
	int N = 0; // Deklaracija i inicijalizcija
	
	while (N == 0 || N < 0)
	{
		printf("Unesi N: ");	
		scanf("%d", &N);
		if (N == 0 || N < 0) printf("Krivo!!\n");
	}

	int arr[2] = { 0, 1 }; // Deklaracija i inicijalizcija arraya od 2 elementa
	sumaIUmnozak(arr, N); // arr (ime varijable!) je pokazivac na prvi element (index 0)

	printf("\nSuma od 1 do %d iznosi: %d", N, arr[0]);
	printf("\nUmnozak parnih brojeva od 1 do %d iznosi: %d\n", N, arr[1]);

	system("PAUSE");
}

void sumaIUmnozak(int *arr, int N)
{
	for (int i = 1; i <= N; ++i)
	{
		*(arr) += i; // dereferenciranje pokazivaca sa * !! varijabla += 1 <==> varijabla = varijabla + 1 !!
		if (!(i % 2))
		{
			*(arr + 1) *= i; // pomicanje pokazivaca na sljedeci index i dereferenciranje sa * !! varijabla *= 1 <==> varijabla = varijabla * 1 !!
		}
	}
}

#elif ZADATAK == 4
//Definirati funkciju koja mjeri broj sekundi od pocetka nekog dogadjaja, 
//na nacin da je za zadani broj sekundi (long) potrebno vratiti koliko je proslo sati, 
//minuta i sekundi od pocetka tog dogadjaja.

void preracunajSekunde(int sekunde, int *arr);

void main()
{
	int sekunde = 0;

	while (sekunde == 0 || sekunde < 0)
	{
		printf("Unesi sekunde: ");
		scanf("%d", &sekunde);
		if (sekunde == 0 || sekunde < 0) printf("Krivo!!\n");
	}

	int arr[3] = { 0, 0, 0 };

	preracunajSekunde(sekunde, arr);

	printf("%d sekundi iznosi: %d sati, %d minuta i %d sekundi.\n", sekunde, *arr, *(arr + 1), *(arr + 2));

	system("PAUSE");
}

void preracunajSekunde(int sekunde, int *arr)
{
	*(arr) = sekunde / 3600;
	sekunde -= *(arr) * 3600;
	*(arr + 1) = sekunde / 60;
	*(arr + 2) = sekunde % 60;
}

#elif ZADATAK == 5
//Definirati funkciju za punjenje niza random brojevima između 17 i 87. Napraviti funkciju za ispis niza.
//Koristiti razlicite nacine implementacije funkcije i poziva funkcije.


//rand() % (max_number + 1 - minimum_number) + minimum_number
//rand() % (87 + 1 - 17) + 17

#include <time.h>
#include <stdlib.h>

void napuniPolje(int *arr); //1. nacin
void ispisiPolje(int arr[]); //2. nacin

int main()
{
	srand(time(NULL));
	int arr[7] = { 0 };

	int input = -1;

	while (input != 0)
	{
		napuniPolje(arr);
		ispisiPolje(&arr[0]);
		printf("Ponovi? 1 - da, 0 - ne\n");
		scanf("%d", &input);
	}

	system("PAUSE");
}

void napuniPolje(int *arr)
{
	for (int i = 0; i < 7; ++i)
	{
		*(arr + i) = rand() % (87 + 1 - 17) + 17;
	}
}
void ispisiPolje(int arr[])
{
	for (int i = 0; i < 7; ++i)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

#elif ZADATAK == 6
//to sama vec mozes :p

#elif ZADATAK == 7
//Učitati prirodni broj n i alocirati memoriju za niz integera veličine n. 
//Napuniti niz sa slučajnim brojevima između 1 i 10. 
//Proširiti niz za 10 mjesta, i napuniti ostatak niza sa slučajnim brojevima od 100-200

//rand() % (max_number + 1 - minimum_number) + minimum_number
//rand() % (10 + 1 - 1) + 1
//rand() % (200 + 1 - 100) + 100

#include <time.h>
#include <stdlib.h>

void main()
{
	srand(time(NULL));

	int N = 0; // Deklaracija i inicijalizcija

	while (N == 0 || N < 0)
	{
		printf("Unesi N: ");
		scanf("%d", &N);
		if (N == 0 || N < 0) printf("Krivo!!\n");
	}

	int *arr;

	arr = calloc(N, sizeof(int)); // Mogli smo koristit i arr = malloc(N * sizeof(int)); no calloc odmah inicijalizira array s nulama

	for (int i = 0; i < N; ++i)
	{
		*(arr + i) = rand() % (10 + 1 - 1) + 1;
	}

	int newSize = N + 10;

	realloc(arr, newSize);

	for (int i = N; i < newSize; ++i)
	{
		*(arr + i) = rand() % (200 + 1 - 100) + 100;
	}

	for (int i = 0; i < newSize; ++i)
	{
		printf("%d ", *(arr + i));
	}

	if (arr)
	{
		printf("\nCleaning up...\n");
		free(&arr); // Oslobadja memoriju ( tzv. memory leak-ovi nastaju kada se ne oslobodi memorija i to nije ok )
		arr = NULL;
	}

	system("PAUSE");
}

#endif