package main

import (
	"bufio"
	"fmt"
	"os"
)

func main() {
	X, N := readInt(), readInt()
	W := readInts(N)

	hasW := make([]bool, N)

	Q := readInt()
	for i := 0; i < Q; i++ {
		P := readInt() - 1

		if hasW[P] {
			X -= W[P]
		} else {
			X += W[P]
		}

		hasW[P] = !hasW[P]
		fmt.Println(X)
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
