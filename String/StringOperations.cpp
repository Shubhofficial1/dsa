#include<iostream>
using namespace std;


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