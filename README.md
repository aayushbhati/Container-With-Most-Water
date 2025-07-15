# Container With Most Water

## Problem Description

You are given an integer array `height` of length `n`. There are `n` vertical lines drawn such that the two endpoints of the `i-th` line are `(i, 0)` and `(i, height[i])`.

Find **two lines** that together with the x-axis form a **container**, such that the container holds the **most water**.

Return the **maximum amount of water** a container can store.

**Note:** The container must be **vertical**; you may not slant the lines.

## Examples

### Example 1:
**Input:**  
`height = [1,8,6,2,5,4,8,3,7]`  
**Output:**  
`49`  

**Explanation:**  
The maximum area is formed between the lines at index `1` and index `8`,  
with height `min(8, 7) = 7` and width `8 - 1 = 7`, so area = `7 * 7 = 49`.

---

### Example 2:
**Input:**  
`height = [1,1]`  
**Output:**  
`1`  

---

## Constraints
- `n == height.length`
- `2 <= n <= 10⁵`
- `0 <= height[i] <= 10⁴`
