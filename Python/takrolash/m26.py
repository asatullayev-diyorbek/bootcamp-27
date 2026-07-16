baholar = [75, 88, 92, 65, 78, 95, 70, 83]
yigindi=sum(baholar)
yigindi1=0
count=0
for i in baholar:
    yigindi1+=i
    count+=1
print(yigindi1)
ortacha=yigindi1/count
if ortacha<= 80 :
    print("Gurux kuchsiz")
else:
    print("natija zo'r")