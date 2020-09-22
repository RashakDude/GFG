#User function Template for python3
import math
# Return the total number of BSTs possible with keys [1....N] inclusive.
def numTrees(N):
    num = math.factorial(2*N)//(math.factorial(N+1)*math.factorial(N))
    return num%1000000007
    # code here



#{ 
#  Driver Code Starts
#Initial Template for Python 3

if __name__=="__main__":
    t=int(input())
    for _ in range(0,t):
        n = int(input())
        print(numTrees(n))
# } Driver Code Ends