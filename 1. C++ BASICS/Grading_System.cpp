// Wap to make a grading system in C++14

#include<iostream>
using namespace std;
int main(){
    float Grade;
    cout<<"Enter Your grade :- ";
    cin >> Grade;
    if (Grade>90){
        cout<<"Your Grade is :- A+";
    } else if (Grade >75){
        cout<<"Your Grade is :- A";
    } else if (Grade > 60){
        cout<<"Your Grade is : - B";
    } else if (Grade > 45){
        cout<<"Your Grade is :- C";
    }else if (Grade > 32){
        cout<<"Your Grade is :- D";
    }else{
        cout << "Your Grade is :- Fail";
    }
    return 0;

}
