#pragma once
#include "functii.h"

/*1. Subprogramul prodprim are doi parametri:
• n, prin care primește un număr natural (n[2,109]);
• p, prin care furnizează produsul divizorilor primi ai lui n.
Scrieți definiția completă a subprogramului.
Exemplu: dacă n=2000, în urma apelului p=10, deoarece 2000=2453. (10p.)*/
void solutia1() {

	int p = 0;

	prodprim(2000, p);
	cout << p;
}

/*
2. Scrieți un program C/C++ care citește de la tastatură un număr natural n (n[2,20]) și cele n
elemente ale unui tablou unidimensional, numere naturale din intervalul [1,109]. Elementele tabloului
sunt numerotate începând cu 1. Programul afișează pe ecran toate elementele tabloului cu proprietatea
că sunt strict mai mici decât valoarea cu care sunt numerotate. Numerele afișate sunt separate prin câte
un spațiu, iar dacă nu există niciun astfel de număr, se afișează pe ecran mesajul nu exista.
Exemplu: pentru n=8 și tabloul (2,2,1,9,4,16,4,3)
se afișează pe ecran, nu neapărat în această ordine, numerele 1 4 4 3*/
void solutia2() {
	int v[100] = { 2,2,1,9,4,16,4,3 };
	strictMici(v,8);

}

/*
3. Se citesc de la tastatură două numere naturale din intervalul [1,81], p1 și p2, și se cere scrierea în
fișierul bac.out a tuturor numerelor naturale cu exact 7 cifre, pentru care produsul primelor două cifre
este egal cu p1, cele trei cifre din mijloc sunt egale între ele, iar produsul ultimelor două cifre este egal
cu p2. Numerele apar în fișier în ordine strict descrescătoare, fiecare pe câte o linie. Proiectați un
algoritm eficient din punctul de vedere al memoriei utilizate și al timpului de executare.
Exemplu: dacă p1=12, iar p2=8, atunci 2633324 și 3400018 sunt două dintre cele 160 de numere cu
proprietatea cerută (2∙6=3∙4=12 și 2∙4=1∙8=8).*/
void solutia3() {
	afisare(12, 45);
}
