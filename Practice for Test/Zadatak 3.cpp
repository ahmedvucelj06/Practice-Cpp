#include<iostream>
using namespace std;

int main(){
    cout << "Tablice";

    int brojac1 = 1, brojac2 = 1;

    while (brojac2 <= 10){
        brojac1 = 1;
        while ( brojac1 <= 10)
        {
            cout << brojac2 << "*" << brojac1 << "=" << brojac1 * brojac2 << endl;
            brojac1 ++;
        }
        brojac2++;
        cout << endl;
    }
    return 0;
}