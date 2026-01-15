#include <iostream>
#include "date.h"
#include "client.h"
#include "chambre.h"
#include "hotel.h"
#include "Reservation.h"

int main() {
	//Partie 1
	// 
	//std::cout << "hello" << std::endl ;
	//Date d1(15, 3, 2025);
	//
	//std::cout << d1.getJour() << "/" << d1.getMois() << "/" << d1.getAnnee() << std::endl;
	//
	//Client c("dginhac", "Ginhac", "Dominique");
	//std::cout << c.getPrenom() << " " << c.getNom() << std::endl;
	//
	//Chambre chambre(101, "Single", 100);
	//std::cout << chambre.getNumero() << " " << chambre.getType() << " " << chambre.getPrix() << std::endl;
	//chambre.setPrix(200);
	//std::cout << chambre.getNumero() << " " << chambre.getType() << " " << chambre.getPrix() << std::endl;
	//
	//Hotel h("lion", "Bouchon", "Lyon");
	//h.ajouterChambre(Chambre(101, "Single", 100));
	//std::cout << h.getId() << " " << h.getNom() << " " << h.getVille() << std::endl;
	//h.supprimerChambre(1);
	//
	//Reservation r(d1, 3, h.getId(), chambre.getNumero(), c.getId(), 0);
	//std::cout << "Client: " << r.getIdClient() << std::endl;
	//std::cout << "Hôtel: " << r.getIdHotel() << std::endl;
	//std::cout << "Chambre: " << r.getIdChambre() << std::endl;
	//std::cout << "Nombre de nuits: " << r.getNombreNuits() << std::endl;
	//std::cout << "Montant total: " << r.getMontantTotal() << std::endl;
	//r.modifierSejour(d1, 5);
	//std::cout << "Client: " << r.getIdClient() << std::endl;
	//std::cout << "Hôtel: " << r.getIdHotel() << std::endl;
	//std::cout << "Chambre: " << r.getIdChambre() << std::endl;
	//std::cout << "Nombre de nuits: " << r.getNombreNuits() << std::endl;
	//std::cout << "Montant total: " << r.getMontantTotal() << std::endl;


	//Partie 2

	Hotel h("président", "animal", "Paris");

	for (int i = 1; i <= 3; i++)
		h.ajouterChambre(Chambre(100 + i, "Single", 100));

	for (int i = 4; i <= 8; i++)
		h.ajouterChambre(Chambre(100 + i, "Double", 125));

	for (int i = 9; i <= 10; i++)
		h.ajouterChambre(Chambre(100 + i, "Suite", 210));

	Client c("Patate", "Millet", "Thomas");
	std::cout << c << std::endl;

	std::cout << h << std::endl;
}