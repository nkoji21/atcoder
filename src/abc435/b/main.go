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

// 約数であるかどうかの判定ってどうすればいいんだ?
// その数字でそれが割り切れるか。ってこと?
// aがbの約数であるってのは、b%a==0
func main() {
	var n int
	fmt.Scan(&n)

	a := make([]int, n)
	for i := range n {
		fmt.Scan(&a[i])
	}

	ans := 0
	for i := 0; i < n-1; i++ {
		for j := i + 1; j < n; j++ {
			res := 0
			for k := i; k <= j; k++ {
				res += a[k]
			}
			flag := true
			for k := i; k <= j; k++ {
				if res%a[k] == 0 {
					flag = false
				}
			}
			if flag {
				ans++
			}
		}
	}

	fmt.Println(ans)
}
