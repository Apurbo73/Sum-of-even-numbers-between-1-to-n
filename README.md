### Sum of even numbers between 1 to n:

This C++ program reads an integer `n` from the user and then calculates and prints:

1. **All even numbers from 1 to `n`**
2. **The sum of those even numbers**

---

### 🔍 **Breakdown of the Code**

```cpp
#include <bits/stdc++.h>
using namespace std;
```

* Includes all standard C++ libraries (common in competitive programming).
* `using namespace std;` avoids writing `std::` before standard functions.

---

### 🧮 **Main Logic**

```cpp
int n;
cin >> n;
```

* Reads an integer input `n` from the user.

```cpp
int b = 0;
```

* Initializes a variable `b` to hold the sum of even numbers.

```cpp
cout << "Even Numbers are :";
```

* Prints the label before listing even numbers.

```cpp
for (int i = 1; i <= n; i++) {
    if (i % 2 == 0) {
        b = b + i;
        cout << i << " ";
    }
}
```

* Loops through all numbers from 1 to `n`.
* If a number `i` is divisible by 2 (`i % 2 == 0`), it’s even:

  * Adds it to the sum `b`.
  * Prints the even number.

```cpp
cout << endl;
cout << "Some Of The Even Numbers is :";
cout << b << endl;
```

* Prints the total sum of the even numbers.

---

### 🧾 **Sample Output (if n = 10)**

```
Even Numbers are :2 4 6 8 10 
Some Of The Even Numbers is :30
```

