#include<iostream>
#include<string>
#include<map>
#include<unordered_set>
#include<algorithm>
using namespace std;

int main()
{
unordered_set<int> us;
int arr[]={1,1,1,3,3,3};
int k=2;                            //No of sets into which array is divided
int max=-1;
int n=sizeof(arr)/sizeof(arr[0]);
int count=0;
for (int i=0;i<n;i++)
{   if (us.find(arr[i])==us.end())
    {
        us.insert(arr[i]);
        count++;
    }
}

if(count>=n/k)
{
cout<<"Count is : "<<n/k<<endl;
}
else
{
cout<<"Count is : "<<count<<endl;
}

}