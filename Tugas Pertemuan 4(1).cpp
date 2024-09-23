#include<iostream>
using namespace std;
bool Prima(int n) {
    if (n<=1) return false;
    for (int i = 2; i*i <= n; i++) {
        if (n%i==0) return false;
    }
    return true;
}

int main(){
    int batas;
    int jumlahGenap=0;
    int jumlahGanjil=0;
    int jumlahPrima=0;

    cout<<"Masukkan batas angka: "<<endl;
    cin>>batas;

    cout<<"Bilangan genap dari 1 sampai "<<batas<<" adalah: "<<endl;
        for(int i=1; i<=batas; i++) {
            if(i%2==0) {
            cout<<i<<" ";
            jumlahGenap += i;
            }
    }

    cout<<endl;
    cout<<"Jumlah bilangan genap adalah: "<<jumlahGenap<<endl;
    cout<<endl;

    cout<<"Bilangan ganjil dari 1 sampai "<<batas<<" adalah: "<<endl;
        for(int i=1; i<=batas; i++) {
            if (i%2!=0) {
            cout<<i<<" ";
            jumlahGanjil += i;
            }
    }

    cout<<endl;
    cout<<"Jumlah bilangan ganjil adalah: "<<jumlahGanjil<<endl;
    cout<<endl;

    cout<<"Bilangan Prima dari 1 sampai "<<batas<<" adalah: "<<endl;
        for (int i=1; i<=batas; i++) {
            if(Prima(i)) {
            cout<<i<<" ";
            jumlahPrima +=i;
        }
    }

    cout<<endl;
    cout<<"Jumlah bilangan prima adalah: "<<jumlahPrima<<endl;
    cout<<endl;

    cout<<"Faktor dari setiap bilangan ganjil, genap, dan prima: "<<endl;
    for (int i=1; i<=batas; i++) {
        cout <<"Faktor dari "<<i<<" adalah: ";
        for (int j=1; j<=i; j++) {
            if (i% j == 0) {
                cout <<j<< " ";
            }
        }
        cout << endl;
    }

    return 0;
}
