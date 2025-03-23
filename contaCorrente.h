#pragma once

#ifndef CONTACORRENTE_H
#define CONTACORRENTE_H

#include <iostream>
#include <vector>
#include <memory>
#include "contaBancaria.h"

class ContaCorrente : public ContaBancaria {
    
    double limiteChequeEspecial;

    public:
        ContaCorrente(std::string titular, int numero, double saldo, double limite);
        bool sacar(double valor) override;
};

#endif