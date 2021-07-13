// Program enkripsi dan dekripsi pesan dengan Caesar Cipher

#include <iostream>
#include <string.h>
using namespace std;

void enkripsi()
{

string plainteks, cipherteks;
int i, k;
char c;

cout << "Ketikkan pesan:" ;
cin.ignore(); getline (cin, plainteks);
cout << "Masukkan jumlah pergesaran (0-25): "; cin >> k;
cipherteks =""; // inisiasi ciperteks dengan null string

for (i=0; i < plainteks.length(); i++)
{
 c = plainteks[i];
 if (isalpha(c)) { // hanya memproses huruf alphabet saja
 c = toupper(c); // ubah menjadi huruf kapital
 c = c - 65; 	// kodekan huruf ke angka 0 s.d 25
 c = (c + k) % 26; // enskripsi, geser sejauh k ke kanan
 c = c + 65;
}
cout << "Cipherteks: " <<cipherteks<< endl; //cetak ciperteks
}

void dekripsi()
{
    
 string plainteks, cipherteks;
 int i, k;
 char c;

cout << "Ketikkan cipherteks:" ;
cin.ignore(); getline (cin, cipherteks);
cout << "Masukkan jumlah pergesaran (0-25): "; 
cin >> k;
plainteks =""; // inisiasi plainteks dengan null string

for (i=0; i < cipherteks.length(); i++)
{
 c = cipherteks[i];
 if (isalpha(c)) { // hanya memproses huruf alphabet saja
 c = toupper(c); // ubah menjadi huruf kapital
 c = c - 65; 	// kodekan huruf ke angka 0 s.d 25
 if (c - k < 0)	 // kasus pembagian bilangan negatif
  c = 26 + (c - k);
 else
 c = (c - k) % 26; 
 c = c + 65;	// kodekan kembali ke huruf semula
 c = tolower(c); // plainteks dinyatakan sebagai huruf kecil
}
 
 plainteks = plainteks + c; // sambungkan ke plainteks
{
 cout << "Plainteks: " << plainteks <<endl; // cetak plainteks
}
}
main()
{
int pil; bool stop;
stop = false;

while (!stop)
{
cout << "Menu: " << endl;
cout << "1. Enskripsi " endl;
cout << "2. Dekripsi " endl;
cout << "3. Exit " endl;
cout << "Pilih menu: "; cin >> pil;
switch (pil){
 case 1 : enskripsi(); break;
 case 2 : deksripsi(); break;
 case 3 : stop = true; break;
}
}
}

