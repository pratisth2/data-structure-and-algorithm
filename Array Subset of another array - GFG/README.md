# Array Subset of another array
## Easy 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given two arrays: <strong style="user-select: auto;">a1[0..n-1]</strong> of size <strong style="user-select: auto;">n</strong> and <strong style="user-select: auto;">a2[0..m-1]</strong> of size <strong style="user-select: auto;">m</strong>. Task is to check whether a2[] is a subset of a1[] or not. Both the arrays can be sorted or unsorted.&nbsp;</span><br style="user-select: auto;">
&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input</strong>:
a1[] = {11, 1, 13, 21, 3, 7}
a2[] = {11, 3, 7, 1}
<strong style="user-select: auto;">Output</strong>:
Yes
<strong style="user-select: auto;">Explanation:</strong>
a2[] is a subset of a1[]</span></pre>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input</strong>:
a1[] = {1, 2, 3, 4, 5, 6}
a2[] = {1, 2, 4}
<strong style="user-select: auto;">Output</strong>:
Yes
<strong style="user-select: auto;">Explanation:</strong>
a2[] is a subset of a1[]</span></pre>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input</strong>:
a1[] = {10, 5, 2, 23, 19}
a2[] = {19, 5, 3}<strong style="user-select: auto;">
Output</strong>:
No<strong style="user-select: auto;">
Explanation:</strong>
a2[] is not a subset of a1[]</span></pre>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:&nbsp;&nbsp;</strong><br style="user-select: auto;">
You don't need to read input or print anything. Your task is to complete the function <strong style="user-select: auto;">isSubset()</strong>&nbsp;which takes the array <strong style="user-select: auto;">a1[]</strong>, <strong style="user-select: auto;">a2[]</strong>, its size <strong style="user-select: auto;">n </strong>and <strong style="user-select: auto;">m </strong>as inputs and return "Yes" if arr2 is subset of arr1 else return "No" if arr2 is not subset of arr1.</span></p>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:</strong> O(n)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:</strong> O(n)<br style="user-select: auto;">
<br style="user-select: auto;">
<br style="user-select: auto;">
<strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 &lt;= n,m &lt;= 10<sup style="user-select: auto;">5</sup><br style="user-select: auto;">
1 &lt;= a1[i], a2[j] &lt;= 10<sup style="user-select: auto;">5</sup></span><br style="user-select: auto;">
<br style="user-select: auto;">
<br style="user-select: auto;">
<br style="user-select: auto;">
&nbsp;</p>

<p style="user-select: auto;">&nbsp;</p>
 <p style="user-select: auto;"></p>
            </div>