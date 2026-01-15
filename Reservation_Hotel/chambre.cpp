#include "chambre.h"

Chambre::Chambre(int numero, std::string type, int prix)
    : numero_(numero), type_(type), prix_(prix)
{
}

int Chambre::getNumero() const
{
    return numero_;
}

std::string Chambre::getType() const
{
    return type_;
}

int Chambre::getPrix() const
{
    return prix_;
}

void Chambre::setPrix(int prix)
{
    prix_ = prix;
}
