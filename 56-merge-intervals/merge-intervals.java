import java.util.*;

class Solution {
    public int[][] merge(int[][] intervals) {
        Arrays.sort(intervals, (a, b) -> Integer.compare(a[0], b[0]));

        List<int[]> result = new ArrayList<>();

        for (int i = 0; i < intervals.length; i++) {
            if (result.isEmpty()) {
                result.add(intervals[i]);
            } 
            else if (result.get(result.size() - 1)[1] >= intervals[i][0]) {
                result.get(result.size() - 1)[1] =
                        Math.max(result.get(result.size() - 1)[1], intervals[i][1]);
            } 
            else {
                result.add(intervals[i]);
            }
        }

        return result.toArray(new int[result.size()][]);
    }
}
