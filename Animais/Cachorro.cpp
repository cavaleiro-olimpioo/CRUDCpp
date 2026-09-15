#include "Animal.cpp"

#include <string>

class Cachorro : public Animal{
    public:
        
        Cachorro(std::string n, int i, double p) : Animal(n, i, p) {
            tipo = "cachorro";
        }
};