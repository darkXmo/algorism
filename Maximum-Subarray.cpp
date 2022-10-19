#include <vector>
#include <iostream>
using namespace std;
// TODO: paste code here
class Solution
{
public:
  int maxSubArray(vector<int> &nums)
  {
    int start = 0, end = 0;
    int maxl = INT16_MIN;
    int sum = INT16_MIN;
    for (; end < nums.size(); end++)
    {
      const int num = nums[end];
      if (maxl + num > num)
      {
        maxl = maxl + num;
      }
      else
      {
        maxl = num;
        start = end;
      }
      if (maxl > sum)
      {
        sum = maxl;
      }
    }
    return sum;
  }
};

// With Vector
int main()
{
  vector<int> nums;
  const int arr[] = {5, 4, -1, 7, 8};
  for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
  {
    nums.push_back(arr[i]);
  }
  // rename Solution->[functionName]
  cout << (new Solution())->maxSubArray(nums) << endl;
  return 0;
}