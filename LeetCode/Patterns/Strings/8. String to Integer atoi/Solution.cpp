class Solution {
public:
    int myAtoi(string s) {
        long long result = 0;
        int sign = 1;
        int i = 0;

        
        while (i < s.length() && s[i] == ' ') {
            i++;
        }
        if (i < s.length() && (s[i] == '-' || s[i] == '+')) {
            sign = (s[i] == '-') ? -1 : 1;
            i++;
        }

        
        while (i < s.length() && isdigit(s[i])) {
            result = result * 10 + (s[i] - '0');
            
            
            if (sign == 1 && result > std::numeric_limits<int>::max()) {
                return std::numeric_limits<int>::max();
            }
            if (sign == -1 && -result < std::numeric_limits<int>::min()) {
                return std::numeric_limits<int>::min();
            }
            i++;
        }

        return static_cast<int>(result * sign);

    }
};