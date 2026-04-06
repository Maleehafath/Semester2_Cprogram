#include <iostream>
using namespace std;
int main() {
    int n,i;
    int arr[100];
    int sum=0;
    cout<<"Enter number of elements:";
    cin>>n;
    cout<<"Enter "<< n <<" elements:\n";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Array elements are:";
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<"\n";
    }
    for(i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    cout<<"\nTotal sum="<<sum<<endl;
    return 0;
}
