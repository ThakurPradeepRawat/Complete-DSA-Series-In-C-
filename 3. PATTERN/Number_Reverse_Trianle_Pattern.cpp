// Pattern 9 : 
// enter number of line :- 4
// 1 1 1 1
//   2 2 2
//     3 3
//       4

#include<iostream>
using namespace std;
int main(){
    int n ; 
    cout<< "enter number of line :- ";
    cin >> n;
    for (int i = 0 ; i < n; i++){
        for(int j = 0 ; j<i; j++){
            cout<<"  ";
        }
        for(int k = 1; k<= n - i; k++){
            cout << i+1 << " ";
        }
        cout<<endl;
    }
   
    return 0;
}