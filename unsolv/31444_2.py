def solution2(n, arr):
    answer = 0

    dict_teamwork = {}
    for i in range(n):
        for j in range(i + 1, n):
            teamwork = arr[i][j]
            if teamwork not in dict_teamwork.keys():
                dict_teamwork[teamwork] = [[i, j]]
            else:
                dict_teamwork[teamwork].append([i, j])
    #
    # for i, row_arr in enumerate(arr):
    #     for j, teamwork in enumerate(row_arr):
    #         if teamwork not in dict_teamwork.keys():
    #             dict_teamwork[teamwork] = [[i, j]]
    #         else:
    #             dict_teamwork[teamwork].append([i, j])
    #         pass
    key_list = list(dict_teamwork.keys())
    if len(key_list) == 3:
        return max(key_list)

    for i in range(n - 1, -1, -1):
        key_i = i
        pairs = []
        while key_i < n:
            for teamwork_pair in dict_teamwork[key_list[key_i]]:
                pairs.append(teamwork_pair)
                i_idx = teamwork_pair[0]
                j_idx = teamwork_pair[1]
            key_i += 1
        if len(pairs) > 0:
            # check i, j 조합
            for index, pair in enumerate(pairs):
                players = {}
                for p in range(n):
                    players[p] = []

                flag = False
                i_idx, j_idx = pair
                del players[i_idx]
                del players[j_idx]
                for ni, nj in pairs[index + 1:]:
                    if compare(arr, i_idx, ni, key_list[i]):
                        if ni in players.keys():
                            del players[ni]
                        flag = True
                        break
                    elif compare(arr, i_idx, nj, key_list[i]):
                        if nj in players.keys():
                            del players[nj]
                        flag = True
                        break
                    elif compare(arr, j_idx, ni, key_list[i]):
                        if ni in players.keys():
                            del players[ni]
                        flag = True
                        break
                    elif compare(arr, j_idx, nj, key_list[i]):
                        if nj in players.keys():
                            del players[nj]
                        flag = True
                        break
                    else:
                        pass
                if flag and len(players.keys()) < 2:
                    answer = key_list[i]
                    break
            if answer != 0:
                break
    return answer


def compare(array, i, j, k):
    if array[i][j] != 0 and array[i][j] > k:
        return True
    else:
        return False
