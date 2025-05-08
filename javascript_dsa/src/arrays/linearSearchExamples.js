// O(N) - Linear Search
const linearSearch = (arr, target) => {
    for (let i = 0; i < arr.length; i++) {
        if (arr[i] === target) {
            return i;
        }
    }
    return -1;
}

// O(logN) - Binary Search
const binarySearch = (arr, target) => {
    let leftIdx = 0;
    let rightIdx = arr.length -1;

    while(leftIdx <= rightIdx){
        // Find the middle index
        const midIdx = Math.floor((leftIdx + rightIdx) / 2);

        // If the target is found, return the index
        if(arr[midIdx] === target){
            return midIdx;
        }

        // If the target is less than the middle index, move the right index to the middle index - 1
        else if(target < arr[midIdx]){
            rightIdx = midIdx - 1;
        }
        // If the target is greater than the middle index, move the left index to the middle index + 1
        else {
            leftIdx = midIdx + 1;
        }
    }

    // If the target is not found, return -1
    return -1;
}

const twoCrystalBalls = (breaks) => {

    // Calculate the jump amount
    const jmpAmount = Math.floor(Math.sqrt(breaks.length));
    let idx = jmpAmount;

    // Find the first break
    for(; idx < breaks.length; idx += jmpAmount){
        if(breaks[idx]){
            break;
        }
    }

    idx -= jmpAmount;

    // Jump back by the jump amount until we find a break.
    for(let j = idx; j < breaks.length; j++){
        if(breaks[j]){
            return j;
        }
    }
    return -1;
}

const runArraysExamples = () => {
    const arr = [1, 2, 3, 4, 5];
    const target = 3;
    const breaks = new Array(25)
        .fill(false)
        .map((_, idx) => idx >= 17);    
        
    console.log("JavaScript - Arrays - O(N) - Linear Search:", linearSearch(arr, target));
    console.log("JavaScript - Arrays - O(logN) - Binary Search:", binarySearch(arr, target));
    console.log("JavaScript - Arrays - O(sqrt(N)) - Two Crystal Balls:", twoCrystalBalls(breaks));
}

export default runArraysExamples;