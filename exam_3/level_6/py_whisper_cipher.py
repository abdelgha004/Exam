# Assignment
# Write a function that creates a Caesar cipher by shifting letters in a
# string by a given amount.
# Non-alphabetic characters should remain unchanged.
# The shift can be negative (shift left).

# Function signature
# def whisper_cipher(text: str, shift: int) -> str:

# Examples
# Input
# whisper_cipher("hello", 3)
# Output
# "khoor"

# Input
# whisper_cipher("Hello World!", 1)
# Output
# "Ifmmp Xpsme!"

# Input
# whisper_cipher("xyz", 3)
# Output
# "abc"

# Input
# whisper_cipher("ABC123def", 5)
# Output
# "FGH123ijk"

# Input
# whisper_cipher("", 10)
# Output
# ""

# Input
# whisper_cipher("abc", -3)
# Output
# "xyz"


def whisper_cipher(text: str, shift: int) -> str:
    """
    Creates a Caesar cipher by shifting letters in a
    string by a given amount.
    Non-alphabetic characters should remain unchanged.
    The shift can be negative (shift left).
    """
    res: str = ""

    for c in text:
        if 'a' <= c <= 'z':
            res += chr((ord(c) - ord('a') + shift) % 26 + ord('a'))
        elif 'A' <= c <= 'Z':
            res += chr((ord(c) - ord('A') + shift) % 26 + ord('A'))
        else:
            res += c

    return res
