class Solution:
    def partitionLabels(self, s: str) -> List[int]:
        ans = []
        last = -1
        break_index = 0
        for i in range(len(s)):
            for j in range(i+1, len(s)):
                if last < j:
                    if s[i] == s[j]:
                        last = j
            if last - i == 0:
                ans_tmp = last + 1 - break_index
                ans.append(ans_tmp)
                break_index = last + 1
                last=i  
            elif last - i == -1:
                ans.append(1)
                break_index = last + 2
                last=i 
            if i == len(s) - 1:
                if last != len(s) - 1:
                     ans.append(len(s) - 1 - last)
        return ans