#pragma once
#include "functii.h"

/*1. Subprogramul produs are doi parametri:
• n, prin care primește un număr natural (n[0,109]);
• p, prin care furnizează produsul cifrelor pare distincte din scrierea acestuia, sau -1 dacă nu există
astfel de cifre.
Scrieți definiția completă a subprogramului.
Exemplu: dacă n=1622325, după apel p=12 (12=6∙2), iar dacă n=122325, după apel p=2. (10p.)*/
void solutia1() {

	int p;
	produs(1622325, p);
	cout << p;
}

/*
2. Într-un text cu cel mult 102 caractere cuvintele sunt formate din litere mici ale alfabetului englez și sunt
separate prin câte un spațiu. Scrieți un program C/C++ care citește de la tastatură un text de tipul
menționat, pe care îl modifică în memorie, inserând cuvântul succes între oricare două cuvinte ale sale
care se termină cu aceeași literă. Cuvântul inserat este separat prin câte un spațiu de cuvintele vecine.
Textul transformat este afișat pe ecran, iar dacă nu există perechi de astfel de cuvinte, se afișează pe
ecran mesajul nu exista.
Exemplu: dacă textul citit este testez validez utilizez date corecte acum
se obține textul testez succes validez succes utilizez date succes corecte acum (10p.)*/
void solutia2() {

	char s[100] = "testez validez utilizez date corecte acum";
	inserat(s);
}

/*
3. Un șir format din cel puțin trei termeni formează o progresie aritmetică de rație r dacă diferența dintre
oricare termen al acestuia și cel aflat pe poziția consecutivă în șir este egală cu r.
Fișierul text bac.txt conține un șir de cel puțin trei și cel mult 106 numere întregi din intervalul
[-108,108]. Numerele sunt separate prin câte un spațiu. Se cere să se afișeze pe ecran rația unei
secvențe din șir cu număr maxim de termeni, secvență care formează o progresie aritmetică. Dacă
există mai multe astfel de secvențe de lungime maximă se afișează rația cea mai mare, iar dacă nu
există nicio astfel de secvență, se afișează pe ecran mesajul nu exista. Proiectați un algoritm eficient
din punctul de vedere al memoriei utilizate și al timpului de executare.
Exemplu: dacă fișierul conține numerele 4 9 14 19 18 17 8 5 3 1 -1 -3 -5 -7
pe ecran se afișează valoarea -2 (corespunzătoare secvenței 5 3 1 -1 -3 -5 -7).
a. Scrieți programul C/C++ corespunzător algoritmului proiectat.*/
void solutia3() {

	afisare();

}