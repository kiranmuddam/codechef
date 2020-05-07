factor = [] 
a=int(input())
b=int(input())
def factors():
  number = b-a
  for i in range(number + 1):
    i = i + 1
    if number % i == 0:
      factor.append(i)
factors()
for i in factor:
    k=-(b)*abs(i)
    print(k)
