#include "gerenciador_usuarios.h"
#include <algorithm>

bool GerenciadorUsuarios::registrarUsuario(std::string nome, std::string senha, int numeroConta){
    // Verifica se o usuário já existe
    auto user = std::find_if(usuarios.begin(), usuarios.end(),
                [&nome](const Usuario& u) { return u.getNome() == nome;});
    
    if (user != usuarios.end()){
        return false; // Usuário já existe
    }

    // Adiciona o usuário no final do vetor
    usuarios.emplace_back(nome, senha, numeroConta);
    return true;
}   

Usuario* GerenciadorUsuarios::autenticarUsuario(std::string nome, std::string senha){
    auto user = std::find_if(usuarios.begin(), usuarios.end(),
                [&nome](const Usuario& u) {return u.getNome() == nome; });
    
    if( user != usuarios.end() && user->verificarSenha(senha)){
        return &(*user); // Retorna um ponteiro para o usuário autenticado
    }
    return nullptr;    // Autenticação falhou, retorna ponteiro null
}
