class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        num_set = set(nums)
        longest = 0
        for num in num_set:
            if num-1 not in num_set:
                curr=num
                currStreak = 1

                while curr+1 in num_set:
                    curr+=1
                    currStreak+=1
                longest = max(currStreak,longest)   
        return longest
        