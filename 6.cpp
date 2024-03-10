#include<iostream>
using namespace std;
int main(){
    int n,m,idx,sum=0;
    cout<<"enter the number of rows";
    cin>>n;
    cout<<"enter the number of colums";
    cin>>m;
    int a[n][m];
    cout<<"enter the elements in the matrix";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i==n/2||j==n/2){
                cout<<a[i][j];
            }
            else cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}