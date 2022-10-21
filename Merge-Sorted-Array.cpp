#include <vector>
#include <iostream>
using namespace std;
// TODO: paste code here

class Solution
{
public:
  void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
  {
    while (m + n > 0)
    {
      int pos = m + n - 1;
      if (n == 0)
      {
        return;
      }
      else if (m == 0)
      {
        nums1[pos] = nums2[n - 1];
        n--;
      }
      else
      {
        if (nums1[m - 1] > nums2[n - 1])
        {
          nums1[pos] = nums1[m - 1];
          m--;
        }
        else
        {
          nums1[pos] = nums2[n - 1];
          n--;
        }
      }
    }
  }
};

// With Vector
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
  (new Solution())->merge(nums1, 0, nums2, 1);
  for (int i : nums1)
  {
    cout << i << ", ";
  }
  return 0;
}