// 210928_Practica3_IfElse_ZAP333.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Karen Michelle Aguilar Ortega
// Aprendiendo a usar el If y el Else para crear un formulario de datos para un consultorio medico.

#include <iostream>
#include <conio.h>
#include<string.h>;

using namespace std;

int main()
{
	string nombre;
	string alergias;
	string antecedentes;
	string motivo;
	string direccion;

	int edad;
	int telefono;
	int confirmacion;


	cout << "Bienvenidx a nuestro consultorio." << endl;
	cout << "A continuacion se le pediran algunos datos necesarios para proceder con su consulta.\n" << endl;

	cout << "Por favor ingrese: " << endl;

	cout << "Nombre: ";
	cin >> nombre;
	cout << "Bienvenidx, " << nombre << endl;

	cout << "Edad: ";
	cin >> edad;

	cout << "Telefono: " << endl;
	cin >> telefono;

	cout << "¿Sufre usted de alergias?" << endl;
	cout << "Ingrese 1 en caso de que si. Ingrese 2 en caso contrario." << endl;
	cin >> confirmacion;


		if (confirmacion==1)
		{
			cout << "Por favor ingrese sus alergias: " << endl;
			cin >> alergias;
			cout << "Presione enter para continuar." << endl;
		}


			cout << "Cuenta usted con antecedentes medicos?" << endl;
			cout << "Ingrese 1 en caso de que si. Ingrese 2 en caso contrario." << endl;
			cin >> confirmacion;


			if (confirmacion == 1)
			{
				cout << "Por favor ingrese sus antecedentes: " << endl;
				cin >> antecedentes;
			}

			cout << "Por ultimo, \n ¿Cual es el motivo de su visita?" << endl;
			cin >> motivo;

			cout << "Con esto terminamos el formulario, estos fueron los datos que proporciono: \n" << endl;

			cout << "Nombre: " << nombre << endl;
			cout << "Edad: " << edad << endl;
			cout << "Telefono: " << telefono << endl;
			cout << "Alergias: " << alergias << endl;
			cout << "Antecedentes: " << antecedentes << endl;
			cout << "Motivo: " << motivo << endl;
		
				cout << "Gracias por contestar el formulario, un especialista estara con usted en un momento." << endl;

}