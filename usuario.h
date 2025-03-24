#pragma once
#include <string>
#include "contaBancaria.h"

class Usuario{

    private:
        // Métodos privados, só devem ser alterados nesta classe (usar gets e sets)
        std::string nome;
        std::string senha;
        ContaBancaria* conta; // Aloca dinamicamente a conta  
        
    public:
        Usuario(std::string nome, std::string senha, ContaBancaria* conta);

        // Getters
        std::string getNome() const;
        std::string getSenha() const;
        ContaBancaria* getConta() const;

        // Verificação de senha
        bool verificarSenha(std::string senhaDigitada) const;
};