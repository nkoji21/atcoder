package main

import "fmt"

func main() {
	var a, b, c, d int
	fmt.Scanf("%d %d %d %d", &a, &b, &c, &d)

	if a <= c && d < b {
		fmt.Println("Yes")
	} else {
		fmt.Println("No")
	}
}
