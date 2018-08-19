#include <iostream>
using namespace std;


int main(){

    //menentukan harga tiket
    int tiket_1 = 100000;
    int tiket_2 = 200000;
    int tiket_3 = 300000;

    //menentukan variabel inputan tiket
    int jml_tiket1;
    int jml_tiket2;
    int jml_tiket3;

    //variabel menghitung total dan komisi
    int total;
    int komisi;

    //inputan user
    cout<<"masukan pesanan tiket_1 : ";
    cin>>jml_tiket1;
    cout<<"masukan pesanan tiket_2 : ";
    cin>>jml_tiket2;
    cout<<"masukan pesanan tiket_3 : ";
    cin>>jml_tiket3;

    //rumus hitung total tiket
    total = (tiket_1 * jml_tiket1 ) + (tiket_2 * jml_tiket2) + (tiket_3 * jml_tiket3);
    cout<<total;

    //rumus hitung komisi
    komisi = total * 7.5 / 100;
    cout<<"komisi anda adalah : "<<komisi;

    
}
