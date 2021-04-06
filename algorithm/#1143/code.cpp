#define N 1010
class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int dp[N][N];
        int l1=text1.length(), l2=text2.length();
        memset(dp,0,sizeof(dp));
        for(int i=1;i<=l1;i++)
        for(int j=1;j<=l2;j++)
        {
            if(text1[i-1]==text2[j-1])
                dp[i][j]=dp[i-1][j-1]+1;
            else
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
        }
        return dp[l1][l2];
    }
};
