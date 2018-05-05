#include <iostream>
#include <string>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include "Numero.h"
#define ARRIBA 72
#define ABAJO 80
#define ENTER 13

using namespace std;

void menu_principal();
int menu(const char *titulo,const char *opciones[],int n);
void instrucciones();
void menuRepunit();
void menuNumeroPrimo();
void menuNumeroArmstrong();
void menuMaxComunDivisor();
void menuNumEspejo();
void menuNumEquilibrado();
void menuCuboNicomano();
void menuParejaConejos();
void gotoxy(int x,int y);

void enter();

Numero Proyecto; //INSTANCIA DE OBJETO GLOBAL
int main()
{
    system("COLOR F0");
    system("mode con: cols=100 lines=15");
    menu_principal();
    system("cls");
    gotoxy(25,7);
    cout << "EL PROGRAMA SE CERRARA DESPUES DE APRETAR UNA TECLA...";
    system("pause>nul");
    return 0;
}

void menu_principal()
{

    int opcion;
    bool repite = true;

    const char *titulo = "MENU PRINCIPAL";
    const char *opciones[] = {"NUMERO REPUNIT","NUMERO PRIMO","NUMERO ARMSTRONG","MAXIMO COMUN DIVISOR","NUMERO ESPEJO","NUMERO EQUILIBRADO","CUBO DE NICOMANO","PAREJA DE CONEJOS", "SALIR"};

    int n = 9;

    do{
        opcion = menu(titulo,opciones,n);
        switch(opcion)
        {
            case 1:
                system("cls");
                menuRepunit();
                system("pause>nul");
                break;
            case 2:
                system("cls");
                menuNumeroPrimo();
                system("pause>nul");
                break;
            case 3:
                system("cls");
                menuNumeroArmstrong();
                system("pause>nul");
                break;
            case 4:
                system("cls");
                menuMaxComunDivisor();
                system("pause>nul");
                break;
            case 5:
                system("cls");
                menuNumEspejo();
                system("pause>nul");
                break;
            case 6:
                system("cls");
                menuNumEquilibrado();
                system("pause>nul");
                break;
            case 7:
                system("cls");
                menuCuboNicomano();
                system("pause>nul");
                break;
            case 8:
                system("cls");
                menuParejaConejos();
                system("pause>nul");
                break;
            case 9:
                repite = false;
                break;

        }
    }while(repite);
}

int menu(const char *titulo,const char *opciones[],int n)
{
    int opcionSeleccionada = 1;
    int tecla; // se guardara la tecla precionada por el ususario
    bool repite = true;

    do{
        system("cls");
        instrucciones();
        gotoxy(5, 3 + opcionSeleccionada); cout << "==>";

        //Imprime el titulo
        gotoxy(15,2); cout << titulo;

        //Imprime las opciones

          for(int i = 0; i < n; i++){
            gotoxy(10, 4 + i);
            cout << i+1 << ") " << opciones[i] << endl;
            }

            do{
                tecla = getch();
            }while(tecla != ARRIBA && tecla != ABAJO && tecla != ENTER);

            switch(tecla){

                case ARRIBA:

                    opcionSeleccionada--;

                    if(opcionSeleccionada < 1){
                        opcionSeleccionada = n;
                    }

                    break;
                case ABAJO:

                    opcionSeleccionada++;

                    if(opcionSeleccionada > n)
                    {
                        opcionSeleccionada = 1;
                    }

                    break;
                case ENTER:

                    repite = false;

                    break;
            }

        }while(repite);

    return opcionSeleccionada;
}

