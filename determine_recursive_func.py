from solution import solve

N = int(input())
if 'solve' not in solve.__code__.co_names: print('재귀함수 쓰세요')
solve(N)
