#pragma once

class Pila
{
	class NodoPila
	{
	public:
		char elemento;
		NodoPila* Siguiente;
	};

public:
	NodoPila* Pila1 = nullptr;
	NodoPila* Pila2 = nullptr;
	NodoPila* Pila3 = nullptr;
	NodoPila* Pila4 = nullptr;
public:
	void agregarDatosPila1(char _elemento);
	void agregarDatosPila2(char _elemento);
	void agregarDatosPila3(char _elemento);
	void agregarDatosPila4(char _elemento);
	char SacarElemento(int NumPila);
};

