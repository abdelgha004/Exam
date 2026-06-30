# Assignment
# Write a function that determines if two strings are permutations of each other.
# Case sensitive. Whitespace and punctuation count as regular characters.
# Empty strings are permutations of each other.
# Function signature
# def string_permutation_checker(s1: str, s2: str) -> bool:

# Examples
# Input
# string_permutation_checker("abc", "bca")
# Output
# True

# Input
# string_permutation_checker("abc", "def")
# Output
# False

# Input
# string_permutation_checker("listen", "silent")
# Output
# True

# Input
# string_permutation_checker("hello", "bello")
# Output
# False

# Input
# string_permutation_checker("", "")
# Output
# True

# Input
# string_permutation_checker("a", "")
# Output
# False

# Input
# string_permutation_checker("Abc", "abc")
# Output
# False

# Input
# string_permutation_checker("a gentleman","elegant man")
# Output
# True



def string_permutation_checker(s1: str, s2: str) -> bool:
    return (sorted(s1) == sorted(s2))

# def string_permutation_checker(s1: str, s2: str) -> bool:
#     for s in s1:
#         if s not in s2:
#             return False
#     for s in s2:
#         if s not in s1:
#             return False
#     return True


print(string_permutation_checker("abc", "bca"))
print(string_permutation_checker("abc", "def"))
print(string_permutation_checker("listen", "silent"))
print(string_permutation_checker("hello", "bello"))
print(string_permutation_checker("", ""))
print(string_permutation_checker("a", ""))
print(string_permutation_checker("Abc", "abc"))
print(string_permutation_checker("a gentleman","elegant man"))