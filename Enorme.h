#ifndef ENORME_H
#define ENORME_H


	class Enorme
	{
		public:
			Enorme();
			void recibir( long int  , const int );
			void imprimir();
			void sumar();
			void restar();
			long int obtenerValor( const int  );


		private:
			long int elementos[ 40 ];

	};

#endif

