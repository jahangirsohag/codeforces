#include <iostream>

using namespace std;

const int mod=1e9+7;

int binExponen(int a,int b)
{
    int ans=1;
    while(b>0)
    {
        if(b&1==1)
        {
            ans=(1LL*ans*a)%mod;
        }
        a=(1LL*a*a)%mod;
        b >>=1;
    }
    return ans;
}

int main() {

    int T;
    cin >> T;
    while(T--)
    {
        int a,b;
        cin >> a >> b;
        cout << binExponen(a,b) << endl;

    }
    return 0;

}