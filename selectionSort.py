arr={64,25,12,22,11}
n=5
for i in range(0,n):
    for j in range(i,n):
        if(arr[i]>arr[j]):
            temp=arr[i]
            arr[i]=arr[j]
            arr[j]=temp
for i in range(0,n):
    print(arr[i]+ " ")
