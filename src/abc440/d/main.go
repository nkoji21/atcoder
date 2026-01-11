package main

import (
	"bufio"
	"fmt"
	"math"
	"os"
	"sort"
)

func sqrt(i int) int {
	return int(math.Sqrt(float64(i)))
}

func mod(v, m int) int {
	if m <= 0 {
		panic("mod: m must be positive")
	}
	r := v % m
	if r < 0 {
		r += m
	}
	return r
}

// 1~nの数字の桁の和を求める
func digitSum(n int) int {
	sum := 0

	for n != 0 {
		sum += n % 10
		n /= 10
	}

	return sum
}

func main() {
	reader := bufio.NewReader(os.Stdin)
	writer := bufio.NewWriter(os.Stdout)
	defer writer.Flush()

	var N, Q int
	fmt.Fscan(reader, &N, &Q)

	A := make([]int, N)
	for i := 0; i < N; i++ {
		fmt.Fscan(reader, &A[i])
	}

	sort.Ints(A)

	for j := 0; j < Q; j++ {
		var X, Y int
		fmt.Fscan(reader, &X, &Y)

		baseIdx := sort.SearchInts(A, X)

		// f(ans) = X以上ans以下でAに含まれない要素数を求める
		f := func(ans int) int {
			total := ans - X + 1
			inA := sort.SearchInts(A, ans+1) - baseIdx
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
		fmt.Fprintln(writer, lo)
	}
}
