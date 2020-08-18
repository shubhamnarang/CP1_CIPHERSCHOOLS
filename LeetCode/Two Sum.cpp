class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> v(2);
        int n=nums.size();
        int d=0;
        unordered_map<int,int>m;
        for(int i=0;i<n;i++){
            if(m.find(target-nums[i])!=m.end()){
                //v.push_back(m[target-nums[i]]);
                //v.push_back(i);
                return {m[target-nums[i]],i};
            }
            m[nums[i]]=i;
        }
        return {};
    }
};
