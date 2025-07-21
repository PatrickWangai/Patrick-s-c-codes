/*
Author:Patrick Wangai
Reg No:BSE-01-0052/2025
Description:Declaration and initialization of 3D Array.
Date: 21/07/2025
version 1
*/
#include <iostream>
using namespace std;


int main(){
    int i,j,k,sum = 0;
    int scores[2][2][3] = {
        {
            {10,20,30},
            {40,50,60} 
        },
        {
            {10,20,30},
            {40,50,60}
       
        }
        
        
            
    };
 
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            for(k=0;k<3;k++){
            cout<<scores[i][j][k]<<" \t";
        }
    cout<<endl;
    }
    cout<<endl;
    }
    return 0;
}