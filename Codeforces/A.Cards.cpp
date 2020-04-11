#include<iostream>
#include<stdio.h>
#include <algorithm>

using namespace std;

int n;
int arr[100], tmp[100];
bool isVisited[100];

int findIndex(int x)
{
	for (int i = 0; i < n; ++i)
	{
		if (arr[i] == x && !isVisited[i])
		{
			isVisited[i] = true;
			return i + 1;
		}
	}
	return 0;
}

int main()
{
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
		tmp[i] = arr[i];
		isVisited[i] = false;
	}
	sort(tmp, tmp + n);
	for (int i = 0; i < n / 2; ++i)
	{
		cout << findIndex(tmp[i]) << " " << findIndex(tmp[n - i - 1]) << endl;
	}

}
