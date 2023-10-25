#pragma once
#include <iostream>
#include <fstream>

using namespace std;


/*1. Subprogramul divX are doi parametri, n și x, prin care primește câte un număr natural din intervalul
[2,50]. Subprogramul afișează pe ecran, în ordine descrescătoare, separate prin câte un spațiu,
primele n numere naturale nenule divizibile cu x.
Scrieți definiția completă a subprogramului.
Exemplu: dacă n=4 și x=15 în urma apelului se afișează numerele 60 45 30 15 (10p.)
*/
void divX(int n, int x)
{
	 int k = n * x;
	while (k >= x)
	{
		cout << k << ' ';
		k = k - x;
	}
}

/*
2. Scrieți un program C/C++ care citește de la tastatură un număr natural n (n[2,102]) și cele 2∙n
elemente ale unui tablou unidimensional, numere naturale din intervalul [1,109]. Programul afișează
pe ecran, separate prin câte un spațiu, primele n elemente ale tabloului, parcurse de la stânga la
dreapta, urmate de ultimele n elemente ale tabloului, parcurse de la dreapta la stânga.
Exemplu: pentru n=5 și tabloul (1,2,3,4,5,3,1,8,6,4) se afișează pe ecran numerele
1 2 3 4 5 4 6 8 1 3 
*/
void parcurgere(int v[100], int n)
{

	for (int i = 0; i < n; i++)
		cout << v[i] << " ";
	for (int i = 2 * n -1; i > n-1; i--)
		cout << v[i] << " ";

}

/*
3. Fișierul bac.in conține cel mult 106 numere naturale din intervalul [0,109], separate prin câte un
spațiu. Se cere să se afișeze pe ecran, în ordine descrescătoare, cele mai mari două numere de două
cifre distincte care NU se află în fișier. Numerele afișate sunt separate printr-un spațiu, iar dacă nu
există două astfel de numere, se afișează pe ecran mesajul nu exista. Proiectați un algoritm eficient
din punctul de vedere al timpului de executare.
Exemplu: dacă fișierul bac.in conține numerele 12 235 123 67 98 6 96 94 123 67 98 100
se afișează pe ecran, în această ordine, numerele 97 95.
a. Descrieți în limbaj natural algoritmul proiectat, justificând eficiența acestuia. (2p.)
b. Scrieți programul C/C++ corespunzător algoritmului proiectat. */
void desc() {
	ifstream f("bac.in");

	int v[100], k, x;
	int y, x1;
	for (x = 0; x <= 99; x++)v[x] = 0;
	while (f >> y)
		if (y >= 10 && y <= 99)v[y] = 1;
	k = 2;
	x = 98;
	while (x >= 10 && k >= 1)
	{
		if (v[x] == 0 && x / 10 != x % 10)
		{
			if (k == 2)x1 = x;
			k--;
		}
		x--;
	}
	if (k == 0)cout << x1;
	else cout << "nu exista";

}
