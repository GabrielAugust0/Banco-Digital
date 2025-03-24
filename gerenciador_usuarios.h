#pragma once
#include <vector>
#include <string>
#include "usuario.h"
#include "banco.h"

class GerenciadorUsuarios {

    private:
        std::vector<Usuario> usuarios;
        Banco& banco;
    
    public:
        GerenciadorUsuarios(Banco& banco); // Construtor recebe a referência de um banco
        bool registrarUsuario(std::string nome, std::string senha, int numeroConta);
        Usuario* autenticarUsuario(std::string nome, std::string senha);

};