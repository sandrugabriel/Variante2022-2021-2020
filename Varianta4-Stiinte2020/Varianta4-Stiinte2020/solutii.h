#pragma once
#include "functii.h"

/*1. Două numere a și b sunt numite generatoare ale unui număr natural n dacă a∙b+[a/b]=n, unde s-a notat
cu [c] partea întreagă a numărului real c.
Se citește un număr natural n (n≥2) și se cere să se afișeze pe ecran toate perechile distincte de numere
naturale cu proprietatea că sunt generatoare ale lui n și că primul număr din pereche este par. Numerele din
fiecare pereche sunt separate prin simbolul minus (-), iar perechile sunt separate prin câte un spațiu. Dacă
nu există astfel de perechi, se scrie mesajul nu exista. Scrieţi, în pseudocod, algoritmul de rezolvare a
problemei enunțate.
Exemplu: dacă n=2020 se afișează pe ecran
2-1010 4-505 10-202 20-101 96-21 200-10 606-3 808-2 1010-1 (10p.)*/
void solutia1() {


}

/*
2. Scrieţi un program C/C++ care citeşte de la tastatură un număr natural, n (n [2,20]), şi cele n elemente
ale unui tablou unidimensional, numere naturale din mulţimea {0,1}. Programul afişează pe ecran numărul
de perechi de elemente egal depărtate de extremitățile tabloului care sunt complementare. Două elemente
sunt complementare dacă suma lor este 1: 0 este complementar lui 1 și 1 este complementar lui 0.
Exemplu: dacă n=10, și tabloul (1,0,1,1,0,0,0,1,1,1), se afişează pe ecran 2. (10p.)*/
void solutia2() {
	int v[100] = { 1,0,1,1,0,0,0,1,1,1 };
	cout << ctComp(10,v);
}

/*
3. Fişierul bac.txt conţine, în ordine descrescătoare, cel puţin două şi cel mult 106 numere naturale
din intervalul [0,109], separate prin câte un spaţiu. Se cere să se afişeze pe ecran, în ordine strict
descrescătoare, separate prin câte un spaţiu, numai numerele care apar în fişier o singură dată. Dacă
nu există niciun astfel de număr, se afișează pe ecran mesajul nu exista. Proiectați un algoritm
eficient din punctul de vedere al memoriei utilizate şi al timpului de executare.
Exemplu: dacă fişierul conţine numerele 100 100 50 50 50 49 16 12 12 12 10 9 9 7
pe ecran se afişează, în această ordine, numerele 49 16 10 7
*/
void solutia3() {
	afisare();
}