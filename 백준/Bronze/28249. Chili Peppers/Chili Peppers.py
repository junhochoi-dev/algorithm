pepper ={
    "Poblano": 1500,
    "Mirasol": 6000,
    "Serrano": 15500,
    "Cayenne": 40000,
    "Thai": 75000,
    "Habanero": 125000,
}
N = int(input())
sum = 0
for _ in range(N):
    sum += pepper[input()]
print(sum)