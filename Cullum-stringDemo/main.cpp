//Cullum - demo of string class and string functions
#include <iostream>
#include <string>

using namespace std;

//prototype
int toonieLikes(string word);

int main(){

    //declare a string
    string word1 = "I_like_cats";
    string word2;

    cout << word1 << endl;

    //length returns the length of the string
    int len = word1.length();
    cout << len << endl;

    //substring creates a smaller string
    word2 = word1.substr(2, word1.length());
    cout << word2 << endl;

    //basics for Toonie assignment.
    string phrase = "TOONIE";

    //checks to see if toonie likes
    int good = toonieLikes(phrase);

    if (good == 1){
        cout << "Toonie likes this!";
    }else{
        cout << "Toonie doesn't like this. :(";
    }





    return 0;

}
