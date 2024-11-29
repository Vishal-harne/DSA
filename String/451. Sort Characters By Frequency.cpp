// create map and store count of each character 
// then put it into the vector of pair and sort it according to count of character using lambda function
// put them into the string using string function 'string(count,character)'
// return the final string

class Solution {
public:
    string frequencySort(string s) {
        map<char,int>mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        vector<pair<char,int>>vec(mp.begin(),mp.end());
        sort(vec.begin(),vec.end(),[](const auto & a,const auto & b){
            return a.second>b.second;
        });
        string final;
        for(auto it:vec){
            final+=string(it.second,it.first);
            // for(int i=0;i<it.second;i++){
            //     final+=it.first;
            // }
        }
        return final;
    }
};
