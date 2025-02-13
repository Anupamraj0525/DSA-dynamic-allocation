#include<iostream>
using namespace std;
//moving all the zeros using the function that is the aim of our code
void movezero(int ar[],int size){
    int index=0;
    for(int i=0;i<size;i++){
        if(ar[i]!=0){
            ar[index++]=ar[i];
        }
    }
    while(index < size){
        ar[index++]=0;
    }
}
int main(){
    int t;
    cin>>t;
    int *ar[t];
    int size[t];
    //it will input  all the test cases first 
    for(int i=0;i<t;i++){
        cin>>size[i];
        ar[i]=new int[size[i]];
        for(int j=0;j<size[i];j++){
            cin>>ar[i][j];
        }
        
    }
    //now we process all the test cases 
    for(int i=0;i<t;i++){
        movezero(ar[i],size[i]);
        for(int j=0;j<size[i];j++){
            cout<<ar[i][j]<<" ";
        }
        cout<<endl;
        delete[] ar[i];
    }
    
}