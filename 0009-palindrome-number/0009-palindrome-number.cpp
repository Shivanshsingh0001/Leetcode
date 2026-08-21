class Solution {
public:
    bool isPalindrome(int x) {
        // Negative numbers are not palindromes (e.g., -121 reversed is 121-)
        // Also, if a number ends in 0, it must start with 0 to be a palindrome (only 0 itself does this)
        if (x < 0 || (x % 10 == 0 && x != 0)) {
            return false;
        }

        int revertedNumber = 0;
        // Keep reversing digits until we reach the middle of the number
        while (x > revertedNumber) {
            revertedNumber = revertedNumber * 10 + x % 10;
            x /= 10;
        }

        // For even-length numbers (e.g., 1221): x will be 12, revertedNumber will be 12
        // For odd-length numbers (e.g., 12321): x will be 12, revertedNumber will be 123
        // We can get rid of the middle digit by revertedNumber / 10
        return x == revertedNumber || x == revertedNumber / 10;
    }
};
