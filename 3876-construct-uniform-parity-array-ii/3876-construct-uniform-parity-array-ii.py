class Solution:
    def uniformArray(self, nums1: list[int]) -> bool:
        #array size of nums1 and nums2 is equal
        #all elements of num2 must be either even or odd and are only derived from nums1
        #it must follow the condition nums1[i]==nums2[i] and if this condition fails do
        #nums2[i]=nums1[i]-nums1[j] so that the whole nums2 is even or odd
        #if this kind of array is possible then true else false
        #for the difference since nums1[i]-num1[j] is always greater than 1 then we can assume
        #nums1[i] is always greater than nums1[j] we can assume nums1[j] to be smallest element
        #now if smallest is odd then even-odd= odd (true case), odd-odd=even(true case because if we have any even value we can replace by odd)
        #if smallest is even then even-even=even(true case), odd-even=odd(false case)
        minimum= min(nums1)
        if minimum%2==1:
            return True
        for i in range(len(nums1)):
            if nums1[i]%2==1:
                return False
        return True