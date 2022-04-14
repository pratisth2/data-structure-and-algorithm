# Postorder Traversal (Iterative)
## Medium 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given a binary tree. Find the postorder traversal of the tree <strong style="user-select: auto;">without using recursion</strong>.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong>
<strong style="user-select: auto;">           </strong>1
<strong style="user-select: auto;">         /   \</strong>
        2     3
      /  \
     4    5

<strong style="user-select: auto;">Output: </strong>4 5 2 3 1
<strong style="user-select: auto;">Explanation:</strong>
Postorder traversal (Left-&gt;Right-&gt;Root) of 
the tree is 4 5 2 3 1.
</span></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong>
             8
          /      \
        1          5
         \       /   \
          7     10    6
           \   /
&nbsp;           10 6

<strong style="user-select: auto;">Output: </strong>10 7 1 6 10 6 5 8&nbsp;
<strong style="user-select: auto;">Explanation:</strong>
Inorder traversal (Left-&gt;Right-&gt;Root) 
of the tree is 10 7 1 6 10 6 5 8&nbsp;.</span></pre>

<div style="user-select: auto;">&nbsp;</div>

<div style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your task:</strong></span></div>

<div style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">You don't need to read input or print anything. Your task is to complete the function <strong style="user-select: auto;">postOrder() </strong>which takes the root of the tree as input and returns a list containing the postorder traversal of the tree, calculated<strong style="user-select: auto;"> without using recursion.</strong></span></div>

<div style="user-select: auto;">&nbsp;</div>

<div style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected time complexity: </strong>O(N)</span></div>

<div style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected auxiliary space: </strong>O(N)</span></div>

<div style="user-select: auto;">&nbsp;</div>

<div style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></span></div>

<div style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">1 &lt;= Number of nodes &lt;= 10<sup style="user-select: auto;">5</sup><br style="user-select: auto;">
1 &lt;= Data of a node &lt;= 10<sup style="user-select: auto;">5</sup></span></div>
 <p style="user-select: auto;"></p>
            </div>