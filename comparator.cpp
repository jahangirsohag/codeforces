#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool comp(pair<string,int> a,pair<string,int> b)
{
    if(a.second==b.second)
    {
        return a.first<b.first;
    }
    return a.second>b.second;
}
int main() {
    int n;
    cin >> n;
    vector<pair<string,int>> vec;
    for(int i=0;i<n;++i)
    {
        string str;
        cin >> str;
        int k;
        cin >> k;
        vec.push_back({str,k});
    }
    sort(vec.begin(),vec.end(),comp);
    
    for(int i=0;i<n;++i)
    {
        cout << vec[i].first << " " << vec[i].second << endl;
    }
    return 0;
}