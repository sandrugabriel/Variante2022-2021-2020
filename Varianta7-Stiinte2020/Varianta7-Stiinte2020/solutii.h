#pragma once
#include "functii.h"

/*1. Subprogramul putere are doi parametri, n și p, prin care primește câte un număr natural (n[2,109],
p[0,109]). Subprogramul returnează puterea la care apare numărul p în descompunerea în factori
primi a lui n, dacă p este număr prim, sau valoarea -1 în caz contrar.
Scrieți definiția completă a subprogramului.
Exemplu: dacă n=80 și p=2, subprogramul returnează numărul 4 (80=245). (10p.)*/
void solutia1() {

	cout << putere(80, 2);

}

/*
2. O valoare k polarizează un șir dacă există doi termeni ai șirului care au acea valoare, unul fiind în prima
jumătate a șirului, iar celălalt în a doua jumătate a șirului.
Scrieți un program C/C++ care citește de la tastatură numere naturale din intervalul [1,20]: n și un șir
de 2∙n numere, elemente ale unui tablou unidimensional, cu proprietatea că atât primele n, cât și
ultimele n sunt distincte. Programul afișează pe ecran valorile care pot polariza șirul citit.
Valorile sunt afișate într-o ordine oarecare, separate prin câte un spațiu, iar dacă nu există astfel de
valori se afișează pe ecran mesajul nepolarizat.
Exemplu: pentru n=4 și tabloul (3,2,6,5,5,1,6,8) se afișează pe ecran, nu neapărat în această
ordine, numerele 5 6 */
void solutia2() {

	int v[100] = { 3,2,6,5,5,1,6,8 };
	pasteurizat(v, 4);
}

/*
3. Fișierul bac.txt conține un șir de cel mult 106 numere întregi din intervalul [-103,103], separate prin
câte un spațiu. Se cere să se afișeze pe ecran suma minimă obținută adunând numere de pe poziții
consecutive în șirul aflat în fișier. Proiectați un algoritm eficient din punctul de vedere al memoriei
utilizate și al timpului de executare.
Exemplu: dacă fișierul bac.txt conține valorile -4 6 -7 -2 1 -4 10 3 -9 -12 2
se afișează pe ecran numărul -19
*/
void solutia3() {
	afisare();

}

