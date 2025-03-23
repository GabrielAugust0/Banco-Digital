#ifndef BANCO_H
#define BANCO_H

#include <iostream>
#include <vector>
#include <memory>
#include "contaBancaria.h"

class Banco {
    std::vector<std::shared_ptr<ContaBancaria>> contas;

    public:
        void adicionarConta(std::shared_ptr<ContaBancaria> conta);
        void listarContas();
};

#endif