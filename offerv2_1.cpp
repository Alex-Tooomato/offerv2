#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    int findRepeatNumber(vector<int>& nums) {
        if(&nums == nullptr){
            return 0;
        }
        unordered_map <int,bool> map;
        for(int num:nums){
            if(map[num])return num;
            map[num]= true;
        }
        return -1;

    }
};
int main(){
    vector<int> a{2, 3, 1, 0, 2, 5, 3};
    Solution su;
    vector<int> output;
    unordered_map <int,int> map;
    for(int num:a){
        map[num]++;
    }
    for(unordered_map<int,int>::iterator it=map.begin();it!=map.end();it++){
        cout<<it->first<<":"<<it->second<<endl;
    }
        cout<<su.findRepeatNumber(a)<<endl;

    return 0;
}