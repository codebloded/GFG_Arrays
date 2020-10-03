//this is a question to sort an array containing only 0's and 1's
#include<iostream>
using namespace std;

int main()
{
  cout<<"Enter size of array: ";
  int n;
  cin>>n;
  int arr[n];
  cout<<"Enter array elements: ";
  for(int i=0;i<n;i++)
  cin>>arr[i];
  //declaring and initializing variables tp count number of zeroes and number of ones in array
  int count0=0,count1=0;
  for(int j=0;j<n;j++)
    if(arr[j]==0)
      count0++;
    else 
      count1++;
  //rewriting array in sorted manner i.e. all 0's in starting then 1's
  for(int k=0;k<count0;k++)
    arr[k]=0;
  for(int k=count0;k<n;k++)
    arr[k]=1;
  //printing sorted array elements
  for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
  cout<<endl;
  return 0;
}
