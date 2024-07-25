function staircase(n) {
    for (let i = 1; i <= n; i++) {
        for (let k = n; k > i; k--) {
            process.stdout.write(' ')            
        }
        for (let j = 0; j < i; j++) {
            process.stdout.write('#')            
        }
        console.log('')            
    }
}

staircase(6)