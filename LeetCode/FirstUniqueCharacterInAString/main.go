package main

import "fmt"

func firstUniqChar(s string) int {

	charArr := []rune(s)

	m1 := make(map[rune]int)

	for i := 0; i < len(s); i++ {
		m1[charArr[i]]++
	}

	index := -1
	for i := 0; i < len(s); i++ {
		if m1[charArr[i]] == 1 {
			index = i
			break
		}
	}
	return index
}

func main() {
	result := firstUniqChar("leetcode")
	fmt.Println("Result is ", result)
}
