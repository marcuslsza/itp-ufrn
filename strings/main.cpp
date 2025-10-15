#include <iostream>
#include <string>
using namespace std;
// camelcase problem : frase de teste -> FraseDeTeste


string camelCase(string s) {
    string resultado; 
    bool capitalizarProxima = false;
    //Input: "  frase   de teste"
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') {
            capitalizarProxima = true;
        } else {
                if (capitalizarProxima) {
                // Primeiro caractere das palavras subsequentes - capitalizar
                resultado += toupper(s[i]);
                capitalizarProxima = false;
            }   else {
                // !resultado.empty() & !capitalizarProxima.
                resultado += s[i];
            }
        }
    }
    
    return resultado;
}



int main(void) {
    string text;
    getline(cin, text);
    system("PAUSE");
    cout << camelCase(text);   
}