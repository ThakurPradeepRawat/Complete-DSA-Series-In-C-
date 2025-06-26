// Wap to find nCr binomail coefficent of n&r.
#include<iostream>
using namespace std;
int fact_num(int a){
    int fact = 1;
    for(int i = 1; i<=a ; i++){
        fact*=i;
    }
    return fact;
}
int nCr(int n , int r){
    float binomial_coeeficient = (fact_num(n))/(fact_num(r) * fact_num(n-r));
    return binomial_coeeficient;
}
int main(){
    cout<<"Binomail coefficient of 6 & 3 is "<<nCr(6,3);
    return 0 ;
}