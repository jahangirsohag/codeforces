#include <iostream>
using namespace std;

bool binary_search(int arr[],int target,int low,int high)
{
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(target==arr[mid])
        {
            return true;
        }
        else if(target>arr[mid])
        {
            low=mid+1;
        }
        else if(target<arr[mid])
        {
            high=mid-1;
        }
    }
    return false;
}
int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;++i)
    {
        cin >> arr[i];
    }
    int target=8;
    bool result=binary_search(arr,target,0,n-1);
    if(result) cout << "FOUND" << endl;
    else cout << "NOT FOUND" << endl;
    return 0;
}