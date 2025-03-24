#ifndef BANCO_H
#define BANCO_H

#include <iostream>
#include <vector>
#include <memory>
#include "contaBancaria.h"

class Banco {

    private:
        std::vector<std::unique_ptr<ContaBancaria>> contas;

    public:
        ContaBancaria* criarConta(std::string titular);
        ContaBancaria* buscarConta(int numeroConta);
};

#endif