#pragma once
#include <string>
#include <vector>
#include <iostream>
#include "chambre.h"

class Hotel {
private:
    std::string id_;
    std::string nom_;
    std::string ville_;
    std::vector<Chambre> chambre_;

public:
    Hotel(std::string id, std::string nom, std::string ville);

    std::string getId() const;
    std::string getNom() const;
    std::string getVille() const;

    std::vector<Chambre>& getChambres();

    void ajouterChambre(const Chambre& chambre);
    void supprimerChambre(int numero);

    friend std::ostream& operator<<(std::ostream& os, const Hotel& h);
};