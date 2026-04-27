#include <iostream>
#include <cmath>
using namespace std;

class BelahKetupat;

class LayangLayang {
private:
//Lengkapi disini
double d1, d2;
double sisi1, sisi2;

 public:
void inputData() {
cout << "Input Layang-Layang\n";
cout << "Diagonal 1: "; cin >> d1;
cout << "Diagonal 2: "; cin >> d2;
cout << "Sisi 1: "; cin >> sisi1;
cout << "Sisi 2: "; cin >> sisi2;
}

double hitungLuas() {  
    return 0.5 * d1 * d2;  
}  

//Lengkapi disini  
friend void tampilkanKeliling(LayangLayang, BelahKetupat);


};


class BelahKetupat {
private:
//Lengkapi disini
double d1, d2;
double sisi;

public:
void inputData() {
//Lengkapi disini
cout << "\nInput Belah Ketupat\n";
cout << "Diagonal 1: "; cin >> d1;
cout << "Diagonal 2: "; cin >> d2;
cout << "Sisi: "; cin >> sisi;
}

double hitungLuas() {  
    return 0.5 * d1 * d2;  
}  

//Lengkapi disini  
friend void tampilkanKeliling(LayangLayang, BelahKetupat);


};

//Lengkapi disini
void tampilkanKeliling(LayangLayang l, BelahKetupat b)
{
double kelilingLayang = 2 * (l.sisi1 + l.sisi2);
double kelilingBelah = 4 * b.sisi;

cout << "\n--- Keliling ---" << endl;  
cout << "Keliling Layang-Layang : " << kelilingLayang << endl;  
cout << "Keliling Belah Ketupat : " << kelilingBelah << endl;

}

int main () 
{

}