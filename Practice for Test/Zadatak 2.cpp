#include<iostream>
using namespace std;

int main(){
    int brojac2;
    int brojac1 = brojac2;

    for ( brojac2 = 0; brojac2 <= 5; brojac2++){

        while ( brojac1 <= 5)
        {
            cout << brojac1;
            brojac1++;
        }
        cout << endl;
    }
    return 0;
}