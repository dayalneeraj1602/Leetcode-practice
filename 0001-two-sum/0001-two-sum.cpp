class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // vector<vector<int>> v;
        // for(int i=0;i<nums.size();i++){
        //     v.push_back({nums[i],i});
        // }
        // int i=0 , j =nums.size()-1;
        // vector<int> ans;
        // while(i<j){
        //     if(v[i].first + v[j].first == target){
        //         ans.push_back(v[i].second);
        //         ans.push_back(v[j].second);
        //         break;
        //     }
        //     else if(v[i].first+v[j].first > target){
        //         j--;
        //     }
        //     else{
        //         i++;
        //     }
        // }
        // sort(ans.begin(),ans.end());
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            ans.push_back(i);
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]+nums[j]==target){
                    ans.push_back(j);
                }
               
            }
             if(ans.size()==2){
                    break;
                }else{
                    ans.clear();
                }
        }
        
        return ans;


    }
};