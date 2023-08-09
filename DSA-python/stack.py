def push(a):
    l=len(a)
    if(l==max):
        print("STACK OVERFLOW:Stack is full!")
    else:
        num=int(input("Enter an integer: "))
        a.append(num)

def pop_(a):
    l=len(a)
    if (l==0):
        print("STACK UNDERFLOW:Stack is empty!")
    else:
        print("Element popped: ",a.pop())

def peep(a):
    l=len(a)
    if (l==0):
        print("Stack is empty!No elements to be shown.")
    else:
        print("Top-most Element= ",a[l-1])

#-------------MAIN----------------
stack=[]
max=int(input("Enter maximum no.of elements in stack: "))
ch=0
while(ch!=4):
    print("Enter 1 to PUSH \t 2 to POP \t 3 to PEEP \t 4 to QUIT")
    ch=int(input("Enter choice: "))
    match(ch):
        case 1:
            push(stack)
        case 2:
            pop_(stack)
        case 3:
            peep(stack)
        case 4:
            print("Program Ends.")
        case _:
            print("Error:Try Again!")
    

