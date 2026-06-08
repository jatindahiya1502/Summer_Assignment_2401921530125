class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        if(ransomNote.size()>magazine.size()){
            return false;
        }
        unordered_map<char,int> hash;
        for(auto i : magazine) hash[i]++;
        for(auto i : ransomNote) {
            hash[i]--;
            if (hash[i]<0){
                return false;
            }
        }
        
        return true;

    }
};
