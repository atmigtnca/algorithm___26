M = 0
set1 = []
set2 = []

def isSubset(A, B):
    for x in A:
        found = False
        for y in B:
            if x == y:
                found = True
                break
        if not found:
            return False
    return True

def hasCommon(A, B):
    for x in A:
        for y in B:
            if x == y:
                return True
    return False

def add(target, e):
    s = set1 if target == 1 else set2
    if len(s) == M:
        print("FULL")
    elif e in s:
        print("DUPLICATE")
    else:
        s.append(e)
        print("SUCCESS")

def remove(target, e):
    s = set1 if target == 1 else set2
    if e in s:
        s.remove(e)
        print("SUCCESS")
    else:
        print("NOT_FOUND")

def contains(target, e):
    s = set1 if target == 1 else set2
    if e in s:
        print("True")
    else:
        print("False")

def compare():
    sub12 = isSubset(set1, set2)
    sub21 = isSubset(set2, set1)
    
    if sub12 and sub21:
        print("EQUAL")
    elif sub12:
        print("1_IN_2")
    elif sub21:
        print("2_IN_1")
    else:
        common = hasCommon(set1, set2)
        if not common:
            print("DISJOINT")
        else:
            print("OVERLAP")

def main():
    global M
    
    info = input().split()
    M = int(info[0])
    N = int(info[1])
    
    for _ in range(N):
        command = input().split()
        cmd = command[0]
        
        if cmd == "add":
            target = int(command[1])
            e = int(command[2])
            add(target, e)
            
        elif cmd == "remove":
            target = int(command[1])
            e = int(command[2])
            remove(target, e)
            
        elif cmd == "contains":
            target = int(command[1])
            e = int(command[2])
            contains(target, e)
            
        elif cmd == "compare":
            compare()

if __name__ == "__main__":
    main()