# import numpy as np


def transpose(_arr):
	arr_len = len(_arr[0])
	T_arr = [[0 for row in range(arr_len)] for col in range(arr_len)]

	for i in range(arr_len):
		for j in range(arr_len):
			T_arr[i][j] = _arr[j][i]
	return T_arr


def slicing(_arr, start_idx, count):
	slice_arr = []
	for i in range(count):
		slice_arr.append(_arr[i][start_idx:count])
	return slice_arr


def swap_line(_arr, idx, n_idx):
	tmp = _arr.copy()
	_arr[idx] = _arr[n_idx]
	_arr[n_idx] = tmp[idx]

	T_arr = transpose(_arr)
	tmp = T_arr.copy()
	T_arr[idx] = T_arr[n_idx]
	T_arr[n_idx] = tmp[idx]
	return T_arr


def solution(_n, _arr):
	print(n)
	print(_arr)
	answer = 0

	for i in range(n):
		for j in range(i + 1, n):
			cal_arr = _arr.copy()
			swaped_arr = swap_line(cal_arr, i, j)
			print('----')
			print(swaped_arr)
			print('----')
			for k in range(1, n - 1):
				slice_arr = slicing(swaped_arr, 0, k + 1)
				back_slice_arr = slicing(swaped_arr, k + 1, n)
				flat_arr = sum(slice_arr, [])
				back_flat_arr = sum(back_slice_arr, [])
				# roi_arr = swaped_arr[0:k + 1, 0:k + 1]

				# x = min(slice_arr[slice_arr > 0])
				x = 10e6
				for l in flat_arr:
					if l > 0 and x > l:
						x = l
				y = 10e6
				if len(back_slice_arr[0]) > 1:
					for l in back_flat_arr:
						if l > 0 and y > l:
							y = l
				x = x if x < y else y
				if x > answer:
					answer = x
	return answer


if __name__ == "__main__":
	n = int(input())
	arr = []

	for i in range(n):
		arr.append(list(map(int, input().split(' '))))
	# arr = np.array(arr)
	print(solution(n, arr))
