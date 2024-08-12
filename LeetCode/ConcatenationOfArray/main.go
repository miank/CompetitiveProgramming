package main

import "fmt"

func getConcatenation(nums []int) []int {

	l := len(nums)

	for i := 0; i < l; i++ {
		nums = append(nums, nums[i])
	}
	return nums
}

// return append(nums, nums...) // unpack and append each element of nums to original slice.

func main() {
	arr := []int{1, 2, 3}

	arr = getConcatenation(arr)

	fmt.Println("Append the slice", arr)

}
