from sys import stdin

def main():
    N = int(input().strip())
    userdict = {}

    for _ in range(N):
        sub, user, result, memory, time, lang, length = stdin.readline().strip().split()
        result = int(result)

        if user == "megalusion":
            continue

        if user not in userdict:
            userdict[user] = {'incorrect': 0, 'solved': False}

        if result == 4:
            if not userdict[user]['solved']:
                userdict[user]['solved'] = True
        else:
            if not userdict[user]['solved']:
                userdict[user]['incorrect'] += 1

    solvedCnt = sum(1 for stats in userdict.values() if stats['solved'])
    total = sum(stats['incorrect'] for stats in userdict.values() if stats['solved'])

    if solvedCnt == 0:
        print("0")
    else:
        ans = (solvedCnt / (solvedCnt + total)) * 100
        print(f"{ans:.9f}")

if __name__ == "__main__":
    main()
