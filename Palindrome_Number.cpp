// ------------------------------------ Question ---------------------------------
// Given an integer x, return true if x is a 
// palindrome
// , and false otherwise.

 

// Example 1:

// Input: x = 121
// Output: true
// Explanation: 121 reads as 121 from left to right and from right to left.
// Example 2:

// Input: x = -121
// Output: false
// Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.
// Example 3:

// Input: x = 10
// Output: false
// Explanation: Reads 01 from right to left. Therefore it is not a palindrome.
 

// Constraints:

// -231 <= x <= 231 - 1



// ___________________________________________________ ANS _________________________________________________

#include <iostream>
using namespace std;

bool isPalindrome(int x) 
{
    string s = to_string(x);

    for(int i = 0, j = s.length()-1; i < s.length()/2; i++, j--)
    {
        if(s[i] != s[j])
        {
            return false;
        }  
    }
    return true;
}

int main()
{
    int x = -121;

    cout << isPalindrome(x);

}