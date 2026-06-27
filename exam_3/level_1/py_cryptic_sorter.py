# Assignment
# Write a function that sorts a list of strings according to multiple criteria:
# 1. Primary sort: By string length (shortest first)
# 2. Secondary sort: ASCII order, except letters are compared case-insensitively
#    (for strings of same length)
# 3. Tertiary sort: By number of vowels (ascending, for same length and lexically equal)
# 4. Equal strings will appear in the same order as in the input list.



# Function signature
# def cryptic_sorter(strings: list[str]) -> list[str]:



# Examples

# Input
# cryptic_sorter(["apple","cat","banana","dog","elephant"])
# Output
# ["cat","dog","apple","banana","elephant"]

# Input
# cryptic_sorter(["aaa","bbb","AAA","BBB"])
# Output
# ["AAA", "aaa", "BBB", "bbb"]

# Input
# cryptic_sorter(["hello","world","hi","test"])
# Output
# ["hi","test","hello","world"]

# Input
# cryptic_sorter([])
# Output
# []

# Input
# cryptic_sorter([""])


def cryptic_sorter(strings: list[str]) -> list[str]:
    return sorted(
        strings, key=lambda word: (len(word), word.lower(), sum(c.lower() in "aeiou" for c in word), word)
    )

if __name__ == "__main__":
    
    print(cryptic_sorter(["apple","cat","banana","dog","elephant"]))  # ["cat","dog","apple","banana","elephant"]
    print(cryptic_sorter(["aaa","bbb","AAA","BBB"]))  # ["AAA", "aaa", "BBB", "bbb"]
    print(cryptic_sorter(["hello","world","hi","test"]))  # ["hi","test","hello","world"]
    print(cryptic_sorter([]))  # []
    print(cryptic_sorter([""]))  # [""]