<div align="center">

# ⚔️ DSA-Tears-And-Fears ⚔️

**Proof that I survived my DSA lab without throwing my laptop out the window.**

<img src="https://img.shields.io/badge/Language-C-blue?style=for-the-badge&logo=c" alt="C">
<img src="https://img.shields.io/badge/Programs-27-informational?style=for-the-badge" alt="25 programs">
<img src="https://img.shields.io/badge/License-Unlicense-lightgrey?style=for-the-badge" alt="Unlicense">
<img src="https://img.shields.io/badge/Status-Barely%20Surviving-success?style=for-the-badge" alt="Status">
<img src="https://img.shields.io/badge/Brain%20Cells%20Left-1-red?style=for-the-badge" alt="Brain cells">
<img src="https://github.com/ankan-debug/DSA-Tears-And-Fears/actions/workflows/build.yml/badge.svg" alt="Build">

</div>

## 🖥️ Boot sequence

```text
$ ./dsa_lab --status
[ OK ] Loading 27 lab programs
[ OK ] C source tree mounted
[ OK ] Sorting algorithms detected
[ OK ] Searching algorithms detected
[ OK ] Pointer arithmetic survived
[WARN] Brain cells left: 1
[WARN] Segmentation-fault graveyard: historically active
[ OK ] Status: Barely Surviving
```

## 📑 PROGRAM INDEX

**Total: 27 programs**

| # | Date | Program Name | Topic | Source |
|---:|---|---|---|---|
| 1 | 03.08.26 | Finding factorial using recursion | Recursion | [01_factorial_recursion.c](01-Recursion/01_factorial_recursion.c) |
| 2 | 03.08.26 | Finding type of data structure | Data Structures | [02_data_structure_type.c](02-Data-Structures/02_data_structure_type.c) |
| 3 | 03.08.26 | Access and print array elements | Arrays | [03_access_array_element.c](03-Arrays/03_access_array_element.c) |
| 4 | 03.08.26 | Traverse an array | Arrays | [04_traverse_array.c](03-Arrays/04_traverse_array.c) |
| 5 | 10.08.26 | Insertion in an array | Arrays | [05_array_insertion.c](03-Arrays/05_array_insertion.c) |
| 6 | 10.08.26 | Deletion in an array | Arrays | [06_array_deletion.c](03-Arrays/06_array_deletion.c) |
| 7 | 10.08.26 | Linear search | Searching | [07_linear_search.c](05-Searching/07_linear_search.c) |
| 8 | 10.08.26 | Iterative binary search | Searching | [08_iterative_binary_search.c](05-Searching/08_iterative_binary_search.c) |
| 9 | 10.08.26 | Recursive binary search | Searching | [09_recursive_binary_search.c](05-Searching/09_recursive_binary_search.c) |
| 10 | 17.08.26 | Playing with pointers | Pointers | [10_pointer_operations.c](04-Pointers/10_pointer_operations.c) |
| 11 | 17.08.26 | Traverse and access array using pointers | Pointers | [11_array_traversal_using_pointer.c](04-Pointers/11_array_traversal_using_pointer.c) |
| 12 | 17.08.26 | Linear search using pointers | Pointers | [12_linear_search_using_pointer.c](04-Pointers/12_linear_search_using_pointer.c) |
| 13 | 17.08.26 | Calculate 1D array element memory address | Memory Addressing | [13_1d_array_address.c](06-Memory-Addressing/13_1d_array_address.c) |
| 14 | 17.08.26 | Calculate 2D array element memory address using row-major order | Memory Addressing | [14_2d_array_address_row_major.c](06-Memory-Addressing/14_2d_array_address_row_major.c) |
| 15 | 24.08.26 | Bubble sort | Sorting | [15_bubble_sort.c](07-Sorting/15_bubble_sort.c) |
| 16 | 24.08.26 | Selection sort | Sorting | [16_selection_sort.c](07-Sorting/16_selection_sort.c) |
| 17 | 24.08.26 | Insertion sort | Sorting | [17_insertion_sort.c](07-Sorting/17_insertion_sort.c) |
| 18 | 24.08.26 | Modified bubble sort | Sorting | [18_modified_bubble_sort.c](07-Sorting/18_modified_bubble_sort.c) |
| 19 | 24.08.26 | Modified selection sort | Sorting | [19_modified_selection_sort.c](07-Sorting/19_modified_selection_sort.c) |
| 20 | 24.08.26 | Switch-case to perform sorting | Sorting | [20_sorting_switch_case.c](07-Sorting/20_sorting_switch_case.c) |
| 21 | 31.08.26 | Quick sort | Sorting | [21_quick_sort.c](07-Sorting/21_quick_sort.c) |
| 22 | 31.08.26 | Merge sort (junction) | Sorting | [22_merge_sort_junction.c](07-Sorting/22_merge_sort_junction.c) |
| 23 | 07.09.26 | Merge sort | Sorting | [23_merge_sort.c](07-Sorting/23_merge_sort.c) |
| 24 | 07.09.26 | Insertion sort and binary search | Searching / Sorting | [24_insertion_sort_then_binary_search.c](05-Searching/24_insertion_sort_then_binary_search.c) |
| 25 | 07.09.26 | Quick sort | Sorting | [25_quick_sort.c](07-Sorting/25_quick_sort.c) |
| 26 | — | Stack | Stack | [26_stack.c](08-Stack/26_stack.c) |
| 27 | — | Queue | Queue | [27_queue.c](09-Queue/27_queue.c) |

