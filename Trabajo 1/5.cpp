//calculadora
#include <iostream>

using namespace std;

float sumar(float a,float b){ return a + b;}
float restar(float a,float b){ return a - b;}
float multiplicacion(float a,float b){ return a * b;}
float division(float a,float b){ return a / b;}

int main() {
    float a, b, c;
    int opt;

    // Ingresar los operandos
    cin >> a >> b;

    // OPT-> 0-Addition, 1-Subtraction, 2-Multiplication, 3-Division
    cin >> opt;

    // Array de punteros a funciones
    float (*operations[])(float, float) = {sumar, restar, multiplicacion, division};

    // Seleccionar la operación basada en 'opt'
    if (opt >= 0 && opt < 4) {
        c = operations[opt](a, b);  // Llama a la función correspondiente
        cout << "Resultado: " << c << endl;
    } else {
        cout << "Operación no válida." << endl;
    }

    return 0;
}