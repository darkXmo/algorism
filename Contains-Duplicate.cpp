#include <vector>
#include <unordered_set>
#include <iostream>
using namespace std;
class Solution
{
public:
  bool containsDuplicate(vector<int> &nums)
  {
    unordered_set<int> S;
    for (int num : nums)
    {
      if (S.find(num) == S.end())
      {
        S.insert(num);
      }
      else
      {
        return true;
      }
    }
    return false;
  }
};

int main()
{
  vector<int> nums;
  int arr[] = {1, 1, 1, 3, 3, 4, 3, 2, 4, 2};
  for (int i = 0; i < sizeof(arr); i++)
  {
    nums.push_back(arr[i]);
  }
  cout << (new Solution())->containsDuplicate(nums);
  // cout << (new Solution())->containsDuplicate(nums) << endl;
  return 0;
}