dict = {
    'CU'    :'see you',
    ':-)'   :'I’m happy',
    ':-('   :'I’m unhappy',
    ';-)'   :'wink',
    ':-P'   :'stick out my tongue',
    '(~.~)' :'sleepy',
    'TA'    :'totally awesome',
    'CCC'	:'Canadian Computing Competition',
    'CUZ'	:'because',
    'TY'    :'thank-you',
    'YW'	:'you’re welcome',
    'TTYL'	:'talk to you later'
}
while True:
    s=input()
    if(dict.get(s) == None): print(s)
    else: print(dict[s])
    if s=='TTYL':
        break