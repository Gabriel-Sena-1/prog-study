function camelcase(string) {
    // Write your code here
    let cont_palavras = 1
    for (let i = 0; i < string.length; i++) {
        if(string[i] == string[i].toUpperCase()){
            cont_palavras ++
        }
    }

    return cont_palavras
}

result = camelcase('saveChangesInTheEditor')

console.log(result)