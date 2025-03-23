#ifndef CONTABANCARIA_H
#define CONTABANCARIA_H

#include <iostream>
#include <vector>
#include <memory>

class ContaBancaria{

    protected:
        std::string titular;
        int numero;
        double saldo;
    
    public:
        ContaBancaria(std::string titular, int numero, double saldo = 0.0);
        
        virtual void depositar(double valor);
        virtual bool sacar(double valor);
        virtual void exibirSaldo() const;
        virtual ~ContaBancaria() = default;
};

#endif