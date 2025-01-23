#include <iostream>

using namespace std;

int main(){
    int n,q;
    cin >> n >> q;
    int arr[n];
    for(int i=0;i<n;++i)
    {
        cin >> arr[i];
    }
    long long int pref[n+1];
    pref[0]=0;
    for(int i=1;i<=n;++i)
    {
        pref[i]=pref[i-1]+arr[i-1];
    }
    for(auto it:pref) cout << it << " ";cout << endl;
    while(q--)
    {
        int l,r;
        cin >> l >> r;
        cout << pref[r]-pref[l-1] << endl;
    }

    return 0;
}