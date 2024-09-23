#include<iostream>
using namespace std;
int main() {
    int baris, spasi, bintang, a;
    cout<<"Masukkan jumlah baris: ";
    cin>>a;

    for(baris=1; baris<=a; baris++){
        for(spasi=1; spasi<=a-baris; spasi++) {
                cout<<" ";
        }
            for(bintang=1; bintang<=baris; bintang++){
                cout<<"* ";
            }
            cout<<endl;
    }
 return 0;
}
