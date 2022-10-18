#include<iostream>
#include<string.h>
#include<string>

using namespace std;

struct info {

	char nombre[100];
	char descripcion[300];
	int NumArt;

}Articulo[3];

int Buscador[100];

int main()
{
	int opmenu, i=0,cont, buscadorA;    

	cout << "\t***=== Administracion de Articulos [ Version 0.2 ] ===***\n";
	cout << "bienvenido usuario, ingrese uno de las siguientes opciones dadas\n";
	cout << "1- Agregar un nuevo articulo\n2- Modificar un articulo ya existente\n3- Eliminar articulo del programa\n4- Lista oficial de articulos Vigentes\n5- Limpiar pantalla\n6- Salir del Programa\n";
	scanf_s("%d", &opmenu);
	printf(" - - - - - - - - - - - - - - - - - - - - - - - - - - -\n"); // agrege estas lineas por presentacion y lograr mirar las acciones realizadas de mejor manera
	switch (opmenu)                                                     // sin necesidad de limpiar la pantalla por la opcion numero 5
	{
	case 1:
		for (int i = 0; 1 < 3; i++)   // se ingresa 3 articulos directamente para no hacer un codigo tan complejo
		{
			printf("cantidad de espacios ocupados para articulos: %d", i, " de 3\n");
			cout << "Agrega su nuevo articulo deseado\n";
			scanf_s("%s", &Articulo[i].nombre);
			cout << "se guardo con exito, ahora ingresa una descripcion para tu articulo\n";
			scanf_s("%s", &Articulo[i].descripcion);
			printf("guardando datos . . .\n");
			Articulo[i].NumArt = 20220000 + i;
			printf("Numero de Articulo = %d", Articulo[i].NumArt);
			printf("...\n");
		}
		printf("Gracias por ingresar sus nuevos productos\n");
		system("pause");     // se realizan muchas sistem pause para un mejor control
		 printf(" - - - - - - - - - - - - - - - - - - - - - - - - - - -\n");
		return main();
		break;
	case 2:
		cout << "Ingrese su numero de Articulo deseado a cambiar\n";
		scanf_s("%d", &buscadorA);
		for (int i = 0; 1 < 3; i++)
		{
			if (buscadorA == Articulo[i].NumArt)  // se busca por numero de articulo para hacer una busqueda mas facil
			{
				cout << "ingrese su nuevo nombre\n";
				scanf_s("%s", &Articulo[i].nombre);
				cout << "se guardo con exito, ahora ingresa una nueva descripcion para tu articulo\n";
				scanf_s("%s", &Articulo[i].descripcion);
			    i = i + 4
			}        // se suma 4 al i para identificar si es un articulo existente o no en el siguiente if
			
		}
		if (i < 4) // si no se escuntra ningun articulo i tendria actualmente el valor de 3
		{
			printf("Su No. de articulo no existe o esta equivocado\n Regresando al menu principal...\n");
		}
		system("pause");
		printf(" - - - - - - - - - - - - - - - - - - - - - - - - - - -\n");
		return main();
		break;
	case 3:
		 cout << "Ingrese su numero de Articulo deseado a eliminar\n";
		 scanf_s("%d", &buscadorA);
		 for (int i = 0; 1 < 3; i++)
		 {
			 if (buscadorA == Articulo[i].NumArt)
			 {
				 Articulo[i].NumArt = 0;    // muy complejo
				 printf("Eliminado con exito!\n");
				 i = i + 4
			 }
		 }
		 if (i < 4)
		 {
			 printf("Su No. de Articulo es incorrecto o no existe\n Regresando a Menu Principal\n");
		 }
		 system("pause");
		 printf(" - - - - - - - - - - - - - - - - - - - - - - - - - - -\n");
		return main();
		break;
	case 4:
		printf("\t***=== Lista Oficial de Articulos [ Formato Lista ] ===***\n");
		for (int i = 0; 1 < 3; i++)
		{
			cont = 1 + i;
			printf(" - %d", cont, " -  %s", Articulo[i].nombre);
			printf(".\n Numero de Articulo:  %s", Articulo[i].NumArt);
			printf(".\n Descripcion:\n %s", Articulo[i].descripcion);
		}
		printf("...\n");
		system("pause");
		printf(" - - - - - - - - - - - - - - - - - - - - - - - - - - -\n");
		return main();
		break;
	case 5:
		cout << "se limpiara la pantalla y se escondera toda informancion\n";
		cout << "se realizara una pausa antes de ocultar la informacion\n";
		system("pause");
		system("cls"); //se realizan pausas si el usuario quiere ver algo exactamente antes de borrar la pantalla
		return main();
		break;
	case 6:
		cout << "gracias por usar el programa\n";
		cout << "se realizara una pausa antes de apagar el programa\n"; //igual aqui
		system("pause");
		break;
	default:
		cout << "[ Error : su opcion no existe, vuelve a intentar ]\n"; //tambien aqui
		system("pause");
		return main();
	}
}
