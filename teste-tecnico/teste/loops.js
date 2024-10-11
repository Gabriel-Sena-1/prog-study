function isVowel(string){
    if(string === 'a' || string === 'e' || string === 'o'|| string === 'i' || string === 'u'){
        return true
    }
    return false
}


function printVowelConsonant(s){
    let array_ordenado = []
    for (let i = 0; i < s.length; i++) {
        if(isVowel(s[i])){
            console.log(s[i])
        }else{
            array_ordenado.push(s[i])
        }
    }

    for (let j = 0; j < array_ordenado.length; j++) {
        console.log(array_ordenado[j]);
    }
}

// fazer 2 arrays de caracteres
printVowelConsonant('javascriptloops')