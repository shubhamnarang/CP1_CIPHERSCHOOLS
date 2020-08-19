class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> v;
        int n=candies.size();
        int m=INT_MIN;
        for(int i=0;i<n;i++){
            if(candies[i]>m){
                m=candies[i];
            }
        }
        for(int i=0;i<n;i++){
            if(candies[i]+extraCandies >= m){
                v.push_back(1);
            }
            else
                v.push_back(0);
        }
        return v;
    }
};
