import math
def metersToFeetAndInches(meters, ftPtr, inPtr):
	ftPtr.append(1)
	inPtr.append(2)

meters = 3.0
feet = []
inches = []
metersToFeetAndInches(meters, feet, inches)
print(feet, inches)
