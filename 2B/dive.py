h = 0
d = 0
aim = 0

with open('sample2') as f:
    lines = f.readlines()
    for line in lines:
        [inst, qty] = line.split()
        qty = int(qty)
        if inst == 'forward':
            h += qty
            d += aim * qty
        elif inst == 'down':
            aim += qty
        elif inst == 'up':
            aim -= qty

print(h * d)
