#include<iostream>
#include<iomanip>
using namespace std;

int main() {
  const double faktor_prekovremenog_rada = 1.5, Regularni_broj_sati = 40.0;
  int broj_zaposlenih, sledeci_zaposleni;

  double radni_sati, satnica, regularna_plata, prekovremena_plata, ukupna_plata, sve_plate;

  sve_plate = 0.00;
  broj_zaposlenih = 0;

  do {
    cout << endl;
    cout << "Unesite broj ostvarenih sati: ";
    cin >> radni_sati;

    cout << "Unesite satnicu: ";
    cin >> satnica;

    if(radni_sati > Regularni_broj_sati) {
      regularna_plata = Regularni_broj_sati * satnica;
      prekovremena_plata = (radni_sati - Regularni_broj_sati) * faktor_prekovremenog_rada * satnica;
    } else {
      regularna_plata = radni_sati * satnica;
      prekovremena_plata = 0.00;
    }

    ukupna_plata = regularna_plata + prekovremena_plata;
    sve_plate += ukupna_plata;
    ++broj_zaposlenih;

    cout << endl << endl;

    cout << "Reg prekovremeno ukupno";

    cout << endl << setw(3) << regularna_plata << setw(6) << prekovremena_plata << setw(11) << ukupna_plata << endl;

    cout << endl << endl;

    cout << "Da li zelite da nastavite sa sledecim zaposlenim? " << endl;
    cout << "1 - DA, 0 - NE";
    cin >> sledeci_zaposleni;
  } while (sledeci_zaposleni);

  cout << endl << endl;

  cout << "Ukupna plata za: " << broj_zaposlenih << " je: " << sve_plate << endl << endl;

  return 0;
}