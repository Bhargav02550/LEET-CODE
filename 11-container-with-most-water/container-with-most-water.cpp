class Solution {
public:
    int maxArea(vector<int>& height) {
        long long i=0,j=height.size()-1;
        long long area=0;
        while(i<j)
        {
            area=max(area,(min(height[i],height[j])*(j-i)));
            if (height[i]<height[j])i++;
            else j--;
        }
        return area;
    }
};