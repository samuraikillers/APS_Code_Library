import textwrap
n,m = map(int, input().split())
da = "---"
d1 = "-"
thr = ".|."
thrlop = 1
h = int((n-1)/2)
l = []
lk = []
sss = " "
s = " "
daloop = int((m - 3)/6)
for _ in range(h):
    for i in range(daloop):
        l.append(da)
    for j in range(thrlop):
         l.append(thr)
    for i in range(daloop):
         l.append(da)
    daloop-=1
    thrlop+=2
wel = int((m-7)/2)
daloop = 1
thrlop = int((m-6)/3)
lll = []
for ll in range(wel):
    lll.append(d1)
lll.append("WELCOME")
for ll in range(wel):
    lll.append(d1)
for _ in range(h):
    for i in range(daloop):
         lk.append(da)
    for j in range(thrlop):
         lk.append(thr)
    for i in range(daloop):
         lk.append(da)
    daloop+=1
    thrlop-=2
# print(s)
    # for i in l:
#     print(i)
s = ''.join(l)
ss = ''.join(lll)
sss = ''.join(lk)
print(textwrap.fill(s,m))
print(ss)
print(textwrap.fill(sss,m))
# wrapper = textwrap.TextWrapper(n) 
# string = wrapper.fill(text=s)

         
