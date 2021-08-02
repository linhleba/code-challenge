class Solution {
private:
    int arr[1000][1000];    
public:
    int findLength(vector<int>& nums1, vector<int>& nums2) {
        int res = 0;
        for (int i = 0; i < nums1.size(); i++) {
            for (int j = 0; j < nums2.size(); j++) {
                if (nums1[i] == nums2[j])
                {
                    if (i == 0 || j == 0) {
                        arr[i][j] = 1;
                    }
                    else 
                    {
                     arr[i][j] = arr[i-1][j-1] + 1;
                    }
                    res = max(res, arr[i][j]);
                }
            }
        }
        return res;
    }
};