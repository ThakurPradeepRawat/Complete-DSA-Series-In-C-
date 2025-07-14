//  Wap to calculate the sum of all digits of number using function 
#include<iostream>
using namespace std; 
int Sum_of_digits(int n ){
    int total_sum = 0;
    while(n>0){
        int rem = n%10;
        total_sum+=rem;
        n = int(n/10);
    }
    return total_sum;
}
int main(){
    cout<<"All digit sum of 2345 is : "<<Sum_of_digits(2345);
    return 0;

}