class Solution {
public:
    vector<int> grayCode(int n) {
        vector<int>res={0,1};
        if(n==0) return {};
        int k=2;
        for (int i=1; i<=n-1; i++)
        {
            int s = res.size();
            for(int j=s-1; j>=0; j--)
            {
                res.push_back(res[j]+k);
            }
            k*=2;
        }
        return res;
    }
};
