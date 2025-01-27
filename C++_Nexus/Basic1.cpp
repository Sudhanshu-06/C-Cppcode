#include<iostream>
using namespace std;
int main()
{

    int first_no=50;
    int second_no=30;
    if(first_no>second_no){
        cout<<first_no<<endl;
    }else{
        cout<<second_no;
    }

    int number=-90;
    if(number>0){
        cout<<"It is positive no"<<endl;

    }else if(number<0){
        cout<<"It is negative no"<<endl;
        }
    else{
        cout<<"It is zero"<<endl;
    }

    int a=10,b=20,c=30;
    if(a>=b && a>=c){
        cout<<"a is greater"<<endl;
    }
    else if(b>=a && b>=c){
        cout<<"b is greater"<<endl;
    }
    else{
        cout<<"c is greater"<<endl;
    }


    return 0;
}
