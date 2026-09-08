class Solution {
public:
    int calPoints(vector<string>& operations) {
        int sum=0;
        vector<int>v;
        for(int i=0; i<operations.size(); i++){
           if(operations[i]=="+"){
            if(v.size()>=2){
                sum += v[v.size()-1];
                sum += v[v.size()-2];
                v.push_back(sum);
                sum=0;
            }
           }
           else if(operations[i]=="C"){
            v.pop_back();
           }
           else if(operations[i]=="D"){
            if(v.size()>0)
            v.push_back(v[v.size()-1]*2);
           }
           else{
            int k = stoi(operations[i]);
            v.push_back(k);
           }
        }
        sum=0;
        for(int j=0; j<v.size(); j++){
            sum += v[j];
        }
        return sum;
    }
};