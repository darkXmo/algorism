#include <vector>
#include <iostream>
#include <unordered_map>
using namespace std;

class Solution
{
public:
  vector<int> twoSum(vector<int> &nums, int target)
  {
    unordered_map<int, int> map;
    for (int i = 0; i < nums.size(); i++)
    {
      int num = nums[i];
      if (map.count(num) > 0)
      {
        return {map[num], i};
      }
      map[target - num] = i;
    }
    return {};
  }
};

// With Vector
int main()
{
  vector<int> nums;
  int arr[] = {3, 3};
  for (int i = 0; i < sizeof(arr); i++)
  {
    nums.push_back(arr[i]);
  }
  const int num = 6;
  // rename Solution->[functionName]
  // cout << (new Solution())->twoSum(nums, num) << endl;
  vector<int> ans = (new Solution())->twoSum(nums, num);
  for (int i : ans)
  {
    cout << i << ", ";
  }
  return 0;
}