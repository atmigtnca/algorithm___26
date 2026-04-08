rec_count = 0

def fib_recursive(n):
    global rec_count
    rec_count += 1
    if n <= 1:
        return n
    return fib_recursive(n - 1) + fib_recursive(n - 2)

def fib_loop(n):
    loop_count = 0
    if n == 0:
        return 0, 0
    a, b = 0, 1
    for i in range(1, n + 1):
        loop_count += 1
        tmp = a + b
        a = b
        b = tmp
    return a, loop_count 
line = input().split()
if line:
    n = int(line[0])
    val, l_cnt = fib_loop(n)
    fib_recursive(n)
    print(val)
    print(f"{l_cnt} {rec_count}")