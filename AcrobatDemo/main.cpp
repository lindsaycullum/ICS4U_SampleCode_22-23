//Ms. Cullum - Acrobat activity
//This project demonstrates the instantiation of a few acrobats
#include <iostream>
#include "Acrobat.h"

int main(){

    Acrobat sallygreg;
    Acrobat catty;

    cout << "sallygreg says: " << sallygreg.clap(10) << endl;

    cout << "catty says: " << catty.clap(4) << endl;

    return 0;

}
