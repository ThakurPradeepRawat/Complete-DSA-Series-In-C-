//  WAP to  print nth Fibbonacci number .
#include<iostream>
using namespace std;
int fib(int n){
    if (n==1){
        return 0;
    }
    else if (n==2){
        return 1;
    }
    else{
        int a = 0;
        int b = 1;
        int c ;
        for(int i = 3 ; i <= n ; i++){
            c = a+b ;
            a=b;
            b=c;
        }
        return c;
    }
}
int main(){
    int n ;
    cout<<" Enter number that place  fibbonacci number you want  ";
    cin >> n;
    if (n<0){
        cout<<"Enter valid natural number ";
    }
    else{
        cout<< n<<"th fibbonacci number is : "<<fib(n);
    }
    return 0 ;
}