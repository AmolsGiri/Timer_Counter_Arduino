import time

inc = 3
dec = 5

light1 = 3
light2 = 255

incc = True
decc = False

while True:

    if (incc):
        if light1 <= 250:
            light1 += inc 
        else:
            light1 = 255
            incc = False
    else:
        if light1 >= 5:
            light1 -= dec
        else:
            light1 = 0
            incc = True
                
    if (decc):
        if light2 <= 250:
            light2 += inc
        else:
            light2 = 255
            decc = False
    else:
        if light2 >= 5:
            light2 -= dec
        else:
            light2 = 0
            decc = True

    print(f"light 1: {light1}")
    print(f"light 2: {light2}")
    time.sleep(0.2)
