// ConsoleApplication3.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Karen Michelle
// Class

#include <iostream>
#include <conio.h>
#include <windows.h>
#include <time.h>
using namespace std;

struct player
{
    string nombre;
    int CHA = 0;
    int DEX = 0;
    int CON = 0;
    int INT = 0;
}jugador[20];



bool c1 = true;
bool c2 = true;

int main()
{

    while (c1 == true)
    {
        do
        {
            int opc;
            cout << "Bienvenidx al menu de inicio del Battle Royale Amerike, estas son las opciones:" << endl;
            cout << "1. Iniciar el Battle Royale. \n2. Desplegar lista de jugadores. \nCualquier otra opcion cerrará el programa." << endl;
            cin >> opc;
            cout << " " << endl;
            system("cls");


            if (opc == 1)
            {
                cout << "El juego esta por comenzar! Deja te explico como es que funciona:" << endl;
                cout << " " << endl;
                cout << "Se asignaran valores aleatorios a las 4 diferentes propiedades de los jugadores, las cuales son:" << endl;
                cout << " " << endl;
                cout << "1. Carisma (CHA)            2. Destreza (DEX)\n3. Constitucion (CON)       4. Inteligencia (INT)" << endl;
                cout << " " << endl;
                cout << "Una vez generados se compararán entre si." << endl;
                cout << "El contendiente con mayor poder gana! Al final se generara una lista con los ganadores y los jugadores con menor estadistica." << endl;
                cout << " " << endl;
                cout << "Presiona cualquier tecla para continuar..." << endl;
                _getch();
                system("cls");

                srand(time(NULL));
                player jugador[20];
                int mayor = 0, mayor1 = 0, mayor2 = 0, mayor3 = 0;
                int menor = 0, menor1 = 0, menor2 = 0, menor3 = 0;
                string nombre[20] = { "Dis", "Alex", "Angel_J", "Dylan", "Rich", "Oscar_F", "Yuss", "Ferchus", "Kuvassi", "Angel_A", "Shasho", "Isra", "Pato", "Chilo", "Jp", "Eric", "Tapia", "Abraham", "Kevin", "Mau" };

                for (int i = 0; i < 20; i++)
                {
                    jugador[i].nombre = nombre[i];
                    jugador[i].CHA = rand() % 10;
                    jugador[i].DEX = rand() % 10;
                    jugador[i].CON = rand() % 10;
                    jugador[i].INT = rand() % 10;
                }

                // ------------------------------------------------------------------ AQUI INICIA LA FASE CARISMA
                cout << "-------------------------------------------" << endl;
                cout << "               Fase CARISMA" << endl;
                cout << "-------------------------------------------" << endl;
                cout << " " << endl;

                string nombre_mayor;
                string nombre_menor;

                for (int i = 0; i < 20; i++)
                {
                    jugador[i].CHA = rand() % 10;

                    if (mayor < jugador[i].CHA)
                    {
                        mayor = jugador[i].CHA;
                        nombre_mayor = nombre[i];
                    }
                }

                for (int i = 0; i < 20; i++)
                {
                    jugador[i].CHA = rand() % 10;
                    if (menor > jugador[i].CHA)
                    {
                        menor = jugador[i].CHA;
                        nombre_menor = nombre[i];
                    }
                }


                for (int i = 0; i < 20; i++)
                {

                    if (mayor == jugador[i].CHA)
                    {
                        cout << "El jugador con mayor carisma es: " << nombre_mayor << endl;
                        cout << "Su nivel de carisma fue: " << mayor << endl;
                    }

                }

                for (int i = 0; i < 20; i++)
                {
                    if (menor == jugador[i].CHA)
                    {
                        cout << "El jugador con menor carisma es: " << nombre_menor << endl;
                        cout << "Su nivel de carisma fue: " << menor << endl;
                    }
                }

                cout << " " << endl;
                cout << "Presiona cualquier tecla para continuar..." << endl;
                _getch();
                system("cls");

                // ------------------------------------------------------------------ HASTA AQUI LLEGA LA FASE CARISMA

                cout << "-------------------------------------------" << endl;
                cout << "               Fase DESTREZA" << endl;
                cout << "-------------------------------------------" << endl;
                cout << " " << endl;

                string nombre_mayor1;
                string nombre_menor1;

                for (int i = 0; i < 20; i++)
                {
                    jugador[i].DEX = rand() % 10;

                    if (mayor1 < jugador[i].DEX)
                    {
                        mayor1 = jugador[i].DEX;
                        nombre_mayor1 = nombre[i];
                    }
                }

                for (int i = 0; i < 20; i++)
                {
                    jugador[i].DEX = rand() % 10;
                    if (menor1 > jugador[i].DEX)
                    {
                        menor1 = jugador[i].DEX;
                        nombre_menor1 = nombre[i];
                    }
                }


                for (int i = 0; i < 20; i++)
                {

                    if (mayor1 == jugador[i].DEX)
                    {
                        cout << "El jugador con mayor destreza es: " << nombre_mayor1 << endl;
                        cout << "Su nivel de destreza fue: " << mayor1 << endl;
                    }

                }

                for (int i = 0; i < 20; i++)
                {
                    if (menor1 == jugador[i].DEX)
                    {
                        cout << "El jugador con menor destreza es: " << nombre_menor1 << endl;
                        cout << "Su nivel de destreza fue: " << menor1 << endl;
                    }
                }

                cout << " " << endl;
                cout << "Presiona cualquier tecla para continuar..." << endl;
                _getch();
                system("cls");

                // ------------------------------------------------------------------ HASTA AQUI LLEGA LA FASE DESTREZA

                cout << "-------------------------------------------" << endl;
                cout << "             Fase CONSTITUCION" << endl;
                cout << "-------------------------------------------" << endl;
                cout << " " << endl;

                string nombre_mayor2;
                string nombre_menor2;

                for (int i = 0; i < 20; i++)
                {
                    jugador[i].CON = rand() % 10;

                    if (mayor2 < jugador[i].CON)
                    {
                        mayor2 = jugador[i].CON;
                        nombre_mayor2 = nombre[i];
                    }
                }

                for (int i = 0; i < 20; i++)
                {
                    jugador[i].CON = rand() % 10;
                    if (menor2 > jugador[i].CON)
                    {
                        menor2 = jugador[i].CON;
                        nombre_menor2 = nombre[i];
                    }
                }


                for (int i = 0; i < 20; i++)
                {

                    if (mayor2 == jugador[i].CON)
                    {
                        cout << "El jugador con mayor constitucion es: " << nombre_mayor2 << endl;
                        cout << "Su nivel de constitucion fue: " << mayor2 << endl;
                    }

                }

                for (int i = 0; i < 20; i++)
                {
                    if (menor2 == jugador[i].CON)
                    {
                        cout << "El jugador con menor constitucion es: " << nombre_menor2 << endl;
                        cout << "Su nivel de constitucion fue: " << menor2 << endl;
                    }
                }

                cout << " " << endl;
                cout << "Presiona cualquier tecla para continuar..." << endl;
                _getch();
                system("cls");

                // ------------------------------------------------------------------ HASTA AQUI LLEGA LA FASE CONSTITUCION

                cout << "-------------------------------------------" << endl;
                cout << "             Fase INTELIGENCIA" << endl;
                cout << "-------------------------------------------" << endl;
                cout << " " << endl;

                string nombre_mayor3;
                string nombre_menor3;

                for (int i = 0; i < 20; i++)
                {
                    jugador[i].INT = rand() % 10;

                    if (mayor3 < jugador[i].INT)
                    {
                        mayor3 = jugador[i].INT;
                        nombre_mayor3 = nombre[i];
                    }
                }

                for (int i = 0; i < 20; i++)
                {
                    jugador[i].INT = rand() % 10;
                    if (menor3 > jugador[i].INT)
                    {
                        menor3 = jugador[i].INT;
                        nombre_menor3 = nombre[i];
                    }
                }


                for (int i = 0; i < 20; i++)
                {

                    if (mayor3 == jugador[i].INT)
                    {
                        cout << "El jugador con mayor inteligencia es: " << nombre_mayor3 << endl;
                        cout << "Su nivel de constitucion fue: " << mayor3 << endl;
                    }

                }

                for (int i = 0; i < 20; i++)
                {
                    if (menor3 == jugador[i].INT)
                    {
                        cout << "El jugador con menor inteligencia es: " << nombre_menor3 << endl;
                        cout << "Su nivel de constitucion fue: " << menor3 << endl;
                    }
                }

                cout << " " << endl;
                cout << "Presiona cualquier tecla para continuar..." << endl;
                _getch();
                system("cls");
            // ------------------------------------------------------------------ HASTA AQUI LLEGA LA FASE INTELIGENCIA


            }

            if (opc == 2)
            {
                cout << "Lista de contendientes: " << endl;
                cout << "Kevin      Alex        Angel_J\nDylan      Richi       Oscar\nYuss      Ferchus     Kuvassi\nAngel      Shasho      Isra\nPato       Chilo       Eric\nJP_God      Abraham     Mau\nTapia       Dis" << endl;
                cout << "Presiona cualquier tecla para regresar al menu principal..." << endl;
                _getch();
                system("cls");

            }

            else
            {
                cout << "Gracias por jugar:D" << endl;
                return 0;
            }

        } while (c2 == true);
    }
    return 0;
}