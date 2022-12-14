from HashTable import HashTable
from SymbolTable import SymbolTable
from Scanner import readFile, Scanner, reservedWords, separators, operators
from ProgramInternalForm import PIF

def main():
    #this function reads token.in.txt and creates 3 lists separators, operators, reserved words
    readFile()
    fileName = "p1err.txt"
    #this creates a hashtable with symbols
    st = SymbolTable(17)
    pif = PIF()
    scanner = Scanner()
    exceptionMessage = ""

    #here the program splits the program in tokens and checks if a certain token is reservedWord,separator,operator,identifier or constant
    with open(fileName, 'r') as file:
        lineCounter = 0
        for line in file:
            lineCounter += 1
            for token in scanner.tokenize(line.strip()):
                if token in reservedWords+separators+operators:
                    if token == ' ':
                        continue
                    pif.add(token, (0, 0))
                elif scanner.isIdentifier(token) or scanner.isConstant(token):
                    id = st.position(token)
                    pif.add(token, id)
                else:
                    exceptionMessage += 'Lexical error at token ' + token + ', at line ' + str(lineCounter) + "\n"

    with open('symbol_table.out', 'w') as writer:
        print("Symbol table: \n" + str(st))
        writer.write(str(st))

    with open('program_internal_form.out', 'w') as writer:
        print("Program internal form: \n" + str(pif))
        writer.write(str(pif))

    if exceptionMessage == '':
        print("Lexically correct")
    else:
        print(exceptionMessage)

main()
