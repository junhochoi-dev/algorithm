sum_credit = 0
sum_score = 0
score_f = { 'A' : 4.0, 'B' : 3.0, 'C' : 2.0, 'D' : 1.0, 'F' : 0.0}
score_e = { '+' : 0.5, '0' : 0.0 }
while True:
    try:
        subject, credit, score = input().split()
        credit = float(credit)
        if not score == 'P':
            sum_credit += credit
            sum_score += score_f[score[0]] * credit
            if len(score) == 2:
                sum_score += score_e[score[1]] * credit
    except:
        break
print(f'{sum_score / sum_credit:.6f}')