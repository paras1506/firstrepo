#include<iostream>
using namespace std;   //swap alternate array elements
int main()
{
    int arr[50];
    int size;
    cout<<"enter the size of array"<<endl;
    cin>>size;
    for(int i=0;i<size;i++)
      cin>>arr[i];
      cout<<"before swaping array "<<endl;
      for(int i=0;i<size;i++)
      cout<<arr[i]<<endl;
    for(int i=0;i<size-1;i+=2)
    { 
       swap(arr[i],arr[i+1]);
    }
    cout<<"swaping is done"<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<"  ";
    }
    return 0;
}