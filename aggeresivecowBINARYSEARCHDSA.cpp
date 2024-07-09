/*You are given an array 'arr' consisting of 'n' integers which denote the position of a stall.

You are also given an integer 'k' which denotes the number of aggressive cows.

You are given the task of assigning stalls to 'k' cows such that the minimum distance between any two of them is the maximum possible.

Print the maximum possible minimum distance.

Example:
Input: 'n' = 3, 'k' = 2 and 'arr' = {1, 2, 3}

Output: 2

Explanation: The maximum possible minimum distance will be 2 when 2 cows are placed at positions {1, 3}. Here distance between cows is 2.*/

def is_possible(int arr, k, min_dist):
    cows = 1
    prev_pos = arr[0]
    for i in range(1, len(arr)):
        if arr[i] - prev_pos >= min_dist:
            cows += 1
            prev_pos = arr[i]
            if cows == k:
                return True
    return False

def max_min_distance(arr, k):
    arr.sort()
    low, high = 0, arr[-1] - arr[0]
    max_min_dist = 0

    while low <= high:
        mid = (low + high) // 2
        if is_possible(arr, k, mid):
            max_min_dist = mid
            low = mid + 1
        else:
            high = mid - 1

    return max_min_dist

# Example usage:
n = 3
k = 2
arr = [1, 2, 3]

print(max_min_distance(arr, k))  # Output: 2
