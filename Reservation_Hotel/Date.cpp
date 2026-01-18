#include "Date.h"

bool Date::estBissextile(int annee) 
{
    return (annee % 4 == 0 && annee % 100 != 0) || (annee % 400 == 0);
}

Date::Date(int jour, int mois, int annee)
    : jour_(jour), mois_(mois), annee_(annee)
{
    if (!is_date(jour, mois, annee)) {
        throw std::invalid_argument("Invalid date: " + std::to_string(jour) + "/" + std::to_string(mois) + "/" + std::to_string(annee));
    }
}

int Date::getJour() const
{
    return jour_;
}

int Date::getMois() const
{
    return mois_;
}

int Date::getAnnee() const
{
    return annee_;
}

bool Date::operator<(const Date& other) const
{
    if (annee_ < other.annee_) return true;
    if ((annee_ == other.annee_) && (mois_ < other.mois_)) return true;
    if ((annee_ == other.annee_) && ((mois_ == other.mois_) && (jour_ < other.jour_))) return true;
    return false;
}

bool Date::operator<=(const Date& other) const {
    // negation of < with swapped operands
    return !(other < *this);
}

bool Date::is_date(int jour, int mois, int annee) {
    if ((jour < 1) || (jour > 31)) return false;
    if ((mois < 1) || (mois > 12)) return false;
    if ((mois == 2) && (jour > 28)) return false;
    if (((mois == 4) || (mois == 6) || (mois == 9) || (mois == 11)) && (jour > 30)) return false;
    return true;
}


std::string to_string(const Date& d)
{
    return std::to_string(d.getJour()) + "/" + std::to_string(d.getMois());
}