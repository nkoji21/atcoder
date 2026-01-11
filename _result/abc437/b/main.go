package main

import (
	"fmt"
)

func main() {
	var h, w, n int
	fmt.Scan(&h, &w, &n)

	a := make([][]int, h)
	for i := range h {
		a[i] = make([]int, w)
		for j := range w {
			fmt.Scan(&a[i][j])
		}
	}

	b := make([]int, n)
	for i := range n {
		fmt.Scan(&b[i])
	}

	tmp := make([]int, h)
	for _, v := range b {
		for i, rows := range a {
			for _, col := range rows {
				if v == col {
					tmp[i]++
				}
			}
		}
	}

	ans := 0
	for _, v := range tmp {
		ans = max(ans, v)
	}
	fmt.Println(ans)
}
