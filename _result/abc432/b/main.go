package main

import (
	"bufio"
	"fmt"
	"os"
	"sort"
)

func main() {
	X := readInt()

	arr := []int{}
	for X > 0 {
		arr = append(arr, X % 10)
		X /= 10
	}

	// sort 昇順 先頭が0にならないように先頭を0ではないものにする
	sort.Slice(arr, func(i, j int) bool {
		return arr[i] < arr[j]
	})
	
	for i := range arr {
		if arr[i] != 0 {
			arr[0], arr[i] = arr[i], arr[0]
			break
		}
	}

	for _, v := range arr {
		fmt.Printf("%d", v)
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
