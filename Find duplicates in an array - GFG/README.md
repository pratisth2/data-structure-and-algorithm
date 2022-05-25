# Find duplicates in an array
## Easy 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given an array a[] of size N which contains elements from 0 to N-1, you need to find all the elements occurring more than once in the given array.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>N = 4
a[] = {0,3,1,2}
<strong style="user-select: auto;">Output: </strong>-1<strong style="user-select: auto;">
Explanation: </strong>N=4 and all elements from 0
to (N-1 = 3) are present in the given
array. Therefore output is -1.</span>
</pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>N = 5
a[] = {2,3,1,2,3}
<strong style="user-select: auto;">Output: </strong>2 3&nbsp;<strong style="user-select: auto;">
Explanation: </strong>2 and 3 occur more than once
in the given array.</span></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
Complete the function <strong style="user-select: auto;">duplicates()</strong>&nbsp;which takes array a[] and n as input as parameters and returns a list of elements that occur more than once in the given array in sorted manner. If no such element is found, return list containing [-1].&nbsp;</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:</strong> O(n).<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:</strong> O(n).<br style="user-select: auto;">
Note : The extra space is only for the array to be returned.<br style="user-select: auto;">
Try and perform all operation withing the provided array.&nbsp;</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 &lt;= N &lt;= 10<sup style="user-select: auto;">5</sup><br style="user-select: auto;">
0 &lt;= A[i] &lt;= N-1, for each valid i</span></p>
 <p style="user-select: auto;"></p>
            </div>