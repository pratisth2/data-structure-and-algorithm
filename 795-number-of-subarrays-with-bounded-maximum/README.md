<h2><a href="https://leetcode.com/problems/number-of-subarrays-with-bounded-maximum/">795. Number of Subarrays with Bounded Maximum</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given an integer array <code style="user-select: auto;">nums</code> and two integers <code style="user-select: auto;">left</code> and <code style="user-select: auto;">right</code>, return <em style="user-select: auto;">the number of contiguous non-empty <strong style="user-select: auto;">subarrays</strong> such that the value of the maximum array element in that subarray is in the range </em><code style="user-select: auto;">[left, right]</code>.</p>

<p style="user-select: auto;">The test cases are generated so that the answer will fit in a <strong style="user-select: auto;">32-bit</strong> integer.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [2,1,4,3], left = 2, right = 3
<strong style="user-select: auto;">Output:</strong> 3
<strong style="user-select: auto;">Explanation:</strong> There are three subarrays that meet the requirements: [2], [2, 1], [3].
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [2,9,2,5,6], left = 2, right = 8
<strong style="user-select: auto;">Output:</strong> 7
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= nums.length &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= nums[i] &lt;= 10<sup style="user-select: auto;">9</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= left &lt;= right &lt;= 10<sup style="user-select: auto;">9</sup></code></li>
</ul>
</div>