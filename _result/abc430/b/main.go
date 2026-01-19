package main

import (
	"bufio"
	"fmt"
	"os"
)

func main() {
	N, M := readInt(), readInt()
	S := readStrings(N)
	
	types := []string{}
	for i := 0; i < (N-M+1); i++ {
		for j := 0; j < (N-M+1); j++ {
			// typesの各要素に、S[i+k][j+l]を1次元配列にして追加していく
			ty := ""
			for k := 0; k < M; k++ {
				for l := 0; l < M; l++ {
					ty += string(S[i+k][j+l])
				}
			}
			// typesにtyが含まれていないなら追加
			ok := true
			for _, t := range types {
				if t == ty {
					ok = false
					break
				}
			}
			if ok {
				types = append(types, ty)
			}
		}
	}

	ans := len(types)
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
