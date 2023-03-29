#include<iostream>
#include<vector>
using namespace std;


int main(){
    int n,d;
    cout<<"Enter the value of n and d : "<<endl;
    cin>>n>>d;
    
    vector <int> arr(n);
    vector<int> subArr(n);
    int len = arr.size();
    for (int i = 0; i < len; i++)
    {
        cout<<"Enter the element of " <<i<<" th"<<endl;
        cin>>arr[i];
    }
    cout<<"The old array is : "<<endl;
    for (int i = 0; i < len; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
    for (int i = 0; i < len; i++)
    {
        subArr[i] = arr[(d+i)%len];
    }
    
    cout<<"\nAfter The "<<d<<" times shift is "<<endl;
    cout<<"The new rotate array is : "<<endl;

    for (int i = 0; i < len; i++)
    {
        cout<<subArr[i]<<" ";
    }
    

}