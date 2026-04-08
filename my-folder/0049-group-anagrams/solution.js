function groupAnagrams(strs) {
    const map = new Map();
    for (let i = 0; i < strs.length; i++) {
        let arr = new Array(26).fill(0);
        for (let j = 0; j < strs[i].length; j++) {
            const index = strs[i][j].charCodeAt(0) - 'a'.charCodeAt(0);
            arr[index]++;
        }
        const key = arr.join('#'); // convert array → string key
        if (!map.has(key)) {
            map.set(key, []);
        }
        map.get(key).push(strs[i]);
    }
    return Array.from(map.values());
}
