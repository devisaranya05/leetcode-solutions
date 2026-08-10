class Solution {
public:
    string intToRoman(int num) {
                int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
        string symbols[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

        string result = "";
        
        // Iterate through the values from largest to smallest.
        for (int i = 0; i < 13; ++i) {
            // Greedily append the symbols as long as num is greater than or equal to the current value.
            while (num >= values[i]) {
                result += symbols[i];
                num -= values[i];
            }
        }
        
        return result;
    

    }
};