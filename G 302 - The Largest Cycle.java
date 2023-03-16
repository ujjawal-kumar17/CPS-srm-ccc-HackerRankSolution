import java.util.*;

public class LargestCycle {
    
    public static int dfs(int node, int depth, int[] visited, List<List<Integer>> edges, int start, int maxCycle) {
        visited[node] = depth;
        for (int neighbor : edges.get(node)) {
            if (visited[neighbor] == -1) {
                maxCycle = dfs(neighbor, depth+1, visited, edges, start, maxCycle);
            } else if (neighbor == start) {
                int cycleLen = depth - visited[neighbor] + 1;
                maxCycle = Math.max(maxCycle, cycleLen);
            }
        }
        return maxCycle;
    }
    
    public static int largestCycle(int n, int[] edges) {
        List<List<Integer>> adjList = new ArrayList<>();
        for (int i = 0; i < n; i++) {
            adjList.add(new ArrayList<>());
        }
        for (int i = 0; i < n; i++) {
            int neighbor = edges[i];
            if (neighbor != -1) {
                adjList.get(i).add(neighbor);
            }
        }
        int[] visited = new int[n];
        Arrays.fill(visited, -1);
        int maxCycle = 0;
        for (int i = 0; i < n; i++) {
            if (visited[i] == -1) {
                maxCycle = dfs(i, 0, visited, adjList, i, maxCycle);
            }
        }
        return maxCycle;
    }
    
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int[] edges = new int[n];
        for (int i = 0; i < n; i++) {
            edges[i] = scanner.nextInt();
        }
        int maxCycle = largestCycle(n, edges);
        System.out.println(maxCycle);
        scanner.close();
    }
}
