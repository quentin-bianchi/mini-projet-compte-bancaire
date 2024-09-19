#include <iostream>
#include "client.h"
using namespace std;


class client{
    private:
    int prenom;
    int nom;
    int telephone;
    public:
    client (int, int, int);
    float solde(char);
};