'use strict';

process.stdin.resume();
process.stdin.setEncoding('utf-8');

let inputString = '';
let currentLine = 0;

process.stdin.on('data', inputStdin => {
    inputString += inputStdin;
});

process.stdin.on('end', _ => {
    inputString = inputString.trim().split('\n').map(string => {
        return string.trim();
    });
    
    main();    
});

function readLine() {
    return inputString[currentLine++];
}

function getLetter(s) {
    let letter;
    // Write your code here
    var set1 = new Set("aeiou");
    var set2 = new Set("bcdfg");
    var set3 = new Set("hjklm");
    var ch = s[0];
    var num = 0;
    if(set1.has(ch))
    {
        num = 1;
    }
    if(set2.has(ch))
    {
        num = 2;
    }
    if(set3.has(ch))
    {
        num = 3;
    }
    switch (num)
    {
        case 1:
        {
            letter = "A";
            break;
        }
        case 2:
        {
            letter = "B";
            break;
        }
        case 3:
        {
            letter = "C";
            break;
        }
        default:
        {
            letter = "D";
        }
    }
    
    return letter;
}

function main() {
    const s = readLine();
    
    console.log(getLetter(s));
}