#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"INSERTION SORT"<<endl;
    cout<<"Enter the length of array to be sorted:   ";
    cin>>n;
    int a[n];
    cout<<"Enter the numbers to be sorted:";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int temp;
    for(int i=1;i<n;i++)
    {
      temp=a[i];
     int j=i-1;
      while(temp<a[j]&&j>=0)
      {
      a[j+1]=a[j];
          j=j-1;
      }
      a[j+1]=temp;
  }
      cout<<"Sorted Numbers Are:";     
      for(int i=0;i<n;i++)
      {
          cout<<a[i]<<" ";
      }
      cin.ignore();
      cin.get();
  }          
    
