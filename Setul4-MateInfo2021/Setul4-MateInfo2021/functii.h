#pragma once
#include <iostream>
#include <fstream>
 
using namespace std;

/*1. Un joc online cu n jetoane poate fi jucat de un grup de k (k≥2) jucători, numai dacă toate cele n jetoane
pot fi distribuite în mod egal celor k jucători.
Subprogramul joc are un singur parametru, n, prin care primește un număr natural (n[2,104]),
reprezentând numărul de jetoane ale unui joc de tipul precizat. Subprogramul returnează numărul
valorilor distincte pe care le poate avea k pentru acest joc.
Scrieți definiția completă a subprogramului.
Exemplu: dacă n=12, atunci subprogramul returnează numărul 5 (cele 12 jetoane se pot distribui în
mod egal pentru o grupă de 2 jucători, de 3 jucători, de 4 jucători, de 6 jucători sau de 12 jucători).
(10p.)*/
int joc(int n) {

	int ct = 0;

	for (int i = 2; i <= n; i++) {
		if (n % i == 0) ct++;
	}

	return ct;
}

/*
2. Scrieţi un program C/C++ care citeşte de la tastatură numere naturale din intervalul [2,102]: m, n şi
elementele unui tablou bidimensional cu m linii şi n coloane. Programul afișează pe ecran, pentru fiecare
linie a sa, cea mai mare dintre valorile strict mai mici decât 21 memorate în aceasta, sau mesajul
nu exista, dacă nu există nicio astfel de valoare pe linia respectivă. Numerele, respectiv mesajele,
sunt afișate pe linii separate ale ecranului, în ordinea liniilor corespunzătoare din tablou.
Exemplu: pentru m=3, n=5 și tabloul alăturat se afişează pe ecran
16
nu exista
9 (10p.)
6 16 21 4 90
92 26 36 95 80
5 2 9 7 3*/
void strict(int n, int m, int a[100][100]) {

	for (int i = 0; i < n; i++) {
		int maxi = 0;
		for (int j = 0; j < m; j++) {

			if (a[i][j] >= maxi && a[i][j] < 21) maxi = a[i][j];

				
		}
		if (maxi != 0) cout << maxi << endl;
		else cout << "nu exista" << endl;

	}

}

/*
3. Fişierele bac1.txt și bac2.txt conţin numere naturale din intervalul [1,105]: fișierul bac1.txt
conține pe prima linie un număr n1, iar pe a doua linie un șir de n1 numere, iar fișierul bac2.txt
conține pe prima linie un număr n2, iar pe a doua linie un șir de n2 numere. Numerele aflate pe
aceeași linie a unui fișier sunt ordonate crescător și sunt separate prin câte un spațiu.
Se cere să se afișeze pe ecran, în ordine crescătoare, separate prin câte un spațiu, numerele divizibile
cu 5 care se găsesc doar în unul dintre șirurile aflate în cele două fișiere. Dacă nu există niciun astfel de
număr, se afișează pe ecran mesajul nu exista. Proiectați un algoritm eficient din punctul de vedere
al memoriei utilizate şi al timpului de executare.
Exemplu: dacă fişierul
bac1.txt conţine numerele
7
1 2 3 4 7 20 60
iar fişierul bac2.txt
conţine numerele
9
3 5 7 8 9 10 12 20 24
pe ecran se afișează, în această ordine, numerele 5 10 60.
a. Descrieți în limbaj natural algoritmul proiectat, justificând eficiența acestuia. */
void afisare() {

	ifstream f("bac1.txt");
	ifstream h("bac2.txt");

	int n1=0, n2=0, x=0, y=0, k=0;
	int i = 0, j = 0;
	f >> n1;
	h >> n2;

	f >> x; i++;
	h >> y; j++;

	while (i<= n1 && j<=n2)
	{
		if (x == y) {
			f >> x; i++;
			f >> y; j++;
		}

		while (x<y && i<=n1)
		{
			if (x % 5 == 0) {
				cout << x << " ";
				k++;
			}

			f >> x;
			i++;
		}

		while (y<x && j<=n2)
		{
			if (y % 5 == 0) {
				cout << y << " ";
				k++;
			}
			h >> y;
			j++;
		}

	}

	if(i<=n1)
		for (j = i; j <= n1; j++) {
			if (x % 5 == 0) {
				cout << x << " ";
				k++;
			}
			f >> x;
		}
	else
		if(j<=n2)
			for (i = j; i <= n2; i++) {
				if (y % 5 == 0) {
					cout << y << " ";
					k++;
				}
				h >> y;
			}
	if (k == 0) cout << "nu exista";
}



