#include <bit>
#include <vector>

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums)
    {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        std::bitset<100001> cache;

        std::vector<int> result;
        for (const int& n : nums) {
            bool duplicate = cache.test(n);

            if (duplicate) {
                result.push_back(n);
            }
            else {
                cache.set(n);
            }
        }

        return result;
    }
};