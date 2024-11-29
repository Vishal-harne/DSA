//aaj ka likha hua thought dekh le
//small mistake are not allowed



class Solution {
    // Function to find the leaders in the array.
  public:
    vector<int> leaders(vector<int>& arr) {
        vector<int>ans;
        reverse(arr.begin(),arr.end());
        int maxi=INT_MIN;
        for(int i=0;i<arr.size();i++){
            if(arr[i]>=maxi){
                maxi=arr[i];
                ans.push_back(arr[i]);
            }
        }
        
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
