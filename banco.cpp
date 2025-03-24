#include <iostream>
#include <vector>
#include <memory>
#include "banco.h"
#include "contaBancaria.h"
#include <algorithm>

ContaBancaria* Banco::criarConta(std::string titular){
    int numeroConta = contas.size() + 1; // Tem acesso a contas por ser private

    // Adiciona a conta ao vetor utilizando o unique_ptr
    contas.push_back(std::make_unique<ContaBancaria>(titular, numeroConta));
    return contas.back().get();
}

ContaBancaria* Banco::buscarConta(int numeroConta){
    auto it = std::find_if(contas.begin(), contas.end(),
                 [numeroConta](const std::unique_ptr<ContaBancaria>& conta){
                    return conta->getNumero() == numeroConta;
                 });
    
    return (( it != contas.end() ) ? it->get() : nullptr);
}
 