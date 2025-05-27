class Solution:
    def validSquare(self, p1: List[int], p2: List[int], p3: List[int], p4: List[int]) -> bool:
        def dist(p1, p2):
            return (p1[0]-p2[0])**2+(p1[1]-p2[1])**2
        
        distances = [
            dist(p1, p2),
            dist(p1, p3),
            dist(p1, p4),
            dist(p2, p3),
            dist(p2, p4),
            dist(p3, p4)
        ]
        distances.sort()

        return distances[0] > 0 and \
               distances[0] == distances[1] == distances[2] == distances[3] and \
               distances[4] == distances[5] and \
               distances[4] == 2 * distances[0]