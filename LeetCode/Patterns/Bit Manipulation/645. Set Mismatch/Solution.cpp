class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
// int n = nums.size();
// sort(nums.begin(), nums.end());
// vector<int>a(2);
// for(int i=0; i<n-1; i++){
//     if(nums[i]== nums[i+1]){
//        a[0] = nums[i];
//        break;
//     }
// }
// for(int i=0; i<n; i+=1){
//     if(find(nums.begin(), nums.end(), i+1) == nums.end()){
//         a[1]= i+1;
//         break;
//     }
// }
// return a;

unordered_map<int, int> mp;
vector<int>a(2);
int n= nums.size();
for(int i=1; i<=n; i++){
    mp[i]=0;
}
for(int i=0; i<n; i++){
    mp[nums[i]]++;
}
for(auto x: mp){
    if(x.second ==0){
        a[1]= x.first;
    }
    if(x.second>1){
        a[0]=x.first;
    }
}
return a;


    }
};