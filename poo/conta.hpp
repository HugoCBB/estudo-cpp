#include <iostream>
using namespace std;

class Conta {
    private:
        long saldo;
    public:
        Conta(){saldo=0;};
        long getSaldo();
        long depositar(long valor);
        long sacar(long valor);
};

long Conta::getSaldo(){
    cout << saldo << endl;
    return this->saldo;
}

long Conta::depositar(long valor) {
    if(valor < 0) {
        cout << "Valor de deposito invalido" << endl;
        return 0;
    }
    cout << "Valor depositado com sucesso " << endl;
    return this->saldo += valor;
}

long Conta::sacar(long valor){
    if((valor > this->saldo) || (this->saldo < 0)) {
        cout << "Valor invalido para saque"<<endl;
        return this->saldo;
    }
    cout << this->saldo << endl;
    return this->saldo - valor;
}
