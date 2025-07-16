#include<iostream>
using namespace std;
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
void swap_alternate(int arr[] , int size ){
    for (int i=1 ;i<size;i=i+2 ){
        int temp = arr[i];
        arr[i] = arr[i-1];
        arr[i-1]=temp;
    }
};
int main(){
    int arr[20];
    int size = 6;
    // Take input from user
    input_Array(arr, size);
    // Print the array 
    print_array(arr, size);
    cout<<endl ;
    swap_alternate(arr,size);
    cout<<"after swap alternate elements:- ";
    print_array(arr,size);
    return 0 ;
}
