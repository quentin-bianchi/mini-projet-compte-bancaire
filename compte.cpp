#include "compte.h"

// 
Compte::Compte(double initialSolde) : solde(initialSolde) {}

void Compte::deposer(double montant) {
    solde += montant;
}

void Compte::retirer(double montant) {
    if (montant <= solde) {
        solde -= montant;
    } else {
        
    }
}

double Compte::consulterSolde() {
    return solde;
}