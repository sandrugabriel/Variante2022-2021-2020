#pragma once
#include "functii.h"

/*1. Două numere distincte a și b sunt numite d-fii ai unui număr natural n dacă a∙b=n.
Subprogramul fii are un singur parametru, n, prin care primește un număr natural (n[1,109]).
Subprogramul afișează pe ecran toate perechile distincte de numere naturale cu proprietatea că sunt d-fii ai
lui n. Fiecare pereche este afișată încadrată între paranteze rotunde, numerele din pereche fiind afișate în
ordine strict descrescătoare, separate printr-un spațiu. Scrieți definiția completă a subprogramului.
Exemplu: dacă n=12 se afișează pe ecran, nu neapărat în această ordine, (12 1)(6 2)(4 3)
iar dacă n=16 se afișează pe ecran (16 1)(8 2) (10p.)*/
void solutia1() {

	fii(12);
}

/*
2. Un text are cel mult 100 de caractere și este format din cuvinte şi numere, separate prin câte un spațiu.
Cuvintele sunt formate numai din litere ale alfabetului englez. Toate numerele sunt reale şi sunt formate
numai din parte întreagă sau din parte întreagă şi parte fracţionară, separate prin virgulă (,), numerele
negative fiind precedate de semnul minus (-).
Scrieţi un program C/C++ care citeşte de la tastatură textul, pe care îl transformă, eliminând din
componenţa sa toate numerele negative. Programul afişează apoi pe ecran textul obţinut.
Exemplu: pentru textul
2,7 minus 3,5 minus 2 egal 2,7 plus -3,5 plus -2 egal -0,2 rezultat
se va afişa pe ecran textul:
2,7 minus 3,5 minus 2 egal 2,7 plus plus egal rezultat (10p.)*/
void solutia2() {
	char s[100] = "2,7 minus 3,5 minus 2 egal 2,7 plus -3,5 plus -2 egal -0,2 rezultat";
	separare(s);
}

/*
3. Fişierul bac.in conţine un şir de numere naturale distincte, din intervalul [1,109]. Numerele din şir
sunt separate prin câte un spaţiu şi cel puţin trei dintre ele au penultima cifră 2 și ultima cifră 0.
Se cere să se afișeze pe ecran cele mai mari trei numere din şir cu proprietatea că au penultima cifră 2
și ultima cifră 0. Numerele determinate sunt afişate în ordine crescătoare, separate prin câte un spaţiu.
Proiectați un algoritm eficient din punctul de vedere al memoriei utilizate şi al timpului de executare.
Exemplu: dacă fişierul conţine numerele 9731 50 112 20 8 16 8520 3 2520 1520
pe ecran se vor afişa, în această ordine, numerele: 1520 2520 8520*/
void solutia3() {

	afisare();

}
