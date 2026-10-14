class Solution:
    def moveZeroes(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        st=0
        for i in range(len(nums)):
            if(nums[i]!=0):
                nums[st],nums[i]=nums[i],nums[st]
                st+=1
        