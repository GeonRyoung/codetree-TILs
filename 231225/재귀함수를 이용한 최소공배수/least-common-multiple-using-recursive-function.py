from math import gcd

n = int(input())
n_arr = list(map(int, input().split()))

def gongbaesu(arr):
    answer = arr[0]
    for num in arr:
        answer = answer * num // gcd(answer, num)
    return answer

print(gongbaesu(n_arr))