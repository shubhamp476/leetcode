#include <iostream>
using namespace std;

int main(){
    cout <<"Enter a Number: ";
    int n;
    cin >> n;
     if(n <0){
        cout<<"Number is Not Palindrome<<endl";
     }
     int x = n;
     int revNum = 0;

     while(n >0){
        int d = n%10;
        revNum = 10*revNum + d;
        n = n/10;
     }
     if(revNum == x){
        cout<<"Number is Palindrome<<endl";
     }
     else{
        cout<<"Number is Not Palindrome"<<endl;

     }

}