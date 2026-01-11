package main

import (
	"fmt"
	"math"
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

// それぞれのiについて、どのxで塗れるかを求める 累積和?
// (i+x)%2W<W を変形すると、xの範囲は (2W-i)%2Wから(2W-i+W-1)%2Wまで
func main() {
	var T int
	fmt.Scan(&T)

	for t := 0; t < T; t++ {
		var N, W int
		fmt.Scan(&N, &W)

		C := make([]int, N+1)
		for i := 1; i <= N; i++ {
			fmt.Scan(&C[i])
		}

		twoW := 2 * W

		diff := make([]int, twoW+1)

		for i := 1; i <= N; i++ {
			cost := C[i]
			r := i % twoW
			start := (twoW - r) % twoW
			end := start + W - 1

			if end < twoW {
				diff[start] += cost
				diff[end+1] -= cost
			} else {
				diff[start] += cost
				diff[twoW] -= cost
				diff[0] += cost
				diff[end-twoW+1] -= cost
			}
		}

		minCost := math.MaxInt64
		cur := 0
		for x := 0; x < twoW; x++ {
			cur += diff[x]
			if cur < minCost {
				minCost = cur
			}
		}

		fmt.Println(minCost)
	}
}
