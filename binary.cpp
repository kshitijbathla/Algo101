#include<iostream>
using namespace std;
void quicksort(int a[],int left,int right)
{
int i = left,j=right;
int pivot=a[(left+right)/2];
int temp = 0;
while (i<=j)
{
while (a[i]<pivot) i++;
while (a[j]>pivot) j--;
if (i<=j)
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
i++;
j--;
}
}
if (left<j)
quicksort(a,left,j);
if (right>i) quicksort(a,i,right);

}


int main()
{
    int n,check=0,t,first=0,last,half,temp;
    cout<<"Enter Length : ";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
        quicksort(a,0,n-1);
    cout<<"Enter no : ";
    cin>>t;

    last=n;int counter;
    for(int i=0;0<=last;i++)
    {     half=(last)/2;
          if(t<a[half])
          {   last=half-1;
          }
          else if(t>a[half])
          {        first =half+1;
          }
          else if(t==a[half])
          {          check=1;counter=half;
                     break;
          }
    }
    if(check==0)
        cout<<"Number not Found\n";
    else
        cout<<"Number is "<<counter+1<<" rd biggest number";
}
