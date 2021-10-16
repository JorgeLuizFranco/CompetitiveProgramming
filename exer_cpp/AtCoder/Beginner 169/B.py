n= int(input())
nums= list(map(int,input().split()))
nums.sort()
def solve(n):
    i=0
    multi=1
    while(multi<=10**18 and i<n):
        if(nums[i]==0):
            return 0
        else:
            multi*=nums[i]
            i+=1
    if(multi<=10**18):
        return multi
    else:
        return -1
print(solve(n))