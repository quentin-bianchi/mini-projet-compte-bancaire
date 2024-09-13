#include <iostream>
#include "source.cpp"
using namespace std;

 class client {
    private:
    char *id;
    char *nom;
    char *prenom;
    int prenom;
    int nom;
    int cin;
    int telephone;

    public:
    client (int, int);
    float solde(char);
};

client::client (int c, int n, int p, int t){
    cin = c;
    nom = n;
    prenom = p;
    telephone = t;
}

float client::s olde(char choix){

    if(choix == 't') 
    {    return 0;
    }
    else if(choix == 'c')   
    {    return  0;
    }
    else if(choix == 'd') 
    {    return 0;
    }
    else if(choix == 'v')   
    {    return  0;
    }
    else if(choix == 'm') 
    {    return 0;
    }
}

int main(){
    printf ("0563265", "Quentin", "Bianchi", "0613515684");
}