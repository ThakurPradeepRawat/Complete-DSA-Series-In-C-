// WAP to print character square pattern  
// Enter number :- 3
// A B C
// A B C
// A B C
#include<iostream>
using namespace std ;
int main(){
    int number_of_line ;
    cout<<"Enter number :- ";
    cin>> number_of_line;
    for(int i=0; i<number_of_line;i++){
        char val = 'A';
        for(int j = 0 ; j<number_of_line; j++){
            cout<< char(val+j) << " ";
        }
        cout<<"\n";
    }
    return 0;
}