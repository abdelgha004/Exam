# Assignment
# Write a function that checks if a string is a palindrome,
# ignoring spaces and case, only consider alphabetic characters
# for the comparison.


# Function signature
# def echo_validator(text: str) -> bool:

# Examples
# Input
# echo_validator("racecar")
# Output
# True

# Input
# echo_validator("A man a plan a canal Panama")
# Output
# True

# Input
# echo_validator("race a car")
# Output
# False

# Input
# echo_validator("Was it a car or a cat I saw")
# Output
# True

# Input
# echo_validator("hello")
# Output
# False

# Input
# echo_validator("Madam Im Adam")
# Output
# True

# Input
# echo_validator("")
# Output
# False

def echo_validator(text:str) -> bool:

    if text == "":
        return False
    temp = []
    for c in text:
        if c.isalpha():
            temp.append(c.lower())

    return (temp == temp[::-1])


if __name__ == "__main__":
    print(echo_validator("racecar"))# True
    print(echo_validator("A man a plan a canal Panama"))# True
    print(echo_validator("race a car"))# False
    print(echo_validator("Was it a car or a cat I saw"))# True
    print(echo_validator("hello"))# False
    print(echo_validator("Madam Im Adam"))# True
    print(echo_validator(""))# False
