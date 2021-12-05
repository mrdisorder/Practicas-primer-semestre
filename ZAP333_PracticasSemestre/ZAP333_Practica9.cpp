// Practica9.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Karen Michelle Aguilar Ortega
// 

#include <iostream>
using namespace std;

int main()
{

    const int filas = 2;
    const int columnas = 3;
    int matriz_estatica[3][2];
    int matriz[filas][columnas];
    int i = 0;
    int j = 0;

    cout << "Matriz 2x3: " << endl;
    cout << "Ingresa los datos para completar la matriz: " << endl;

    for (i = 0; i < filas; i++)
    {

        for (j = 0; j < columnas; j++)
        {

            cout << "[" << i << "] [" << j << "]: ";
            cin >> matriz[i][j];

        }
            cout << endl;
    }

    cout << endl;
    cout << "Matriz 10x10: " << endl;

    srand(time(NULL));
    int edades3[10][10];
    int filas3 = (sizeof(edades3) / sizeof(edades3[0]));
    int columnas3 = (sizeof(edades3[0]) / sizeof(edades3[0][0]));

    for (i = 0; i < filas3; i = i + 1)
    {

        for (j = 0; j < columnas3; j++)
        {

            edades3[i][j] = rand() % 10;

            cout << "|" << edades3[i][j] << "|";
        }

        cout << endl;
    }

}
