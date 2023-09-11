#include <vector>
#define LSOne(S) ((S) & -(S))

// Commonly used for problems where you have two types of methods, queries and
// updates. Naive method would usually TLE.
//
// This FenwickTree will only add to a range, not update. If you want to replace
// a value, calculate difference, and add that instead.
//
// For inversion counting (not the merge sort method), nums[i] >= 10^5,
// then compress the values down since you are not interested
// in the values themselves but rather the relative differences
// This is because you are using the values themselves as an index into the
// array, but obviously you cannot allocate so much space to a vector.
class FenwickTree {
private:
  std::vector<int> bit;

public:
  FenwickTree(std::vector<int> &nums) {
    bit.resize(nums.size() + 1);
    for (int i = 0; i < nums.size(); i++) {
      update(i + 1, nums[i]); // because tree needs to be 1 indexed.
    }
  }

  int sum(int idx) {
    int ans = 0;
    for (; idx > 0; idx -= LSOne(idx)) {
      ans += bit[idx];
    }
    return ans;
  }

  void update(int idx, int val) {
    for (; idx < bit.size(); idx += LSOne(idx)) {
      bit[idx] += val;
    }
  }

  int query(int l, int r) {
    l++;
    r++; // no need if l and r are 1 indexed.
    return sum(r) - sum(l - 1);
  }
};
