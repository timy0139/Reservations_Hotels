#include "hotel.h"

Hotel::Hotel(std::string id, std::string nom, std::string ville)
	: id_(id), nom_(nom), ville_(ville)
{
}

std::string Hotel::getId() const
{
	return id_;
}

std::string Hotel::getNom() const
{
	return nom_;
}

std::string Hotel::getVille() const
{
	return ville_;
}

std::vector<Chambre>& Hotel::getChambres()
{
	return chambre_;
}

void Hotel::ajouterChambre(const Chambre& chambre)
{
	chambre_.push_back(chambre);
}

void Hotel::supprimerChambre(int numero)
{
	for (auto i = 0; i < chambre_.size(); i++) {
		if (chambre_[i].getNumero() == numero) {
			chambre_.erase(chambre_.begin() + i);
		}
	}
}

std::ostream& operator<<(std::ostream& os, const Hotel& h)
{
	os << "Hotel" << h.id_
		<< h.nom_ << ", " << h.ville_ << "\n";
	os << "Liste des chambres :\n";

	for (const Chambre& c : h.chambre_) {
		os << "  - " << c << "\n";
	}

	return os;
}
