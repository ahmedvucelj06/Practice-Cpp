#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int koliko_put[n];

    for ( int broj = 1; broj <= 10; broj++){
        koliko_put[broj] = 0;
    }

    for ( int i = 0; i < n; i++){
        int novi_broj;
        cin >> novi_broj;
        koliko_put[novi_broj]++;
    }

    for ( int broj = 1; broj <= 10; broj++){
        cout << "Broj" << broj << "se pojavljuje" << koliko_put[broj] << endl;

    }

    return 0;
}