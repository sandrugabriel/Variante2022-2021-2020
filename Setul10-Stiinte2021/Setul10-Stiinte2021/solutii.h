﻿#pragma once
#include "functii.h"

/*Numerele naturale x și y sunt numite în armonie dacă suma lor aparține intervalului deschis definit de
suma divizorilor lui x, respectiv suma divizorilor lui y.
Se citesc două numere naturale nenule, x şi y, și se cere să se scrie valoarea 1, dacă x și y sunt în
armonie, sau valoarea 0 în caz contrar.
Scrieți, în pseudocod, algoritmul de rezolvare a problemei enunțate.
Exemplu: dacă x=8, iar y=12 se scrie 1 (1+2+4+8=15, 1+2+4+6+12=25, iar 8+12=20(15,25)), iar
dacă x=8 și y=13, se scrie 0 (1+2+4+8=15, 1+13=14, iar 8+13=21(14,15)). (10p.)*/
void solutia1() {
	cout << verificare(8, 12);
}

/*
2. O valoare filtrează un șir dacă există doi termeni ai șirului care au acea valoare, unul fiind în prima
jumătate a șirului, iar celălalt în a doua jumătate a șirului.
Scrieți un program C/C++ care citește de la tastatură numere naturale din intervalul [2,20]: n și un șir
de 2∙n numere, elemente ale unui tablou unidimensional, cu proprietatea că atât primele n, cât și
ultimele n sunt distincte. Programul afișează pe ecran valorile care pot filtra șirul, într-o ordine oarecare,
separate prin câte un spațiu, sau mesajul nu exista, dacă nu există astfel de valori.
Exemplu: pentru n=4 și tabloul (4,5,7,2,2,6,4,7) se afișează pe ecran, nu neapărat în această
ordine, numerele 2 4 7 (10p.)*/
void solutia2() {
	int v[100] = { 4,5,7,2,2,6,4,7 };
	filtrare(4, v);
}

/*
3. Fişierul bac.txt conține un șir de cel mult 105 numere naturale distincte din intervalul [1,109],
separate prin câte un spaţiu.
Se cere să se afişeze pe ecran poziţia pe care ar ocupa-o primul termen al șirului aflat în fişier în şirul
format cu aceleași valori, ordonat crescător. Proiectați un algoritm eficient din punctul de vedere al
memoriei utilizate şi al timpului de executare.
Exemplu: dacă fişierul conţine numerele 15 7 16 17 6 4
se afişează pe ecran valoarea 4
(valoarea 15 se află pe a patra poziție în şirul 4, 6, 7, 15, 16, 17)*/
void solutia3() {
	afisare();
}