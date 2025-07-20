# Basic-loops-and-operators-in-CPP

Aim: To study and implement basic loops in C++.
Tools: C++ IDE/ visual studio code.
Theory: Operators can be of different types-
1. Arithmetic Operators- These help carry out different mathematical operations like adding numbers, subtraction , multiplication, division ,etc without the need of math libraries.
2. Logical Operators - These perform logical functions like AND(&&),OR(||),NOT(!).
3. Relational Operators- These operators carry out comparision between two different quantities. Like less than, greater than, equal to , etc.
4. Bitwise Operators 
Code1:
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

Code 2:
#include<iostream>
using namespace std;

int main(){
    int math,sci,eng,hindi,sst,score;
   
    cout<<"Enter marks (out of 100) for math: ";
    cin>>math;
    cout<<"Enter marks (out of 100) for english: ";
    cin>>eng;
    cout<<"Enter marks (out of 100) for science: ";
    cin>>sci;
    cout<<"Enter marks (out of 100) for social studies: ";
    cin>>sst;
    cout<<"Enter marks (out of 100) for hindi: ";
    cin>>hindi;
   
    score= (math+eng+hindi+sci+sst)/5;
    cout<<"---Your result---"<<endl;
   
    if (score>=90 && score<100){
        cout<<"Grade: O"<<endl;
    }
    else if (score>=80 && score<90){
        cout<<"Grade: A+"<<endl;
    }
    else if (score>=70 && score<80){
        cout<<"Grade: A"<<endl;
    }
    else if (score>=60 && score<70){
        cout<<"Grade: B"<<endl;
    }
    else if (score>=50 && score<60){
        cout<<"Grade: C"<<endl;
    }
    else if (score>=40 && score<50){
        cout<<"Grade: P"<<endl;
    }
    else cout<<"Failed"<<endl;
   
    return 0;
}

Code 3:
#include<iostream>
using namespace std;

int main(){
    int x,y;
   
    cout<<"Enter X coordinate: ";
    cin>>x;
    cout<<"Enter Y coordinate: ";
    cin>>y;
   
    if (x>0 && y>0){
        cout<<"Point lies in I quadrant"<<endl;
    }
    else if (x<0 && y>0){
        cout<<"Point lies in II quadrant"<<endl;
    }
    else if (x<0 && y<0){
        cout<<"Point lies in III quadrant"<<endl;
    }
    else if (x>0 && y<0){
        cout<<"Point lies in IV quadrant"<<endl;
    }
    else cout<<"Point is at origin"<<endl;
   
    return 0;
}


Conclusion : With the help of these codes we laernt to implement basic if-else and if-elseif-else loops, using the LOGICAL OPERATOR 'AND (&&)'  and RELATIONAL OPERATOR '>', '<', '='.
