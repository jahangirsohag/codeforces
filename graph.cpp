#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	int graph[n][n];
	for(int i=0;i<n;++i)
	{
		for(int j=0;j<n;++j)
		{
			graph[i][j]=0;
		}
	}
	for(int i=0;i<n;++i)
	{
		int k,u;
		cin >> k >> u;
		while(u>0)
		{
			int a;
			cin >> a;
			graph[i][a-1]=1;
			--u;
		}
	}
	for(int i=0;i<n;++i)
	{
		for(int j=0;j<n;++j)
		{
			cout << graph[i][j];
			if(j<n-1)
			{
				cout << " ";
			}
		}
		cout << endl;
	}

	return 0;
}