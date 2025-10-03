#include <iostream>
using namespace std;

int main() {
    int numeroSecreto = 27;
    int intento;

    cout << "Juego de adivinanza" << endl;
    cout << "Adivina el numero secreto:" << endl;

    cout << "Ingrese un numero: ";
    cin >> intento;

    while (intento != numeroSecreto) {
        if (intento < numeroSecreto) {
            cout << "El numero es muy bajo, pruebe otra vez: ";
        } else if (intento > numeroSecreto) {
            cout << "El numero es muy alto, pruebe otra vez: ";
        }
        cin >> intento;
    }

    cout << "Adivinaste el numero secreto." << endl;

    return 0;
}
