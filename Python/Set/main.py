# my_set = set() 

# my_set.add(5)
# my_set.add(6)
# my_set.add(5)
# my_set.add("a")

# for i in range(1, 100, 4):
#     my_set.add(i)

# print(my_set)
# print(type(my_set))

# a = my_set.pop()
# print(my_set, a)

# sonlar = [1,4,5,1,6,4,7,8]

# print(sonlar)
# sonlar_set = set(sonlar)

# print(sonlar_set)

# sonlar ro'yxati ichida nta son mavjud. bu sonlarning hammasini o'zini duplikati bor, 
# faqat bir dona son yakka o'zi. Sonlar ro'yxatidagi element har doim toq son bo'ladi. 
# yakka sonni toping

# sonlar = [1, 3, 5, 6, 7, 8, 1, 3, 5, 7, 8] 
# print(2 * sum(set(sonlar)) - sum(sonlar))
# # a, b, c * => 2a, 2b, 2c - 2a, 2b, c

A = {2, 4, 8, 10, 15, 18, 1, 3}
B = {18, 1, 3, 12, 9, 7, 23, 25}

# Union - B to'plam elementlarini A to'plamga qo'shib beradi
C = A.union(B)
print("A union B: ", C)

D = B.union(A)
print("B union A: ",D)


# Difference - 
E = A.difference(B)
print("A difference B: ", E)

F = B.difference(A)
print("B difference A: ", F)

# Symmetric difference
I = A.symmetric_difference(B)
print("A symmetric_difference B: ", I)


# Intersection
G = A.intersection(B)
print("A intersection B: ", G)

H = B.intersection(A)
print("B intersection A: ", H)

C = {8, 10, 15}

J = C.issubset(A)
print("Subset: ", J)

K = A.issuperset(C)
print("Superset: ", K)
