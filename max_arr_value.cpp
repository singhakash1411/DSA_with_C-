#include<iostream>
using namespace std;
int main()
{
    int arr[100],n,i;
    cout<<"Enter the array size= ";
    cin>>n;
    cout<<"Enter the array elements: ";
    for(int i=0;i<n;i++)
    cin>>arr[i];

    int ans=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>ans)
        ans=arr[i];
        
    }
    cout<<ans;
   return 0;
}   