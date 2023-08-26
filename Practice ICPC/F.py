
def is_beatiful(board,n, range_row, range_columns):
    for i in range(n):
        for j in range(n):
            current = board[i][j]
            range_row[current] +=1
            if range_row[current] != (i+1):
                return "NO"

    for i in range(n):
        for j in range(n):
            current = board[j][i]
            range_columns[current] +=1
            if range_columns [current] != (i+1):
                return "NO"
    
    return "YES"
        

def solve():
    n = int(input())
    _range = {}
    for i in range(1,n+1):
        _range.update({i:0})
    board = []
    for i in range(n):
        board.append(list(map(int,input().split())))
    
    print(is_beatiful(board,n, _range,_range.copy()))




solve()