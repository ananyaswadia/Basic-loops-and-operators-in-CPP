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