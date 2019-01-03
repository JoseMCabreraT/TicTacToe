/*TIC TAC TOE GAME PROGRAM

CREATED BY: JOSÉ MIGUEL CABRERA.

ESPECIALS THANKS TO:
-GOD.
-VIRGEN MARÍA.
-SAN MIGUEL ARCÁNGEL.
-MY BEAUTIFUL FAMILY.

ENJOY.......*/



#include <iostream>
#include <cstdlib>
#include <conio.h>

using namespace std;

string MATRIZ[3][3];
int n, n1, n2;
bool Jugar1();
bool Jugar2();
bool aux,z;
bool Validate();
bool number=false;
bool Validate1();
bool number1=false;
bool MENU();
bool JOSE;

main ()
{int i,j,contador;
contador=0;
n1=0;
n2=0;
JOSE=false;

     aux=false;
system("color F0");
     for(i=0; i<3; i++)
     {
              for(j=0; j<3; j++)
              {
                       MATRIZ[i][j] =" ";
                       }//for j
              }//for i
z=MENU();
if(z==true)
{system("cls");
for(i=0; i<3; i++)
     {
              for(j=0; j<3; j++)
              {
                       MATRIZ[i][j] =" ";
                       }//for j
              }//for i
     do{
contador=contador+2;
              aux=Jugar1();
              if((aux==false) && (contador<9))
              {
              aux=Jugar2();
              }
              }while((aux==false) && (contador<9));

              if(aux==true)
{cout<<"\n"<<endl;
if(JOSE==true)

    cout<<"TENEMOS UN GANADOR; LETRA \" X \"."<<endl;
    else
    cout<<"TENEMOS UN GANADOR; LETRA \" O \"."<<endl;
}
     else
     {cout<<"\n"<<endl;
     cout<<"NO GANA NADIE."<<endl;
     }
     cout<<"\n"<<endl;
     cout<<"GRACIAS, REGRESE PRONTO."<<endl;
     cout<<"\n"<<endl;
     system("PAUSE");
}
else
{system("cls");
    cout<<"GRACIAS, REGRESE PRONTO."<<endl;
}
 }//main


bool Jugar1()
{int k,p;
do{
    cout<<"TURNO DEL JUGADOR 1."<<endl;
    cout<<"PORFAVOR INGRESE POSICION."<<endl;
    do{
    cin>>n;
    if(n<0 || n>=10)
    {
    cout<<"CELDA ERRONEA, PORFAVOR INGRESE OTRA."<<endl;
    number=false;
    }
    number=Validate();
    }while(number==false);
    cout<<"\t\t"<<endl;

n1=n;


if(n1==n2)
{cout<<"CELDA OCUPADA O ERRONEA."<<endl;

          }
          else
          {
    if(n==1)
    { MATRIZ[0][0]="X";
            }
    else
    {
        if(n==2)
        {
    MATRIZ[0][1]="X";
    }
    else
    {
    if(n==3)
    {MATRIZ[0][2]="X";
    }
    else
    {
    if(n==4)
    {MATRIZ[1][0]="X";
    }
    else
    {
    if(n==5)
    {MATRIZ[1][1]="X";
    }
    else
    {
    if(n==6)
    {MATRIZ[1][2]="X";
    }
    else
    {
    if(n==7)
    {MATRIZ[2][0]="X";
    }
    else
    {
    if(n==8)
    {MATRIZ[2][1]="X";
    }
    else
    {

if(n==9)
{


            MATRIZ[2][2]="X";
}

    }
    }
    }
    }
    }
    }
    }
    }
}//END
}while(n1==n2);

    for(k=0; k<3; k++)
    {
             for(p=0; p<3; p++)
             {
                      cout<<MATRIZ[k][p];
                      if(p<2)
                      cout << "|";
                      }//for p
                      if(k<2)
                      cout << "\n-----";
                      cout << "\n";
             }//for k
    if((MATRIZ[0][0]=="X") && (MATRIZ[0][1]=="X") && (MATRIZ[0][2]=="X"))
    {aux=true;
    JOSE=true;
    }
    else
    {
    if((MATRIZ[1][0]=="X") && (MATRIZ[1][1]=="X") && (MATRIZ[1][2]=="X"))
    {aux=true;
    JOSE=true;
    }
    else
    {
    if((MATRIZ[2][0]=="X") && (MATRIZ[2][1]=="X") && (MATRIZ[2][2]=="X"))
    {aux=true;
    JOSE=true;
    }
    else
    {
    if((MATRIZ[0][0]=="X") && (MATRIZ[1][0]=="X") && (MATRIZ[2][0]=="X"))
    {
    aux=true;
    JOSE=true;
    }
    else
    {
    if((MATRIZ[0][1]=="X") && (MATRIZ[1][1]=="X") && (MATRIZ[2][1]=="X"))
    {aux=true;
    JOSE=true;
    }
    else
    {
    if((MATRIZ[0][2]=="X") && (MATRIZ[1][2]=="X") && (MATRIZ[2][2]=="X"))
    {aux=true;
    JOSE=true;
    }
    else
    {
    if((MATRIZ[0][0]=="X") && (MATRIZ[1][1]=="X") && (MATRIZ[2][2]=="X"))
    {aux=true;
    JOSE=true;
    }
    else
    {
    if((MATRIZ[0][2]=="X") && (MATRIZ[1][1]=="X") && (MATRIZ[2][0]=="X"))
    {aux=true;
    JOSE=true;
    }
    }
    }
    }
    }
    }
    }
    }
    return aux;
}//Jugar1



