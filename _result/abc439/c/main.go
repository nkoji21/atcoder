package main

import (
	"bufio"
	"fmt"
	"os"
)

func main() {
	N := readInt()

	a := make([]int, N+1)
	for x := 1; x*x <= N; x++ {
		for y := x + 1; y*y+x*x <= N; y++ {
			a[x*x+y*y]++
		}
	}

	ans := make([]int, 0)
	for i := 1; i <= N; i++ {
		if a[i] == 1 {
			ans = append(ans, i)
		}
	}
	fmt.Println(len(ans))
	for _, v := range ans {
		fmt.Printf("%d ", v)
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
