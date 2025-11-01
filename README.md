# AlgoBox v1--C

![Build](https://github.com/NotGoodAtC-wow/algobox-v1--C/actions/workflows/cmake.yml/badge.svg)
![License](https://img.shields.io/badge/license-MIT-informational.svg)
![Language](https://img.shields.io/badge/language-C-blue.svg)
![Stars](https://img.shields.io/github/stars/NotGoodAtC-wow/algobox-v1--C?style=social)

A small educational library of simple algorithms written in **C**.  
Built with **CMake**, tested via `ctest` (assert-based unit tests).

---

## 🧩 Implemented Algorithms

| Category | Function | Description |
|---------:|:--------|:------------|
| Math | `gcd_int(a, b)` | Greatest common divisor (Euclidean algorithm) |
| Sorting | `bubble_sort_int(int* a, size_t n)` | Bubble sort with early exit |
| Search | `binary_search_int(const int* a, size_t n, int key)` | Binary search in a sorted array |

---

## ⚙️ Build & Test

```bash
# configure & build
cmake -S . -B build
cmake --build build

# run tests
cmake --build build --target test

# run demo
./build/algobox_demo

#Example Output
[gcd] gcd(84, 30) = 6
[sort] 1 2 4 5 8
[search] key=8 → idx=4

#Project Structure
.
├─ include/        # public API: algo.h
├─ src/            # library sources: mathx.c, sort.c, search.c, main.c (demo)
├─ tests/          # unit tests: test_math.c, test_sort.c, test_search.c
├─ CMakeLists.txt  # build configuration
└─ .github/workflows/cmake.yml  # GitHub Actions (CI)
