#pragma once
#include "functii.h"

/*1. Subprogramul suma are doi parametri:
• n, prin care primește un număr natural din intervalul [0,109];
• s, prin care furnizează suma cifrelor impare distincte din scrierea acestuia.
Scrieți definiția completă a subprogramului.
Exemplu: dacă n=4713835, după apel s=16 (16=7+1+3+5), iar dacă n=48, după apel s=0. (10p.)*/
void solutia1() {

	int s = 0;

	suma(4713835,s);
	cout << s;
}

/*
2. Un cuvânt este prefix al unui alt cuvânt dacă se obține din acesta, prin eliminarea ultimelor sale litere.
Scrieți un program C/C++ care citește de la tastatură un număr natural n (n[2,20]) și apoi n cuvinte
distincte, fiecare fiind format din cel mult 20 de caractere, numai litere mici ale alfabetului englez.
La introducerea datelor, după fiecare cuvânt se tastează Enter. Programul afișează pe
ecran, separate prin câte un spațiu, cuvintele care îl au drept prefix pe ultimul cuvânt citit.
Dacă nu există astfel de cuvinte, se afișează pe ecran mesajul nu exista.
Exemplu: dacă n=6 și se citesc cuvintele alăturate, pe ecran se afișează
raita raid raion 
raita
grai
raid
raion
straie
rai*/
void solutia2() {

	char s[100][100] = { "raita", "grai","raid","raion","straie","rai"};
	prefix(6,s);

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