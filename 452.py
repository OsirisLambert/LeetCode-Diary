class Solution:
    def findMinArrowShots(self, points: List[List[int]]) -> int:
        sorted_list = sorted(points)
        print(sorted_list)
        count = 0
        target = sorted_list[0][1]
        for i in range(len(sorted_list)):
            if target < sorted_list[i][0]:
                 target = sorted_list[i][1]
            if i < len(sorted_list) - 1:
                if target > sorted_list[i+1][1]:
                    target = sorted_list[i+1][1]
                elif target < sorted_list[i+1][0]:
                    target = sorted_list[i+1][1]
                    count +=1
                    print(sorted_list[i])
            else: count+=1
        return count
                