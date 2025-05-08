
// O(N) - Linear Search
const linearSearch = (arr: number[], target: number): number => {
    for (let i = 0; i < arr.length; i++) {
        if (arr[i] === target) {
            return i;
        }
    }
    return -1;
}

// O(logN) - Binary Search
const binarySearch = (arr: number[], target: number): number => {
    let left = 0;
    let right = arr.length - 1;
    while (left <= right) {
        const mid = Math.floor((left + right) / 2);
        if (arr[mid] === target) {
            return mid;
        }
        if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}

const twoCrystalBalls = (breaks: boolean[]) => {

    // Calculate the jump amount
    const jmpAmount = Math.floor(Math.sqrt(breaks.length));

    // Find the first break
    let i = jmpAmount;
    for (; i < breaks.length; i += jmpAmount) {
      if (breaks[i]) {
        break;
      }
    }
  
    // Jump back by the jump amount
    i -= jmpAmount;

    // Jump back by the jump amount until we find a break.
    for (let j = i; j < breaks.length; j++) {
      if (breaks[j]) {
        return j;
      }
    }
    return -1;
}

const runLinearSearch = (): void => {
    
    const arr = [1, 2, 3, 4, 5];
    const target = 3;
    const floors = new Array(25)
        .fill(false)
        .map((_, idx) => idx >= 17);
    
    console.log("TypeScript - Arrays - O(N) - Linear Time - Linear Search:", linearSearch(arr, target));
    console.log("TypeScript - Arrays - O(logN) - Log Linear Time - Binary Search:", binarySearch(arr, target));
    console.log("TypeScript - Arrays - O(logN) - Log Linear Time - Two Crystal Balls:", twoCrystalBalls(floors));
}

export default runLinearSearch;