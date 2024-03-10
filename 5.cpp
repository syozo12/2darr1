#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n,m,idx,sum=0;
    int max=INT_MIN;
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
        sum=0;
        for(int j=0;j<m;j++){
            sum+=a[i][j];
        }
        if(max<sum){
             max=sum;
             idx=i+1;
        }
    }
    cout<<"the max sum is "<<max<<endl;
    cout<<"row number is"<<idx;

}