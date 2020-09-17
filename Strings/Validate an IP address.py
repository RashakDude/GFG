#User function Template for python3

def isValidIP(s):
    counter=0
    for i in range(0,len(s)):
        if(s[i]=='.'):
            counter=counter+1
    if(counter!=3):
        return 0
    st=set()
    for i in range(0,256):
        st.add(str(i))
    counter=0
    temp=""
    for i in range(0,len(s)):
        if(s[i]!='.'):
            temp=temp+s[i]
        else:
            if(temp in st):
                counter=counter+1
            temp=""
    if(temp in st):
        counter=counter+1
    if(counter==4):
        return 1
    else:
        return 0
    #code here




#{ 
#  Driver Code Starts
#Initial Template for Python 3

    
if __name__=="__main__":
    t=int(input())
    for _ in range(0,t):
        s=input()
        if(isValidIP(s)):
            print(1)
        else:
            print(0)
    

# } Driver Code Ends