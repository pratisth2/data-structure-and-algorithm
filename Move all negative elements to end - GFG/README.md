# Move all negative elements to end
## Easy 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-family: arial, helvetica, sans-serif; user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given an unsorted array <strong style="user-select: auto;">arr[]</strong> of size <strong style="user-select: auto;">N</strong> having both&nbsp;negative and positive integers. The task is place all negative element at the end of array without changing the order of positive element and negative element.</span></span></p>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-family: arial, helvetica, sans-serif; user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></span></p>

<pre style="user-select: auto;"><span style="font-family: arial, helvetica, sans-serif; user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input : 
</strong>N = 8
arr[] = {1, -1, 3, 2, -7, -5, 11, 6 }
<strong style="user-select: auto;">Output : </strong>
1  3  2  11  6  -1  -7  -5</span></span></pre>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-family: arial, helvetica, sans-serif; user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></span></p>

<pre style="user-select: auto;"><span style="font-family: arial, helvetica, sans-serif; user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input : 
</strong>N=8
arr[] = {-5, 7, -3, -4, 9, 10, -1, 11}
<strong style="user-select: auto;">Output :</strong>
7  9  10  11  -5  -3  -4  -1
</span></span></pre>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-family: arial, helvetica, sans-serif; user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:&nbsp;&nbsp;</strong><br style="user-select: auto;">
You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong style="user-select: auto;">segregateElements()</strong>&nbsp;which takes the array <strong style="user-select: auto;">arr[]</strong> and its size <strong style="user-select: auto;">N</strong><strong style="user-select: auto;"> </strong>as inputs and <strong style="user-select: auto;">store</strong> the answer in the array <strong style="user-select: auto;">arr[]</strong> itself.</span></span></p>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-family: arial, helvetica, sans-serif; user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity: </strong>O(N)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space: </strong>O(N)</span></span><br style="user-select: auto;">
&nbsp;</p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-family: arial, helvetica, sans-serif; user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 ≤ N ≤ 10<sup style="user-select: auto;">5</sup><br style="user-select: auto;">
-10<sup style="user-select: auto;">5 </sup> ≤ arr[] ≤ 10<sup style="user-select: auto;">5</sup></span></span></p>
 <p style="user-select: auto;"></p>
            </div>