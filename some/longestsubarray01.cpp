#include <algorithm>
#include <unordered_map>
int maxLen(int arr[], int n)
{
  int ans = 0, sum = 0, i;
  std::unordered_map<int, int> umap;
  for(i = 0; i < n; i++)
  {
    if(arr[i] == 0)
    arr[i] = -1;
  }
  umap[0] = -1;
  for(int i = 0; i < n; i++)
  { 
    sum = sum + arr[i];
    if(umap.find(sum) != umap.end())
    {
      ans = max(ans, i - umap[sum]);
    }
    else
      umap[sum] = i;
  }
  return ans;
}
