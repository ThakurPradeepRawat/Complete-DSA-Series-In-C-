//  pattern  No :01            
//   Enter number of line :-3
//           A B C
//           D E F
//           G H I
#include<iostream>
using namespace std;
int main(){
    int number_of_line ;
    cout<<"Enter number of line :-";
    cin>> number_of_line;
    char val = 'A';
    for(int i = 1 ; i<=number_of_line*number_of_line; i++){
        cout<< char(val+i-1) <<" ";
        if(i%number_of_line==0){
            cout<<endl;
        }  
    }
    return 0;

}