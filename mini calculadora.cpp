#include <iostream>
using namespace std;

int main(){


//declaração de variaveis
int num1;
float num2;
char (operacao);
//entrada de dados
cout << ("Bem vindo a sua mini calculadora") << endl;

cout << ("Digite o primeiro numero: ") << endl;
cin>> num1;

cout << (" Digite o segundo numero") << endl;
cin>> num2;

cout << ("Escolha sua operacao:") << endl;
cout << ("+") << endl;
cout << ("-") << endl;
cout << ("*") << endl;
cout << ("/") << endl;
cin>> operacao;

//saida de dados
cout << "Voce escolheu a operacao " << operacao << endl;

cout << "\nResultado: " << num1 << " " << operacao << " " << num2 << " = ";

//lógica
if (operacao == '+') {
    cout << (num1 + num2) << endl;
}
else if (operacao == '-') {
    cout << (num1 - num2) << endl;
}
else if (operacao == '*') {
    cout << (num1 * num2) << endl;
}
else if (operacao == '/') {
    if (num2 > 0) {
        cout << (num1 / num2) << endl;
    }
    else {
        cout << "Não é possível dividir por zero" << endl;
    }
}
else {
    cout << "Operação Inválida" << endl;
}





}