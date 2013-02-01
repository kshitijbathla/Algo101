#include<iostream>
using namespace std;
int n;
void merge(int a[],int b,int q,int c)
{
    int s[q-b+2],t[c-q+1];
    int u[c-b+1];
    int pos1=0,pos2=0;
    for(int i=0;i<q-b+1;i++)
    {
        s[i]=a[b+i];
    }
    s[q-b+1]=1000000000; t[c-q]=100000000;
    for(int i=0;i<c-q;i++)
    {
        t[i]=a[q+1+i];
    }
    for(int i=0;i<c-b+1;i++)
    {
        if(s[pos1]>t[pos2]&&pos2<=c-q)
        {
            u[i]=t[pos2];
            pos2++;
        }
        else
        
        {
            u[i]=s[pos1];
            pos1++;
        }
    }
    for(int i=b;i<=c;i++)
    {
        a[i]=u[i-b];
    }
}              
void mergesort(int a[],int b,int c)
{
    int q;
    if(b<c)
    {
        q=(b+c)/2;
        mergesort(a,b,q);
        mergesort(a,q+1,c);
        merge(a,b,q,c);
    }
}

  
               
        
    
    
    

    
            
int main()
{
    int n;
    cout<<"MERGE SORT"<<endl;
    cout<<"Enter the length of array to be sorted:   ";
    cin>>n;
    int a[n];
    cout<<"Enter the numbers to be sorted:";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    mergesort(a,0,n-1);
      cout<<"Sorted Numbers Are:";     
      for(int i=0;i<n;i++)
      {
          cout<<a[i]<<" ";
      }
      
      cin.ignore();
      cin.get();
  }          
    
