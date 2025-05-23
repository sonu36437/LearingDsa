#include <iostream >
using namespace std;
int main (){
    int matrix[3][3]={
        {1,2,3},
        {4,5,6},
        {7,8,9}
    
    };
    int sum =0;
    for(auto &row : matrix){
        for(auto rowEle: row){
           sum+=rowEle;

        }
       
    
    }
    
    cout<<sum;
   


 
 
    return 0;
}