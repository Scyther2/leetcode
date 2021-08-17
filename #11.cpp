class Solution {
public:
    int maxArea(vector<int>& height) {
        int low=0,high =height.size()-1;
        int area=-1;
        while(low<high)
        {
            int carea=min(height[low],height[high])*((high+1)-(low+1));
            if(height[low]<height[high])
            {
                low++;
            }
            else
            {
                high--;
            }
            area=max(area,carea);
        }
        
        return area;
        }
};
