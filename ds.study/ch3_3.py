arr = []
M = 0

def add(e):
    if len(arr) == M:
        print("FULL")
    elif e in arr:
        print("DUPLICATE")
    else:
        arr.append(e)
        print("SUCCESS")

def remove(e):
    if e in arr:
        arr.remove(e)
        print("SUCCESS")
    else:
        print("NOT_FOUND")

def contains(e):
    if e in arr:
        print("True")
    else:
        print("False")

def size():
    print(len(arr))

def main():
    global M
    
    info = input().split()
    M = int(info[0])
    N = int(info[1])
    
    for i in range(N):
        command = input().split()
        cmd = command[0]
        
        if cmd == "add":
            e = int(command[1])
            add(e)
            
        elif cmd == "remove":
            e = int(command[1])
            remove(e)
            
        elif cmd == "contains":
            e = int(command[1])
            contains(e)
            
        elif cmd == "size":
            size()

if __name__ == "__main__":
    main()