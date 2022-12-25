#include<iostream>
using namespace std;

int main() {

  int m, i;

  cout << "M:";
  cin >> m;

  char niz[m];

  for(i = 0;i<m;i++) {
    cout << "Elementi: ";
    cin >> niz[i];
  }

  for(i = m - 1;i>=0;i--) {
    cout << niz[i];
  }

  return 0;
}