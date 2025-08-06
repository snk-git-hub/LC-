class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
         vector<int >positive;
vector<int >negative;
vector<int >result;
for(auto it :nums){
	if(it>0){
		positive.push_back(it);
	}else{
	negative.push_back(it);
}
}

for(int i =0;i<positive.size()&&negative.size();i++){
   result.push_back(positive[i]);
   result.push_back(negative[i]);
}
return result;
        
    }
};