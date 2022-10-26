#include "Pila.h"

void Pila::agregarDatosPila1(char _elemento)
{
	NodoPila* NuevaPila = new NodoPila();
	NuevaPila->elemento = _elemento;
	NuevaPila->Siguiente = Pila1;
	Pila1 = NuevaPila;
}
void Pila::agregarDatosPila2(char _elemento)
{
	NodoPila* NuevaPila = new NodoPila();
	NuevaPila->elemento = _elemento;
	NuevaPila->Siguiente = Pila2;
	Pila2 = NuevaPila;
}
void Pila::agregarDatosPila3(char _elemento)
{
	NodoPila* NuevaPila = new NodoPila();
	NuevaPila->elemento = _elemento;
	NuevaPila->Siguiente = Pila3;
	Pila3 = NuevaPila;
}
void Pila::agregarDatosPila4(char _elemento)
{
	NodoPila* NuevaPila = new NodoPila();
	NuevaPila->elemento = _elemento;
	NuevaPila->Siguiente = Pila4;
	Pila4 = NuevaPila;
}

char Pila::SacarElemento(int NumPila)
{
	char Dato = ' ';
	if (NumPila == 1)
	{
		NodoPila* Aux = Pila1;
		Dato = Aux->elemento;
		Pila1 = Aux->Siguiente;
		return Dato;

	}
	else if (NumPila == 2)
	{
		NodoPila* Aux = Pila2;
		Dato = Aux->elemento;
		Pila2 = Aux->Siguiente;
		return Dato;
	}
	else if (NumPila == 3)
	{
		NodoPila* Aux = Pila3;
		Dato = Aux->elemento;
		Pila3 = Aux->Siguiente;
		return Dato;
	}
	else
	{
		NodoPila* Aux = Pila4;
		Dato = Aux->elemento;
		Pila4 = Aux->Siguiente;

		return Dato;
	}

}

