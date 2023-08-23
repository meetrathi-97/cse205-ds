class Solution {
public:
    vector<vector<int>>res;
    void solve1(int num,int n,int k,vector<int>&ans){
        if(num==n+1){
            
            if(ans.size()==k)
            res.push_back(ans);
            return;
        }

        ans.push_back(num);
        solve1(num+1,n,k,ans);
        ans.pop_back();
        solve1(num+1,n,k,ans);
    }
   

    }
    vector<vector<int>> combine(int n, int k) {
        vector<int>ans;
        solve1(1,n,k,ans);
        return res;
    }
};
