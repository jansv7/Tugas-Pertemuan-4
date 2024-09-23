#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Masukkan jumlah element Fibonacci yang ingin ditampilkan: "<<endl;
    cin>>n;

    int a=0;
    int b=1;
    cout<<"Deret Fibonacci: "<<endl;

    for(int i=0; i<n; i++) {
        cout<<a<<" ";
        int next= a+b;
        a=b;
        b=next;
    }

    return 0;

}
