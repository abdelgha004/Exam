# Assignment
# Given a 2D matrix (list of lists), return a new matrix where each row
# is reversed.

# Function signature
# def mirror_matrix(matrix: list[list[int]]) -> list[list[int]]:

# Examples
# Input
# mirror_matrix([[1,2,3],[4,5,6]])
# Output
# [[3,2,1],[6,5,4]]

# Input
# mirror_matrix([[1,2],[3,4],[5,6]])
# Output
# [[2,1],[4,3],[6,5]]

# Input
# mirror_matrix([[7]])
# Output
# [[7]]

# Input
# mirror_matrix([[1,2,3,4]])
# Output
# [[4,3,2,1]]

# Input
# mirror_matrix([[-1,-2],[-3,-4]])
# Output
# [[-2,-1],[-4,-3]]



def mirror_matrix(matrix:list[list[int]]) -> list[list[int]]:
    for row in matrix:
        row.reverse()
    return matrix

if __name__ == "__main__":
    print(mirror_matrix([[1,2,3],[4,5,6]]))
    print(mirror_matrix([[1,2],[3,4],[5,6]]))
    print(mirror_matrix([[7]]))
    print(mirror_matrix([[1,2,3,4]]))
    print(mirror_matrix([[-1,-2],[-3,-4]]))