#pragma once
#include <iostream>
#include <string>

using namespace std;

class eleMesmo
{
public:
	void Manequin();
	void ataque(string cry);
	void setVida(int vid);
	void setDano(int dan);
	void setMana(int man);
	void setNome(string nom);
	void setPronome();
	int getVida();
	int getDano();
	int getMana();
	string getNome();
	string getPronome();
protected:
	int vida = 100;
	int dano = 10;
	int mana = 50;
	string nome = "Default";
	string pronome = "Neutres";
};
/*
O .h serve apenas para deixar valores default porque nos CPPs você pode transformar em coisas variaveis.
Até porque você tem que criar um objeto no main para usar as funções da classe.
*/