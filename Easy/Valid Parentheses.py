class Solution:
    def isValid(self, s: str) -> bool:
        stack = []
        # o = ['[','{','(']
        # c = [']','}',')']
        pair = dict(('()','{}','[]'))
        for m in s:
            if m in '({[':
                stack.append(m)
            elif len(stack)==0 or m != pair[stack.pop()]:
                return False
        return len(stack)==0
        #         i = c.index(m)

        #         if (len(stack)>0) and (o[i]==stack[len(stack)-1]):
        #             stack.pop()
        #         else:
        #             return 'false'
        # if len(stack)==0:
        #     return 'true'
        # else:
        #     return 'false'
