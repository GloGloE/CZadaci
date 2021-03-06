﻿#pragma warning (disable : 4996)

#include <stdio.h>

#define ZADATAK 13
#define KOLOKVIJ 4

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

	//----
	//Prvi nacin - realociramo memoriju iz starog arraya u novi
	int *tmpPointer;

	tmpPointer = realloc(arr, newSize * sizeof(int));

	if (tmpPointer == NULL)
	{
	printf("\nError with reallocation\n");
	free(arr);
	exit(1);
	}
	else
	{
	arr = tmpPointer; //ako je sve ok, stari array koji smo imali sada pokazuje na novi array koji je zadrzao stare vrijednosti
	}
	//----

	//----
	//Drugi nacin - prosirujemo originalni array na novu velicinu
	//arr = realloc(arr, newSize * sizeof(int));
	//----

	for (int i = N; i < newSize; ++i)
	{
		*(arr + i) = rand() % (200 + 1 - 100) + 100;
	}

	for (int i = 0; i < newSize; ++i)
	{
		printf("%d ", *(arr + i));
	}

	printf("\nCleaning up...\n");
	free(arr); // Oslobadja memoriju ( tzv. memory leak-ovi nastaju kada se ne oslobodi memorija i to nije ok )
	arr = NULL;

	system("PAUSE");
}

#elif ZADATAK == 8
//Napraviti funkciju za ispis stringa.

#include <string.h>
#include <stdlib.h>

void ispisStringa(char *);

void main()
{
	char *str;
	char stringBuffer[100 + 1] = { 0 };

	printf("Unesi poruku: ");
	fgets(stringBuffer, sizeof(stringBuffer), stdin); // Ucitava cijelu liniju, takodjer i space-ove i \n

	str = calloc(strlen(stringBuffer) + 1, sizeof(char)); // Alociramo duljinu linije +1 jer je upisan i \n znak
	strncat(str, stringBuffer, strlen(stringBuffer)); // kopiramo sadrzaj stringBuffera u str

	ispisStringa(str);
	printf("Ispis iz printfa: %s\n", str);

	free(str); // oslobodi memoriju
	str = NULL; // preusmjeri pokazivac na NULL jer je to good practice

	system("PAUSE");
}

void ispisStringa(char *string)
{
	printf("Ispis iz funkcije preko petlje: ");
	for (int i = 0; i < strlen(string); ++i)
	{
		printf("%c", *(string + i));
	}
	printf("\n");
}

#elif ZADATAK == 0 && KOLOKVIJ == 1

#include <math.h>

int zbrojiZnamenke(int prviBroj, int drugiBroj)
{
	int prvaZnamenka1 = prviBroj, prvaZnamenka2 = drugiBroj, zadnjaZnamenka1, zadnjaZnamenka2, zbrojPrvih, zbrojZadnjih, razlikaZnamenki = 0;

	while (prvaZnamenka1 > 10)
	{
		prvaZnamenka1 = prvaZnamenka1 / 10;
	}
	while (prvaZnamenka2 > 10)
	{
		prvaZnamenka2 = prvaZnamenka2 / 10;
	}

	zadnjaZnamenka1 = prviBroj % 10;
	zadnjaZnamenka2 = drugiBroj % 10;

	zbrojPrvih = prvaZnamenka1 + prvaZnamenka2;
	zbrojZadnjih = zadnjaZnamenka1 + zadnjaZnamenka2;

	razlikaZnamenki = zbrojPrvih - zbrojZadnjih;

	return razlikaZnamenki;
}

void main()
{
	int prvi, drugi, rezultat = 0;

	printf("Unesi prvi: ");
	scanf("%d", &prvi);

	printf("Unesi drugi: ");
	scanf("%d", &drugi);

	rezultat = zbrojiZnamenke(prvi, drugi);

	printf("Prvi broj: %d\nDrugi broj: %d\nRazlika zbroja prvih i zadnjih znamenki: %d\n", prvi, drugi, rezultat);

	system("PAUSE");
}

#elif ZADATAK == 0 && KOLOKVIJ == 2

#include <string.h>
#include <stdlib.h>

void izracunajBrojZnakovaDinamickogArraya(char *, int *);

void izracunajBrojZnakovaStatickogArraya(char *, int *);

void main()
{
	int arr[3] = { 0 };
	char stringBuffer[1000 + 1] = { 0 };
	char *str;

	printf("Unesi poruku:\n");
	fgets(stringBuffer, sizeof(stringBuffer), stdin); // Ucitava cijelu liniju, takodjer i space-ove i \n
	
	str = calloc(strlen(stringBuffer) + 1, sizeof(char)); // Alociramo duljinu linije +1 jer upisan i \n znak
	strncat(str, stringBuffer, strlen(stringBuffer)); // kopiramo sadrzaj stringBuffera u str

	izracunajBrojZnakovaDinamickogArraya(str, arr);
	printf("Broj svih znakova: %d\nBroj znakova bez razmaka i novog reda: %d\nBroj slova a: %d\n", *(arr), *(arr + 1), *(arr + 2) );
	
	arr[0] = 0; arr[1] = 0; arr[2] = 0;

	izracunajBrojZnakovaStatickogArraya(stringBuffer, arr);
	printf("\nBroj svih znakova: %d\nBroj znakova bez razmaka i novog reda: %d\nBroj slova a: %d\n", *(arr), *(arr + 1), *(arr + 2));


	free(str);
	str = NULL;

	system("PAUSE");
}

