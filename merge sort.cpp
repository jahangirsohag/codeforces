#include <iostream>
#include <vector>
using namespace std;

vector<int> merge(vector<int> &left,vector<int> &right)
{
    int n=left.size();
    int m=right.size();
    int i=0;
    int j=0;
    vector<int> ans;
    while(i<n && j<m)
    {
        if(left[i]<right[j])
        {
            ans.push_back(left[i]);
            ++i;
        }
        else
        {
            ans.push_back(right[j]);
            ++j;
        }
    }
    while(i<n)
    {
        ans.push_back(left[i]);
        ++i;
    }
    while(j<m)
    {
        ans.push_back(right[j]);
        ++j;
    }
    return ans;
}
vector<int> merge_sort(int arr[],int l,int r)
{
    if(l==r) return {arr[l]};
    int m=(l+r)/2;
    vector<int> left=merge_sort(arr,l,m);
    vector<int> right=merge_sort(arr,m+1,r);
    return merge(left,right);
}
int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;++i)
    {
        cin >> arr[i];
    }
    vector<int> ans=merge_sort(arr,0,n-1);
    for(int i=0;i<n;++i)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}