class Compte {
private:
    double solde;
public:
    Compte(double initialSolde);
    
    void deposer(double montant);
    void retirer(double montant);
    double consulterSolde();
};
