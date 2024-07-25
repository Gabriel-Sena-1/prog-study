def camelcase(string):
    count_wrd = 1

    for i in string:
        if not (i.islower()):
            count_wrd += 1
    
    return count_wrd

print(camelcase('saveChangesInTheEditor'))