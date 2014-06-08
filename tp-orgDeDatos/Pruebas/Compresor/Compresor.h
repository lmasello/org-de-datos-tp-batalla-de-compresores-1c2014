#ifndef COMPRESOR_H
#define COMPRESOR_H

#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <cstdio>
#include <cstddef>
#define ORDEN 6
using namespace std;


/*Compresor tendra la logica sobre la compresion y descompresion del archivo de entrada. */
class Compresor{
	private:
		void calculoEntropia(char* buffer,unsigned int size);
		void calculoEntropiaSalidaSR(short* salida,unsigned int size);
	public:
		Compresor();

		/* A partir del buffer obtenido, se generara el archivo comprimido mediante los metodos de Symbol Ranking
		 * + MTF + Estructurado. Maneja la logica general del proceso y realiza las llamadas a los metodos de compresion
		 * de cada parte del proceso.
		 * Va a llamar a SymbolRanking comprimir. El resultado de esto se lo pasa a
		 * Estructurado.comprimir y modifica/devuelve el archivo comprimido
		 */
		double comprimir(char* buffer, unsigned int size);


		/* A partir del buffer obtenido, se genera el archivo descomprimido siguiendo los pasos y logica inversa del
		 * metodo comprimir.
		 */
		void descomprimir(unsigned short* entrada, unsigned int size);
};

#endif
