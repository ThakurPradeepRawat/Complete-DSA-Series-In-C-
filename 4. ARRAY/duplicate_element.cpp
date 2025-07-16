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
    cout<<endl;

};
// find duplicate element 
void duplicate_element(int arr[],int size){
    int given_number_xor = 0;
    int N_number_xor = 0 ;
    for (int i = 0 ; i<size ; i++){
        given_number_xor=given_number_xor xor arr[i];
        N_number_xor = N_number_xor xor i;

    }
    int duplicate = N_number_xor xor given_number_xor;
    cout << "Duplicate number is :- " << duplicate;
}

int main (){
    int arr[19];
    int size =5;
    input_Array(arr,size);
    print_array(arr,size);
    duplicate_element(arr , size);

    return 0;
}