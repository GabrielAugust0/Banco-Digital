#include "usuario.h"

// Implementação do construtor
Usuario::Usuario(std::string nome, std::string senha, int numeroConta) : nome(nome), senha(senha), numeroConta(numeroConta) {}

// Métodos const, uma vez que não devem modificar os atributos
std::string Usuario::getNome() const { return nome; }
std::string Usuario::getSenha() const { return senha; }
int Usuario::getNumeroConta() const { return numeroConta; }

bool Usuario::verificarSenha(std::string senhaDigitada) const {
    return (senha == senhaDigitada);
}