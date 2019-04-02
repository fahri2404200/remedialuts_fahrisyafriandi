#include <iostream>
using namespace std;

int main(int arg, char*argv[])
{
    int a,b,c,d;
    char pilih;
    char jawab;
    
    cout<<"angka pertama : ";
    cin>>a;
    cout<<"angka kedua : ";
    cin>>b;
    
    cout<<"operasi yang akan di pilih : "<<endl;
    cout<<"1. tekan * jika ingin menggunakan perkalian "<<endl;
    cout<<"2. tekan / jikan ingin menggunakan pembagian "<<endl;
    cout<<endl;
    cout<<"masukkan pilihan : ";
    cin>>pilih;
    
    if (pilih== '*')
    {
        c=a*b;
    cout<<"hasil perkalian = "<<c<<endl;
    }
    if (pilih== '/')
    {
        d=a/b;
    cout<<"hasil pembagian = "<<d<<endl;
    }
    return 0;
}
