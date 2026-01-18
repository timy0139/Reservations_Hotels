#ifndef DATE_H
#define DATE_H
#include <iostream>
#include <string>

class Date {
private:
    int jour_;
    int mois_;
    int annee_;

    bool estBissextile(int annee); 

public:
    Date(int jour = 1, int mois = 1, int annee = 2025);

    int getJour() const;
    int getMois() const;
    int getAnnee() const;

    
    bool operator<(const Date& other) const;
    bool operator<=(const Date& other) const;

    bool is_date(int mois, int jour, int annee);
};


std::string to_string(const Date& d);

#endif 
