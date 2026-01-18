#include <iostream>
#include "date.h"
#include "client.h"
#include "chambre.h"
#include "Reservation.h"
#include "hotel.h"

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
		h.ajouterChambre(Chambre(i, "Single", 100));

	for (int i = 4; i <= 8; i++)
		h.ajouterChambre(Chambre(i, "Double", 125));

	for (int i = 9; i <= 10; i++)
		h.ajouterChambre(Chambre(i, "Suite", 210));

	Client c("Patate", "Millet", "Thomas");
	std::cout << c << std::endl;

	std::cout << h << std::endl;


	//question7
	std::vector<Reservation> reservations;
	std::vector<Client> clients;
	clients.push_back(Client("dginhac", "Ginhac", "Dominique"));
	clients.push_back(Client("Patate", "Millet", "Thomas"));

	std::string nomClient;
	std::cout << "Nom du client : ";
	std::cin >> nomClient;

	Client* clientTrouve = nullptr;
	for (size_t i = 0; i < clients.size(); i++) {
		if (clients[i].getNom() == nomClient) {
			clientTrouve = &clients[i];
			break;
		}
	}
	
	if (clientTrouve != nullptr) {
		std::cout << "\nClient trouvé !" << std::endl;
		std::cout << *clientTrouve << std::endl;
	}
	else {
		std::cout << "\nClient non trouvé, ajout d'un nouveau client." << std::endl;
		std::string id, prenom;
		std::cout << "Entrez l'identifiant : ";
		std::cin >> id;
		std::cout << "Entrez le prénom : ";
		std::cin >> prenom;
		clients.push_back(Client(id, nomClient, prenom));
	}

	int jour = 0, mois = 0, annee = 0, nuit = 0;
	Date dateDebut;
	bool dateValide = false;

	while (!dateValide) {
		std::cout << "Entrez la date de début (jour mois année) : ";
		std::cin >> jour >> mois >> annee;
	
		if (dateDebut.is_date(jour, mois, annee)) {
			dateDebut = Date(jour, mois, annee);
			dateValide = true;
			std::cout << std::endl;
		}
		else {
			std::cout << "Date invalide ! Veuillez réessayer." << std::endl;
		}
	}
	
	bool nuitsValide = false;
	while (!nuitsValide) {
		std::cout << "Entrez le nombre de nuits : ";
		std::cin >> nuit;
	
		if (nuit > 0) {
			nuitsValide = true;
			std::cout << "Nombre de nuit accepté : " << nuit << std::endl;
		}
		else {
			std::cout << "Le nombre de nuit doit être positif ! Veuillez réessayer." << std::endl;
		}
	}

	std::string typeVoulu;
	std::cout << "Type de chambre (Single / Double / Suite) : ";
	std::cin >> typeVoulu;

	Chambre* chambreDisponible = nullptr;

	for (Chambre& chambre : h.getChambres()) {
		if (chambre.getType() == typeVoulu &&
			!h.chambreOccupe(chambre.getNumero(), dateDebut, nuit, reservations)) {
			chambreDisponible = &chambre;
			break;
		}
	}

	if (chambreDisponible == nullptr) {
		std::cout << "Aucune chambre disponible.\n";
		return 0;
	}

	std::cout << "Chambre selectionnee : "
		<< chambreDisponible->getNumero()
		<< " | " << chambreDisponible->getPrix() << "€/nuit\n";

}