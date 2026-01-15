package main

import (
	"bufio"
	"fmt"
	"os"
)

func reverse(S string) string {
	reversed := ""

	for i := len(S) - 1; i >= 0; i-- {
		reversed += string(S[i])
	}
	return reversed
}

func main() {
	S := readString()
	S = reverse(S)

	divide := []string{
		"dream",
		"dreamer",
		"erase",
		"eraser",
	}
	for i := 0; i < len(divide); i++ {
		divide[i] = reverse(divide[i])
	}

	ok := true
	for i := 0; i < len(S); {
		okDivide := false
		for _, d := range divide {
			if i+len(d) <= len(S) && S[i:i+len(d)] == d {
				okDivide = true
				i += len(d)
				break
			}
		}
		if !okDivide {
			ok = false
			break
		}
	}

	if ok {
		fmt.Println("YES")
	} else {
		fmt.Println("NO")
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
