function factorial(number){ // 5
    let cont = 2
    let n_fatorial = 1

    while (cont <= number) {
        n_fatorial = n_fatorial * cont
        cont ++
    }
    return n_fatorial
}

console.log(factorial(4))