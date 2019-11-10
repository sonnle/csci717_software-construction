import random
import time

def main():
    a_time = 0.0
    b_time = 0.0
    for i in range(1000):
        search_list = [random.randint(0,200000) for i in range(200000)]
        value = random.randint(0, 200000)

        start_timea = time.time()
        finda(value, search_list)
        a_time += time.time() - start_timea

        start_timeb = time.time()
        findb(value, search_list)
        b_time += time.time() - start_timeb

    print str(a_time / 100)
    print str(b_time / 100)

    # a_time = .45s/run
    # b_time = .20s/run

def finda(value, search_list):
    found = False
    i = 0
    while(not found and i < len(search_list)):
        if search_list[i] == value:
            found = True
        else:
            i += 1
    return found


def findb(value, search_list):
    init_value = search_list[len(search_list) - 1]
    search_list[len(search_list) - 1] = value
    i = 0
    while(search_list[i] != value):
        i += 1
    search_list[len(search_list) - 1] = init_value
    return i < len(search_list) - 1 or value == init_value

if __name__ == '__main__':
    main()
