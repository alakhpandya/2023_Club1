# rsplit, partition, rpartition, join method, exercise related to these topics
"""
s = "2023"
# print(s.isnumeric())
# print(s.isdecimal())
# print(s.isdigit())

s1 = "②⓪②③"
# print(s1.isdecimal())
# print(s1.isdigit())
# print(s1.isnumeric())

s2 = "Ⅶ"
# print(s2.isdecimal())
# print(s2.isdigit())
# print(s2.isnumeric())

s3 = "½"
# print(s3.isdecimal())
# print(s3.isdigit())
# print(s3.isnumeric())

s4 = "二千二十三"
# print(s4.isdecimal())
# print(s4.isdigit())
# print(s4.isnumeric())
"""

# s1 = "write a program & take names & marks of 4 subjects from user and create a proper table of sub and marks"
# print(s1.split(" ", 3))       # max-split number
# print(s1.rsplit(" ", 3))

# print(s1.split())
# print(s1.rsplit())

# print(s1.split("subjects"))
# print(s1.partition("subjects"))

# print(s1.split("e"))
# print(s1.partition("e"))
# print(s1.rpartition("e"))

"""
# [] : list
# () : tuple

t1 = ["I", "Love", "India"]
t2 = ("Mera", "Bharat", "Mahaan")

x = "_".join(t1)
print(x)
print(" ".join(t2))
"""
"""
s1 = "write a program & take names & marks of 4 subjects from user and create a proper table of sub and marks"
s2 = "                    Happy Birthday to you!                                                  "
# s2 = s2.rstrip()
# s2 = s2.lstrip()
s2 = s2.strip()
print(len(s2))
"""
print("Enter your date of birth (dd/mm):")
date = input("Date (dd):")
month = input("Month (mm):")
year = "2024"
print(f"Your birthday in next year is: {date.zfill(2)}/{month.zfill(2)}/{year}")