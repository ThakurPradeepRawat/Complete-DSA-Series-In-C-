// WAP to print square pattern 
//            Enter number :- 3
//                 1 2 3
//                 1 2 3
//                 1 2 3
#include<iostream>
using namespace std ;
int main(){
    int number_of_line ;
    cout<<"Enter number :- ";
    cin>> number_of_line;
    for(int i=1; i<=number_of_line;i++){
        for(int j = 1 ; j<=number_of_line; j++){
            cout<< j << " ";
        }
        cout<<"\n";
    }
    return 0;
}