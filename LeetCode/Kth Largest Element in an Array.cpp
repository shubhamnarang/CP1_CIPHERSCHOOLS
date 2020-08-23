class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> pqueue;
        unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++){
            pqueue.push(nums[i]);
        }
        for(int i=0;i<k-1;i++){
            pqueue.pop();
        }
        return pqueue.top();
    }
};
