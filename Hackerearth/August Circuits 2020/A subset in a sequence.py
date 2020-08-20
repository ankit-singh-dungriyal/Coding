t=int(input())
while t:
  n=int(input())
  b=bin(n).replace('0b',"")
  l=[]
  binary=''.join(reversed(b))
  # print(type(l))
  for i in range(0,len(binary)):
    if(binary[i]=='1'):
      l.append(pow(3,i))
  print(len(l))
  for x in l :
    print(x,end=" ")
  
  print("\n")
  t=t-1

