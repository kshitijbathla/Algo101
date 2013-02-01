#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"SELECTION SORT"<<endl;
    cout<<"Enter the length of array to be sorted:   ";
    cin>>n;
    int a[n];
    cout<<"Enter the numbers to be sorted:";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int  counter, temp;    
    for (int i=0; i<n-1;i++)
       {
            counter=i;
            for (int j = i + 1; j < n; j++)
                  if (a[j] < a[counter])
                        counter = j;
            if (counter!= i)
             {
                  temp = a[i];
                  a[i] = a[counter];
                  a[counter] = temp;
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
    
