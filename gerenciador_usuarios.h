#pragma once
#include <vector>
#include <string>
#include "usuario.h"

class GerenciadorUsuarios {

    private:
        std::vector<Usuario> usuarios;
    
    public:
        bool registrarUsuario(std::string nome, std::string senha, int numeroConta);
        Usuario* autenticarUsuario(std::string nome, std::string senha);

};