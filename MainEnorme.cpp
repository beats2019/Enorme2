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


	int main()
	{
		int seleccion;
		Enorme objeto;
		
		objeto.recibir( 3 , 0 );
		objeto.recibir( 423423 , 23 );
		//objeto.imprimir();
		/*
		cout<<"1.Suma \n2. Resta " << endl;
	switch( seleccion )
		{
			case 1:
				objeto.sumar();
				break;
			case 2:
				objeto.restar();
				break;
			default:
				cout<<"Seleccion incorrecta" << endl;		
		}
		cout<<"\nDigite la opcion a evaluar: ";
		cin>>seleccion;
		
		*/
		
		Enorme objeto2;
		objeto2.recibir( 5632, 22 );
		objeto2.recibir( 132415, 5 );
		
		
		int val1 = objeto.obtenerValor( 23 );
		int val2 = objeto2.obtenerValor( 22 );
		
		
		
		
		
		
		return 0;
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
		return ( b != 0 ) ? (a / b) : 0;
	}
	
	
	
	
	
	
