class Solution {
public:
    int numSquares(int n) {
        vector<int>sq;
        int i=1;
        while(i*i<=n){
            sq.push_back(i*i);
            i++;
        }
        int s=sq.size();
        for(int i=0;i<s;i++){
            if(sq[i]==n)
                return 1;
        }
        for(int i=0;i<s;i++){
            for(int j=i;j<s;j++){
                if(sq[i]+sq[j]==n)
                    return 2;
            }
        }
        for(int i=0;i<s;i++){
            for(int j=i;j<s;j++){
                 for(int k=j;k<s;k++){
                    if(sq[i]+sq[j]+sq[k]==n)
                        return 3;   
                 }
            }
        }
        return 4;
    }
};
