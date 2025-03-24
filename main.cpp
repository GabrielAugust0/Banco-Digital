#include <iostream>
#include <memory>
#include <limits>
#include "banco.h"
#include "contaCorrente.h"
#include "contaPoupanca.h"
#include "usuario.h"
#include "gerenciador_usuarios.h"

void limparBuffer(){
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

int main() {

    GerenciadorUsuarios gerenciador;
    Banco banco;

    gerenciador.registrarUsuario("Alice", "senha123", 1001);
    gerenciador.registrarUsuario("Bob", "abc456", 1002);
    
    std::string nome, senha;
    Usuario* usuarioLogado = nullptr;

    do{
        std::cout << "\n=== Login ===" << std::endl;
        std::cout << "Nome: ";
        std::getline(std::cin, nome);
        std::cout << "Senha: ";
        std::getline(std::cin, senha);

        usuarioLogado = gerenciador.autenticarUsuario(nome, senha);

        if(!usuarioLogado){
            std::cout << "Erro: Nome ou senha inválidos!\n";
        }
    }while(!usuarioLogado);

    std::cout << "\nBem-vindo, " << usuarioLogado->getNome() << "!\n";

    //Menu principal do banco (após login)
    int opcao;
    do {
        std::cout << "\n=== Menu ===" << std::endl;
        std::cout << "1. Ver saldo\n2. Sacar\n3. Depositar\n4. Sair\n";
        std::cin >> opcao;
        limparBuffer();
    } while (opcao != 4);

    return 0;
}