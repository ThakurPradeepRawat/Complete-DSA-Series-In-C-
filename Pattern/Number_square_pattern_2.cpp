//  pattern  No :03            
//               Enter number of line :-3
//               1 2 3
//               4 5 6
//               7 8 9
#include<iostream>
using namespace std;
int main(){
    int number_of_line ;
    cout<<"Enter number of line :-";
    cin>> number_of_line;
    for(int i = 1 ; i<=number_of_line*number_of_line; i++){
        cout<< i <<" ";
        if(i%number_of_line==0){
            cout<<endl;
        }  
    }
    return 0;

}