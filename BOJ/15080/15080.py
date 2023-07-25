prev = input().split()
curr = input().split()

prev_sum = int(prev[0]) * 3600 + int(prev[2]) * 60 + int(prev[4])
curr_sum = int(curr[0]) * 3600 + int(curr[2]) * 60 + int(curr[4])

if prev_sum > curr_sum:
    print(curr_sum + 3600 * 24 - prev_sum)
else:
    print(curr_sum - prev_sum)