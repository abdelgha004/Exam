# Assignment
# Write a function that converts a number from one base to another.
# Support bases from 2 to 36 inclusive.
# Use digits 0-9 and letters A-Z for values 10-35.
# Return "ERROR" for invalid inputs.

# Function signature
# def number_base_converter(number: str, from_base: int, to_base: int) -> str:

# Examples
# Input
# number_base_converter("1010", 2, 10)
# Output
# "10"

# Input
# number_base_converter("FF", 16, 10)
# Output
# "255"

# Input
# number_base_converter("255", 10, 16)
# Output
# "FF"

# Input
# number_base_converter("123", 10, 2)
# Output
# "1111011"

# Input
# number_base_converter("Z", 36, 10)
# Output
# "35"

# Input
# number_base_converter("35", 10, 36)
# Output
# "Z"

# Input
# number_base_converter("123", 1, 10)
# Output
# "ERROR"

# Input
# number_base_converter("G", 16, 10)
# Output
# "ERROR"




def number_base_converter(number: str, from_base: int,  to_base: int) -> str:
    digits = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ"

    if from_base < 2 or from_base > 36:
        return "ERROR"
    if to_base < 2 or to_base > 36:
        return "ERROR" 
    
    try:
        numb = int(number, from_base)
    except ValueError:
        return "ERROR"

    if numb == 0:
        return "0"

    result = ""
    while numb > 0:
        index =  numb % to_base;
        result = digits[index] + result
        numb //= to_base
    return result




if __name__ == "__main__":
    print(number_base_converter("1010", 2, 10))  # 10
    print(number_base_converter("FF", 16, 10))  # FF
    print(number_base_converter("255", 10, 16))  #
    print(number_base_converter("123", 10, 2))  # 
    print(number_base_converter("Z", 36, 10))  # 
    print(number_base_converter("35", 10, 36))  # 
    print(number_base_converter("123", 1, 10))  # 
    print(number_base_converter("G", 16, 10))  # 