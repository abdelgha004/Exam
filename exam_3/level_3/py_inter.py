# Assignment
# Write a function that returns a string with the characters that appear
# in both strings, without repetitions. Characters are added in the order
# they appear in the first string.

# Function signature
# def inter(s1: str, s2: str) -> str:

# Examples
# Input
# inter("hello", "world")
# Output
# "lo"

# Input
# inter("banana", "band")
# Output
# "ban"

# Input
# inter("abcabc", "bc")
# Output
# "bc"

# Input
# inter("abc", "xyz")
# Output
# ""

# Input
# inter("", "abc")
# Output
# ""


def inter(s1: str, s2: str) -> str:
    result = ""
    for s in s1:
        if s in s2 and s not in result:
            result += s


    return result

# def inter(s1: str, s2: str) -> str:
#     res: str = ""
#     for c in s1:
#         if c not in res and c in s2:
#             res += c
#     return res



print(inter("hello", "world"))
print(inter("banana", "band"))
print(inter("abcabc", "bc"))
print(inter("abc", "xyz"))
print(inter("", "abc"))