/*
Author:Patrick Wangai
Reg No:BSE-01-0052/2025
Description:Declaration and initialization of 1D Array.
Date: 15/07/2025
version 1
*/
#include <iostream>
using namespace std;


int main(){
    int i,sum = 0;
    int scores[5] = {1,2,3,4,5};
 
    for(i=0;i<5;i++){
        sum = sum + scores[i];
        cout<<scores[i]<<endl;
    }
    cout<<"the sum is :"<<sum<<endl;
    return 0;
}