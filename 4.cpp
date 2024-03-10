#include<iostream>
using namespace std;
#include<limits.h>
int main(){
    int n,m,idx,big=INT_MIN;
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
        cout<<endl;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]>big){
                big=a[i][j];
            }
        }
    }
    cout<<"the biggest element in the array is "<<big;
    return 0;

}