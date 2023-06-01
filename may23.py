"""
print("Enter 5 integers:")
a = int(input())
b = int(input())
c = int(input())
d = int(input())
e = int(input())
avg = (a + b + c + d + e)/5
print("The average of", a, "\b,", b, "\b,", c, "\b,", d, "&", e, "is:", avg)
"""

# f-string:
"""
print("Enter 5 integers:")
a = int(input())
b = int(input())
c = int(input())
d = int(input())
e = int(input())
avg = (a + b + c + d + e)/5
print(f"The average of {a}, {b}, {c}, {d} & {e} is: {avg}")
"""


# user = input("User name: ")
user = "Vraj Shah"
whatsapp = f"Hi {user},\nIt's time to get higher returns with your savings!\nInvest in Kotak FD & get 7.20%* p.a. for a tenure of 12 months 25 days to less than 2 years.\nTap to get started now: 1.kmbl.in/xTIX9UBraVu0\n*T&C apply\nWarm Regards\nTeam Kotak bank"
print(whatsapp)


# string methods
# Differences between a method & a function

# How we call functions:
print(len(whatsapp))
print(type(whatsapp))

# How we call a method:
# lower(whatsapp) <- Wrong
# whatsapp.lower()

