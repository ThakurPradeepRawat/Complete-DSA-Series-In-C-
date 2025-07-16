#include<iostream>
using namespace std ;
// Taking user input 
void input_Array(int arr[],int size){
    for (int i = 0 ; i < size ; i++){
        cout<< " Enter " << i+1 << " Number :- ";
        cin>>arr[i];
    }
};
// Print Array Elements
void print_array(int arr[] , int size ){
    cout<< "array :-";
    for (int i = 0 ; i < size ; i++){
        cout<< arr[i] << " -> " ;
        
    }

};
int main(){
    int arr[20];
    int size = 5;
    // Take input from user
    input_Array(arr, size);
    // Print the array 
    print_array(arr, size);
  
    return 0 ;
}