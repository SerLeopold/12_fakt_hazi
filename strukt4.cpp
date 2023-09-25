#include <iostream>
using namespace std;

struct termek
{

    string nev;
    int db;
    int ear;
    int fizetendo;
};

int main()
{

    termek cukraszda[4];

    cukraszda[0].nev = "Dobos torta";
    cukraszda[0].db = 2;
    cukraszda[0].ear = 800;
    cukraszda[0].fizetendo = cukraszda[0].db * cukraszda[0].ear;

    cukraszda[1].nev = "Mignon";
    cukraszda[1].db = 3;
    cukraszda[1].ear = 650;
    cukraszda[1].fizetendo = cukraszda[1].db * cukraszda[1].ear;

    cukraszda[2].nev = "Mezes kremes";
    cukraszda[2].db = 1;
    cukraszda[2].ear = 850; // eleg draga
    cukraszda[2].fizetendo = cukraszda[2].db * cukraszda[2].ear;

    float dbossz;
    {
        dbossz = cukraszda[0].db + cukraszda[1].db + cukraszda[2].db;
    };
    for (int i = 0; i < 3; i++)
        cout << cukraszda[i].nev << "  " << cukraszda[i].db << "db  " << cukraszda[i].ear << "Ft.-/szelet \t  ";
    cout << "\nFizetendo osszeg: " << cukraszda[0].fizetendo + cukraszda[1].fizetendo + cukraszda[2].fizetendo << "Ft.-";
    cout << "\nSzelet osszesen: " << dbossz << " darab";

    return 0;
}