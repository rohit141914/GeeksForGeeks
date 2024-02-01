#User function Template for python3

class Solution:
    def Maximize(self, a, n): 
        s = 0
        a.sort()
        for ind, el in enumerate(a):
            s += ind * el
        return int(s % (1e9 + 7))
      



#{ 
 # Driver Code Starts
#Initial Template for Python 3


for _ in range(0,int(input())):
    n = int(input())
    arr = list(map(int,input().strip().split()))
    ob=Solution()
    print(ob.Maximize(arr, n))
    
# } Driver Code Ends