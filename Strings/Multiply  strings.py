#User function Template for python3

def multiply(a,b):
    a = int(a)
    b = int(b)
    return a*b
    # code here
    # return the product string



#{ 
#  Driver Code Starts
#Initial Template for Python 3

if __name__ == "__main__":
    t=int(input())
    for i in range(t):
        a,b=input().split()
        print(multiply( a.strip() , b.strip() ))

# } Driver Code Ends