void menuRepunit()
{
    bool repite = true;
    int opcion;
    const char *titulo = "NUMERO REPUNIT";
    const char *opciones[] = {"ES REPUNIT","REGRESAR"};
    int n = 2;

    do {
         opcion = menu(titulo,opciones,n);
         switch(opcion)
         {
            case 1:
                int numRe;
                system("cls");
                gotoxy(15,2);
                cout << titulo << endl;
                gotoxy(10,4);
                cout << "DIGITE EL NUMERO: ";
                cin >> numRe;
                Proyecto.setNumero(numRe);
                if(Proyecto.esRepunit())
                {
                    gotoxy(10,6);
                    cout << "ES UN NUMERO REPUNIT" << endl;
                }else {
                    gotoxy(10,6);
                    cout << "NO ES UN NUMERO REPUNIT" << endl;
                }

                gotoxy(10,8);
                cout << "Presione enter para continuar...";

               enter();

                break;
            case 2:
                repite = false;
                break;
         }
    }while(repite);
}
 void menuNumeroPrimo()
 {
    bool repite = true;
    int opcion;
    const char *titulo = "NUMERO PRIMO";
    const char *opciones[] = {"ES PRIMO","REGRESAR"};
    int n = 2;

    do {
         opcion = menu(titulo,opciones,n);
         switch(opcion)
         {
            case 1:
                int numPri;
                system("cls");
                gotoxy(15,2);
                cout << titulo << endl;
                gotoxy(10,4);
                cout << "DIGITE EL NUMERO: ";
                cin >> numPri;
                Proyecto.setNumero(numPri);

                if(Proyecto.esPrimo())
                {
                    gotoxy(10,6);
                    cout << "ES UN NUMERO PRIMO" << endl;
                }else {
                    gotoxy(10,6);
                    cout << "NO ES UN NUMERO PRIMO" << endl;
                }

                gotoxy(10,8);
                cout << "Presione enter para continuar...";

                enter();
                break;
            case 2:
                repite = false;
                break;
         }
    }while(repite);
 }

 void menuNumeroArmstrong()
 {
    bool repite = true;
    int opcion;
    const char *titulo = "NUMERO ARMSTRONG";
    const char *opciones[] = {"ES ARMSTRONG","REGRESAR"};
    int n = 2;

    do {
         opcion = menu(titulo,opciones,n);
         switch(opcion)
         {
            case 1:
                int numArm;
                system("cls");
                gotoxy(15,2);
                cout << titulo << endl;
                gotoxy(10,4);
                cout << "DIGITE EL NUMERO: ";
                cin >> numArm;
                Proyecto.setNumero(numArm);

                if(Proyecto.esArmstrog() == true )
                {
                    gotoxy(10,6);
                    cout << "ES UN NUMERO ARMSTRONG" << endl;
                }else {
                    gotoxy(10,6);
                    cout << "NO ES UN NUMERO ARMSTRONG" << endl;
                }

                gotoxy(10,8);
                cout << "Presione enter para continuar...";

               enter();
                break;
            case 2:
                repite = false;
                break;
         }
    }while(repite);
 }

 void menuMaxComunDivisor()
 {
     bool repite = true;
    int opcion;
    const char *titulo = "MAXIMO COMUN DIVISOR";
    const char *opciones[] = {"MAX COMUN DIVISOR DE DOS NUMEROS","REGRESAR"};
    int n = 2;

    do {
         opcion = menu(titulo,opciones,n);
         switch(opcion)
         {
            case 1:
                int numMax1, numMax2;
                system("cls");
                gotoxy(15,2);
                cout << titulo << endl;
                gotoxy(10,4);
                cout << "DIGITE EL NUMERO 1: ";
                cin >> numMax1;
                gotoxy(10,5);
                cout << "DIGITE EL NUMERO 2: ";
                cin >> numMax2;
                Proyecto.setNumero(numMax1);
                gotoxy(10,7);
                cout << "EL MAXIMO COMUN DIVISOR ES: " << Proyecto.maximoDiv(numMax2) << endl;
                gotoxy(10,9);
                cout << "Presione enter para continuar...";

                enter();
                break;
            case 2:
                repite = false;
                break;
         }
    }while(repite);
 }

 void menuNumEspejo()
 {
     bool repite = true;
    int opcion;
    const char *titulo = "NUMERO ESPEJO";
    const char *opciones[] = {"EL NUMERO ESPEJO DE UN NUMERO","REGRESAR"};
    int n = 2;

    do {
         opcion = menu(titulo,opciones,n);
         switch(opcion)
         {
            case 1:
                int numEsp;
                system("cls");
                gotoxy(15,2);
                cout << titulo << endl;
                gotoxy(10,4);
                cout << "DIGITE EL NUMERO: ";
                cin >> numEsp;
                Proyecto.setNumero(numEsp);
                gotoxy(10,6);
                cout << "EL NUMERO ESPEJO ES: " << Proyecto.espejo() << endl;
                gotoxy(10,8);
                cout << "Presione enter para continuar...";

                enter();
                break;
            case 2:
                repite = false;
                break;
         }
    }while(repite);
 }

 void menuNumEquilibrado()
 {
    bool repite = true;
    int opcion;
    const char *titulo = "NUMERO EQUILIBRADO";
    const char *opciones[] = {"EL NUMERO EQUILIBRADO DE UN NUMERO","REGRESAR"};
    int n = 2;

    do {
         opcion = menu(titulo,opciones,n);
         switch(opcion)
         {
            case 1:
                int numEqui;
                system("cls");
                gotoxy(15,2);
                cout << titulo << endl;
                gotoxy(10,4);
                cout << "DIGITE EL NUMERO: ";
                cin >> numEqui;
                Proyecto.setNumero(numEqui);
                gotoxy(10,6);
                cout << "EL NUMERO EQUILIBRADO ES: " << Proyecto.equilibrado() << endl;
                gotoxy(10,8);
                cout << "Presione enter para continuar...";

                enter();
                break;
            case 2:
                repite = false;
                break;
         }
    }while(repite);
 }

 void menuCuboNicomano()
 {
     bool repite = true;
    int opcion;
    const char *titulo = "CUBO NICOMANO";
    const char *opciones[] = {"EL CUBO NICOMANO DE UN NUMERO","REGRESAR"};
    int n = 2;

    do {
         opcion = menu(titulo,opciones,n);
         switch(opcion)
         {
            case 1:
                int numCubo;
                system("cls");
                gotoxy(15,2);
                cout << titulo << endl;
                gotoxy(10,4);
                cout << "DIGITE EL NUMERO: ";
                cin >> numCubo;
                Proyecto.setNumero(numCubo);
                gotoxy(10,6);
                cout << "EL CUBO ES: " << Proyecto.valorCubo() << endl;
                gotoxy(10,8);
                cout << "Presione enter para continuar...";

                enter();
                break;
            case 2:
                repite = false;
                break;
         }
    }while(repite);
 }

 void menuParejaConejos()
 {
     bool repite = true;
    int opcion;
    const char *titulo = "PAREJAS DE CONEJOS";
    const char *opciones[] = {"CANTIDAD DE PAREJAS SEGUN EL MES","REGRESAR"};
    int n = 2;

    do {
         opcion = menu(titulo,opciones,n);
         switch(opcion)
         {
            case 1:
                int numCubo;
                system("cls");
                gotoxy(15,2);
                cout << titulo << endl;
                gotoxy(10,4);
                cout << "DIGITE EL NUMERO DE MESES: ";
                cin >> numCubo;
                Proyecto.setNumero(numCubo);
                gotoxy(10,6);
                cout << "LA CANTIDAD DE PAREJAS DE CONEJOS SON: " << Proyecto.fibocci() << endl;

                gotoxy(10,8);
                cout << "Presione enter para continuar...";

                enter();
                break;
            case 2:
                repite = false;
         }
    }while(repite);
 }

