import random
import time

def main():
    a_time = 0.0
    b_time = 0.0
    for i in range(1000):
        num_iterations = random.randint(0, random.randint(100000, 200000))

        start_timea = time.time()
        compute_suma(num_iterations)
        a_time += time.time() - start_timea

        start_timeb = time.time()
        compute_sumb(num_iterations)
        b_time += time.time() - start_timeb

    print str(a_time / 100)
    print str(b_time / 100)

    # a_time = 0.128084132671
    # b_time = 0.0780420923233

def compute_suma(num_iterations):
    sum = 0.0
    for i in range(num_iterations):
        sum += 1.0
    return sum

def compute_sumb(num_iterations):
    sum0 = 0.0
    sum1 = 0.0
    sum2 = 0.0
    sum3 = 0.0
    sum4 = 0.0
    sum5 = 0.0
    sum6 = 0.0
    sum7 = 0.0

    sum = 0.0
    last_index = 0
    for i in range(0, num_iterations, 8):
        sum0 += 1.0
        sum1 += 1.0
        sum2 += 1.0
        sum3 += 1.0
        sum4 += 1.0
        sum5 += 1.0
        sum6 += 1.0
        sum7 += 1.0
        last_index = i

    sum = sum0 + sum1 + sum2 + sum3 + sum4 + sum5 + sum6 + sum7

    for i in range(last_index, num_iterations):
        sum += 1.0

    return sum


if __name__ == '__main__':
    main()
