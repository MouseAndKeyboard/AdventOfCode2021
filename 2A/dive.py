


h = 0
d = 0

with open('sample2') as f:
    lines = f.readlines()
    for line in lines:
        [inst, qty] = line.split()
        qty = int(qty)
        if inst == 'forward':
            h += qty
        elif inst == 'down':
            d += qty
        elif inst == 'up':
            d -= qty

print(h * d)
