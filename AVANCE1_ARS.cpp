#include<iostream>
#include<string.h>

using namespace std;

int main()
{
	int opmenu;
	char nameART;



	cout << "\t***=== Administracion de Articulos [ Version 0.1 ] ===***\n";
	cout << "bienvenido usuario, ingrese uno de las siguientes opciones dadas\n";
	cout << "1- Agregar un nuevo articulo\n2- Modificar un articulo ya existente\n3- Eliminar articulo del programa\n4- Lista oficial de articulos Vigentes\n5- Limpiar pantalla\n6- Salir del Programa\n";
	cin >> opmenu;
	switch (opmenu)
	{
		case 1:
			cout << "Agrega su nuevo articulo deseado\n";
			cin >> nameART;
			cout << "se guardo con exito, presione enter para continuar\n";
			system("pause");
			return main();
			break;
		case 2:
			cout << "[ aun en desarrollo ]\n";
			return main();
			break;
		case 3:
			cout << "[ aun en desarrollo ]\n";
			return main();
			break;
		case 4:
			cout << "[ aun en desarrollo ]\n";
			return main();
			break;
		case 5:
			cout << "se limpiara la pantalla y se escondera toda informancion\n";
			cout << "presione cualquier tecla para continuar\n";
			system("pause");
			system("cls");
			return main();
			break;
		case 6:
			cout << "gracias por usar el programa\n";
			break;
		default:
			cout << "[ Error : su opcion no existe, vuelve a intentar ]\n";
			return main();
	}
}