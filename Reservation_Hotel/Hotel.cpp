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
