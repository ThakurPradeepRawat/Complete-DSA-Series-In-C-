// Wap to check given number is prime or not 
#include<iostream>
using namespace std;
void Is_prime(int a){
    bool prime = true ;
    for (int i = 2 ; i<(a/2)+1; i++){
        if(a%i == 0 ){
            prime = false ;
            break;
        }
    }
    if (prime == true){
        cout<< a << " is a prime number ";
    }
    else{
        cout<< a << " is not a prime number ";
    }  
}
int main(){
    int n ;
    cout<<"Enter a number that you want to check , given number is prime or not : ";
    cin>>n;
    if(n<=1 ){
        cout<<"Please enter value greater than 1 ";
    }else{
        Is_prime(n);
    }
    return 0;

}