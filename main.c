#include <iostream>
#include <string>
#include "hash.h"

using namespace std;

int main(){
    hash1 haT;
    haT.ajouterItem("Mohamed", "06142913", "05634333");
    haT.ajouterItem("Youness", "06143467", "05370012");
    haT.ajouterItem("Ali",     "06213456", "43243264");
    haT.ajouterItem("Bard",    "06140000", "05611298");
    haT.ajouterItem("yahya",   "06145894", "05345545");
    haT.ajouterItem("Fatima",  "04567814", "43243264");
    haT.ajouterItem("Noureddine",  "06670933", "53422343");

    haT.afficherItems();
    haT.afficherItemsDansIndex(7);

    //index = haT.Hash("ssi");

    //cout << "index = " << index << endl;

    return 0;
}

