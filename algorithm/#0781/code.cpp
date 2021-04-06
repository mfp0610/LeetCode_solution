class Solution {
public:
    int numRabbits(vector<int>& answers) {
        vector<int> cnt(1000,0);
        int maxa=0;
        for(int i=0;i<answers.size();i++)
        {
            cnt[answers[i]]++;
            maxa=max(maxa,answers[i]);
        }
        int ans=0;
        for(int i=0;i<=maxa;i++)
            ans+=(cnt[i]+i)/(i+1)*(i+1);
        return ans;
    }
};
