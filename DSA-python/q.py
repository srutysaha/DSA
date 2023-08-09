def enqueue(a):
    l=len(a)
    if(l==max):
        print("OVERFLOW:Queue is full!")
    else:
        num=int(input("Enter an integer: "))
        a.append(num)

def dequeue(a):
    l=len(a)
    if (l==0):
        print("UNDERFLOW:Queue is empty!")
    else:
        print("Element popped: ",a.pop(0))

def front(a):
    l=len(a)
    if (l==0):
        print("Queue is empty!No elements to be shown.")
    else:
        print("Front Element= ",a[0])

def rear(a):
    l=len(a)
    if (l==0):
        print("Queue is empty!No elements to be shown.")
    else:
        print("Rear Element= ",a[l-1])


#-------------MAIN----------------
queue=[]
max=int(input("Enter maximum no.of elements in queue: "))
ch=0
while(ch!=5):
    print("Enter 1 to ENQUEUE \t 2 to DEQUEUE \t 3 to SHOW FRONT \t 4 to SHOW REAR \t 5 to QUIT")
    ch=int(input("Enter choice: "))
    match(ch):
        case 1:
            enqueue(queue)
        case 2:
            dequeue(queue)
        case 3:
            front(queue)
        case 4:
            rear(queue)
        case 5:
            print("Program Ends.")
        case _:
            print("Error:Try Again!")
    

