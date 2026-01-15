#pragma once
#include <string>
#include <iostream>

class Chambre {
private:
    int numero_;
    std::string type_;
    int prix_;

public:
    Chambre(int numero, std::string type, int prix);

    int getNumero() const;
    std::string getType() const;
    int getPrix() const;

};