#include <bits/stdc++.h>
using namespace std;

int binarySearch(int nums[], int l, int r, int target)
{
	if (r >= l) {
		int mid = l + (r - l) / 2;
		if (nums[mid] == target)
			return mid;

		if (nums[mid] > target)
			return binarySearch(nums, l, mid - 1, target);

		return binarySearch(nums, mid + 1, r, target);
	}

	return -1;
}

int main()
{
	int nums[] = { -1,0,3,5,9,12 };
	int target = 9;
	int n = sizeof(nums) / sizeof(nums[0]);
	int result = binarySearch(nums, 0, n - 1, target);
	(result == -1)
		? cout << "Element is not present in array"
		: cout << "Element is present at index "<< result;
	return 0;
}
