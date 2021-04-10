//https://leetcode-cn.com/problems/reducing-dishes/ 
#define N 510
class Solution {
public:
    static bool comp(const int &a, const int &b) {
	    return a>b;
    }
    int maxSatisfaction(vector<int>& satisfaction) {
        sort(satisfaction.begin(), satisfaction.end(), comp);
        int a[N], sum[N], ans=0;
        a[0]=0, sum[0]=0;
        for(int i=1;i<=satisfaction.size();i++)
        {
            a[i]=satisfaction[i-1];
            sum[i]=sum[i-1]+a[i];
            if(sum[i]>=0) ans+=sum[i];
            else return ans;
        }
        return ans;
    }
};
