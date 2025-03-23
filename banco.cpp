#include <iostream>
#include <vector>
#include <memory>
#include "banco.h"
#include "contaBancaria.h"

void Banco::adicionarConta(std::shared_ptr<ContaBancaria> conta){
    contas.push_back(conta);
}

void Banco::listarContas() {
    for( const auto& conta : contas) {
        conta->exibirSaldo();
    }
}

 