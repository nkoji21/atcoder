package main

import (
	"bufio"
	"fmt"
	"os"
)

// a+b+c == N && a*10000+b*5000+c*1000 == Y
func main() {
	var N, Y int
	fmt.Scan(&N, &Y)

	for x := 0; x <= N; x++ {
		for y := 0; y <= N-x; y++ {
			z := N - x - y
			if x+y+z != N {
				continue
			}
			if x*10000+y*5000+z*1000 == Y {
				fmt.Println(x, y, z)
				return
			}
		}
	}
	fmt.Println(-1, -1, -1)
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
