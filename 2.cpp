#include <iostream> 
#include <cctype> 
#include <cstring>

using namespace std;

int main(void)
{
   char teks[20], teks_baru[20];
   
   cout << "merubah karater pada sebuah kata" << endl << endl;
   cout << "KETIK SESUKAMU :) : "; cin >> teks;;

   for (int i=0; i<strlen(teks); i++) {
    if(teks[i] >= 'a' && teks[i] <= 'z'){
            teks_baru[i] = toupper(teks[i]);
      }
      else{
            teks_baru[i] = tolower(teks[i]);
      }
   }

   cout << "BERUBAH MENJADI SEPERTI INI : " << teks_baru << endl;

   return 0;   
}
