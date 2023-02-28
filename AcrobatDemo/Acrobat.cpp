//defines acrobat methods
#include "Acrobat.h"

//Constructor definition
Acrobat::Acrobat(){
    cout << "A new acrobat has been created!!";
}

Acrobat::~Acrobat(){
    cout << "An acrobat has been destroyed!!";
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