void izracunajBrojZnakovaDinamickogArraya(char *str, int *arr)
{
	*(arr) = strlen(str); //Broj svih znakova ukljucujuci razmake i \n
	for (int i = 0; i < strlen(str); ++i)
	{
		if (*(str + i) != ' ' && *(str + i) != '\n') //Broj svih znakova iskljucujuci razmake i novi red (\n)
		{
			(*(arr + 1))++;
		}
		if (*(str + i) == 'a') //Broj svih znakova 'a'
		{
			(*(arr + 2))++;
		}
	}
}

void izracunajBrojZnakovaStatickogArraya(char *str, int *arr)
{
	*(arr) = strlen(str); //Broj svih znakova ukljucujuci razmake i \n
	for (int i = 0; i < strlen(str); ++i)
	{
		if (*(str + i) != ' ' && *(str + i) != '\n') //Broj svih znakova iskljucujuci razmake i novi red (\n)
		{
			(*(arr + 1))++;
		}
		if (*(str + i) == 'a') //Broj svih znakova 'a'
		{
			(*(arr + 2))++;
		}
	}
}

#elif ZADATAK == 0 && KOLOKVIJ == 4

#include <stdlib.h>

struct Student
{
	char ime[20];
	char prezime[20];
	int ocjene[4];
	int brojpetardi;
};

void main()
{
	FILE *file = fopen("ocjene.txt", "r");

	char buffer[100];
	int numberOfStudents = 0;

	if (file)
	{
		while (fgets(buffer, 100, file))
		{
			numberOfStudents++;
		}
	}
	else
	{
		printf("Error!");
		exit(1);
	}

	struct Student *studenti = calloc(numberOfStudents, sizeof(struct Student));

	//printf("Number of students: %d\nSize of memory allocated students: %d\n", numberOfStudents);

	rewind(file);

	int counter = 0;
		
	while (fscanf(file, "%s %s %d%*c%d%*c%d%*c%d",
		studenti[counter].ime, studenti[counter].prezime,
		&studenti[counter].ocjene[0],
		&studenti[counter].ocjene[1],
		&studenti[counter].ocjene[2],
		&studenti[counter].ocjene[3]
		) != EOF)
	{
		studenti[counter].brojpetardi = 0;
		++counter;
	}

	for (int i = 0; i < numberOfStudents; ++i)
	{
		printf("%s %s Ocjene: %d %d %d %d\n", (studenti+i)->ime, (studenti + i)->prezime, 
			(studenti + i)->ocjene[0], 
			(studenti + i)->ocjene[1], 
			(studenti + i)->ocjene[2], 
			(studenti + i)->ocjene[3]
		);
		for (int j = 0; j < 4; ++j)
		{
			if (studenti[i].ocjene[j] == 5)
			{
				studenti[i].brojpetardi++;
			}
		}
	}

	int najboljiStudent = 0;
	for (int i = 1; i < numberOfStudents; ++i)
	{
		if (studenti[i].brojpetardi > studenti[najboljiStudent].brojpetardi)
		{
			najboljiStudent = i;
		}
	}

	char suff = 'a';
	if (studenti[najboljiStudent].brojpetardi > 1 && studenti[najboljiStudent].brojpetardi < 5)
	{
		suff = 'e';
	}
	else
	{
		suff = 'i';
	}

	printf("\nNajbolji student je: %s sa %d petard%c\n", studenti[najboljiStudent].prezime, studenti[najboljiStudent].brojpetardi, suff);

	
	fclose(file);
	free(studenti);
	system("PAUSE");
}

#elif ZADATAK == 13
//Napraviti funkciju koja zamjenjuje svaki znak u stringu sa njegovom hexadekadskom vrijednošću i kao rezultat vraća novonastali string.Zadan je prototip funkcije :
//char* zamijeniHex(char* str)

//Ana voli...
//0x41 0x6e 0x61 0x20 0x76 0x6f 0x6c 0x69 0x2e 0x2e 0x2e

#include <stdlib.h>
#include <string.h>

char* zamijeniHex(char* str);

void main()
{
	char s[256];
	scanf("%[^\n]", s); // Ucitaj liniju ali zanemari \n znak

	printf("%s\n", zamijeniHex(s)); // direkt ispis u printf() funkciji, jer nasa zamijeniHex() funkcija vraca string (pointer na char array)

	system("PAUSE");
}

char* zamijeniHex(char* str)
{
	char *rezultat = calloc(strlen(str) + 1, sizeof(char) * 5); // sizeof(char) == 1, znaci da jedan char zauzima jedno mjesto, mi prosirujemo to puta 5 jer hex vrijednost ima 4 chara i razmak
	char *tmp = rezultat; // koristimo tmp pokazivac jer ce u while() funkciji pokazivac biti na zadnjoj memorijskoj adresi sto je u teoriji prazno, te bi u tom slucaju return njega bio prazan string

	char hex[6] = { 0 };

	while (*str) // vrti petlju dok god vrijednost str nije NULL ili smece
	{
		sprintf(hex, "0x%2x ", *str); // 4 znaka i razmak
		strcpy(tmp, hex);
		tmp += 5; // pomakni pokazivac za 5 mjesta (jer ima 4 znaka i razmak:)
		str++; // pomakni pokazivac za 1 mjesto (1 znak)
	}

	return rezultat; // pokazivac rezultat i dalje pokazuje na prvu memorijsku lokaciju (index == 0)
}

#endif
