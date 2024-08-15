#include <iostream>
using namespace std;

int main() {
    int n,k;
    cin >> n >> k;
    int arr[n];
    for(int i=0;i<n;++i)
    {
        cin >> arr[i];
    }
    int i=0,j=n-1;
    bool flag=false;
    while(i<j)
    {
        if(arr[i]+arr[j]==k)
        {
            flag=true;
            break;
        }
        else if(arr[i]+arr[j]<k)
        {
            ++i;
        }
        else
        {
            --j;
        }
    }
    if(flag) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}