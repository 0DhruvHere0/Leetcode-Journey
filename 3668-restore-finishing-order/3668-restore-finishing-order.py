class Solution:
    def recoverOrder(self, order: List[int], friends: List[int]) -> List[int]:
        a=[]
        for i in range(len(order)):
            for j in range(len(friends)):
                if order[i]==friends[j]:
                    a.append(friends[j])
        return a