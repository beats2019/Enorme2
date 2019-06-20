#include "Enorme.h"
#include <iostream>
using namespace std;


bool esIgualA( const int , const int  );
bool noEsIgualA( const int , const int  );
bool esMayorQue( const int , const int  );
bool esMenorQue( const int , const int  );
bool esMayorIgualQue( const int , const int  );
bool esMenorIgualQue( const int , const int  );
bool esCero( const int  );
long int multiplicar( const int  , const int  );
double dividir( const int  , const int  );
void agregarElementos( const int );
void seleccionarOperacion();
void mensajeSalida();
void imprimirElementos();

Enorme objeto1;
Enorme objeto2;

	int main()
	{


		int seleccion;
		do{

			cout<<" 1. Agregar elementos de arreglo 1";
			cout<<"\n2. Agregar elementos de arreglo 2";
			cout<<"\n3. Operar elemento del arreglo";
			cout<<"\n4. Imprimir elementos de arreglo";
			cout<<"\n5. Comparar elementos de arreglo";
			cout<<"\nOtro: Salir \t";
			cin>> seleccion;

			switch( seleccion )
			{
				case 1 :
					agregarElementos( 1 );
					break;
				case 2:
					agregarElementos( 2 );
					break;
				case 3:
					seleccionarOperacion();
					break;
				case 4:
                    imprimirElementos();
                case 5:
                    seleccionarOperacion();
				default:
					mensajeSalida();


			}




		}while( seleccion == 1 or seleccion == 2 or seleccion == 3 );





		return 0;
	}


	void seleccionarOperacion()
	{
	    int pos1, pos2;
        cout<<"\nSeleccione la posicion del arreglo 1 a evaluar: ";
        cin>>pos1;
        cout<<"\nSeleccione la posicion del arreglo 2 a evaluar: ";
        cin>>pos2;

        int selec;
        cout<<" 1. Mayor";
        cout<<"\n2. Menor";
        cout<<"\n3. Mayor o igual";
        cout<<"\n4. Menor o igual";
        cout<<"\n5. Igual";
        cout<<"\n6. Diferente ";
        cout<<"\n7. Multiplicar";
        cout<<"\n8. Dividir \t";
        cin>>selec;

        int x = objeto1.obtenerValor( pos1 );
        int y = objeto2.obtenerValor( pos2 );
        bool estado = false;


        switch( selec )
        {
            case 1:
                estado = esMayorQue( x, y );
                if( estado )
                    cout<<"El valor de arreglo 1 es mayor que el de arreglo 2"<<endl;
                else
                    cout<<"El valor de arreglo 1 no es mayor que el de arreglo 2"<<endl;
                break;
            case 2:
                estado = esMenorQue( x , y );
                if( estado )
                    cout<<"El valor de arreglo 1 es menor que el de arreglo 2"<<endl;
                else
                    cout<<"El valor de arreglo 1 no es menor que el de arreglo 2"<<endl;
                break;
                break;
            case 3:
                estado = esMayorIgualQue( x , y );
                if( estado )
                    cout<<"El valor de arreglo 1 es mayor o igual que el de arreglo 2"<<endl;
                else
                    cout<<"El valor de arreglo 1 no es mayor o igual que el de arreglo 2"<<endl;
                break;
            case 4:
                estado = esMenorIgualQue( x, y );
                if( estado )
                    cout<<"El valor de arreglo 1 es menor o igual que el de arreglo 2"<<endl;
                else
                    cout<<"El valor de arreglo 1 no es menor o igual que el de arreglo 2"<<endl;
                break;
            case 5:
                estado = esIgualA( x , y );
                if( estado )
                    cout<<"El valor de arreglo 1 es igual que el de arreglo 2"<<endl;
                else
                    cout<<"El valor de arreglo 1 no es igual que el de arreglo 2"<<endl;
                break;
            case 6:
                estado = noEsIgualA( x , y );
                if( estado )
                    cout<<"El valor de arreglo 1 no es igual que el de arreglo 2"<<endl;
                else
                    cout<<"El valor de arreglo 1 es igual que el de arreglo 2"<<endl;
                break;
             case 7:

                 cout << "El resultado de la multiplicacion es: " << multiplicar( x , y ) << endl;
                 break;
            case 8:
                cout<<"El resultado de la division es: " << (dividir( x , y ))  << endl;
                cout<< 0/0;
                break;

            default:
                estado = false;

        }



	}

	void mensajeSalida()
	{
		cout<<"Gracias por usar este programa!" << endl;
		return;
	}

    void imprimirElementos()
    {
        bool selec;
        cout<<"\nSeleccione el arreglo a imprimir(1 o 2): ";
        cin>>selec;
        if( selec )
            objeto1.imprimir();
        else
            objeto2.imprimir();


    }


	void agregarElementos( const int a )
	{
		long int elemento;
		unsigned short int posicion;
		cout<<"Ingrese el elemento a agregar: ";
		cin>> elemento;
		cout<<"Ingrese la posicion para el elemento: ";
		cin>> posicion;

		if( a == 1 )
		{
			objeto1.recibir( elemento, posicion );
		}else if( a == 2 )
		{
			objeto2.recibir( elemento, posicion );
		}
		return;

	}

	bool esIgualA( const int a, const int b )
	{
		return ( a == b ) ? true : false;
	}

	bool noEsIgualA( const int a, const int b )
	{
		return ( a != b ) ? true : false;
	}

	bool esMayorQue( const int a, const int b )
	{
		return ( a > b ) ? true : false;
	}
	bool esMenorQue( const int a, const int b )
	{
		return ( a < b ) ? true : false;
	}

	bool esMayorIgualQue( const int a, const int b )
	{
		return ( a >= b ) ? true : false;
	}

	bool esMenorIgualQue( const int a, const int b )
	{
		return ( a <= b ) ? true : false;
	}

	bool esCero( const int a )
	{
		return ( a == 0 ) ? true : false;
	}

	long int multiplicar( const int a , const int b )
	{
		return a * b;
	}

	double dividir( const int a , const int b )
	{
	    if( b != 0 )
           return a / b;

	}
