#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int number,divisor;
    cout<<"Enter a Number";
    cin>>number>>divisor;
    if(number%divisor==0 || divisor%number==0){
        cout<<"Multiples";
    }
    else{
        cout<<"No Multiples";
    }
    return 0;

}