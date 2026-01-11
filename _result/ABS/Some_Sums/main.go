package main

import (
	"bufio"
	"fmt"
	"os"
)

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
	var N, A, B int
	fmt.Scan(&N, &A, &B)

	ans := 0
	for i := 1; i <= N; i++ {
		res := digitSum(i)
		if res >= A && res <= B {
			ans += i
		}
	}

	fmt.Println(ans)
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
