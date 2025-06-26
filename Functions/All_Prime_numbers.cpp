//  WAP to print all prime number up to n ;
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
        cout<< a << " ";
        
    }  
}
void all_prime(int n){
    for(int i=2 ; i<=n ; i++){
        Is_prime(i);
    }
}


int main(){
    int n ;
    cout<<"Enter number where you want prime number : - ";
    cin>>n;
    if (n<=1){
        cout<<"Enter number greater than 1 " ;
    }else{
        all_prime(n);
    }

    return 0;
}