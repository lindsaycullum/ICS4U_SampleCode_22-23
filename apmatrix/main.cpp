#include <iostream>
#include <apmatrix.h>

using namespace std;

#define ROW 4
#define COLUMN 5

int main(){

    apmatrix<int> m(ROW, COLUMN, 6);

    m[0][0] = 5;

    for (int i = 0; i < m.numrows(); i++){
        for (int j = 0; j < m.numcols(); j++){
            cout << m[i][j] << " ";
        }
        cout << endl;
    }

}
