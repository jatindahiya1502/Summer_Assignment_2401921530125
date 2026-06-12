class Solution {
public:
    int compress(vector<char>& chars) {
        int write = 0;
        int count = 1;
        for(int i = 1; i <= chars.size(); i++) {
            if(i < chars.size() && chars[i] == chars[i - 1]) {
                count++;
            }
            else {
                chars[write++] = chars[i - 1];
                if(count > 1) {
                    string cnt = to_string(count);
                    for(char c : cnt) {
                        chars[write++] = c;
                    }
                }
                count = 1;
            }
        }

        return write;
    }
};
