# A bank wants to send a formatted email to all its clients whose insurance policy is about to expire. The format of the message is as below:
"""
Hi, Monika Stuart,  # Here customer's name should come

Pre-existing illnesses often pose a future risk. But this doesn't have to mean that they drain you financially. Avoid risk to your health and financial security, renew your policy today.

Avoid risk to your health and financial security, renew your policy today.
Here are your policy renewal details

Policy no:	 4128i/HSHA/82360566    # Customer's policy number should come here
Insured Members:	 3              # This will vary
Sum Insured:	 300000             # This will vary
Due date:	 10/6/2023              # This will vary
Policy Tenure:	1                   # This will vary
Premium:	 19563                  # This will vary

We are glad to inform that we have upgraded our Complete Health Insurance policy and made our coverage more inclusive. Our upgraded policy comes with a host of exciting new features like 20% guaranteed bonus on sum insured for every claim-free year (maximum 100%) and zone based pricing to extend pricing advantage in line with treatment cost in your area.
"""
# Write a program that asks name(string), policy_number(string), insured_members(int), sum_insured(int), due_date(string), tenure(float) & premium(int) from the user and print the output as shown in the example.