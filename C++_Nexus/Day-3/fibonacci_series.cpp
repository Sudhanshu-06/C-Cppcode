#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    //0 1 1 2 3 4

    int first_no=0;
    int second_no=1;
    int current;
    if(n==1){
        cout<<"1";
    }
    if(n==2){
        cout<<"2";
    }

    for(int i=3; i<=n; i++)
    {
        current = first_no+second_no;
        first_no = second_no;
        second_no = current;
    }
    cout<<current;

    return 0;

}
