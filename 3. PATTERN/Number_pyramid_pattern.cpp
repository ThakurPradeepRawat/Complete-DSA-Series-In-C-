// Pattern 11 :
// Enter number of line : - 4
//       1
//     1 2 1
//   1 2 3 2 1
// 1 2 3 4 3 2 1


#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"Enter number of line : - ";
    cin>>n;
    for(int i = 1 ; i<=n ; i++){
        for(int j = n ; j>i ; j--){
            cout<<"  ";
        }
        for(int k = 1 ; k < i ; k++ ){
            cout<< k << " ";
        } 
        for (int l = i ; l >0 ; l--  ){
            cout<<l << " ";
        }     
        cout<<endl;    
    }
    return 0 ; 

}