package main

import "fmt"

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
		if grid[((r-1)%n+n)%n][(c+1)%n] == 0 {
			grid[((r-1)%n+n)%n][(c+1)%n] = k + 1
			k = grid[((r-1)%n+n)%n][(c+1)%n]
			r, c = ((r-1)%n+n)%n, (c+1)%n
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
