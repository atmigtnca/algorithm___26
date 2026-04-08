class Stack:
    def __init__(self):
        self.data = []

    def push(self, x):
        self.data.append(x)

    def pop(self):
        if not self.data:
            return "ERROR"
        return self.data.pop()

    def size(self):
        return len(self.data)

    def empty(self):
        if not self.data:
            return 1
        else:
            return 0


    def top(self):
        if not self.data:
            return "ERROR"
        return self.data[-1]

    def clear(self):
        self.data = []


n = int(input())
s = Stack()


for i in range(n):
    cmd = input()

    if cmd == "push":
        x = int(input())
        s.push(x)
    elif cmd == "pop":
        print(s.pop())
    elif cmd == "size":
        print(s.size())
    elif cmd == "empty":
        print(s.empty())
    elif cmd == "top":
        print(s.top())
    elif cmd == "clear":
        s.clear()
