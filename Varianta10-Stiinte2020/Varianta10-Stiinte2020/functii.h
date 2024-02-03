#pragma once
#include <iostream>
#include <fstream>

using namespace std;


/*1. Subprogramul produs are doi parametri:
• n, prin care primește un număr natural (n[0,109]);
• p, prin care furnizează produsul cifrelor pare distincte din scrierea acestuia, sau -1 dacă nu există
astfel de cifre.
Scrieți definiția completă a subprogramului.
Exemplu: dacă n=1622325, după apel p=12 (12=6∙2), iar dacă n=122325, după apel p=2. (10p.)*/
void produs(int n, int& p) {

    int f[10]{};

    while (n != 0)
    {
        f[n % 10]++;
        n /= 10;
    }
    p = 1;
    for (int i = 2; i <= 9; i += 2) {
        if (f[i] != 0) p *= i;
    }

}

/*
Scrieți un program C/C++ care citește de la tastatură numere naturale: n (n[2,20]) și cele n
elemente ale unui tablou unidimensional, numere din intervalul [0,109]. Programul transformă tabloul
în memorie, inserând numărul 2020 între oricare două elemente cu aceeași paritate din șirul citit.
Elementele tabloului obținut sunt afișate pe ecran, separate prin câte un spațiu, iar dacă nu există
perechi de astfel de elemente, se afișează pe ecran mesajul nu exista.
Exemplu: pentru n=8 și tabloul (1,3,5,8,16,35,8,20)
se obține tabloul (1,2020,3,2020,5,8,2020,16,35,8,2020,20)*/
void inserat(int v[100], int &n) {
    int dim = n;
    for (int i = 0; i < dim; i++) {

        if (v[i] % 2 == v[i + 1] % 2) {
            for (int k = dim-1; k >= i+1;k--) {
                v[k+1] = v[k];
            }
            n++;
            v[i + 1] = 2020;
        }
    }
    
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
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
void afisare() {

    ifstream f("bac.txt");
    int v[100]{};
    int n = 0;
    int x;
    while (f >> x)
    {
        v[n] = x;
        n++;
    }

    int max = 0;
    double maxRa = 0;

    for (int i = 0; i < n - 2; i++) {
        for (int j = i + 1; j < n - 1; j++) {
            int curent = 2;
            double curentRa = v[j] - v[i];

            for (int k = j + 1; k < n; k++) {
                if (v[k] - v[j] == curentRa) {
                    curent++;
                    j = k;
                }
                else {
                    break;
                }
            }

            if (curent > max || (curent == max && curentRa > maxRa)) {
                max = curent;
                maxRa = curentRa;
            }
        }
    }

    if (max >= 3) {
        cout << maxRa << endl;
    }
    else {
        cout << "Nu exista." << endl;
    }

}
