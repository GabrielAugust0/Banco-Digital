#pragma once
#include <string>

class Usuario{

    private:
        // Métodos privados, só devem ser alterados nesta classe (usar gets e sets)
        std::string nome;
        std::string senha;
        int numeroConta;    
    
    public:
        Usuario(std::string nome, std::string senha, int numeroConta);

        // Getters
        std::string getNome() const;
        std::string getSenha() const;
        int getNumeroConta() const;

        // Verificação de senha
        bool verificarSenha(std::string senhaDigitada) const;
};