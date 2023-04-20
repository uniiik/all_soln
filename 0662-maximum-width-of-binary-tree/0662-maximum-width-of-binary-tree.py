from collections import deque

class Solution:
    def widthOfBinaryTree(self, root: Optional[TreeNode]) -> int:
        if not root:
            return 0
        
        max_width = 0
        q = deque([(root, 0)])
        
        while q:
            level_size = len(q)
            _, level_start = q[0]
            
            for i in range(level_size):
                node, idx = q.popleft()
                
                if node.left:
                    q.append((node.left, 2 * idx))
                
                if node.right:
                    q.append((node.right, 2 * idx + 1))
            
            level_end = idx
            
            max_width = max(max_width, level_end - level_start + 1)
        
        return max_width
