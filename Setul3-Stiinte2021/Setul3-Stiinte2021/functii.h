﻿#pragma once
#include <iostream>
#include <fstream>

using namespace std;


/*1. Subprogramul suma are un singur parametru, n, prin care primește un număr natural (n[1,106]).
Subprogramul returnează suma divizorilor pozitivi ai lui n care nu sunt primi.
Scrieți definiția completă a subprogramului.
Exemplu: pentru n=12 subprogramul returnează 23 (23=1+4+6+12). (10p.)*/
int suma(int n) {

	int s = 0;

	for (int i = 1; i <= n; i++) {

		if (n % i == 0) {
			int nr = n / i;
			int semn = 0;
			for (int k = 2; k <= nr / 2; k++) {
				if (nr % k == 0) semn = 1;
			}

			if (semn == 1 || nr == 1) {
				s += nr;
			}
		}

	}

	return s;
}

/*2. O persoană poate rezerva mai multe locuri într-o sală de spectacole, dar cel mult câte unul în aceeași
jumătate a unui rând. Configurația primului rând al sălii este memorată ca un tablou unidimensional, în
care fiecare element corespunde câte unui loc, în ordine de la stânga la dreapta. Locurile libere sunt
notate cu 0, iar cele rezervate sunt notate cu numere naturale nenule, astfel încât toate locurile
rezervate de o persoană sunt notate cu același număr, iar cele rezervate de persoane distincte sunt
notate cu numere distincte.
Scrieți un program C/C++ care citește de la tastatură un număr natural n (n[2,20]), apoi 2∙n
numere naturale din intervalul [0,400], elemente ale tabloului unidimensional reprezentând
configurația primului rând al sălii. Programul verifică dacă există persoane care au obținut locuri atât în
jumătatea din stânga, cât și în jumătatea din dreapta a acestui rând, și afișează pe ecran numerele cu
care sunt notate aceste locuri, ca în exemplu. Numerele sunt afișate într-o ordine oarecare, separate
prin câte un spațiu, iar dacă nu există astfel de locuri se afișează pe ecran mesajul nu exista.
Exemplu: pentru n=5 și tabloul (7,0,5,0,2,0,2,1,5,3) se afișează pe ecran, nu neapărat în
această ordine, numerele 2 5 (10p.)*/
void separare(int n, int v[100]) {

	int ok = 0;

	for (int i = 0; i < n; i++) {
		for(int j=n;j<2*n;j++)
			if (v[i] == v[j] && v[i] != 0) {
				ok = 1;
				cout << v[i] << " ";
			}
	}

	if (ok == 0) cout << "nu exista";
}

/*
3. Fișierul bac.in conține un șir de cel mult 106 numere naturale din intervalul [10,109], separate prin
câte un spațiu. Se cere să se afișeze pe ecran toate valorile lui z cu proprietatea că în șir se află un
număr maxim de termeni cu cifra zecilor egală cu z. Cifrele afișate sunt separate prin câte un spațiu.
Proiectați un algoritm eficient din punctul de vedere al timpului de executare.
Exemplu: dacă fișierul conține numerele 726 378 98 177 20 49 128 859 679 251
pe ecran se afișează cifrele de mai jos (sunt câte 3 termeni care au cifra zecilor 2, respectiv 7):
2 7
a. Descrieți în limbaj natural algoritmul proiectat, justificând eficiența acestuia.*/
void afisare() {

	int x = 0, maxi = 0;
	int v[10]{};
	ifstream f("bac.in");

	while (f >> x)
	{
		v[x / 10 % 10]++;
		if (v[x / 10 % 10] > maxi) maxi = v[x / 10 % 10];
	}

	for (x = 0; x <= 9; x++) if (v[x]== maxi) cout << x << " ";

	f.close();
}

