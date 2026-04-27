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
};

int main () 
{

}