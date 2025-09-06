#include <iostream>
#include <string>
using namespace std;

string inverteString(string txt) {
    string text2;
    for (int i = txt.size() - 1; i >= 0; i--) {
        text2 += txt[i];
    }
    cout << text2 << endl;
    return text2;
}

int comparaString(string txt1) {
    cout << "===============" << endl;
    string txtInvertido = inverteString(txt1);
    cout << "===============" << endl;

    if (txtInvertido == txt1 ) {
        cout << "E um palindromo" << endl;
        return 0;
    }
    cout << "Nao e um palindromo" << endl;
    return 1;
}

int main(){
    string txt1;
    cout << "Digite um nome: " << endl;
    cin >> txt1;
    comparaString(txt1);;

    return 0;
}