#include <vector>
#include <iostream>
using namespace std;
// TODO: paste code here

int main()
{
  // rename Solution->[functionName]
  // cout << (new Solution())->containsDuplicate(nums);
  return 0;
}

// With Vector
int main()
{
  vector<int> nums;
  int arr[] = {1, 1, 1, 3, 3, 4, 3, 2, 4, 2};
  for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
  {
    nums.push_back(arr[i]);
  }
  // rename Solution->[functionName]
  // cout << (new Solution())->containsDuplicate(nums) << endl;
  return 0;
}

// OutPut Vector
int main()
{
  vector<int> nums1;
  int arr1[] = {0};
  for (int i = 0; i < sizeof(arr1) / sizeof(arr1[0]); i++)
  {
    nums1.push_back(arr1[i]);
  }
  vector<int> nums2;
  int arr2[] = {1};
  for (int i = 0; i < sizeof(arr2) / sizeof(arr2[0]); i++)
  {
    nums2.push_back(arr2[i]);
  }
  // rename Solution->[functionName]
  // (new Solution())->merge(nums1, 0, nums2, 1);
  // for (int i : nums1)
  // {
  //   cout << i << ", ";
  // }
  return 0;
}