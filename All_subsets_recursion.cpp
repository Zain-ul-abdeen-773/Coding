#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void subsets(vector<int>&set,vector<int>&ans,int i,vector<vector<int>>&all_subsets){
    if(i == set.size()){
       all_subsets.push_back(ans);
       return;
    }
    int idx = i+1;
    ans.push_back(set[i]);
    subsets(set,ans,i+1,all_subsets);
    ans.pop_back();
    while(idx < set.size() && set[idx] == set[idx-1]){
        idx++;
    }
    subsets(set,ans,idx,all_subsets);
}
vector<vector<int>>print_subsets(vector<int>&nums){
    sort(nums.begin(),nums.end());
    vector<vector<int>>allsubsets;
    vector<int>ans;
    subsets(nums,ans,0,allsubsets);
    return allsubsets;
}
int main(){
    vector<int>arr{1,2,3};
    vector<vector<int>> allsubsets = print_subsets(arr);

    for (auto subset : allsubsets) {
        cout << "{ ";
        for (int num : subset) {
            cout << num << " ";
        }
        cout << "}" << endl;
    }

    return 0;
}