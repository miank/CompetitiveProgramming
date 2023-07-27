// FirstAndLastOccurrencesOfX.cpp 

#include <iostream>
#include <vector>
#include <string>
using namespace std;
vector<int> find(int a[], int n, int x);

int findFirstOccurence(int arr[], int n, int x);
int findLastOccurence(int arr[], int n, int x);

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, x, i;
		cin >> n >> x;
		int *arr = new int[n];
		for (i = 0;i < n;i++)
			cin >> arr[i];
		vector<int> ans;
		ans = find(arr, n, x);
		cout << ans[0] << " " << ans[1] << endl;
	}
	return 0;
}


// } Driver Code Ends

int first = 0;

vector<int> firstAndLast(vector<int> &arr, int n, int x) {
        // Code here
		vector<int> v;

		for (int i = 0; i < n; i++)
		{
			/* code */
			if(arr[i] == x)
			{
				v.push_back(i);
				break;
			}
		}

		for (int j = n - 1; j >= 0; j--)
		{
			/* code */
			if(arr[j] == x)
			{
				v.push_back(j);
				break;
			}
		}
		
		if(v.size() == 0)
			v.push_back(-1);
		
		return v;
    }

