#include <iostream>

using namespace std;

int main() {     
    char operador;
    int quantidadeNumeros;

    cout << "Digite um operador (+, -, *, /): ";
    cin >> operador;

    cout << "Quantos números você deseja calcular? ";
    cin >> quantidadeNumeros;

    if (quantidadeNumeros < 2) {
        cout << "Você deve inserir pelo menos 2 números para calcular." << endl;
        return 1;
    }

    double resultado;
    cout << "Digite o primeiro número: ";
    cin >> resultado;

    for (int i = 1; i < quantidadeNumeros; i++) {
        double numero;
        cout << "Digite o próximo número: ";
        cin >> numero;

        switch (operador) {
            case '+':
                resultado += numero;
                break;
            case '-':
                resultado -= numero;
                break;
            case '*':
                resultado *= numero;
                break;
            case '/':
                if (numero != 0) {
                    resultado /= numero;
                } else {
                    cout << "Erro: Divisão por zero não é permitida." << endl;
                    return 1;
                }
                break;
            default:
                cout << "Operador inválido." << endl;
                return 1;
        }
    }

    cout << "Resultado: " << resultado << endl;

    return 0;
}