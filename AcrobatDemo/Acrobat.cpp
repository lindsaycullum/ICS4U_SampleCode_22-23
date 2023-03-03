//defines acrobat methods
#include "Acrobat.h"

//initializes static variable
int Acrobat::numAcrobats = 0;

//Constructor definition
Acrobat::Acrobat(){
    numAcrobats++;
    cout << "A new acrobat has been created!!";
}

Acrobat::~Acrobat(){
    cout << "An acrobat has been destroyed!!";
}

int Acrobat::getNumAcrobats(){
    return numAcrobats;
}

//Clap takes a number, and returns a string that
//contains the word "clap" number times.
string Acrobat::clap(int number){

    string c;

    for (int i = 0; i < number; i++){
        c.append("clap ");
    }

    return c;

}

