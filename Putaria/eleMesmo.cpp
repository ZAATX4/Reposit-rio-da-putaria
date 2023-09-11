#include "eleMesmo.h"
using namespace std;

void eleMesmo::Manequin()
{
	cout << "manequin não faz nada" << endl;
}

void eleMesmo::ataque(string cry)
{
	cout << cry << endl;

}

void eleMesmo::setVida(int vid)
{
	vida = vid;
}

void eleMesmo::setDano(int dan)
{
	dano = dan;
}

void eleMesmo::setMana(int man)
{
	mana = man;
}
void eleMesmo::setNome(string nom)
{
	nome = nom;
}

void eleMesmo::setPronome()
{
	string pron = "pron";
	pron = pronome;
}

int eleMesmo::getVida()
{
	return vida;
}
int eleMesmo::getDano()
{
	return dano;
}
int eleMesmo::getMana()
{
	return mana;
}
string eleMesmo::getNome()
{
	return nome;
}

string eleMesmo::getPronome()
{
	return pronome;
}
