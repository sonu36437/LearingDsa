#include <iostream>
using namespace std;
int main(){
    int m1[3][3]={
       {1,2,3},
       {4,5,6},
       {7,8,9}
    };
    int m2[3][3]={
        {5,6,7},
        {8,9,10},
        {11,12,13}
     };
     int sumMatrix[3][3];
     for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            sumMatrix[i][j]= m1[i][j]+m2[i][j];
        }
        cout<<endl;
     
     }
     for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<sumMatrix[i][j]<<" ";
        }
        cout<<endl;
     }
     //similar for subtraction
    return 0;
}