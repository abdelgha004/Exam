# Assignment
# Write a function that checks if two strings are anagrams.
# They must contain exactly the same letters with the same quantity,
# ignoring case and spaces.

# Function signature
# def anagram(s1: str, s2: str) -> bool:

# Examples
# Input
# anagram("listen", "silent")
# Output
# True

# Input
# anagram("Triangle", "Integral")
# Output
# True

# Input
# anagram("Dormitory", "Dirty Room")
# Output
# True

# Input
# anagram("hello", "world")
# Output
# False

# Input
# anagram("", "")
# Output
# True

# Input
# anagram("abc", "abcc")
# Output
# False



def anagram(s1: str, s2: str) -> bool:

    clean_s1 = sorted(s1.lower().replace(" ", ""))
    clean_s2 = sorted(s2.lower().replace(" ", ""))

    return (clean_s1 == clean_s2)

# def anagram(s1: str, s2: str) -> bool:
#     S_s1 =  s1.lower()
#     S_s2 =  s2.lower()
#     for s in S_s1:
#         if s not in S_s2 and s != " ":
#             return False

#     for k in S_s2:
#         if k not in S_s1 and k != " ":
#             return False
#     return True



print(anagram("listen", "silent"))
print(anagram("Triangle", "Integral"))
print(anagram("Dormitory", "Dirty Room"))
print(anagram("hello", "world"))
print(anagram("", ""))
print(anagram("abc", "abcc"))