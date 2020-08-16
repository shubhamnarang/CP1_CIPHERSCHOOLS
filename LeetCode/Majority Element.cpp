class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int>m;
        int n=nums.size();
        for(int i=0;i<n;i++){
            m[nums[i]]++;
        }
        int m1;
        for(auto it:m){
            if((it.second)>(n/2))
                m1= it.first;
        }
        return m1;
    }
};
