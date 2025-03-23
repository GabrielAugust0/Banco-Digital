#include "contaPoupanca.h"

ContaPoupanca::ContaPoupanca(std::string titular, int numero, double saldo, double juros) : ContaBancaria(titular, numero, saldo), taxaJuros(juros) {}

void ContaPoupanca::aplicarJuros() {
    saldo += saldo * taxaJuros / 100;
    std::cout << "Juros aplicados. Novo saldo: " << saldo << "\n";
}
