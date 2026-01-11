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

func main() {
	var X, Y int
	fmt.Scan(&X, &Y)

	var y int
	y = int(math.Pow(2, float64(Y)))
	fmt.Println(X * y)
}
