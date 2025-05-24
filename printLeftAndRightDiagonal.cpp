#include <iostream>
using namespace std;
int main(){
    int m1[3][3]={
        {1,2,3},
        {4,5,6},
        {7,8,9}
     };
     cout <<"right diagonal: "<<endl;
     for(int i=0;i<3;i++){
        cout<<m1[i][i]<<" ";
     }
    
      cout<<endl<<"left diagonal: "<<endl;

     for(int i=0;i<3;i++){
      cout<<m1[i][2-i]<<" ";
     }
    
    return 0;

}