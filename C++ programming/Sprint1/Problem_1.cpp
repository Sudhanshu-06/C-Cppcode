/*1. Determining Even/Odd Numbers
Difficulty: Easy
Topics: Basic Programming
Description: Write a program to check whether a number is even or odd.
Example:
Input: number = 4
Output: Even
Explanation: Since 4 is divisible by 2, it is an even number.
*/
#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the Number";
    cin>>num;
    if(num%2==0){
        cout<<"Number is Even"<<endl;
    }else{
        cout<<"Number is Odd"<<endl;
    }
}