
---

```markdown
# Running C++ Solutions Locally

This explains how to compile and run any Codeforces solution locally using input/output files.

---

## 1. Folder Structure (Example)

```

C++/
├── 1851A_A.cpp
input/
├── 1851A_input.txt
output/
├── 1851A_output.txt

````

- `C++/` → solution files  
- `input/` → sample input files  
- `output/` → generated output files

---

## 2. Compile the Solution

Open terminal in WSL or Linux, navigate to the folder, and run:

```bash
g++ -std=c++17 -Wall -O2 C++/1851A_A.cpp -o 1851A_A
````

* `-std=c++17` → Use modern C++17
* `-Wall` → Show warnings
* `-O2` → Optimize for speed
* `-o 1851A_A` → Name of executable

---

## 3. Run with Input/Output Files

```bash
./1851A_A < input/1851A_input.txt > output/1851A_output.txt
```

* `< input/1851A_input.txt` → Feed input from file
* `> output/1851A_output.txt` → Save output to file

---

## 4. View Output

```bash
cat output/1851A_output.txt
```

Or open in any editor like `nano` or VS Code.

---

## 5. Optional: Quick Check

```bash
diff output/1851A_output.txt expected_output.txt
```

* Compare your output with expected output.

```

---


```
