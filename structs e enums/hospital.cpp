#include <iostream>
#include <string>
using namespace std;

struct Paciente {
    string nome;
    float peso;
};

float media(int listaPacientes[], int tam) {
    float peso_somatorio = 0;
    float peso_medio;
    for (int i=0;i<tam;i++) {
        Paciente paciente;
        cout << "Nome paciente " << i+1 << ' ';
        cin >> paciente.nome; // Nao vai ser utilizado. (?)
        cout << "Peso paciente " << i+1 << ' ';
        cin >> paciente.peso;
        cout << '\n';
        peso_somatorio += paciente.peso;
    }
    return peso_somatorio/tam;
}



int main() {
    cout << "Quantos pacientes? ";
    int n, arr[n];
    cin >> n; //No. de pacientes.
    cout << "Peso médio: " << media(arr, n);
}