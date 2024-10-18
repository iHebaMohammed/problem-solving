public class Solution {
    public bool IsPalindrome(int x) {
        if (x < 0)
        {
            return false;
        }
        else
        {
            int reverse = 0, num = x;
            while (x != 0)
            {
                reverse = reverse * 10;
                reverse = reverse + x % 10;
                x = x / 10;
            }
            return num == reverse ? true : false;
        }
    }
}