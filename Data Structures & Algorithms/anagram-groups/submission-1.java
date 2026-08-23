class Solution {
    public List<List<String>> groupAnagrams(String[] strs) {
        HashMap<String, List<String>> mp = new HashMap<>();
        for(String str : strs){
            char []arr = str.toCharArray();
            Arrays.sort(arr);
            String s = new String(arr);

            mp.putIfAbsent(s,new ArrayList<>());
            mp.get(s).add(str);
        }
        return new ArrayList<>(mp.values());
    }
}
