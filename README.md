# AlgoBox v1--C
![Build](https://github.com/NotGoodAtC-wow/algobox-v1--C/actions/workflows/cmake.yml/badge.svg)


A small educational library of simple algorithms written in **C**.  
Built with **CMake**, tested using standard `assert`-based unit tests.

---

## 🧩 Implemented Algorithms

| Category | Function | Description |
|-----------|-----------|--------------|
| Math      | `gcd_int(a, b)` | Greatest common divisor (Euclidean algorithm) |
| Sorting   | `bubble_sort_int(int* a, size_t n)` | Simple bubble sort with early exit |
| Search    | `binary_search_int(const int* a, size_t n, int key)` | Binary search in sorted array |

---

## ⚙️ Build & Run

```bash
# configure and build
cmake -S . -B build
cmake --build build

# run tests
cmake --build build --target test

# run demo
./build/algobox_demo
