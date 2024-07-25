function plusMinus(array){
    let contador_zero = 0
    let contador_maior_zero = 0
    let contador_menor_zero = 0

    for (let i = 0; i < array.length; i++) {
        if(array[i] < 0){
            contador_menor_zero ++
        }else if(array[i] > 0){
            contador_maior_zero ++
        }else
        contador_zero ++
    }
    let lista_result = []
    lista_result = [contador_maior_zero, contador_menor_zero, contador_zero]

    for (let i = 0; i < lista_result.length; i++) {
        console.log((lista_result[i]/array.length).toFixed(6))        
    }
}

arr = [-4, 3, -9, 0, 4, 1]

plusMinus(arr)

