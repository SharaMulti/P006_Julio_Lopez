/*
 Amerike university
 Author: Julio López
 Practica #: 5
 Fecha: 28/02/25
 Description: This program shall be a simple calculator with the 4 main operation forms (this time using switch)
*/

#include <iostream>
using namespace std;
int main(){

    double N1;
    double N2;
    char symbol;

    cout << "Calculator\n";

    cout << "Add the symbol you want to use\n";

    cout << "Addition (+)\n";
    cout << "Subtraction (-)\n";
    cout << "Multiplication (*)\n";
    cout << "Divition (/)\n";

    cin >> symbol;
    cout << "Write a number ";
    cin >> N1;
    cout << "Write a second number ";
    cin >> N2;

    switch (symbol)
    {
     case '+':
        cout << N1 + N2;
        break;
     case '-':
        cout << N1 - N2;
        break;
     case '*':
        cout << N1 * N2;
        break;
     case '/':
        cout << N1 / N2;
        break;
     default:
        cout << "Didn't i give you options?";

    }

}