#pragma once
#include "Date.h"

class Reservation {
private:
    Date dateDebut_;
    int nbNuits_;
    std::string idHotel_;
    int numeroChambre_;
    std::string idClient_;
    int montantTotal_;

public:
    Reservation(Date dateDebut, int nbNuits, std::string idHotel, int numeroChambre, std::string idClient, int montantTotal);
    
    Date getDateDebut() const;
    int getNombreNuits() const;
    std::string getIdHotel() const;
    int getIdChambre() const;
    std::string getIdClient() const;
    int getMontantTotal() const;

};