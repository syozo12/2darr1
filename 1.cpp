#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter the value of rows and columns ";
    cin>>a>>b;
    int arr[a][b];
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            arr[i][j]=10;
        }
        
    }
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            cout<<arr[i][j]<<"  ";
        }
        cout<<endl;
    }
    return 0;

}