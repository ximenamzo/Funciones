#include <iostream>
#include <string>

using namespace std;
//Declaramos prototipos de funciones
void menu();
int suma();
int resta();
int multi();
int division();
void pausa();

int main()
{
	menu();
	return 0;
}
//Creamos funciones
void menu()
{
	bool bandera = false;
	char tecla;
	do
	{
		system("cls");
		cin.clear();
		cout << "Calculadora con funciones" << endl;
		cout << "-------------------------" << endl;
		cout << "\t1.- Sumar" << endl;
		cout << "\t2.- Restar" << endl;
		cout << "\t3.- Multiplicar" << endl;
		cout << "\t4.- Dividir" << endl;
		cout << "\t5.- Salir" << endl;
		cout << "Elije una opcion: " << endl;
		cin >> tecla;
		switch (tecla)
		{
		case '1':
			system("cls");
			suma();
			break;
		case '2':
			system("cls");
			resta();
			break;
		case '3':
			system("cls");
			multi();
			break;
		case '4':
			system("cls");
			division();
			break;
		case '5':
			bandera = true;
			break;
		default:
			system("cls");
			cout << "Opcion no valida" << endl;
			pausa();
			break;
		}
	} while (bandera != true);
}
void pausa()
{
	cout << endl << "Pulsa cualquier tecla para continuar...";
	getwchar();
	getwchar();
}
int suma()
{
	int a, b, suma;
	cout << "Primer valor: " << endl;
	cin >> a;
	cout << "Segundo valor: " << endl;
	cin >> b;
	suma = a + b;
	cout << "La suma es " << suma << endl;
	pausa();
	return 0;
}
int resta()
{
	int a, b, resta;
	cout << "Primer valor: " << endl;
	cin >> a;
	cout << "Segundo valor: " << endl;
	cin >> b;
	resta = a - b;
	cout << "La resta es " << resta << endl;
	pausa();
	return 0;
}
int multi()
{
	int a, b, multi;
	cout << "Primer valor: " << endl;
	cin >> a;
	cout << "Segundo valor: " << endl;
	cin >> b;
	multi = a * b;
	cout << "La multiplicacion es " << multi << endl;
	pausa();
	return 0;
}
int division()
{
	int a, b, division;
	cout << "Primer valor: " << endl;
	cin >> a;
	cout << "Segundo valor: " << endl;
	cin >> b;
	division = a / b;
	cout << "La division es " << division << endl;
	pausa();
	return 0;
}