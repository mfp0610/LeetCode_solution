class Solution {
public:
    int minSwapsCouples(vector<int>& row) {
        int ans=0;
        for (int i=0; i<row.size();i++) {
            int a=row[i];
            int b=a^1;
            if(i+1>=row.size()-1 || row[i+1]==b) continue;
            for(int j=i+1;j<row.size();j++) {
                if(row[j]==b) {
                    swap(row[j], row[i+1]);
                    ans++;
                    break;
                }
            }
        }
        return ans;
    }
};
