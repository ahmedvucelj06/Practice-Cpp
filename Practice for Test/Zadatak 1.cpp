#include<iostream>
using namespace std;

int main(){
    int brojac1, brojac2;

    for ( brojac2 = 1; brojac2 <= 5; brojac2++) {
        for ( brojac1 = brojac2; brojac1 <=5; brojac1++ ){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
