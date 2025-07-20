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