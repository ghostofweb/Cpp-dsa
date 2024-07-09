def find_unique(arr):
    unique_element = 0
    for num in arr:
        unique_element ^= num
    return unique_element

# Example usage:
arr = [2, 2, 2, 2, 9, 7, 7, 7, 7, 7, 8, 8, 8, 8, 8]
print("Unique element:", find_unique(arr))  # Output: 9
