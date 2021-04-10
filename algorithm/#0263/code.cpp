class Solution {
public:
    bool isUgly(int n) {
        int a=n;
        if(a<1) return false;
        while(a%2==0) a/=2;
        while(a%3==0) a/=3;
        while(a%5==0) a/=5;
        if(a==1) return true;
        else return false;
    }
};
