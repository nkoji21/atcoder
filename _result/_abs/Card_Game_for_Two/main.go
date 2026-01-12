package main

import (
	"bufio"
	"fmt"
	"os"
	"sort"
)

func main() {
	N := readInt()
	A := readInts(N)

	// 降順
	sort.Slice(A, func(i, j int) bool {
		return A[i] > A[j]
	})

	// 偶数がAlice 奇数がBob
	Alice, Bob := 0, 0
	for i := range A {
		if i%2 == 0 {
			Alice += A[i]
		} else {
			Bob += A[i]
		}
	}

	fmt.Println(Alice - Bob)
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
