#include<iostream>
using namespace std;

int main(){
    int n , i=0 , val=1;
    cout<<"enter value of n: "<<endl;
    cin >> n;

    
    while(i<n){
        cout<<val<<endl;
        val*=2;
        i++;

    }
    return 0;
}