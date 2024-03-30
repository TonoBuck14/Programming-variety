```
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        //vector<int> res;
        map<int, int> m;

        for(int i=0; i<nums.size(); i++){
            m[nums[i]]+=1;
        }
        map<int, int>::iterator it = m.begin();

        while (it != m.end()) {
		    int c = 0;
		    if(it->second > 1){
			    while(c<(it->second)-1){
				    auto f = find(nums.begin(), nums.end(),it->first);
				    nums.erase(f);
				    //it->second--;
				    c++;
				    }
			}
		
		
		++it;
	}

        return m.size();

    }
};
```
