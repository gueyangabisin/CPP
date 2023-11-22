#include <iostream>
#include <array>
using namespace std;
int main ()
{
// nilai array
    array <int, 9> nomor ={4,6,34,67,1,89,0,67,45};
    int maxn=0, minn=0;

// mencari nilai terbesar
    for (int i=0; i<nomor.size(); i++){
        if (nomor[i] > maxn){
            maxn=nomor[i];
        }
    }
// mencari nilai terkecil
     for (int i=0; i<nomor.size(); i++){
        if (nomor[i] < minn){
            minn=nomor[i];
        }
    }
//print out
    cout << "min "<< minn<<endl;
    cout << "max "<< maxn<< endl;
    return 0;
}

