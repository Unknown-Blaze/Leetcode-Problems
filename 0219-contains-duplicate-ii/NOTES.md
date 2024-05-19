Better way to understand the code:
​
for (int i = 0; i < nums.size(); i++){
if (map.find(nums[i]) == map.end()){
map[nums[i]] = i;
}else{
if (i - map[nums[i]] <= k) return true;
else map[nums[i]] = i;
}
}