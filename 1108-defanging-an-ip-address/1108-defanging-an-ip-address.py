class Solution:
    def defangIPaddr(self, address: str) -> str:
        new_add= ""
        for i in address:
            if i== ".":
                new_add+= "[.]"
            else:
                new_add+=i
        return new_add