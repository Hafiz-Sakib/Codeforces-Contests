# Problem B

def ii():
    return list(map(int, input().strip().split()))



for _ in range(ii()[0]):
    M = []  
    n = ii()[0]

    s = set()
    for i in range(n):
        ss = input()
        if '1' in ss:
            s.add(ss.count('1'))


    if len(s) == 1:
        print("SQUARE")
    else:
        print("TRIANGLE")