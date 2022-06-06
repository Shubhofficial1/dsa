#include<iostream>
using namespace std;


/*
String Questions

1. Check whether given string is palindrome or not.
2. Check whether given string is Subsquent of another string or not.
3. Chekc for anaagram.
4. Leftmost repeating character.
5. Leftmost non repeating character.
6. Reverse words in a string.
7. Overview of Pattern Searching.
8. Naive pattern searching
9. Improved Naive pattern searching for distinct.
10. Rabin Karp algorithm.
11. KMP algorithm(PART 1).
12. KMP algorithm(PART 2).
13. Check if Strins are Rotations.
14. Lexicographical rank of a string.
15. Longest Substring with k distinct characters.
*/






// Palindrome check

int isPalindrome(string str)
{
    int low = 0;
    int high = str.length() - 1;
    while (low < high)
    {
        if (str[low] != str[high])
            return 0;
        low++;
        high--;
    }
    return 1;
}



int main(){
    char str[] = "madam";
    std::cout <<  isPalindrome(str);;   
    return 0;
}