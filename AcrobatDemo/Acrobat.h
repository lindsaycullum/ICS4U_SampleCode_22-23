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

        //methods that the acrobat can perform
        string clap(int number);
        string kneebend(int number);

    private:
        //private instance variables


};
