//Acrobat class definition
//This class defines what the acrobat can do
#include <string>
#include <iostream>

using namespace std;

class Acrobat {

    public:
        //constructors & destructors
        Acrobat();
        ~Acrobat();

        //member methods that the acrobat can perform
        string clap(int number);
        string kneebend(int number);

        //static method - get number of acrobats
        static int getNumAcrobats();

    private:
        //private instance variables

        //private static variables
        static int numAcrobats;

};
