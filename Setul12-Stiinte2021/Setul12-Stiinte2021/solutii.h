#pragma once
#include "functii.h"

/*1. Un număr y este numit frate mai mare al unui număr x dacă x și y au același număr de cifre și fiecare cifră a
lui y se poate obține din cifra aflată pe aceeași poziție în x adunând la aceasta valoarea 1.
Se citește un număr natural, x, și se cere să se afișeze un număr y cu proprietatea că este fratele mai mare
al lui x, sau -1 dacă nu se poate obține un astfel de număr.
Scrieți, în pseudocod, algoritmul de rezolvare a problemei enunțate.
Exemplu: dacă x=1027, după apel y=2138, iar dacă x=9027, după apel y=-1. (10p.)*/
void solutia1() {

	int y;
	frate(9027, y);
	cout << y;

}

/*
2. Scrieți un program C/C++ care citește de la tastatură numere naturale: n (n[2,20]), k (k[1,n]) și
n numere din intervalul [0,109], elemente ale unui tablou unidimensional. Programul transformă
tabloul în memorie, deplasând circular spre dreapta, cu câte o poziție, primele k elemente ale tabloului,
ca în exemplu. Elementele tabloului obținut sunt afișate pe ecran, separate prin câte un spațiu.
Exemplu: pentru n=5, k=3 și tabloul (2,4,6,8,0) se obține tabloul (6,2,4,8,0). (10p.)*/
void solutia2() {

	int n = 5, k = 3, v[100] = { 2,4,6,8,0 };

	permutare(n, k, v);

}

/*
3. Fișierul bac.txt conține un șir de cel mult 105 numere naturale distincte din intervalul [1,109],
separate prin câte un spațiu.
Se cere să se afișeze pe ecran poziția pe care ar ocupa-o primul termen al șirului aflat în fișier în șirul
format cu aceleași valori, ordonat descrescător. Proiectați un algoritm eficient din punctul de vedere al
memoriei utilizate și al timpului de executare.
Exemplu: dacă fișierul conține numerele 15 7 16 17 6 4 21
se afișează pe ecran valoarea 4
(valoarea 15 se află pe a patra poziție în șirul 21, 17, 16, 15, 7, 6, 4).*/
void solutia3() {

	afisare();

}





