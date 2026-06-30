# Assignment
# Write a function that transforms a string by alternating the case of
# alphabetic characters only.
# Non-alphabetic characters remain unchanged and are NOT counted in the
# alternation index.
# The first alphabetic character should be lowercase, the second uppercase, etc.
# Spaces reset the alternation (next alpha after a space is lowercase again).

# Function signature
# def string_sculptor(text: str) -> str:

# Examples
# Input
# string_sculptor("hello")
# Output
# "hElLo"

# Input
# string_sculptor("Hello World")
# Output
# "hElLo wOrLd"

# Input
# string_sculptor("abc123def")
# Output
# "aBc123DeF"

# Input
# string_sculptor("Python3.9!")
# Output
# "pYtHoN3.9!"

# Input
# string_sculptor("")
# Output
# ""

def string_sculptor(text: str) -> str:
    
    for i in range(len(text)):
        if i == 0 and text[i].isalpha():
            text[i].lower()
        


def string_sculptor(text: str) -> str:
    """
    Transforms a string by alternating the case
    of alphabetic characters only.
    Non-alphabetic characters remain unchanged and are
    NOT counted in the alternation index.
    The first alphabetic character should be lowercase,
    the second uppercase, etc. Spaces reset the alternation
    (next alpha after a space is lowercase again).
    """
    to_low: bool = True
    res: str = ""
    for i in range(len(text)):
        if text[i].isspace():
            to_low = True
        if text[i].isalpha():
            if to_low:
                res += text[i].lower()
                to_low = False
            else:
                res += text[i].upper()
                to_low = True
        else:
            res += text[i]
    return res


print(string_sculptor("hello"))
print(string_sculptor("Hello World"))
print(string_sculptor("abc123def"))
print(string_sculptor("Python3.9!"))
print(string_sculptor(""))
