class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int p=0,q=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                q++;
            }else{
                swap(nums[p],nums[q]);
                p++;
                q++;
            }
        }
        //return nums;
    }
};
