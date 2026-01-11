package main

import (
	"fmt"
	"math"
	"sort"
)

func sqrt(i int) int {
	return int(math.Sqrt(float64(i)))
}

func mod(v, m int) int {
	if m <= 0 {
		panic("mod: m must be positive")
	}
	r := v % m
	if r < 0 {
		r += m
	}
	return r
}

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
	var N int
	fmt.Scan(&N)

	type pair struct {
		time int
		idx  int
	}
	pairs := make([]pair, N)
	for i := 0; i < N; i++ {
		var t int
		fmt.Scan(&t)
		pairs[i] = pair{t, i}
	}

	sort.Slice(pairs, func(i, j int) bool {
		return pairs[i].time < pairs[j].time
	})

	for i := 0; i < 3; i++ {
		fmt.Print(pairs[i].idx+1, " ")
	}
}
