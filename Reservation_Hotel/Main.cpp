#include <iostream>
#include "date.h"
#include "client.h"
#include "chambre.h"

int main() {
	std::cout << "hello" << std::endl ;
	Date d1(15, 3, 2025);

	std::cout << d1.getJour() << "/" << d1.getMois() << "/" << d1.getAnnee() << std::endl;

	Client c("dginhac", "Ginhac", "Dominique");
	std::cout << c.getPrenom() << " " << c.getNom() << std::endl;

	Chambre chambre(101, "Single", 100);
	std::cout << chambre.getNumero() << " " << chambre.getType() << " " << chambre.getPrix() << std::endl;
}