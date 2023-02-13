#include <iostream>
#include <string>

using namespace std;

int printPrompt(){

    cout << "cool." << endl;
}

//this function checks to see if there is a double letter
//in the word. This function takes one string
//as a parameter. It returns 1 if there is a double letter
//and a 0 if there isn't one.
int toonieLikes(string word){

    //status variable
    int good = 0;

    //checks to see if there are two letters the same
    for (int i = 0; i < word.length(); i++){

        //check to see if the two letters are the same
        if (word[i] == word[i+1]){
            good = 1;
            break;
        }
    }
    return good;

}







