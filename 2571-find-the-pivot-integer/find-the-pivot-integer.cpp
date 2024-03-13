class Solution {
public:
    int pivotInteger(int n) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        for (int pivot = 1; pivot <= n; pivot++) {
            int sum_left = 0;
            int sum_right = 0;
            for (int i = 1; i <= pivot; i++) {
                sum_left += i;
            }
            for (int i = pivot; i <= n; i++) {
                sum_right += i;
            }
            if (sum_left == sum_right) {
                return pivot;
            }
        }
        return -1; 
    }

};