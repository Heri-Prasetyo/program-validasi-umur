#include<iostream>
using namespace std;
int main(){
int umur;

cout<<"PROGRAM VALIDASI UMUR"<<endl;
cout<<"====================="<<endl;

cout<<"SYARAT MASUK BIOSKOP"<<endl;

cout<<"\nMasukan Umur Anda = ";
cin>>umur;


if(umur>17){
cout<<"\nUmur Lebih Dari 17 ,Selamat Anda Boleh Masuk Bioskop"<<endl;
}
else{
cout<<"\nUmur Kurang Dari 17 ,Maaf Anda Belum Cukup Umur, Tunggu "<<(17-umur)<<" tahun lagi supaya boleh menonton bioskop"<<endl;

}

return 0;



}
