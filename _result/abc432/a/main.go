package main

import (
	"fmt"
	"sort"
)

func main() {
	var a, b, c int
	fmt.Scan(&a, &b, &c)

	ans := []int{a, b, c}
	sort.Slice(ans, func(i, j int) bool {
		return ans[i] > ans[j]
	})

	for _, v := range ans {
		fmt.Print(v)
	}
	fmt.Println()
}
