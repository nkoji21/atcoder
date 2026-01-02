package main

import "fmt"

// どういうこと??
// 次の年の最初ってどういうことだ
func main() {
	var d, f int
	fmt.Scan(&d, &f)

	for f <= d {
		f += 7
	}

	fmt.Println(f - d)
}
