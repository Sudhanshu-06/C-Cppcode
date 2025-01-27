#include<iostream>
using namespace std;
int main()
{

    int num;
    cin>>num;
    if(num%7==0 && num%11==0){
        cout<<"Perfect is divisible"<<endl;
    }
    else{
        cout<<"Not perfect"<<endl;

    }
    return 0;
}
