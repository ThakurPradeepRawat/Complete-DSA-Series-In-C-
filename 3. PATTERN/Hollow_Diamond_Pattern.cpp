// Pattern : 12 
// Enter number of lines :- 10
//          *
//         * *
//        *   *
//       *     *
//      *       *
//     *         *
//    *           *
//   *             *
//  *               *
// *                 *
//  *               *
//   *             *
//    *           *
//     *         *
//      *       *
//       *     *
//        *   *
//         * *
//          *

#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"Enter number of lines :- ";
    cin>>n;
    int val = 0;
    // top pattern
    for(int i = 0 ; i<n ; i++){
        for(int j= 1 ; j<n-i ; j++){
            cout<<" ";
        }
        cout<<"*";
       for(int k = 0 ; k<2*i-1 ; k++){
        cout<<" ";
       }
       if (i!=0){
        cout<<'*';
       }
       cout<<endl;
       
    } 
    // Bottom Pattern 
    for(int p = 1 ; p<n ; p++){
        for(int s = 0 ; s<p ; s++){
            cout<<" ";
        }
        cout<<"*";
        for(int g = 0 ; g<2*(n-p)-3;g++){
            cout<<" ";
        }
        if(p!=n-1){
            cout<<"*";
        }
        cout<<endl;
    }
    

return 0 ;

}