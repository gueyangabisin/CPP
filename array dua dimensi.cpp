#include <iostream>
#include <array>
#include <stdio.h>
using namespace std;
int main ()
{
// nilai array
    int nomor  [3] [4]  = {
                            //baris 1
                            {6,4,8,2},
                            //baris 2
                            {3,1,9,7},
                            //baris 3
                            {4,5,2,7}
                        };

    int x,y,z;
    for (x=0; x<3; x++){
        for (y=0; y<4; y++){
            cout <<"    "<< nomor [x] [y] <<" ";

        }
         cout <<endl;
    }
    float a,b,c,d;
    a=(6+3+4)/3;
    b=(4+1+5)/3;
    c=(8+9+2)/3;
    d=(2+7+7)/3;
    cout <<"rata-rata =\n";
    cout <<"    "<<a<<"     "<<b<<"     "<<c<<"     "<<d;
    
    return 0;
}
