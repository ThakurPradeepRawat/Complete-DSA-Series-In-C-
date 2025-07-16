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
// find unique element 
void unique_element(int arr[] , int size){
    int c = 0 ;
    for (int i = 0 ; i<size ; i++){
        c= arr[i] xor c;
    }
    cout<< "Unique element is :-  " <<c;
}
int main (){
    int arr[19];
    int size =5;
    input_Array(arr,size);
    print_array(arr,size);
    unique_element(arr,size);
    return 0;
}
