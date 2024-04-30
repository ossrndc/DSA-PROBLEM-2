```                                         
                                               Vishal Method      
                                         time limit per test : 2 second
                                         memory required per test : 512 megabytes
 ```
 Vishal has a total of 𝑁  (𝑁≥4) chocolates. He decided to distribute them into **three** jars such that:
 -   **At least one**  jar has  **odd**  number of chocolates;
 -  **Exactly two**  jars have  **same**  number of chocolates;
 -    Every jar has at least one chocolate.
 
 Find a valid distribution of chocolates for Vishal.
 Note that a valid distribution always exists. If multiple such distributions exist, you may print any.
 ### Input Format
 -   The first line of input will contain a single integer  𝑇, denoting the number of test cases.
-   Each test case consists of a single integer  𝑁  — the total number of chocolates.

### Output Format

For each test case, output on a new line, three space-separated integers denoting the number of chocolates in each jar after distribution.

Note that a valid distribution always exists. If multiple such distributions exist, you may print any.

### Constraints
-   1≤T≤10^5
-   4≤𝑁≤10^5
### Sample 1:
#
**Input**

    3
    
    4
    7
    11

#
#
**Output**

    2 1 1
    2 3 2
    3 3 5

#
### Explanation:
**Test case  1:**  Consider the distribution  [2,1,1]. Here two jars have same number of chocolates, that is  1; and two jars have odd number of chocolates. Thus, it satisfies both conditions.

**Test case  2:**  Consider the distribution  [2,3,2]. Here two jars have same number of chocolates, that is  2; and one jar has odd number of chocolates. Thus, it satisfies both conditions.

**Test case  3:**  Consider the distribution  [3,3,5]. Here two jars have same number of chocolates, that is  3; and all jars have odd number of chocolates. Thus, it satisfies both conditions