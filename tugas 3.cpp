#include <iostream>
#include <array>
#include <stdio.h>
using namespace std;
int main ()
{
// nilai array
    int nomor  [3] [4]  = {
                            {6,4,8,2},
                            {3,1,9,7},
                            {4,5,2,7}
                        };

    int x,y,z;
    for (x=0; x<3; x++){
        for (y=0; y<4; y++){
            cout <<"    "<< nomor [x] [y] <<" ";

        }
         cout <<endl;
    }
    return 0;
}
