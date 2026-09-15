/*
Program Penghitung Diskon Berdasarkan jumlah Harga Beli
*/
#include <iostream>
using namespace std;

int main(){

    int belanja;
    float diskon;
    string persen;

    cout<<"=== Kalkulator Kasir Toko Buah ===\n";
    cout<<"Masukan Total Belanja (Rp) :";
    cin>>belanja;

    if(belanja < 100000){
        diskon = belanja * 0;
        persen = "(0%)";
    } else if(100000 <= belanja < 299999){
        diskon = belanja * 0.1;
        persen = "(10%)";
    } else{
        diskon = belanja * 0.2;
        persen = "(20%)";
    }

    float total = belanja - diskon;

    cout<<"=== Ringkasan Pembayaran ===\n";
    cout<<"Diskon "<<persen<<"\t:"<<diskon<<endl;
    cout<<"Total Bayar\t:"<<total<<endl;

    return 0;
}