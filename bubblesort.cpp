#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"BUBBLE SORT"<<endl;
    cout<<"Enter the length of array to be sorted:   ";
    cin>>n;
    int a[n];
    cout<<"Enter the numbers to be sorted:";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    int temp;
    for(int i=0;i<n;i++)
    {
        for(int j=0,exchange=0;j<n;j++)
        {
            if(a[j] > a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
                exchange++;
                
            }
        }
        
    }

      cout<<"Sorted Numbers Are:";     
      for(int i=0;i<n;i++)
      {
          cout<<a[i]<<" ";
      }
      cin.ignore();
      cin.get();
  }          
    
