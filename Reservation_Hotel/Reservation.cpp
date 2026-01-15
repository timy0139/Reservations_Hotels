#include "Reservation.h"

Reservation::Reservation(Date dateDebut, int nbNuits, std::string idHotel, int numeroChambre, std::string idClient, int montantTotal)
	: dateDebut_(dateDebut), nbNuits_(nbNuits), idHotel_(idHotel),
	numeroChambre_(numeroChambre), idClient_(idClient), montantTotal_(montantTotal)
{
}

Date Reservation::getDateDebut() const
{
	return dateDebut_;
}

int Reservation::getNombreNuits() const
{
	return nbNuits_;
}

std::string Reservation::getIdHotel() const
{
	return idHotel_;
}

int Reservation::getIdChambre() const
{
	return numeroChambre_;
}

std::string Reservation::getIdClient() const
{
	return idClient_;
}

int Reservation::getMontantTotal() const
{
	return montantTotal_;
}

void Reservation::modifierSejour(Date nouvelleDate, int nouvellesNuits)
{
	if (nouvellesNuits > 0) {
		dateDebut_ = nouvelleDate;
		nbNuits_ = nouvellesNuits;
	}
}

int Reservation::calculerMontantTotal(int nbNuits, double prix)
{
	return nbNuits * prix ;
}

