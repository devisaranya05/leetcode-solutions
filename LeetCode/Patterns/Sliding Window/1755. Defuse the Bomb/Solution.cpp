class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        vector<int>ans;
        int i,j;
        for(i=0; i<code.size(); i++){
            int sum=0,l=0,a=0;
            if(k==0){
                ans.push_back(0);
            }
            else if(k>0){
                if((i+k) < code.size()){
                for(j=i+1; j<=i+k; j++){
                   sum += code[j];
                   cout << sum << " ";
                }
                }
                else{
                    for(j=i+1; j<code.size(); j++){
                        sum += code[j];
                        l++;
                    }
                    a = k-l; 
                    for(j=0; j<a; j++){
                        sum += code[j];
                    }   
                }
                // cout << sum << " ";
                 ans.push_back(sum);   
            }
            else{
                int v = k * (-1);
                cout <<" "<< endl;
                cout << v;
                if(i>=v){
                    for(j=i-v; j<i; j++){
                        sum += code[j];
                    }
                }
                else{
                    for(j=0; j<i; j++){
                        sum += code[j];
                        l++;
                    }
                    a=v-l;
                    for(j=1; j<=a; j++){
                        sum += code[code.size()-j];
                    }
                }
                // cout << sum << " ";
                ans.push_back(sum);
            }
        }
        return ans;
    }
};