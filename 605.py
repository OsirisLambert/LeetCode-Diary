class Solution:
    def canPlaceFlowers(self, flowerbed: List[int], n: int) -> bool:
        planted = False
        for i in range(len(flowerbed)):
            if flowerbed[i] == 0:
                if not planted:
                    if i == len(flowerbed)-1:
                        n-=1
                        planted = True
                    else:
                        if flowerbed[i+1] == 0:
                            n-=1
                            planted = True
                else:
                    planted = False
            if flowerbed[i] == 1:
                planted = True
        if n > 0: return False
        else: return True
        