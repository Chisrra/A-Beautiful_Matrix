#include <iostream>
#include <cmath>


using namespace std;

int main()
{
    int movs;
    int puntos[5];
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            cin>>puntos[j];
            if(puntos[j] == 1){
                movs = abs(i-2) + abs(j-2);
                cout<<movs<<"\n\r";
                return 0;
            }
        }
    }
    return 0;
}
