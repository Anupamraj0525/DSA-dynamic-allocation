#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int m,n;
        cin>>m>>n;
        int **arr=new int*[m];
        for(int i=0;i<m;i++){
            arr[i]=new int[n];
        }
        //we take the input for the array
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cin>>arr[i][j];
            }
        }
        //now we transpose the given matrix;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout<<arr[j][i]<<" ";
            }
            cout<<endl;
             
        }
        //delocating the memory
        for(int i=0;i<m;i++){
            delete[] arr[i];
        }
        delete[] arr;
       
       
    }
}