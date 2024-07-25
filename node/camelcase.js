const camelcase = (string)=>{
    let count_word = 1


    for (let i = 0; i < string.length; i++) {
        let string_minuscula = string[i].toLowerCase()
        let string_maiuscula = string[i].toUpperCase()

        if(string[i] != string_minuscula && string[i] == string_maiuscula){
            count_word ++;
        }
    }

    return count_word
}

console.log(camelcase('saveChangesInTheEditor'))