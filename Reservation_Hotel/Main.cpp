#include <iostream>
#include "date.h"
#include "client.h"

int main() {
	std::cout << "hello" << std::endl ;
	Date d1(15, 3, 2025);

	std::cout << d1.getJour() << "/" << d1.getMois() << "/" << d1.getAnnee() << std::endl;

	Client c("dginhac", "Ginhac", "Dominique");
	std::cout << c.getPrenom() << " " << c.getNom() << std::endl;
}