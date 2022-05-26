# Subarray with 0 sum
## Easy 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given an array of&nbsp;positive and negative numbers. Find if there is a <strong style="user-select: auto;">subarray </strong>(of size at-least one) with <strong style="user-select: auto;">0 sum</strong>.</span></p>

<p style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Example 1:</span></strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Input:</span></strong><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">
</span></strong><span style="font-size: 18px; user-select: auto;">5
4 2 -3 1 6

<strong style="user-select: auto;">Output: 
</strong>Yes
<strong style="user-select: auto;">
Explanation: 
</strong>2, -3, 1 is the subarray 
with sum 0.</span></pre>

<p style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Example 2:</span></strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Input:</span></strong><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">
</span></strong><span style="font-size: 18px; user-select: auto;">5
4 2 0 1 6

<strong style="user-select: auto;">Output:</strong> 
Yes

<strong style="user-select: auto;">Explanation:</strong> 
0 is one of the element 
in the array so there exist a 
subarray with sum 0.</span>
</pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
You only need to complete the function <strong style="user-select: auto;">subArrayExists()&nbsp;</strong>that takes<strong style="user-select: auto;"> array and n</strong> as <strong style="user-select: auto;">parameters </strong>and <strong style="user-select: auto;">returns </strong>true or false depending upon whether there is a subarray present with 0-sum or not. Printing will be taken care by the drivers code.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:&nbsp;</strong>O(n).<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:&nbsp;</strong>O(n).</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 &lt;= n&nbsp;&lt;= 10<sup style="user-select: auto;">4</sup><br style="user-select: auto;">
-10<sup style="user-select: auto;">5</sup> &lt;= a[i] &lt;= 10<sup style="user-select: auto;">5</sup></span></p>

<p style="user-select: auto;">&nbsp;</p>
 <p style="user-select: auto;"></p>
            </div>