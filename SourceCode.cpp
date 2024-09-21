import numpy as np
x=np.array([[1,"Employee-1","SDE",5000,5],
           [2,"Employee-2","SYSOPS",1000,4],
           [3,"Employee-3","HR",1000,2],
           [4,"Employee-4","ADMIN",15000,0]])
def attendance(x,employeeid,atten):
    for f in x:
        if(employeeid==f[0]):
            np.append(x[f],atten)

def ratingupdate(x,employeeid,newrating):
    for h in x:
        if (x[h][0]==employeeid):
            x[h][4]=newrating
def salary(x):
    g=0
    l=0
    for d in x:
        g=g+ x[d][3]
        l+=1
    print(g/l)
    k=1e9
    for d in x:
        if(x[d][3]<k):
            k=x[d][3]
    print(k)
    r=0
    for d in x:
        if(x[d][3]>r):
            r=x[d][3]
    print(r)
        
        
        
print(x)
salary(x)
print(x)
