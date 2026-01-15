#include <iostream>
#include "date.h"
#include "client.h"
#include "chambre.h"
#include "hotel.h"
#include "Reservation.h"

int main() {
	std::cout << "hello" << std::endl ;
	Date d1(15, 3, 2025);

	std::cout << d1.getJour() << "/" << d1.getMois() << "/" << d1.getAnnee() << std::endl;

	Client c("dginhac", "Ginhac", "Dominique");
	std::cout << c.getPrenom() << " " << c.getNom() << std::endl;

	Chambre chambre(101, "Single", 100);
	std::cout << chambre.getNumero() << " " << chambre.getType() << " " << chambre.getPrix() << std::endl;
	chambre.setPrix(200);
	std::cout << chambre.getNumero() << " " << chambre.getType() << " " << chambre.getPrix() << std::endl;

	Hotel h("lion", "Bouchon", "Lyon");
	h.ajouterChambre(Chambre(101, "Single", 100));
	std::cout << h.getId() << " " << h.getNom() << " " << h.getVille() << std::endl;
	h.supprimerChambre(1);

	int nuit = 3;
	Reservation r(d1, nuit, h.getId(), chambre.getNumero(), c.getId(), 0);
}