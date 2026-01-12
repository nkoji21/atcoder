package main

import (
	"bufio"
	"fmt"
	"os"
)

func main() {
	N, M := readInt(), readInt()

	ans := make([][]int, M)
	for i := 0; i < N; i++ {
		A, B := readInt(), readInt()
		ans[A-1] = append(ans[A-1], B)
	}

	for i := 0; i < M; i++ {
		res := 0
		for j := 0; j < len(ans[i]); j++ {
			res += ans[i][j]
		}
		fmt.Printf("%f\n", float64(res)/float64(len(ans[i])))
	}
}

// ==============================
// Input Functions
// ==============================
var (
	reader = bufio.NewReader(os.Stdin)
)

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
