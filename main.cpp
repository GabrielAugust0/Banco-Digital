#include <iostream>
#include <memory>
#include "banco.h"
#include "contaCorrente.h"
#include "contaPoupanca.h"

int main() {

    Banco banco;
    banco.adicionarConta(std::make_shared<ContaCorrente>("Alice", 1001, 500.0, 200.0));
    banco.adicionarConta(std::make_shared<ContaPoupanca>("Bob", 1002, 1000.0, 1.5));

    banco.listarContas();
    return 0;
}