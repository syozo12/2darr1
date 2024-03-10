#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter the value of rows and columns ";
    cin>>a>>b;
    int arr1[a][b],arr2[a][b];
    cout<<"\n enter the values of matrix arr1";
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            cin>>arr1[i][j];
        }
        
    }
    cout<<"\n enter the values of matrix arr2";
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            cin>>arr2[i][j];
        }
        
    }
    cout<<"/n sum of the two matrices is";
    cout<<endl;
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            arr1[i][j]+=arr2[i][j];
            cout<<arr1[i][j];
        }
        cout<<endl;
    }
    return 0;
}

