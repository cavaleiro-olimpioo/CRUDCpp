#pragma once
#include <string>
#include <iostream>

class Animal {
public:
    std::string tipo;
    std::string nome;
    int idade;
    double peso;

    Animal(std::string n, int i, double p) : nome(n), idade(i), peso(p) {}

    virtual ~Animal() = default;

    void comer() {
        std::cout << nome << " está comendo!" << std::endl;
    }
};