#pragma once
#include "functii.h"


/*1. Subprogramul suma are un singur parametru, n, prin care primește un număr natural (n[2,109]).
Subprogramul returnează suma divizorilor primi ai lui n. Scrieți definiția completă a subprogramului.
Exemplu: pentru n=12 subprogramul returnează 5 (divizorii primi ai lui 12 sunt 2 și 3). (10p.)*/
void solutia1() {

	cout << suma(12);
}

/*
2. Scrieți un program C/C++ care citește de la tastatură numere naturale: n (n[2,20]), k (k[1,n]) și
cele n elemente ale unui tablou unidimensional, numere din intervalul [0,109]. Programul transformă
tabloul în memorie, deplasând circular spre stânga, cu câte o poziție, primele k elemente, ca în
exemplu. Elementele tabloului obținut sunt afișate pe ecran, separate prin câte un spațiu.
Exemplu: pentru n=7, k=4 și tabloul (1,3,5,7,9,5,8) se obține tabloul (3,5,7,1,9,5,8).*/
void solutia2() {

	int n = 7, k = 4, a[100] = { 1,3,5,7,9,5,8 };

	interschimbare(n, k, a);

}

/*
3. Fișierul bac.in conține un șir de cel mult 106 numere naturale din intervalul [0,109], separate prin
câte un spațiu. Se cere să se afișeze pe ecran pozițiile din șir pe care se află termeni precedați de un
număr maxim de valori care au cifra unităților egală cu cifra unităților lor. Numerele afișate sunt separate
prin câte un spațiu. Proiectați un algoritm eficient din punctul de vedere al timpului de executare.
Exemplu: dacă fișierul bac.in conține numerele 112 12 5 25 88 15 2 19 32 179 35 621
pe ecran se afișează numerele de mai jos (termenii 32, respectiv 35 respectă proprietatea cerută):
9 11*/
void solutia3() {

	afisare();
}