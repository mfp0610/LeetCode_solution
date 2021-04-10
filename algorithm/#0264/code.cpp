class Solution {
public:
    int nthUglyNumber(int n) {
        unordered_set<long> inq;
        priority_queue<long, vector<long>, greater<long>> pq;
        int fac[3]={2,3,5};
        pq.push(1);
        for(int i=1;i<n;i++)
        {
            long x=pq.top();
            pq.pop();
            for(int i:fac)
            {
                long tmp=x*i;
                if(!inq.count(tmp))
                {
                    inq.insert(tmp);
                    pq.push(tmp);
                }
            }
        }
        return pq.top();
    }
};
