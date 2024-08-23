package main

import "fmt"

func rearrangeArray(nums []int) []int {
	// Separate positive and negative numbers
	positive := []int{}
	negative := []int{}

	for _, num := range nums {
		if num >= 0 {
			positive = append(positive, num)
		} else {
			negative = append(negative, num)
		}
	}

	// Merge positive and negative numbers by alternating
	result := make([]int, len(nums))
	i := 0
	for j := 0; j < len(positive); j++ {
		result[i] = positive[j]
		i++
		result[i] = negative[j]
		i++
	}

	return result
}

func main() {
	nums := []int{3, 1, -2, -5, 2, -4}
	result := rearrangeArray(nums)
	fmt.Println(result) // Output: [3, -2, 1, -5, 2, -4]
}
