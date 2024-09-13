#include <iostream>

using namespace std;
 class Compte{
    private:
    char *id;
    char *nom;
    char *prenom;
    double numero;
    double solde;
    public:
    Compte(char *, char *, char *, double, double);
    float credit();
    float debit();
    float consult();
    float virement();
    void affiche();
 };