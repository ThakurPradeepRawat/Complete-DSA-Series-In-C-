// pattern 5 :- Triangle Pattern
        //  Number of lines : 3
        //      *
        //      * *
        //      * * *                                                                                                                            
# include<iostream>
using namespace std ;
int main(){
    int n ;
    cout<<"Number of lines : ";
    cin>>n;
    for (int i = 1 ; i<=n  ; i++){
        for(int j=1 ; j<=i; j++){
            cout << "*" << " ";
        }
        cout<<endl;
    }
    return 0;
}