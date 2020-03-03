#include <iostream>
#include <string>
using namespace std;
int main(){
  string a;
  int jumlah;
  cout << "KETIK YANG ADA DI PIKIRANMU LALU ENTER: ";
  getline(cin, a);
  jumlah = a.length();
  cout << "Jumlah karakter adalah " << jumlah << endl;
}

