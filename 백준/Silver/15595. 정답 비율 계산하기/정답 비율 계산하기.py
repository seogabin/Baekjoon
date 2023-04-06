from sys import stdin

def main():
    N = int(input().strip())
    user_dict = {}

    for _ in range(N):
        sub, user, result, memory, time, lang, length = stdin.readline().strip().split()
        result = int(result)

        if user == "megalusion":
            continue

        if user not in user_dict:
            user_dict[user] = {'incorrect': 0, 'solved': False}

        if result == 4:
            if not user_dict[user]['solved']:
                user_dict[user]['solved'] = True
        else:
            if not user_dict[user]['solved']:
                user_dict[user]['incorrect'] += 1

    solved_count = sum(1 for stats in user_dict.values() if stats['solved'])
    total_incorrect = sum(stats['incorrect'] for stats in user_dict.values() if stats['solved'])

    if solved_count == 0:
        print("0")
    else:
        ans = (solved_count / (solved_count + total_incorrect)) * 100
        print(f"{ans:.9f}")

if __name__ == "__main__":
    main()
