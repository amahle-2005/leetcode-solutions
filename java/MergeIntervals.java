class Solution {
    public int[][] merge(int[][] intervals) {
         
        if(intervals.length <= 1){return intervals;}
        int count = intervals.length;
        for(int i = 1; i < intervals.length; i++)
        {
            if(intervals[(i-1)] != null)
            {
                int end = intervals[(i-1)][1];
                if(end >= intervals[i][0])
                {
                    end = Math.max(intervals[i][1],intervals[(i-1)][1]);
                    intervals[(i-1)][1]= end;
                    intervals[i]= null;
                    count--;            
                }
            }
        }
        int[][] results = new int[count][2];
        int i = 0;
        for(int[] row: intervals)
        {
            if(row != null)
            {
                results[i] = row;
                i++;
            }
            
        }
        return results;
    }
}
