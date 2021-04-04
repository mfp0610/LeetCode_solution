class Solution {
public:
    int trap(vector<int>& height) {
        stack<int> s;
        int res=0;
        for(int i=0;i<height.size();i++)
        {
            int pre=0;
            while((!s.empty()) && height[s.top()]<height[i])
            {
                res+=(height[s.top()]-pre)*(i-s.top()-1);
                pre=height[s.top()];
                s.pop();
            }
            if(!s.empty()) res+=(height[i]-pre)*(i-s.top()-1);
            s.push(i);
        }
        return res;
    }
};