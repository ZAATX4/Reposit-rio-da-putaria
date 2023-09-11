// Putaria.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
#include <array>
#include <string>
#include "Classe.h"
#include "elAmesA.h"
#include "classeoperaria.h"
#include "Furry.h"
#include "Humano.h"

using namespace std;


void nomesAleatorios() 
{
	int names[10] = {};

	for (int i = 0; i < size(names); i++)
	{
		names[i] = rand();
		//dando um valor aleatório pra cada slot do vetor.
	}
	for (int i = 0; i < size(names); i++)
	{
		cout << names[i] << "\n";
		//mostrando isso 10 vezes.
	}
}
void estruturazao() 
{
	struct
	{
		string frutas[5] = { "banana", "maça", "cacetinho", "pera", "melância" };
		string carros[5] = { "renegade", "Trueno", "Contach", "Gol", "Uno" };
		int números[5] = { rand(), rand(), rand(), rand(), 4 };
	} estrutura1;

	cout << estrutura1.frutas[2] << endl;
	cout << estrutura1.números[4] << endl;
}
void valores(int a) 
{

	int b = 15;

	cout << "o endereço dos dois é " << &a << " e " << &b << endl;

	int* apontador = &b;

	int* ponteiroA = &a;

	cout << *ponteiroA << endl;

	cout << *apontador << endl;

	cout << apontador << endl;

	*ponteiroA = 50;

	cout << *ponteiroA << endl;
}



int main()
{
    cout << "Hell World!\n";

	//nomesAleatorios();

	estruturazao();

	

	struct 
	{
		int seila = rand();
		string nome = "none";
	} MyStruct;

	cout << MyStruct.nome << endl;
	cout << MyStruct.seila << "\n" << endl;

	string& peido = MyStruct.nome;

	cout << peido << endl;
	cout << &peido << endl;

	int carlo = 25;
	int* sheila = &carlo;

	cout << sheila << &carlo << *sheila << carlo << endl;

	*sheila = 90 + 9;

	cout << *sheila << carlo << endl;

	eleMesmo persona;

	persona.ataque("HAAAAYAAAAA");

	persona.Manequin();

	persona.setDano(50);
	cout << persona.getDano() << endl;

	eleMesmo carlos;

	carlos.setDano(40);
	cout << carlos.getDano() << endl;

	carlos.ataque("HEY HAAA");

	carlos.setNome("Carlos");
	cout << carlos.getNome() << endl;
	
	persona.setNome("Juliana");
	cout << persona.getNome() << endl;

	persona.setPronome();
	cout << persona.getPronome() << endl;

	Outro Pedro;

	Pedro.ataque("Hellooo");

	Pedro.setDano(500);
	cout << Pedro.getDano() << endl;

	Pedro.setSobre();
	cout << "Pedro " << Pedro.getSobre() << endl;

	Fulano Ciclano;

	Ciclano.ataque("BELTRANO");

	Ciclano.setDano(8001);
	cout << Ciclano.getDano() << endl;

	Ciclano.setSobre();
	cout << "Ciclano " << Ciclano.getSobre() << endl;

	Ciclano.setEnder();
	cout << Ciclano.getEnder() << endl;

	Classe Robson;

	Robson.ataque("Rola");

	Robson.EuSeiOqueEstaAcontecendo();

	elAmesA Shirley;

	Shirley.setvida();
	cout << Shirley.getvida() << endl;

	cout << "EU NÃO SEI AHAHAHAHAHAHAHA" << endl;

	Animal Cachorro;

	Cachorro.falar();

	Furry Carlinhos;

	Carlinhos.falar();

	Humano Alberta;

	Alberta.falar();

}

// Executar programa: Ctrl + F5 ou Menu Depurar > Iniciar Sem Depuração
// Depurar programa: F5 ou menu Depurar > Iniciar Depuração

// Dicas para Começar: 
//   1. Use a janela do Gerenciador de Soluções para adicionar/gerenciar arquivos
//   2. Use a janela do Team Explorer para conectar-se ao controle do código-fonte
//   3. Use a janela de Saída para ver mensagens de saída do build e outras mensagens
//   4. Use a janela Lista de Erros para exibir erros
//   5. Ir Para o Projeto > Adicionar Novo Item para criar novos arquivos de código, ou Projeto > Adicionar Item Existente para adicionar arquivos de código existentes ao projeto
//   6. No futuro, para abrir este projeto novamente, vá para Arquivo > Abrir > Projeto e selecione o arquivo. sln
