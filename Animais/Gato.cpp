#include "Animal.cpp"

#include <string>

class Gato : public Animal {
    public:
        Gato(std::string n, int i, double p) : Animal(n, i, p) {
            tipo = "gato";
        }
};