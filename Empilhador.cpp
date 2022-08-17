// EMPILHADOR_DESEMPILHADOR
// STACK UP, UNSTACK

#include <iostream>
#include <string>
#include <stack>
#include <list>

using namespace std;

void Menu();
void Gerenciador();
void Empilhar(stack<string>&Pilha);
void Desempilhar(stack<string>&Pilha);

int main()

{
	Menu();
	Gerenciador();

	return 0;
}


void Menu() 
{
	cout << endl
	    << "|=================================|" << endl
		<< "| Selecione uma das opcoes abaixo |" << endl
		<< "|=================================|" << endl;

   cout << "1 - Empilhar Pratos" << endl
		<< "2 - Desempilhar Pratos" << endl
		<< "3 - Sair" << "\n\n";
}


void Gerenciador()
{
	stack<string>Pilha;
	char select;
	bool PP = true;

	while (PP)
	{
		cin >> select;

		switch (select)
		{
		case '1':
		case 'E':
		case 'e':
			Empilhar(Pilha);
			system("Pause");
			Menu();
			break;

		case '2':
		case 'D':
		case 'd':
			Desempilhar(Pilha);
			system("Pause");
			Menu();
			break;

		case '3':
		case 'S':
		case 's':
			PP = false;
			break;

		default:
			cout << "Valor informado fora do Padrao, informe um valor VALIDO: \n";
			break;
		}
	}
}


void Empilhar(stack<string>&Pilha)
{
	string Conjunto[5] = { "Prato Vermelho","Prato Verde","Prato Azul","Prato Branco","Prato Laranja" };
	
	if (Pilha.size() == 0)
	{
		system("cls");

		cout << "Empilhando.....\n\n";

		for (int i = 0; i < 5; i++)
		{
			Pilha.push(Conjunto[i]);
			cout << Pilha.size() << ". " << Pilha.top() << "\n\n";

			for (int j = 0; j < Pilha.size(); j++)
			{
				cout << " " << (Pilha.size() - j) << ". " << Conjunto[Pilha.size() - j - 1] << endl;
			}
			cout << endl;
		}

		cout << "\nPRATOS EMPILHADOS\n\n";
	}
	else
	{
		system("cls");
		cout << "\nA PILHA ESTA CHEIA\n";
	}
}

void Desempilhar(stack<string>& Pilha)
{
	if (Pilha.empty())
	{
		system("cls");
		cout << "\nA PILHA JA ESTA VAZIA\n";
	}
	else {

		system("cls");

		cout << "Desempilhando.....\n\n";

			while (!Pilha.empty())
			{
				cout << Pilha.size() << ". " << Pilha.top() << endl;
				Pilha.pop();
			}
			cout << "\n";
	}

}
