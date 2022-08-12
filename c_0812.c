#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool compare_f(pair<int,int> a, pair<int, int>b)
{
	return a.first < b.first;
}
bool compare_s(pair<int, int>a, pair<int, int>b)
{
	return a.second < b.second;
}
int main(void)
{
	vector<pair<int,int> > v;
	int n;
	scanf("%d", &n);
	for(int i = 0; i < n; i++)
	{
		int in;
		scanf("%d", &in);
		v.push_back(make_pair(i, in));
	}
	sort(v.begin(), v.end(), compare_s);
	for(int i = 0; i < n; i++)
	{
		v[i].second = i;
	}
	sort(v.begin(), v.end(), compare_f);
	for(int i = 0; i < n; i++)
	{
		printf("%d ", v[i].second);
	}
	printf("\n");
	return 0;
}
