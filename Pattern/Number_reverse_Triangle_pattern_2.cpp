// Pattern 10 : 
// enter number of line :- 3
// A A A
//   B B
//     C

#include<iostream>
using namespace std;
int main(){
    int n ; 
    cout<< "enter number of line :- ";
    cin >> n;
    char val = 'A';
    for (int i = 0 ; i < n; i++){
        for(int j = 0 ; j<i; j++){
            cout<<"  ";
        }
        for(int k = 1; k<= n - i; k++){
            cout << char(val + i) << " ";
        }
        cout<<endl;
    }
    return 0;
}