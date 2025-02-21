#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n,m;
	cin >> n >> m;
	vector <pair<int,int>> vec;
	vector <int> degree(n+1);
	while(m--)
	{
		int x,y;
		cin >> x >> y;
		vec.push_back({x,y});
	}
	for(auto edge:vec)
	{
		degree[edge.first]++;
		degree[edge.second]++;
	}
	int count2=0;
	int count1=0;
	for(int i=1;i<=degree.size()-1;++i)
	{
		if(degree[i]==1)
		{
			count1++;
		}
		else if(degree[i]==2)
		{
			count2++;
		}
	}
	if(count1==2 && count2==n-2)
	{
		cout << "bus topology" << endl;
	}
	else if(count2==n) cout << "ring topology" << endl;
	else if(count1==n-1) cout << "star topology" << endl;
	else cout << "unknown topology" << endl;
	
    return 0;
}