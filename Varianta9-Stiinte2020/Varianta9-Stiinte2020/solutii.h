#pragma once
#include "functii.h"

/*1. Subprogramul suma are doi parametri:
• n, prin care primește un număr natural din intervalul [0,109];
• s, prin care furnizează suma cifrelor impare distincte din scrierea acestuia.
Scrieți definiția completă a subprogramului.
Exemplu: dacă n=4713835, după apel s=16 (16=7+1+3+5), iar dacă n=48, după apel s=0. (10p.)*/
void solutia1() {

	int s = 0;

	suma(4713835, s);
	cout << s;
}

/*
2. Scrieți un program C/C++ care citește de la tastatură un număr natural n (n[2,20]) și un șir de n
numere naturale din intervalul [1,109], elemente ale unui tablou unidimensional. Programul afișează
pe ecran, separate prin câte un spațiu, numerele din șir care sunt strict mai mari decât ultimul număr
citit. Dacă nu există astfel de numere, se afișează pe ecran mesajul nu exista.
Exemplu: pentru n=6 și tabloul (20,102,30,50,2101,40), pe ecran se afișează
102 50 2101 */
void solutia2() {

	int v[100] = { 20,102,30,50,2101,40 };
	afisMaxi(6, v);

}

/*
3. Numim k-secvență într-un șir de numere naturale, o succesiune de termeni aflați pe poziții consecutive
în șir, cu proprietatea că sunt divizibili cu numărul natural nenul k. Lungimea secvenței este egală cu
numărul de termeni ai săi.
Fișierul bac.txt conține numere naturale din intervalul [0,109]: pe prima linie un număr nenul k, iar
pe a doua linie un șir de cel mult 106 numere, separate prin câte un spațiu. Cel puțin un termen din șir
este divizibil cu k. Se cere să se afișeze pe ecran două valori, separate printr-un spațiu, reprezentând
lungimea maximă a unei k-secvențe din șirul aflat în fișier, respectiv numărul de astfel de secvențe.
Proiectați un algoritm eficient din punctul de vedere al memoriei utilizate și al timpului de executare.
Exemplu: dacă fișierul are conținutul alăturat,
se afișează 4 2
5
2 10 5 20 21 0 10 60 15 3 9 20 20 5 45
a. Scrieți programul C/C++ corespunzător algoritmului proiectat.*/
void solutia3() {

	afisare();

}
