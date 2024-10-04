import time
import stringdata

def linear_search(container: tuple, element: str) -> int: #this is O(N)
    for i in range(len(container)):
        if (container[i] == element):
            return i
    return -1 #if not found

def binary_search(container: tuple, element: str) -> int:
    low = 0
    high = len(container) - 1

    while low <= high:
        mid = (low + high) // 2 #floor so no floats
        x = container[mid]
        if container[mid] == element:
            return mid

        elif container[mid] > element:
            high = mid - 1

        elif container[mid] < element:
            low = mid + 1

    return - 1

    '''low = 0;
    high = len(container) - 1;
    #Loop starts
    while (high >= low):
        mid = ((high + low) // 2) #floors it to an int
        if (container[mid] < element):
            low = mid + 1 #if mid is lower, program changes to top haf

        elif (container[mid] > element): #if mid is higher, algorithm changes to bottom half
            high = mid - 1

        else:
            return mid #return index
    #if it makes it to here it wasn't found
    return -1
    '''

def main():
    data = stringdata.get_data()
    #Search for 'not_here'
    print("Search for 'not_here'")

    # linear search
    start = time.time() #start time
    index = linear_search(data, 'not_here')
    end = time.time() #end time
    run = end - start #run time
    print(f"Linear Search: {run}")
    print(f'Index: {index}')

    #Binary Search
    start = time.time()  # start time
    index = binary_search(data, 'not_here')
    end = time.time()  # end time
    run = end - start  # run time
    print(f"Binary Search: {run}")
    print(f'Index: {index}')


    #Search for "mzzzz"
    print("\nSearch for 'mzzzz'")

    # linear search
    start = time.time()  # start time
    index = linear_search(data, 'mzzzz')
    end = time.time()  # end time
    run = end - start  # run time
    print(f"Linear Search: {run}")
    print(f'Index: {index}')

    # Binary Search
    start = time.time()  # start time
    index = binary_search(data, 'mzzzz')
    end = time.time()  # end time
    run = end - start  # run time
    print(f"Binary Search: {run}")
    print(f'Index: {index}')


    #Search for "aaaaa"
    print("\nSearch for 'aaaaa'")

    # linear search
    start = time.time()  # start time
    index = linear_search(data, 'aaaaa')
    end = time.time()  # end time
    run = end - start  # run time
    print(f"Linear Search: {run}")
    print(f'Index: {index}')

    # Binary Search
    start = time.time()  # start time
    index = binary_search(data, 'aaaaa')
    end = time.time()  # end time
    run = end - start  # run time
    print(f"Binary Search: {run}")
    print(f'Index: {index}')


    #Capture beginning time and ending time

if __name__ == '__main__':
    main()