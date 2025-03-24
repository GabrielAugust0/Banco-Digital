#include "usuario.h"

// Implementação do construtor
Usuario::Usuario(std::string nome, std::string senha, ContaBancaria* conta) : nome(nome), senha(senha), conta(conta) {}

// Métodos const, uma vez que não devem modificar os atributos
std::string Usuario::getNome() const { return nome; }
std::string Usuario::getSenha() const { return senha; }
ContaBancaria* Usuario::getConta() const {return conta;}

bool Usuario::verificarSenha(std::string senhaDigitada) const {
    return (senha == senhaDigitada);
}