void enter()
{
    int tecla;

    do{
        tecla = getch();
    }while(tecla != ENTER);
}

void instrucciones()
{
    gotoxy(50,2);
    cout << "\tINSTRUCCIONES" << endl;
    //gotoxy(40,3);
    //cout << "|";
    gotoxy(50,4);
    cout << "| 1.USE LAS TECLA ARRIBA PARA SUBIR EN EL MENU.";
    gotoxy(50,5);
    cout << "| 2.SE LAS TECLA ABAJO PARA BAJAR EN EL MENU.";
    gotoxy(50,6);
    cout << "| 3.USE LAS TECLA ENTER PARA SELECCIOAR.";
    gotoxy(50,7);
    cout << "|";
    gotoxy(50,8);
    cout << "| CREADORES:";
    gotoxy(50,9);
    cout << "| 1.RICARDO MORATAYA";
    gotoxy(50,10);
    cout << "| 2.GUSTAVO ROJAS";
    gotoxy(50,11);
    cout << "| 3.SERGIO PIEDRA";
    gotoxy(50,12);
    cout << "| 4.EMILY ROJAS";
}

void gotoxy(int x,int y){
	HANDLE hcon;
	hcon = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X = x;
	dwPos.Y= y;
	SetConsoleCursorPosition(hcon,dwPos);
}
