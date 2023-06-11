"""
name = input("Name: ")
policy_no = input("Policy No: ")
members = int(input("Members: "))
sum_insured = int(input("Sum Insured: "))
due_date = input("Due Date: ")
tenure = float(input("Tenure: "))
premium = float(input("Premium: "))

print(f'''Hi, {name},

Pre-existing illnesses often pose a future risk. But this doesn't have to mean that they drain you financially. Avoid risk to your health and financial security, renew your policy today.

Avoid risk to your health and financial security, renew your policy today.
Here are your policy renewal details

Policy no:          {policy_no}
Insured Members:    {members}
Sum Insured:        {sum_insured}
Due date:           {due_date}
Policy Tenure:      {tenure}
Premium:            {premium}

We are glad to inform that we have upgraded our Complete Health Insurance policy and made our coverage more inclusive. Our upgraded policy comes with a host of exciting new features like 20% guaranteed bonus on sum insured for every claim-free year (maximum 100%) and zone based pricing to extend pricing advantage in line with treatment cost in your area.''')
"""

# String Methods: As strings are immutable, no string methods can change the original string.
# s1 = "We are glad to inform that we have upgraded our Complete Health Insurance policy and made our coverage more inclusive."

# Case-related methods
"""
# s2 = s1.capitalize()
# s2 = s1.upper()
print()
print(s1)
# print(s2)
# print(s1.lower())
# print(s1.title())
print(s1.swapcase())
print()
"""

# Alignment-related methods
"""
s2 = "Happy Birthday!"
print(s2)
print(len(s2))
# s3 = s2.center(55)
s3 = s2.center(100, "-")
# s3 = s2.center(100, "$")
print(s3)
print(len(s3))

# s4 = s2.rjust(100, "-")
# s4 = s2.ljust(100)
s4 = s2.ljust(100, "!")
print(s4)
print(len(s4))
"""

# count
s1 = "We are glad to inform that we have upgraded our Complete Health Insurance policy and made our coverage more inclusive."
"""
print(s1.count("o"))
print(s1.count("O"))
print(s1.count("in"))
print(s1.count("in", 50))
print(s1.count("in", 50, 100))
print(s1.count("in", 100))
"""

# print(s1.endswith("."))
# print(s1.endswith("?"))
# print(s1.endswith("e"))
# print(s1.endswith("e."))
# print(s1.endswith("ed", 10, 50))

# print(s1.startswith("I"))
# print(s1.startswith("In", 64)

# expandtabs() and onwards