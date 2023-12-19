#pragma once
#include "functii.h"


/*1. Subprogramul putere are trei parametri:
• n, prin care primește un număr natural din intervalul [1,109];
• d și p, prin care furnizează divizorul prim, d, care apare la cea mai mare putere, p, în descompunerea în
factori primi a lui n; dacă există mai mulți astfel de divizori se afișează cel mai mare dintre ei.
Scrieți definiția completă a subprogramului.
Exemplu: dacă n=10780, atunci, în urma apelului, d=7 şi p=2 (10780=2257211). (10p.)*/
void solutia1() {

	int d, p;
	putere(10780, d, p);
	cout << d << " " << p;

}

/*
Scrieţi un program C/C++ care citeşte de la tastatură două numere naturale din intervalul [2,20], n și
k, şi construieşte în memorie un tablou unidimensional cu n∙k elemente astfel: tabloul memorează un
şir crescător de termeni cu proprietatea că primul termen este k, fiecare valoare apare în şir de exact k
ori și oricare doi termeni alăturați au valori egale sau consecutive. Programul afişează pe ecran tabloul
construit, cu valorile separate prin câte un spaţiu.
Exemplu: dacă n=4 și k=3, se afişează pe ecran tabloul alăturat.
(10p.)
3 3 3 4 4 4 5 5 5 6 6 6*/
void solutia2() {

	generare(4, 3);

}

/*
3. Se consideră șirul 1, 1, 2, 5, 13, 34, 89, 233, 610 ....
definit astfel: f1=f2=1, fn=3∙fn-1-fn-2 (unde n este un număr natural n≥3):
Se citesc de la tastatură două numere naturale x și y (x≤y109), valorile a doi termeni aflați pe poziții
consecutive în şirul dat, şi se cere să se scrie în fişierul text bac.txt, în ordine descrescătoare,
separați prin câte un spațiu, toţi termenii şirului care sunt mai mici sau egali cu y. Proiectați un algoritm
eficient din punctul de vedere al memoriei utilizate şi al timpului de executare.
Exemplu: dacă se citesc numerele 89 233
fişierul bac.txt conţine numerele 233 89 34 13 5 2 1 1
*/
void solutia3() {
	afisare();
}
