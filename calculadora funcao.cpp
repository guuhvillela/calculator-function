#include <iostream>
using namespace std;

int Soma(int s1, int s2) {
	int resultado;
	resultado = s1 + s2;
	return resultado;
}

int Subtrair(int sb1, int sb2) {
	int resultado;
	resultado = sb1 - sb2;
	return resultado;
}

int Multiplicar(int m1, int m2) {
	int resultado;
	resultado = m1 * m2;
	return resultado;
}

int Dividir(int d1, int d2) {
	int resultado;
	if (d2 == 0) {
		cout << "Nao eh possivel dividir por 0!";
	}
	else {
		resultado = d1 / d2;
		return resultado;
	}
}

int main() {
	//Exercicio 2
	int n1, n2, resultado, escolha;

	cout << "BEM VINDOS A CALCULADORA EM C++" << endl;
	cout << "\nEscolha o tipo de calculo: \n[1]Soma \n[2]Subtracao \n[3]Multiplicacao \n[4]Divisao " << endl;
	cin >> escolha;

	switch (escolha) {

	case 1:
		cout << "A operacao escolhida foi SOMA" << endl;
		cout << "\nInsira o primeiro numero da operacao: ";
		cin >> n1;
		cout << "Insira o segundo numero da operacao: ";
		cin >> n2;
		resultado = Soma(n1, n2);
		cout << "Resultado: " << resultado;
		break;

	case 2:
		cout << "A operacao escolhida foi SUBTRACAO" << endl;
		cout << "\nInsira o primeiro numero da operacao: ";
		cin >> n1;
		cout << "Insira o segundo numero da operacao: ";
		cin >> n2;
		resultado = Subtrair(n1, n2);
		cout << "Resultado: " << resultado;
		break;

	case 3:
		cout << "A operacao escolhida foi MULTIPLICACAO" << endl;
		cout << "\nInsira o primeiro numero da operacao: ";
		cin >> n1;
		cout << "Insira o segundo numero da operacao: ";
		cin >> n2;
		resultado = Multiplicar(n1, n2);
		cout << "Resultado: " << resultado;
		break;

	case 4:
		cout << "A operacao escolhida foi DIVISAO" << endl;
		cout << "\nInsira o primeiro numero da operacao: ";
		cin >> n1;
		cout << "Insira o segundo numero da operacao: ";
		cin >> n2;
		resultado = Dividir(n1, n2);
		cout << "Resultado: " << resultado;
		break;

	default:
		cout << "Comando Invalido." << endl;
		break;
	}

	cout << "\n\nObrigado por usar!" << endl;

	system("pause");
	return 0;
}