package main

import "fmt"

func main() {
	var ss []int
	var size, ele int = 0, 0

	fmt.Print("Input the slice size:")
	fmt.Scan(&size)
	for i := 0; i < size; i++ {
		fmt.Printf("Enter the element %d -> ", i)
		fmt.Scan(&ele)
		ss = append(ss, ele)
	}

	fmt.Println(ss)
	var result bool
	result = containsDuplicate(ss)
	fmt.Println(result)
}

func containsDuplicate(nums []int) bool {
	fmt.Println("Hello World")
	size := len(nums)
	m2 := map[int]int{}

	for i := 0; i < size; i++ {
		m2[i] = nums[i]
	}

	for i, key := range m2 {
		fmt.Println(i, " ->", key)
	}

	return true
}