## 📊 Topic-wise breakdown

| Topic | Programs |
|---|---:|
| Recursion | 1 |
| Data Structures | 1 |
| Arrays | 4 |
| Pointers | 3 |
| Searching | 4 |
| Memory Addressing | 2 |
| Sorting | 10 |
| Stack | 1 |
| Queue | 1 |

## 🗺️ Repo map

```text
DSA-Tears-And-Fears/
├── .github/workflows/build.yml
├── .gitignore
├── LICENSE
├── Makefile
├── README.md
├── 01-Recursion/01_factorial_recursion.c
├── 02-Data-Structures/02_data_structure_type.c
├── 03-Arrays/
│   ├── 03_access_array_element.c
│   ├── 04_traverse_array.c
│   ├── 05_array_insertion.c
│   └── 06_array_deletion.c
├── 04-Pointers/
│   ├── 10_pointer_operations.c
│   ├── 11_array_traversal_using_pointer.c
│   └── 12_linear_search_using_pointer.c
├── 05-Searching/
│   ├── 07_linear_search.c
│   ├── 08_iterative_binary_search.c
│   ├── 09_recursive_binary_search.c
│   └── 24_insertion_sort_then_binary_search.c
├── 06-Memory-Addressing/
│   ├── 13_1d_array_address.c
│   └── 14_2d_array_address_row_major.c
├── 07-Sorting/
│   ├── 15_bubble_sort.c
│   ├── 16_selection_sort.c
│   ├── 17_insertion_sort.c
│   ├── 18_modified_bubble_sort.c
│   ├── 19_modified_selection_sort.c
│   ├── 20_sorting_switch_case.c
│   ├── 21_quick_sort.c
│   ├── 22_merge_sort_junction.c
│   ├── 23_merge_sort.c
│   └── 25_quick_sort.c
├── 08-Stack/
│   └── 26_stack.c
└── 09-Queue/
    └── 27_queue.c
```

## ⚡ Quick start

```bash
git clone https://github.com/ankan-debug/DSA-Tears-And-Fears.git
cd DSA-Tears-And-Fears
gcc -std=c11 -Wall -Wextra -pedantic 03-Arrays/03_access_array_element.c -o program
./program
make all
```

## 🧠 Complexity cheat-sheet

<details>
<summary>Expand</summary>

| Algorithm | Time | Space |
|---|---|---|
| Factorial recursion | O(n) | O(n) |
| Array access / traversal | O(n) | O(n) |
| Array insertion / deletion | O(n) | O(n) |
| Linear search | O(n) | O(1) |
| Iterative binary search | O(log n) | O(1) |
| Recursive binary search | O(log n) | O(log n) |
| Pointer traversal / search | O(n) | O(1) |
| 1D / 2D address calculation | O(1) | O(1) |
| Bubble / selection / insertion sort | O(n²) | O(1) |
| Modified bubble sort | O(n²) worst / O(n) best | O(1) |
| Quick sort | O(n log n) average / O(n²) worst | O(log n) average recursion |
| Merge sort | O(n log n) | O(n) |
| Stack push / pop / peek | O(1) | O(n) |
| Stack display | O(n) | O(n) |
| Queue enqueue / dequeue | O(1) | O(n) |
| Queue display | O(n) | O(n) |

</details>

## 👾 About + Hall of Pain

A cleaned-up modern-C archive of the 27 programs recorded in the DSA lab PDF, kept in the same numbered order and with the recorded lab dates.

### ☠️ Hall of Pain

- **Segmentation fault:** the computer's way of saying, “interesting pointer.”
- **Off-by-one:** when `n` elements somehow become `n + 1`.
- **Dangling pointer:** pointing somewhere, just not somewhere useful.
- **Forgotten `free()`:** congratulations, you adopted a memory leak.
- **Wrong loop bound:** tiny typo, massive body count.
- **Uninitialized variable:** undefined behaviour, now with mystery DLC.

## 📜 License

Released under the **Unlicense**. See [LICENSE](LICENSE).

> **Disclaimer:** Educational lab implementations only. If your PC starts flying after execution, the author accepts no responsibility for airborne hardware.

<div align="center">

`return 0; // thanks for visiting`

</div>
