class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int ans=0,maxi=INT_MIN;
        for(int i=0;i<gain.size();i++){
            maxi=max(maxi,ans);
            ans+=gain[i];
        }
        maxi=max(maxi,ans);
        return maxi;
    }
};
