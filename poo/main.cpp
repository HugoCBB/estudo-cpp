#include <iostream>
#include "conta.hpp"


using namespace std;


class Pessoa {
    private:
        int idade;
        string nome;
        Conta conta;
    public:
        string setNome(string nome);
        Conta& getConta() { return conta; }

};


string Pessoa::setNome(string nome) {
    if ((nome.size()) > 10){
        cout << "Nome digitado invalido" << endl;
        return this->nome;
    }
    this->nome = nome;
    return this->nome;
};
int main(){
    Pessoa pessoa;
    pessoa.getConta().depositar(200);
    pessoa.getConta().getSaldo();
    pessoa.setNome("Hugo");
    return 0;
}

