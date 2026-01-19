package main

import (
	"bufio"
	"fmt"
	"math"
	"os"
)

func main() {
	N := readInt()
	T, X, Y := make([]int, N+1), make([]int, N+1), make([]int, N+1)
	for i := 1; i <= N; i++ {
		T[i], X[i], Y[i] = readInt(), readInt(), readInt()
	}

	ok := true
	for i := 0; i < N; i++ {
		dt := T[i+1] - T[i]
		dist := int(math.Abs(float64(X[i+1]-X[i])) + math.Abs(float64(Y[i+1]-Y[i])))

		if dt < dist {
			ok = false
		}
		if dist%2 != dt%2 {
			ok = false
		}
	}

	if ok {
		fmt.Println("Yes")
	} else {
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
