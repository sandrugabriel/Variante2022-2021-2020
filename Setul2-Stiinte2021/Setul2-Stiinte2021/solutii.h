#pragma once
#include "functii.h"



/*1. Se citesc două numere naturale nenule, n și m, și se cere să se scrie numărul valorilor prime care apar la
aceeași putere atât în descompunerea în factori primi a lui n, cât și în descompunerea în factori primi a lui m.
Scrieți, în pseudocod, algoritmul de rezolvare a problemei enunțate.
Exemplu: dacă n=16500 și m=10780, atunci se scrie 2 (16500=2235311, 10780=2257211). (10p.)*/
void solutia1() {

	factori(16500,10780);

}

/*
2. Scrieți un program C/C++ care citește de la tastatură două numere naturale, n și k, (n∈[2,20],
k∈[1,n]), și construiește în memorie un tablou unidimensional cu n elemente, având proprietățile:
• al k-lea element are valoarea n;
• începând cu al k-lea element, spre stânga, elementele formează un șir strict descrescător de numere
consecutive, iar începând cu al k-lea element, spre dreapta, elementele formează tot un șir strict
descrescător de numere consecutive.
Programul afișează pe ecran tabloul construit, cu elementele separate prin câte un spațiu.
Exemplu: dacă n=10 și k=3 se afișează pe ecran tabloul 8 9 10 9 8 7 6 5 4 3 (10p.)
*/
void solutia2() {

	generare(10,3);
}

/*
3. Fișierul bac.in conține un șir de cel mult 106 numere întregi din intervalul [-109,109], separate prin
câte un spațiu. Cel puțin două numere din șir sunt pozitive.
Se cere să se afișeze pe ecran lungimea maximă a unei secvențe a șirului care începe și se încheie cu
câte un număr pozitiv. O secvență este formată din termeni aflați pe poziții consecutive în șir, iar
lungimea secvenței este egală cu numărul de termeni ai acesteia. Proiectați un algoritm eficient din
punctul de vedere al memoriei utilizate și al timpului de executare.
Exemplu: dacă fișierul conține numerele -15 -7 4 -7 21 -5 -200 -26 52 -24 -7 -9 -20
pe ecran se afișează 7 (corespunzător secvenței 4 -7 21 -5 -200 -26 52).
a. Descrieți în limbaj natural algoritmul proiectat, justificând eficiența acestuia. (2p.)
b. Scrieți programul C/C++ corespunzător algoritmului proiectat.*/
void solutia3() {

	secventa();

}