bool Jugar2()
{int m,o;

do{
    cout<<"TURNO DEL JUGADOR 2."<<endl;
    cout<<"PORFAVOR INGRESE POSICION."<<endl;
do{
    cin>>n;
    if(n<0 || n>=10)
    {
        cout<<"CELDA ERRONEA, PORFAVOR INGRESE OTRA."<<endl;
        number1=false;
    }
    number1=Validate1();
}while(number1==false);
    cout<<"\t\t"<<endl;

n2=n;
if(n2==n1)
{cout<<"CELDA OCUPADA O ERRONEA."<<endl;
          }
          else
          {
    if(n==1)
    { MATRIZ[0][0]="O";
            }
    else
    {
        if(n==2)
        {
    MATRIZ[0][1]="O";
    }
    else
    {
    if(n==3)
    {MATRIZ[0][2]="O";
    }
    else
    {
    if(n==4)
    {MATRIZ[1][0]="O";
    }
    else
    {
    if(n==5)
    {MATRIZ[1][1]="O";
    }
    else
    {
    if(n==6)
    {MATRIZ[1][2]="O";
    }
    else
    {
    if(n==7)
    {MATRIZ[2][0]="O";
    }
    else
    {
    if(n==8)
    {MATRIZ[2][1]="O";
    }
    else
    {

if(n==9)
{


            MATRIZ[2][2]="O";
}

    }
    }
    }
    }
    }
    }
    }
    }
}//END
}while(n2==n1);
for(m=0; m<3; m++)
{
    for(o=0; o<3; o++)
    {
        cout<<MATRIZ[m][o];
        if(o<2)
            cout<<"|";
    }//for n
    if(m<2)


        cout<<"\n-----";

    cout<<"\n";
}//for m
    if((MATRIZ[0][0]=="O") && (MATRIZ[0][1]=="O") && (MATRIZ[0][2]=="O"))
    {aux=true;
    JOSE=false;
    }
    else
    {
    if((MATRIZ[1][0]=="O") && (MATRIZ[1][1]=="O") && (MATRIZ[1][2]=="O"))
    {aux=true;
    JOSE=false;
    }
    else
    {
    if((MATRIZ[2][0]=="O") && (MATRIZ[2][1]=="O") && (MATRIZ[2][2]=="O"))
    {aux=true;
    JOSE=false;
    }
    else
    {
    if((MATRIZ[0][0]=="O") && (MATRIZ[1][0]=="O") && (MATRIZ[2][0]=="O"))
    {
    aux=true;
    JOSE=false;
    }
    else
    {
    if((MATRIZ[0][1]=="O") && (MATRIZ[1][1]=="O") && (MATRIZ[2][1]=="O"))
    {aux=true;
    JOSE=false;
    }
    else
    {
    if((MATRIZ[0][2]=="O") && (MATRIZ[1][2]=="O") && (MATRIZ[2][2]=="O"))
    {aux=true;
    JOSE=false;
    }
    else
    {
    if((MATRIZ[0][0]=="O") && (MATRIZ[1][1]=="O") && (MATRIZ[2][2]=="O"))
    {aux=true;
    JOSE=false;
    }
    else
    {
    if((MATRIZ[0][2]=="O") && (MATRIZ[1][1]=="O") && (MATRIZ[2][0]=="O"))
    {aux=true;
    JOSE=false;
    }
    }
    }
    }
    }
    }
    }
    }
    return aux;

}//Jugar2

