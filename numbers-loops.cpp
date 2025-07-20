#include <iostream>
using namespace std;

int main(){
   
    int num;
    cout<<"Enter an integer: ";
    cin>>num;
    if (num>0){
        cout<<"number is positive"<<endl;
    }
    else if (num<0){
        cout<<"number is negative"<<endl;
    }
    else cout<<"number is zero";

          return 0;
}