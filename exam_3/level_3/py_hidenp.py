# Assignment
# Write a function that checks if the string 'small' is a subsequence
# of 'big'. A subsequence means all characters of 'small' appear in 'big'
# in the same order, but not necessarily consecutively.
# Function is case-sensitive.

# Function signature
# def hidenp(small: str, big: str) -> bool:

# Examples
# Input
# hidenp("abc", "a1b2c3")
# Output
# True

# Input
# hidenp("ace", "abcde")
# Output
# True

# Input
# hidenp("aec", "abcde")
# Output
# False

# Input
# hidenp("", "abc")
# Output
# True

# Input
# hidenp("abc", "ab")
# Output
# False

# Input
# hidenp("aaaa", "aaa")
# Output
# False

# Input
# hidenp("sing","subsequence testing")
# Output
# True



def hidenp(small: str, big: str) -> bool:
    it = iter(big)
    return all(c in it for c in small)

# def hidenp(small: str, big: str) -> bool:
#     max_index = len(small)
#     i = 0
#     result = True

#     if max_index == 0:
#         return result

#     for b in big:
#         if b == small[i]:
#             i += 1
#         if i > max_index - 1:
#             break    
#     if i != max_index:
#         result = False
#     return result


if __name__ == "__main__":
    print(hidenp("abc", "a1b2c3"))
    print(hidenp("ace", "abcde"))
    print(hidenp("aec", "abcde"))
    print(hidenp("", "abc"))
    print(hidenp("abc", "ab"))
    print(hidenp("aaaa", "aaa"))
    print(hidenp("sing","subsequence testing"))