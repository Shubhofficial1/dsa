#include<iostream>


/* Array Questions

1. Linear Search
2. Insert an element at a given position
3. Delete the first occurence of an element 
4. Largest element in an array (return index)
5. Second Largest Element in an array 
6. Check an array is sorted 
7. Reverse an array
8. Remove Duplicates from an sorted array
9. Move Zeroes to the end
10. Left Rotate an array by one.
11. Left Rotate an array by "D" places.
12. Leader in an array
13. Max difference of arr[j]-arr[i] where j>i
14. Frequency in an sorted array
15. Stock buy & sell(part 1 & 2)
16. Trapping rainwater problem
17. Maximum consecutive 1's
18. Maximum subarray sum
19. Longest Even Odd Subsequence
20. Maximum Circular Sum Subarray
21. Majority element
22. Minimum consecutive flips
23. Sliding Window technique
24. Prefix sum Technique
*/


// Question 1. Linear search (if found , return index else return -1)
// parameters : arr = array , n = size of arr , x = element to be searched

int LinearSearch(int arr[],int n,int x ){
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            return i;
        }
    }
    return -1;    
}


int main(){

    int arr[]={1,2,3,4,5,6,7,8,9};
    std::cout << LinearSearch(arr,10,5);

    return 0;
}