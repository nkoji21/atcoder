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

func main() {
	var n int
	fmt.Scan(&n)

	grid := make([][]int, n)
	for i := range grid {
		grid[i] = make([]int, n)
	}

	r, c, k := 0, (n-1)/2, 1
	grid[r][c] = k

	for i := 0; i < ((n * n) - 1); i++ {
		nr, nc := mod(r-1, n), (c+1)%n
		if grid[nr][nc] == 0 {
			grid[nr][nc] = k + 1
			k = grid[nr][nc]
			r, c = nr, nc
		} else {
			grid[(r+1)%n][c] = k + 1
			k = grid[(r+1)%n][c]
			r = (r + 1) % n
		}
	}

	for _, rows := range grid {
		for _, v := range rows {
			fmt.Printf("%d ", v)
		}
		fmt.Println()
	}
}