bool Validate()
{
    switch(n)
    {
    case 0:
        cout<<"CELDA ERRONEA, PORFAVOR INGRESE OTRA."<<endl;
        number=false;
        break;
    case 1:
        if((MATRIZ[0][0]=="X") || MATRIZ[0][0]=="O")
        {
            cout<<"CELDA OCUPADA O ERRONEA, PORFAVOR INGRESE OTRA."<<endl;
            number=false;
        }
        else
        {
            number=true;
        }
        break;
    case 2:
        if((MATRIZ[0][1]=="X") || MATRIZ[0][1]=="O")
        {
            cout<<"CELDA OCUPADA O ERRONEA, PORFAVOR INGRESE OTRA."<<endl;
            number=false;
        }
        else
        {
            number=true;
        }

        break;
    case 3:
        if((MATRIZ[0][2]=="X") || MATRIZ[0][2]=="O")
        {
            cout<<"CELDA OCUPADA O ERRONEA, PORFAVOR INGRESE OTRA."<<endl;
            number=false;
        }
        else
        {
            number=true;
        }
        break;
    case 4:
        if((MATRIZ[1][0]=="X") || MATRIZ[1][0]=="O")
        {
            cout<<"CELDA OCUPADA O ERRONEA, PORFAVOR INGRESE OTRA."<<endl;
            number=false;
        }
        else
        {
            number=true;
        }
        break;
    case 5:
        if((MATRIZ[1][1]=="X") || MATRIZ[1][1]=="O")
        {
            cout<<"CELDA OCUPADA O ERRONEA, PORFAVOR INGRESE OTRA."<<endl;
            number=false;
        }
        else
        {
            number=true;
        }
        break;
    case 6:
        if((MATRIZ[1][2]=="X") || MATRIZ[1][2]=="O")
        {
            cout<<"CELDA OCUPADA O ERRONEA, PORFAVOR INGRESE OTRA."<<endl;
            number=false;
        }
        else
        {
            number=true;
        }
        break;
    case 7:
        if((MATRIZ[2][0]=="X") || MATRIZ[2][0]=="O")
        {
            cout<<"CELDA OCUPADA O ERRONEA, PORFAVOR INGRESE OTRA."<<endl;
            number=false;
        }
        else
        {
            number=true;
        }
        break;
    case 8:
        if((MATRIZ[2][1]=="X") || MATRIZ[2][1]=="O")
        {
            cout<<"CELDA OCUPADA O ERRONEA, PORFAVOR INGRESE OTRA."<<endl;
            number=false;
        }
        else
        {
            number=true;
        }
        break;
    case 9:
        if((MATRIZ[2][2]=="X") || MATRIZ[2][2]=="O")
        {
            cout<<"CELDA OCUPADA O ERRONEA, PORFAVOR INGRESE OTRA."<<endl;
            number=false;
        }
        else
        {
            number=true;
        }
        break;
    }//switch
    return number;
}



bool Validate1()
{
switch(n)
    {
    case 0:
        cout<<"CELDA OCUPADA O ERRONEA, PORFAVOR INGRESE OTRA."<<endl;
        number1=false;
        break;
    case 1:
        if((MATRIZ[0][0]=="X") || MATRIZ[0][0]=="O")
        {
            cout<<"CELDA OCUPADA O ERRONEA, PORFAVOR INGRESE OTRA."<<endl;
            number1=false;
        }
        else
        {
            number1=true;
        }
        break;
    case 2:
        if((MATRIZ[0][1]=="X") || MATRIZ[0][1]=="O")
        {
            cout<<"CELDA OCUPADA O ERRONEA, PORFAVOR INGRESE OTRA."<<endl;
            number1=false;
        }
        else
        {
            number1=true;
        }
        break;
    case 3:
        if((MATRIZ[0][2]=="X") || MATRIZ[0][2]=="O")
        {
            cout<<"CELDA OCUPADA O ERRONEA, PORFAVOR INGRESE OTRA."<<endl;
            number1=false;
        }
        else
        {
            number1=true;
        }
        break;
    case 4:
        if((MATRIZ[1][0]=="X") || MATRIZ[1][0]=="O")
        {
            cout<<"CELDA OCUPADA O ERRONEA, PORFAVOR INGRESE OTRA."<<endl;
            number1=false;
        }
        else
        {
            number1=true;
        }
        break;
    case 5:
        if((MATRIZ[1][1]=="X") || MATRIZ[1][1]=="O")
        {
            cout<<"CELDA OCUPADA O ERRONEA, PORFAVOR INGRESE OTRA."<<endl;
            number1=false;
        }
        else
        {
            number1=true;
        }
        break;
    case 6:
        if((MATRIZ[1][2]=="X") || MATRIZ[1][2]=="O")
        {
            cout<<"CELDA OCUPADA O ERRONEA, PORFAVOR INGRESE OTRA."<<endl;
            number1=false;
        }
        else
        {
            number1=true;
        }
        break;
    case 7:
        if((MATRIZ[2][0]=="X") || MATRIZ[2][0]=="O")
        {
            cout<<"CELDA OCUPADA O ERRONEA, PORFAVOR INGRESE OTRA."<<endl;
            number1=false;
        }
        else
        {
            number1=true;
        }
        break;
    case 8:
        if((MATRIZ[2][1]=="X") || MATRIZ[2][1]=="O")
        {
            cout<<"CELDA OCUPADA O ERRONEA, PORFAVOR INGRESE OTRA."<<endl;
            number1=false;
        }
        else
        {
            number1=true;
        }
        break;
    case 9:
        if((MATRIZ[2][2]=="X") || MATRIZ[2][2]=="O")
        {
            cout<<"CELDA OCUPADA O ERRONEA, PORFAVOR INGRESE OTRA."<<endl;
            number1=false;
        }
        else
        {
            number1=true;
        }
        break;
    }//switch
    return number1;
}

