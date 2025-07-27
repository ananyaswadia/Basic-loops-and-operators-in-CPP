//Ananya Swadia
//24070123012

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

/*  SAMPLE OUTPUT 1
Enter an integer: 7
number is positive

SAMPLE OUTPUT 2
Enter an integer: -10
number is negative
*/
