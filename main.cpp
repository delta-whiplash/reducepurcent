#include <iostream>

using namespace std;

int givemenewprice()
{
    float baseprice;
    float reductionrate;
    float price2pay;
    char newvar;
    cout << "Quel est le prix de base ? ";
    cin >> baseprice;
    cout << "Quel est le taux de reduction ? ";
    cin >> reductionrate;
    price2pay = baseprice*(reductionrate/100);
    price2pay = baseprice-price2pay;
    cout << "Vous devrez payer : " << price2pay << "Euros" << endl;
    cout << "Voulez Vous calculer une autre réduction ? (O/n) ";
    cin >> newvar;
    if (newvar == 'O' || newvar == 'o') {
            givemenewprice();
    }
    else if (newvar == 'N' || newvar == 'n') {
            cout << "Ok, merci et bonne journée";
            exit(0);
    }
    else {
        cout << "Je n'est pas compris";
        exit(1);
    }
    return 0;
}

int main()
{
    cout << "Copyright, DeltaWhiplash" << endl;
    cout << "Bonjour, Bienvenue sur le programme qui calcul vos réduction" << endl;
    givemenewprice();
    return 0;
}
