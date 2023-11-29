#pragma once
#include "functii.h"

/*1. Subprogramul nrfp are doi parametri:
• n, prin care primește un număr natural (n[2,105]);
• m, prin care furnizează numărul din intervalul închis [2,n] care are cei mai mulți factori primi; dacă
există mai multe numere cu această proprietate, subprogramul îl returnează pe cel mai mare dintre ele.
Scrieți definiția completă a subprogramului.
Exemplu: dacă n=100 atunci, în urma apelului, m=90. (10p.)*/
void solutia1() {
	int n = 100, m = 0;
	nrfp(n, m);

}

/*
2. Scrieți un program C/C++ care citește de la tastatură numărul natural n
(n[5,50]) și elementele unui tablou bidimensional cu n linii și n
coloane, numere naturale din intervalul [0,102]. Programul afișează pe
ecran suma numerelor din zona delimitată de cele două diagonale și
ultima coloană a tabloului, ca în exemplu.
Exemplu: pentru n=7 și tabloul alăturat, se afișează pe ecran 12.
(10p.)
1 2 3 4 5 5 6
7 8 9 0 3 1 2
4 6 8 0 1 1 3
8 6 3 6 2 4 7
5 7 9 2 2 5 8
1 4 7 0 5 3 6
9 2 5 8 5 9 1*/
void solutia2() {

	int a[10][10] = { 
		{1, 2, 3, 4, 5, 5, 6},
		{7, 8, 9, 0 ,3 ,1 ,2},
		{4, 6 ,8 ,0 ,1 ,1, 3},
		{8, 6 ,3 ,6 ,2, 4, 7},
		{5, 7, 9 ,2 ,2 ,5 ,8},
		{1, 4, 7, 0, 5 ,3, 6},
		{9, 2 ,5, 8, 5, 9 ,1} };
	int n = 7;

	generare(n,a);

}

/*
3. Fișierul bac.txt conține un șir de cel mult 106 numere naturale din intervalul [0,109].
Se cere să se determine și să se afișeze pe ecran, separate printr-un spațiu, ultimele două numere
impare (nu neapărat distincte) din șirul aflat în fișier, sau mesajul nu exista, dacă nu există două
astfel de numere. Proiectați un algoritm eficient din punctul de vedere al memoriei utilizate și al timpului
de executare.
Exemplu: dacă fișierul conține valorile 122 1635 628 1413 1647 900 3001 4252
se afișează pe ecran 1647 3001
a. Descrieți în limbaj natural algoritmul proiectat, justificând eficienț*/
void solutia3() {

	afisare();

}
