package main

import (
	"bufio"
	"fmt"
	"os"
)

func f(N int) int {
	total := 0

	for N != 0 {
		total += (N % 10) * (N % 10)
		N /= 10
	}

	return total
}

func main() {
	N := readInt()

	for N != 1 && N != 4 {
		N = f(N)
	}

	if N == 1 {
		fmt.Println("Yes")
	} else if N == 4 {
		fmt.Println("No")
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
