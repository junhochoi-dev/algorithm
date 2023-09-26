a1 = int(input())
a2 = int(input())
a3 = int(input())
 
aa1 = a2 * 2 + a3 * 4
aa2 = a1 * 2 + a3 * 2
aa3 = a1 * 4 + a2 * 2
print(min(aa1, min(aa2, aa3)))