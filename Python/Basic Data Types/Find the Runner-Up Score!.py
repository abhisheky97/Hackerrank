if __name__ == '__main__':
    n = int(input())
    arr = map(int, input().split())
    array = set(arr)
    sorted_array = list(array)
    sorted_array.sort()
    print(sorted_array[len(sorted_array)-2])