bool MENU()
{
void INSTRUCCIONES();
void CREDITOS();
int Z;
do{system("cls");
cout<<"*---------------------------------------*"<<endl;
cout<<"BIENVENIDO A \"TIC TAC TOE UNIVERSE.\""<<endl;
cout<<"*---------------------------------------*"<<endl;
cout<<"\n"<<endl;
cout<<"MENU DE OPCIONES:"<<endl;
cout<<"\n"<<endl;
cout<<"1.-LEER INSTRUCCIONES."<<endl;
cout<<"2.-INICIAR JUEGO."<<endl;
cout<<"3.-LEER CREDITOS."<<endl;
cout<<"4.-SALIR DEL PROGRAMA."<<endl;
cout<<"\n"<<endl;
cout<<"PORFAVOR INGRESE SU OPCION:"<<endl;
do{
cin>>Z;
if(Z<=0 || Z>=5)
cout<<"OPCION INCORRECTA, PORFAVOR INGRESE OTRA."<<endl;
}while(Z<=0 || Z>=5);
switch(Z)
{
case 1: INSTRUCCIONES();
z=false;
    break;
case 2: z=true;
    break;
case 3: CREDITOS();
z=false;
    break;
case 4: z=false;
    break;
}//switch
}while(Z==1 || Z==3);
return z;
}//METODO

void INSTRUCCIONES()
{
    system("cls");
int k,p;
MATRIZ[1][2]="X";
cout<<"EL PRIMER JUGADOR TENDRA LA LETRA \"X\","<<endl;
cout<<"MIENTRAS QUE EL SEGUNDO TENDRA LA LETRA \"O\"."<<endl;
cout<<"\n"<<endl;
cout<<"EL TABLERO CONTIENE 9 POSICIONES LLAMADAS \"CELDAS\"."<<endl;
cout<<"USTED DEBERA INGRESAR EL NUMERO DE LA CELDA DONDE DESEE COLOCAR SU LETRA,"<<endl;
cout<<"SEGUIDO DEL BOTON \"ENTER\"."<<endl;
cout<<"\n"<<endl;
cout<<"POR EJEMPLO:"<<endl;
cout<<"\n"<<endl;
cout<<"USTED INGRESA COMO JUGADOR 1 EL NUMERO \"6\";"<<endl;
cout<<"\n"<<endl;
 for(k=0; k<3; k++)
    {
             for(p=0; p<3; p++)
             {
                      cout<<MATRIZ[k][p];
                      if(p<2)
                      cout << "|";
                      }//for p
                      if(k<2)
                      cout << "\n-----";
                      cout << "\n";
             }//for k
             cout<<"\n"<<endl;
             cout<<"Y EN LA CELDA NUMERO \"6\" SE POSICIONA LA LETRA DEL JUGADOR."<<endl;
             system("PAUSE");
}//INSTRUCCIONES

void CREDITOS()
{system("cls");
    cout<<"CREADO POR:"<<endl;
    cout<<"\n"<<endl;
    cout<<"-JOSE MIGUEL CABRERA"<<endl;
    cout<<"\n"<<endl;
    cout<<"AGRADECIMIENTOS ESPECIALES A:"<<endl;
    cout<<"\n"<<endl;
    cout<<"-NUESTRO HERMOSO JESUS DE NAZARETH"<<endl;
    cout<<"-VIRGEN MARIA ROSA MISTICA"<<endl;
    cout<<"-SAN MIGUEL ARCANGEL"<<endl;
    cout<<"-MI HERMOSA FAMILIA"<<endl;
    cout<<"-EDUARDO GONZALEZ"<<endl;
    cout<<"\n"<<endl;
    cout<<"A TODOS MILES DE GRACIAS..."<<endl;
    cout<<"\n"<<endl;
    system("PAUSE");
}
