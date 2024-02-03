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
Scrieți un program C/C++ care citește de la tastatură numere naturale: n (n[2,20]) și cele n
elemente ale unui tablou unidimensional, numere din intervalul [0,109]. Programul transformă tabloul
în memorie, inserând numărul 2020 între oricare două elemente cu aceeași paritate din șirul citit.
Elementele tabloului obținut sunt afișate pe ecran, separate prin câte un spațiu, iar dacă nu există
perechi de astfel de elemente, se afișează pe ecran mesajul nu exista.
Exemplu: pentru n=8 și tabloul (1,3,5,8,16,35,8,20)
se obține tabloul (1,2020,3,2020,5,8,2020,16,35,8,2020,20)*/
void solutia2() {

	int v[100] = { 1,3,5,8,16,35,8,20 }, n = 8;
	inserat(v,n);
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