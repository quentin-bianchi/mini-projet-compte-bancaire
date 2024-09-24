#include <string>
#include "compte.h"
using namespace std;

class Client {
private:
    string prenom;
    string CIN;
    string phone;
    Compte compte; 

public:
    Client(const string p, const string c, const string t, double initialSolde);

    void afficherInfoClient();
    void deposerArgent(double montant);
    void retirerArgent(double montant);
    double consulterSolde();
};
