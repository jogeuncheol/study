class ConventionalDead:
    def __init__(self):
        self.answers = []
        self.map = []
        self.n = 0
        self.m = 0
        self.H = 0
        self.other_ways = []

        self.solution_input()

    def solution_input(self):
        self.n, self.m = list(map(int, input().split(' ')))
        for i in range(self.n):
            self.map.append(list(map(int, input().split(' '))))
        self.H = int(input())

    def f(self, position, hp, hh):
        if hp < 0:
            return "NO"
        elif position[0] == self.n - 1 and position[1] == self.m - 1:
            y, x = position
            self.answers.append(hh + self.map[y][x])
            return "YES"
        elif 0 in self.answers:
            return
        # else:
        #     y, x = position
        #     if hp - self.map[y][x] < 0:
        #         return
        #     value = self.map[y][x]
        #     self.map[y][x] = -1
        #     right_value = self.map[y][x + 1] if x + 1 else -1
        #     down_value = self.map[y + 1][x] if y + 1 else -1
        #     if x + 1 < self.m:  # and self.map[y][x + 1] != -1:
        #         if down_value != -1 and right_value < down_value:
        #             self.f([y, x + 1], hp - value, hh + value)
        #             if 0 in self.answers:
        #                 return
        #     if y + 1 < self.n:
        #         if right_value >= down_value:
        #             self.f([y + 1, x], hp - value, hh + value)
        #             if 0 in self.answers:
        #                 return
        #     self.map[y][x] = value
        # if False: return
        else:
            y, x = position
            if hp - self.map[y][x] < 0:
                return
            value = self.map[y][x]
            self.map[y][x] = -1
            right_value = self.map[y][x + 1] if x + 1 < self.m else -1
            down_value = self.map[y + 1][x] if y + 1 < self.n else -1
            if right_value != -1 and down_value != -1:
                if right_value <= down_value:
                    self.f([y, x + 1], hp - value, hh + value)
                    if 0 in self.answers:
                        return
                if down_value <= right_value:
                    self.f([y + 1, x], hp - value, hh + value)
                    if 0 in self.answers:
                        return
            elif right_value != -1 and down_value == -1:
                self.f([y, x + 1], hp - value, hh + value)
                if 0 in self.answers:
                    return
            elif down_value != -1 and right_value == -1:
                self.f([y + 1, x], hp - value, hh + value)
                if 0 in self.answers:
                    return
            if not value:
                self.map[y][x] = value

    def solution(self):
        position = [0, 0]
        self.f(position, self.H, 0)
        return


if __name__ == "__main__":
    conven_dead = ConventionalDead()
    conven_dead.solution()
    if len(conven_dead.answers):
        print(f"YES\n{min(conven_dead.answers)}")
    else:
        print("NO")
