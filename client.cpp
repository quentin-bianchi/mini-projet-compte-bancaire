#include "client.h"
#include <iostream>
using namespace std;    


Client::Client(const string p, const string c, const string t, double initialSolde)
    : prenom(p), CIN(c), phone(t), compte(initialSolde) {}

void Client::afficherInfoClient() {
    cout << "Prénom: " << prenom << endl;
    cout << "CIN: " << CIN << endl;
    cout << "Telephone: " << phone << endl;
    cout << "Solde du compte: " << consulterSolde() << " EUR" << endl;
}

void Client::deposerArgent(double montant) {
    compte.deposer(montant);
}

void Client::retirerArgent(double montant) {
    compte.retirer(montant);
}

double Client::consulterSolde() {
    return compte.consulterSolde();
}