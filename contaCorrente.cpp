#include <iostream>
#include <vector>
#include <memory>
#include "contaCorrente.h"

ContaCorrente::ContaCorrente(std::string titular, int numero, double saldo, double limite) : ContaBancaria(titular, numero, saldo), limiteChequeEspecial(limite){}

bool ContaCorrente::sacar(double valor){
    if( valor > saldo + limiteChequeEspecial){
        std::cout << "Saldo e limite insuficientes. \n";
        return false;
    }
    saldo -= valor;
    std::cout << "Saque realizado com sucesso. Novo saldo: " << saldo << "\n";
    return true;
}
