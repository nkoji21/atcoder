package main

import (
	"bufio"
	"fmt"
	"os"
	"sort"
)

var (
	reader = bufio.NewReader(os.Stdin)
)

// ========== 入力用の関数 ==========

// int型の入力を読み込む
func readInt() int {
	var n int
	fmt.Fscan(reader, &n)
	return n
}

// int型の配列を読み込む
func readInts(n int) []int {
	s := make([]int, n)
	for i := range s {
		fmt.Fscan(reader, &s[i])
	}
	return s
}

// string型の入力を読み込む
func readString() string {
	var s string
	fmt.Fscan(reader, &s)
	return s
}

// string型の配列を読み込む
func readStrings(n int) []string {
	s := make([]string, n)
	for i := range s {
		fmt.Fscan(reader, &s[i])
	}
	return s
}

func main() {
	N, Q := readInt(), readInt()
	A := readInts(N)

	sort.Ints(A)

	for j := 0; j < Q; j++ {
		X, Y := readInt(), readInt()

		// f(ans) = X以上ans以下でAに含まれない要素数を求める
		f := func(ans int) int {
			total := ans - X + 1
			inA := sort.SearchInts(A, ans+1) - sort.SearchInts(A, X)
			return total - inA
		}

		// f(ans) >= Y となる、最小のansを二分探索する
		lo, hi := X, X+Y+N
		for lo < hi {
			mid := (lo + hi) / 2
			if f(mid) >= Y {
				hi = mid
			} else {
				lo = mid + 1
			}
		}
		fmt.Println(lo)
	}
}
