// IntersectionOfTwoSortedArray.cpp 
#include <iostream>
#include <vector>
using namespace std;

vector<int> findArrayIntersection(vector<int>& arr1, int n, vector<int>& arr2, int m)
{
	// Write your code here.

	vector<int>ans;

	int i = 0;

	int j = 0;



	while (i < n && j < m)

	{

		if (arr1[i] == arr2[j])
		{
			ans.push_back(arr1[i]);

			i++;

			j++;

		}

		else if (arr1[i] < arr2[j])

		{

			i++;

		}

		else

		{

			j++;

		}

	}

	return ans;


}


int main()
{
	vector<int> v1, v2, result;
	int n1(0), n2(0), ele(0);
	cin >> n1 >> n2;

	for (int i = 0; i < n1; i++)
	{
		cin >> ele;
		v1.push_back(ele);
	}

	for (int i = 0; i < n2; i++)
	{
		cin >> ele;
		v2.push_back(ele);
	}

	result = findArrayIntersection(v1, n1, v2, n2);

	for (int i = 0; i < result.size(); i++)
	{
		cout << result[i] << " ";
	}
	cout << endl;
	return 0;
}