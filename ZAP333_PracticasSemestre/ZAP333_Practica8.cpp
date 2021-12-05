// ClasePractica_7.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// ZAP333 Karen Aguilar 
// Demostrar el funcionamiento de los arrayas (arreglos)

#include <iostream>
// escribimos lo siguiente para que no haya problemas con el using  namespace std o el cin y cout
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

using namespace std;

int main()
{
    /*
    int var1[10];
    // asignacion de valores automatica
    for (int i = 0; i < 10; i = i + 1)
    {
        var1[i] = 9;
    }

    // impresion de valores
    for (int j = 0; j < 10; j++)
    {
        cout << "El valor es: " << var1 << endl;
    }
    */

    string titulo[5];
    int fecha[5];
    string autor[5];
    bool continuar;

    /* 
    titulo[0] = "Calico";
    fecha[0] = 20201215;
    autor[0] = "Flatout Games";
    */

    cout << "Bienvenidx a la base de datos de Caravana.\nSi desea ingresar datos al inventario escriba 1, en caso contrario el programa se cerrara." << endl;
    cin >> continuar;


    while (continuar == true)
    {

        // asignacion de valores automatica
        for (int i = 0; i < 5; i++)
        {
            cout << "----------------------------------------------------------------------------------------" << endl;
            cout << "Ingresa los siguientes datos." << endl;

            cout << "Titulo del juego: " << endl;
            cin >> titulo[i];

            cout << "Fecha de publicacion usando el formato YYYYMMDD: " << endl;
            cin >> fecha[i];

            cout << "Titulo del autor o autores: " << endl;
            cin >> autor[i];

        }

        // impresion de valores
        for (int j = 0; j < 5; j++)
        {
            cout << "----------------------------------------------------------------------------------------" << endl;
            cout << "\nLos datos ingresados del juego numero " << j << " son: " << endl;
            cout << "Titulo: " << titulo[j] << endl;
            cout << "Fecha: " << fecha[j] << endl;
            cout << "Autor o Autores: " << autor[j] << endl;
        }

        // decision de reinicio del programa
        cout << "----------------------------------------------------------------------------------------" << endl;
        cout << "Desea ingresar mas datos?" << endl;
        cout << "1 = Si \n0 = No" << endl;
        cin >> continuar;

    }

    // mensaje de salida
    cout << "Ten un lindo dia." << endl;
    return 0;


}