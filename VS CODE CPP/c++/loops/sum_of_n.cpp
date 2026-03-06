#include<iostream>
using namespace std;

int main(){
    int  i ,n , val, sum=0;

    cout<<"enter value of n: ";
    cin >> n;

   
    for(i=0; i< n ; i++){
        cin >> val;
        sum = sum +val;    

    }
    return 0;
}