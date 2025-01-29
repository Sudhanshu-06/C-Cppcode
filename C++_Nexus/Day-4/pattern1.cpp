#include<iostream>
using namespace std;
int main()
{
    int Total_rows;
    cin>>Total_rows;

    for(int row=1; row<=Total_rows; row++)
    {
       //space
       for(int col=1; col<=Total_rows-row; col++)
            cout<<" ";

       //print
       for(int col=1; col<=2*row-1; col++)
        cout<<"*";

       cout<<endl;
    }
    return 0;
}
