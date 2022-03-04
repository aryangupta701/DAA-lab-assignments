#include<iostream>
#include<fstream>
using namespace std;

bool search(int arr[], int key , int& comp , int n){
    for(int i=0; i<n ; i++){
        comp++;
        if(arr[i] == key){
            return true;
        }
    }
    return false;
}

int main(){
   int t; 
   cin>>t; 
   while(t--){
        int comp = 0 , n, key;
        cin>>n; 
        int input[n];
        for(int i=0; i<n; i++){
            cin>>input[i];
        }
        cin>>key;
        if(search(input,key,comp,n))
        cout<<"Present "<<comp<<endl;
        else cout<<"Not Present "<<comp<<endl;
   }
   return 0;
}