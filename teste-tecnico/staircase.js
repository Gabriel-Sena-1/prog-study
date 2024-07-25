const print = (string)=>process.stdout.write(string)

function staircase(num){
    for (let i = 1; i <= num; i++) {
        for (let k = num; k > i; k--) {
            print(' ')
        }
        for (let j = 1; j <= i; j++) {
            print('#')
        }
        console.log('')
    }
}

staircase(18)