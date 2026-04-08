def main():
    list_S = list(input())
    N = int(input())
    cursor = len(list_S)
    
    for _ in range(N):
        command = input().split()
        cmd = command[0]
        
        if cmd == 'L':
            if cursor > 0:
                cursor -= 1
        elif cmd == 'R':
            if cursor < len(list_S):
                cursor += 1
        elif cmd == 'B':
            if cursor > 0:
                list_S.pop(cursor - 1)
                cursor -= 1
        elif cmd == 'P':
            x = command[1]
            list_S.insert(cursor, x)
            cursor += 1
            
    if len(list_S) == 0:
        print("EMPTY")
    else:
        print("".join(list_S))

if __name__ == "__main__":
    main()