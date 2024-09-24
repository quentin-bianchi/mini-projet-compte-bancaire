#include <iostream>
#include "client.h"
#include "compte.h"
using namespace std;

int main() {
    int a;
    int Z;
    cout << "Bonjour\nEntrer votre code" << endl;
    cin>>a;
    if (a > 4685 && a< 4687)
    {
        cout << "Bienvenue" << endl;
        cout << "Choisisser votre action:" << endl;
        cout << "1. Consulter le RIB" << endl;
        cout << "2. Créditer le compte via une somme" << endl;
        cout << "3. Créditer le compte via un autre compte" << endl;
        cout << "4. virement" << endl;
        cout << "5. Commander un chéquier" << endl;
        cin >> Z;
    }
    else
    {
        cout << "Code invalide" << endl;
    }
    
    if (Z == 1)
    {
        cout << "FR-1435435264365445231986" << endl;
    }
    else if (Z == 2)
    {
        cout << "2. Créditer le compte via une somme" << endl;
    }
    else if (Z == 3)
    {
        cout << "3. Créditer le compte via un autre compte" << endl;
    }
    else if (Z == 4)
    {
        cout << "4. virement" << endl;
    }
    else if (Z == 5)
    {
        cout << "Votre commande a été enregistré\n" << endl;
    }
    else
    {
        cout << "Choix invalide" << endl;
    }
    return 0;
}
