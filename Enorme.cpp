#include <iostream>
#include <cmath>
using namespace std;

#include "Enorme.h"


	Enorme::Enorme()
	{
		for( int i = 0; i < 40; i++ )
			elementos[ i ] = 0;
	}
	
	/*
		Utilizar el log10 para encontrar el largo del número
	*/
	void Enorme::recibir( long int a , const int pos)
	{
		int eval = static_cast<int>( log10(a) ) + 1;
		elementos[ pos ] = ( eval <= 40 ) ? a : 0;
		
	}
	
	void Enorme::imprimir()
	{
		for( int i = 0; i < 40; i++ )
		{
			if( elementos[ i ] != 0 )
			{
				cout<<"\nelementos[ " << i << " ] = " << elementos[ i ];
			}
		}
		
		
	}
	
	void Enorme::sumar(  )
	{
		int a , b;
		cout<<"Los elementos disponibles son: " << endl;
		imprimir();
		cout<<"\nDigite la posicion del primer elemento a sumar: ";
		cin>> a;
		cout<<"\nDigite la posicion del segundo elemento a sumar: ";
		cin>> b;
		
		cout<<"La suma de los dos elementos es: " << ( elementos[ a ] + elementos[ b ] ) << endl;
		
	}
	
	void Enorme::restar(  )
	{
		int a , b;
		cout<<"Los elementos disponibles son: " << endl;
		imprimir();
		cout<<"\nDigite la posicion del primer elemento a restar: ";
		cin>> a;
		cout<<"\nDigite la posicion del segundo elemento a restar: ";
		cin>> b;
		
		cout<<"La resta de los dos elementos es: " << ( elementos[ a ] - elementos[ b ] ) << endl;
		
	}
	
	long int Enorme::obtenerValor( const int a )
	{
		return elementos[ a ];
	}
	
