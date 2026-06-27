# Write a function that checks if the brackets in a string are valid.
# A string is valid if every opening bracket has a matching closing bracket
# in the correct order.
# Allowed brackets: (), [], {}


# Function signature
# def bracket_validator(s: str) -> bool:


# Examples

# Input
# bracket_validator("()")
# Output
# True

# Input
# bracket_validator("()[]{}")
# Output
# True

# Input
# bracket_validator("(]")
# Output
# False

# Input
# bracket_validator("([)]")
# Output
# False

# Input
# bracket_validator("{[]}")
# Output
# True

# Input
# bracket_validator("hello(world)")
# Output
# True

# Input
# bracket_validator("((())")
# Output
# False

# Input
# bracket_validator("")
# Output
# True


def bracket_validation(s: str) -> bool:
    stack = []

    pairs = {
        ')': '(',
        ']': '[',
        '}': '{'
    }

    for char in s:
        if char in "([{":
            stack.append(char)

        elif char in ")]}" :
            if not stack:
                return False

            if stack[-1] != pairs[char]:
                return False
 
            stack.pop()

    return len(stack) == 0



if __name__ == "__main__":
    print(bracket_validation("()"))# True
    print(bracket_validation("()[]{}"))# True
    print(bracket_validation("(]"))# False
    print(bracket_validation("([)]"))# False
    print(bracket_validation("{[]}"))# True
    print(bracket_validation("hello(world)"))# True
    print(bracket_validation("((())"))# False
    print(bracket_validation(""))# True

