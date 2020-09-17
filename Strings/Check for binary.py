# Return true if str is binary, else false
def isBinary(str):
    p = set(str)
    s = {'0','1'}
    if p==s or p=={'0'} or p=={'1'}:
        return True
    return False
    #code here



#{ 
#  Driver Code Starts
# Your code goes here
if __name__=='__main__':
    t = int(input())
    for i in range(t):
        str = input().strip()
        if isBinary(str):
            print (1)
        else:
            print (0)
# } Driver Code Ends