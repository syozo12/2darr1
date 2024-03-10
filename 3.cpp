#include<iostream>
using namespace std;
int main(){
    int n,m,l1,r1,l2,r2,sum=0;
    cout<<"enter the number of of rows  ";
    cin>>n;
    cout<<"enter the number of columns ";
    cin>>m;
    cout<<"enetr the first coordinate";
    cin>>l1>>r1;
    cout<<"enetr the second coordinate";
    cin>>l2>>r2;

    int arr1[n][m];
    cout<<"\n enter the values of matrix arr1";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr1[i][j];
        }
    }
    cout<<"sum of the rectangle is";
    for(int i=l1;i<=l2;i++){
        for(int j=r1;j<=r2;j++){
            sum+=arr1[i][j];
        }
    }
    cout<<sum;
    return 0;
}