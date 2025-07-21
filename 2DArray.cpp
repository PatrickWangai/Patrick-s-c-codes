/*
Author:Patrick Wangai
Reg No:BSE-01-0052/2025
Description:Declaration and initialization of 2D Array.
Date: 21/07/2025
version 1
*/
#include <iostream>
using namespace std;


int main(){
    int i,j,sum = 0;
    int scores[3][3] = {
        
        {10,20,30},
        {40,50,60},
        {60,70,80}
        
        
        
    };
 
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cout<<scores[i][j]<<" \t";
        }
    cout<<endl;
    }
    return 0;
}