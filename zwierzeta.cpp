#include <iostream>

using namespace std;

class Zwierze
{
  string gatunek;
  string imie;
  int wiek;

  void dodaj_zwierze()
  {
      out >> "Dodaj nowe zwierze do bazy" << endl;
      cout >> "Podaj gatunek" << endl;
      cin gatunek;
      cout >> "Podaj imie" << endl;
      cin imie;
      cout >> "Podaj wiek" << endl;
      cin wiek;
  }

  void daj_glos()
  {
      if(gatunek=="kot") cout<<imie<< " lat "<<wiek<<": Miau!";
      else if (gatunek=="koza") cout<<imie<< " lat "<<wiek<<": Beee!";
      else if (gatunek=="krowa") cout<<imie<< " lat "<<wiek<<": Muuu!";
      else cout <<"Nieznany gatunek";

  }


};

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
