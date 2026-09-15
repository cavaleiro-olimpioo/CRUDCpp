#include <iostream>
#include <vector>
#include <string> 
#include <format>

#include "Animais/Animal.cpp"
#include "Animais/Gato.cpp"
#include "Animais/Cachorro.cpp"

// 1. PROTÓTIPO DA FUNÇÃO (Indica ao compilador que a função existe mais abaixo)
bool ReadAnimals(const std::vector<Animal> allAnimals);

void main() {
    std::string inicialMessage = "========== PETSHOP ========== \n1 - Adicionar animal \n2 - Listar animais \n3 - Editar animais \n4 - Excluir animais \n0 - Sair";
    bool program = true;
    int choose;

    bool listExist;

    std::vector<Animal> animais;

    int opt;
    int animalType;


    std::string nome;
    int idade;
    double peso;

    while (program){
        std::cout << inicialMessage << std::endl;

        while (true){
            std::cout << "Escolha uma opção: ";
            std::cin >> choose;

            if (choose < 0 || choose > 4){
                std::cout << "[ERRO] Escolha uma opção válida" << std::endl;
            } else {
                break;
            }
        }

        switch (choose){
            case 1:
                std::cout << "Digite o nome do animal: ";
                std::cin >> nome;

                std::cout << "Digite a idade do animal: ";
                std::cin >> idade;

                std::cout << "Digite o peso do animal: ";
                std::cin >> peso;

                std::cout << "-=-=-=-=-= Selecione o tipo de animal =-=-=-=-=- \n1 - Gato \n2 - Cachorro \nEscolha: ";
                std::cin >> animalType;

                if (animalType == 1){
                    Cachorro cachorro(nome, idade, peso);
                    animais.push_back(cachorro);
                } else if(animalType == 2){
                    Gato gato(nome, idade, peso);
                    animais.push_back(gato);
                } else {
                    std::cout << "[ERRO] Tipo de animal não encontrado" << std::endl;
                }
                std::cout << "Animal adicionado!" << std::endl << std::endl;


                break;

            case 2:
                ReadAnimals(animais);
                break;
            case 3:

                break;
            case 4:
                listExist = ReadAnimals(animais);
                if (listExist){
                    std::cout << "Selecione o animal que deseja deletar: ";
                    std::cin >> opt;

                    animais.erase(animais.begin() + (opt-1));

                    std::cout << "Animal removido com sucesso!" << std::endl;
                }
                break;
            case 0:
                program = false;
                break;
        }
        

    }

    std::cout << "========== VOLTE SEMPRE ==========" << std::endl;
}

bool ReadAnimals(std::vector<Animal> allAnimals){
    if (allAnimals.size() < 1){
        std::cout << "A lista está vazia!" << std::endl;
        return false;
    } else {
        std::cout << "Lista de todos os animais: " << std::endl;
        for (int i = 0; i<allAnimals.size(); i++){
            std::cout << std::format("{} - {} {}, idade: {}, peso: {}", i+1, allAnimals[i].tipo, allAnimals[i].nome, allAnimals[i].idade, allAnimals[i].peso) << std::endl;
        }
        std::cout << std::endl;

        return true;
    }

}