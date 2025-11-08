//lettcode 1137
#include <iostream>
using namespace std;

int main(){
    cout <<"Enter a number: ";
    int n;
    cin>>n;

    if(n==0){
        cout<<"Result: ",0;
    }
    else if(n==1 || n==2){
        cout<<"Result: ",1;
    }
    else{

        int ft = 0;
        int st = 1;
        int tt = 1;

        for(int i = 1 ; i <=n ; i++){
            int fr = ft +st + tt;

            ft = st ;
            st = tt;
            tt = fr;

        }
        cout<<"Result: "<<ft<<endl;
        
    }
}