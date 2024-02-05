//Cullum - this demos reading from a file
#include <iostream>
#include <fstream>

using namespace std;

int main(){

    //declare input file object
    ifstream inputfile("data.txt");

    //check if the file is open
    if (!inputfile.is_open()){
        cout << "no file";
        return 1;
    }

    //TODO - put this in a loop and print all the values from the file
    //read the data from the file
    int num = 0;
    inputfile >> num;

    //print to the screen
    cout << "The number in the file is " << num;

    //close the file
    inputfile.close();

    return 0;
}
