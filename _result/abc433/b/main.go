package main

import (
	"bufio"
	"fmt"
	"os"
)

func main() {
	N := readInt()
	A := readInts(N)

	for i := range A {
		ans := -1
		for j := i - 1; j >= 0; j-- {
			if A[j] > A[i] {
				ans = j + 1
				break
			}
		}
		fmt.Println(ans)
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
