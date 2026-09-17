#include <iostream>
using namespace std;

int main (){

    int minuman,uang,hasil;
    int air = 4000;
    int teh = 6000;
    int kopsus = 10000;

    cout<<"======= VENDING MACHINE =======\n";
    cout<<"Pilihan Minuman\n";
    cout<<"1. Air Mineral (Rp 4.000)\n";
    cout<<"2. Teh Botol (Rp 6.000)\n";
    cout<<"3. Kopi Susu (Rp 10.000)\n";
   

    while(minuman > 3 || minuman < 1){
        cout<<"Pilih Minuman (1-3)\t:";
        cin>>minuman;
        if(minuman > 3 || minuman < 1){
            cout<<"pilih yang bener bego\n";
        } else{
            cout<<"Masukan Uang Anda\t:";
            cin>>uang;
        } 
    }
    
    switch(minuman){
        case 1:
            hasil = uang - air;
        break;
        case 2:
            hasil = uang - teh;
        break;
        case 3:
            hasil = uang - kopsus;
        break;
        return 0;
    }

    if(hasil == 0){
        cout<<"makasih bang ni kembaliannya<<\n";
    } else if(hasil > 0){
        int sepuluh = hasil / 10000;
        hasil %= 10000;

        int lima = hasil / 5000;
        hasil %= 5000;

        int dua = hasil / 2000;
        hasil %= 2000;

        int seribu = hasil / 1000;
        hasil %= 1000;

        cout << "Kembalian:\n";
        cout << "Rp10.000: " << sepuluh << " lembar\n";
        cout << "Rp5.000\t: " << lima << " lembar\n";
        cout << "Rp2.000\t: " << dua << " lembar\n";
        cout << "Rp1.000\t: " << seribu << " lembar\n";
    } else {
        hasil = -hasil;
        cout<<"kurang "<<hasil<<" lu miskin\n";
    }
    return 0;
}