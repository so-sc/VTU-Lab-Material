const result = document.getElementById("result");
var prev = null, next = null;
var operation = null;
var isOpClicked = false;

operations = {
    add: (a, b) => a+b,
    subtract: (a, b) => a-b,
    multiply: (a, b) => a*b,
    divide: (a, b) => a/b,
    equals: (a, b) => {
        reset();
        return b;
    },
}

function showResult() {
    result.value = prev || 0;
}

function insert_operand(value) {

    if (isOpClicked) {
        // clear the text if an operator is selected previously
        result.value = value.toString();
        isOpClicked = false;
    } else {
        if (result.value == '0') 
            result.value = value.toString();
        else 
            result.value += value.toString();
    }

}

function insert_operator (operator) {

    // the operators are clicked twice
    if (isOpClicked) {
        operation = operations[operator];
        return;
    }

    isOpClicked = true;
    next = parseInt(result.value) || 0;

    if (operation != null && prev != null) {
        prev = operation(prev, next);
    } else {
        prev = next;
    }

    showResult();
    operation = operator == 'equals' ? null : operations[operator];
}

function reset() {
    operation = null;
    prev = null;
    next = null;
    isOpClicked = false;
    showResult();
}