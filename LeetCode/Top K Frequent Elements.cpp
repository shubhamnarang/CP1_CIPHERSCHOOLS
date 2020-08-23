class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>v;
        //priority_queue<pair<int,int> > pqueue;
        //priority_queue<P, vector<P>, greater<P>> pq;
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pqueue;
        unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        for(auto it:m){
            pqueue.push({it.second,it.first});
            if(pqueue.size()>k)
                pqueue.pop();
        }
        while(!pqueue.empty()){
            v.push_back(pqueue.top().second);
            pqueue.pop();
        }
        return v;
    }
};
