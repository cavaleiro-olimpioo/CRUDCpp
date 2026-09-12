// Your First C++ Program

#include <iostream>

int main() {
    std::string inicialMessage = "========== PETSHOP ========== \n1 - Adicionar animal \n2 - Listar animais \n3 - Editar animais \n4 - Excluir animais \n0 - Sair";
    bool program = true;

    while (program){
        std::cout << inicialMessage << std::endl;
        
    }
    return 0;
}
