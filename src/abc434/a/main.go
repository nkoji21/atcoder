package main

import "fmt"

func main() {
	var w, b int
	fmt.Scan(&w, &b)

	ans := 1
	for i := 1; i*b <= (w*1000 + b); i++ {
		ans = i
	}

	fmt.Println(ans)
}
