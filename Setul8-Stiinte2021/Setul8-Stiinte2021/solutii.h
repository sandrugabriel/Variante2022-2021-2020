#pragma once
#include "functii.h"

/*1. Se citește un număr natural, n (n≥2), și se cere să se scrie numărul din intervalul închis [2,n] care are cei mai
mulți factori primi. Dacă există mai multe numere cu această proprietate, se scrie cel mai mare dintre ele.
Scrieți, în pseudocod, algoritmul de rezolvare a problemei enunțate.
Exemplu: dacă n=100, se scrie 90. (10p.)*/
void solutia1() {

	cout << fact(100);

}

/*
2. Scrieți un program C/C++ care citește de la tastatură numărul natural n (n[5,50]), cele n elemente
ale unui tablou unidimensional, numere naturale din intervalul [0,102], iar la final două numere
naturale din intervalul [1,n/2), x și y. Programul afișează pe ecran suma numerelor din zona
delimitată de primele x, respectiv de ultimele y elemente ale tabloului, ca în exemplu.
Exemplu: pentru n=9, tabloul (8,6,3,1,4,6,2,4,7), x=2 și y=3, se afișează pe ecran 14. (10p.)*/
void solutia2() {

	int n = 9, v[100] = { 8,6,3,1,4,6,2,4,7 }, x = 2, y = 3;

	cout << suma(n, v, x, y);

}

/*
3. Fișierul bac.txt conține un șir de cel mult 106 numere naturale din intervalul [0,109].
Se cere să se determine și să se afișeze pe ecran ultimul număr impar din șirul aflat în fișier, sau
mesajul nu exista, dacă nu există un astfel de număr. Proiectați un algoritm eficient din punctul de
vedere al memoriei utilizate și al timpului de executare.
Exemplu: dacă fișierul bac.txt conține valorile 122 1635 628 1413 1647 900 3001 4252
se afișează pe ecran 3001*/
void solutia3() {

	afisare();

}
