class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v;
        stack<int>s1;
        stack<int>s2;
        for(int j=0;j<nums2.size();j++){
            s1.push(nums2[j]);
        }
        for(int i=0;i<nums1.size();i++){
            int x=s1.top();
            int r=-1;
            while(x!=nums1[i]){
                s2.push(s1.top());
                s1.pop();
                if(s2.top()>nums1[i])
                    r=s2.top();
                x=s1.top();
            }
            v.push_back(r);
            
            while(!s2.empty()){
                s1.push(s2.top());
                s2.pop();
            }
        }
        return v;
    }
};
