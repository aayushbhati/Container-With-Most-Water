class Solution {
public:
    int maxArea(vector<int>& height) {
       int i=0,j=height.size()-1,maxArea=INT_MIN;
       while(i<j){
        int l=min(height[i],height[j]);
        int b=j-i;
        if(height[i]<height[j])i++;
        else j--;
        int area=l*b;
        maxArea=max(maxArea,area);
       } 
       return maxArea;
    }
};
