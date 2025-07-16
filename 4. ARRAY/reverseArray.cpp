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
void reverse_array(int arr[] , int size){
    if (size%2==0){
        int right = 1;
        int left = size ; 
        for(int right = 1; right <= size/2 ; right++){
            int temp = arr[right];
            arr[right]=arr[left];
            arr[left] = temp ;
            left = left-1;

        }
    }
    else{
        int right = 1;
        int left = size ; 
        for(int right = 1; right <= (size-1)/2 ; right++){
            int temp = arr[right-1];
            arr[right -1 ]=arr[left -1];
            arr[left-1] = temp ;
            left = left-1; }
}
}
int main(){
    int arr[20];
    int size = 5;
    // Take input from user
    input_Array(arr, size);
    // Print the array 
    print_array(arr, size);
    // reverse the array 
    reverse_array(arr,size);
    cout<<endl;
    cout<< "After reverse the array :- ";
    print_array(arr,size);
    return 0 ;
}
