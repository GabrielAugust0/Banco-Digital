#include "contaBancaria.h"

ContaBancaria::ContaBancaria(std::string titular, int numero, double saldo) : titular(titular), numero(numero), saldo(saldo) {}

void ContaBancaria::depositar(double valor){
    saldo += valor;
    std::cout << "Depósito de " << valor << " realizado. Novo saldo: " << saldo << "\n";
}

bool ContaBancaria::sacar(double valor){
    if( valor > saldo ){
        std::cout << "Saldo insuficiente. \n";
        return false;
    }
    saldo -= valor;
    std::cout << "Saque de " << valor << " realizado. Novo saldo: " << saldo << "\n";
    return true;
}

void ContaBancaria::exibirSaldo() const {
    std::cout << "Titular: " << titular << " | Conta: " << numero << " | Saldo: " << saldo << "\n";
}

int ContaBancaria::getNumero() const {
    return numero;
}

std::string ContaBancaria::getTitular() const {
    return titular;
}

double ContaBancaria::getSaldo() const {
    return saldo;
}