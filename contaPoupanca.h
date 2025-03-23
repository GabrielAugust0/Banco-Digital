#pragma once

#ifndef CONTAPOUPANCA_H
#define CONTAPOUPANCA_H

#include <iostream>
#include <vector>
#include <memory>
#include "contaBancaria.h"

class ContaPoupanca : public ContaBancaria {

    double taxaJuros;

    public:
        ContaPoupanca(std::string titular, int numero, double saldo, double juros);
        void aplicarJuros();
};

#endif