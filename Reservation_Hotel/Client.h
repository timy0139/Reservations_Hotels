#pragma once
#include <iostream>
#include <string>

class Client {
private:
    std::string id_;
    std::string nom_;
    std::string prenom_;

public:
    Client(std::string id, std::string nom, std::string prenom);

    std::string getId() const;
    std::string getNom() const;
    std::string getPrenom() const;

    friend std::ostream& operator<<(std::ostream& os, const Client& c);
};