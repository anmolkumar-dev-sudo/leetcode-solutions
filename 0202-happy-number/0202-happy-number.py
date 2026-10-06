class Solution(object):
    def digsum(self,n):
        sum=0
        while n>0:
            sum+=(n%10)*(n%10)
            n=n//10
        return sum

    def isHappy(self, n):
        s=set()
        x=n
        ans=False
        while(x not in s):
            s.add(x)
            x=self.digsum(x)
            if x==1:
                ans=True
                break
        return ans            
        