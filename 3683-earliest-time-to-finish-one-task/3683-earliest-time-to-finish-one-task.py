class Solution:
    def earliestTime(self, tasks: List[List[int]]) -> int:
        a= []
        for i in range(len(tasks)):
            for j in range(len(tasks[i])):
                a.append(sum(tasks[i]))
        return min(a)        