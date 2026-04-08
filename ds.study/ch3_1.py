arr = []
M = 0

def insert(pos, e):
    size = len(arr)
    if size == M:
        print("FULL")
    elif 0 <= pos <= size:
        arr.insert(pos, e)
    else:
        print("ERROR")

def delete(pos):
    size = len(arr)
    if 0 <= pos < size:
        val = arr.pop(pos)
        print(val)
    else:
        print("ERROR")

def isFull():
    size = len(arr)
    if size == M:
        print("True")
    else:
        print("False")

def isEmpty():
    size = len(arr)
    if size == 0:
        print("True")
    else:
        print("False")

def getEntry(pos):
    size = len(arr)
    if 0 <= pos < size:
        print(arr[pos])
    else:
        print("ERROR")

def main():
    global M
    
    info = input().split()
    M = int(info[0])
    N = int(info[1])
    
    for i in range(N):
        command = input().split()
        cmd = command[0]
        
        if cmd == "insert":
            pos = int(command[1])
            e = int(command[2])
            insert(pos, e)
            
        elif cmd == "delete":
            pos = int(command[1])
            delete(pos)
            
        elif cmd == "isEmpty":
            isEmpty()
            
        elif cmd == "isFull":
            isFull()
            
        elif cmd == "getEntry":
            pos = int(command[1])
            getEntry(pos)
            
    for i in range(len(arr)):
        print(arr[i], end=" ")
    print()

if __name__ == "__main__":
    main()