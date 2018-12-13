<?php
    // convert the string to array elements
    $states_string = "Mississippi Alabama Texas Massachusetts Kansas";
    $states = explode(" ", $states_string);
    
    // All the patterns mentioned in the question
    /*
        1. Name ends with xas
        2. Case insensitive comparison of name starts with k and ends with s
        3. Name starts with M ans ends with s
        4. Name ends with a
    */
    $patterns = array('/xas$/', '/^k.*s$/i', '/^M.*s$/', '/a$/');
    $statesList = [];

    // function to return a found match for given pattern in the states list
    function getState ($pattern, $states) {
        foreach ($states as $state) {
            if (preg_match($pattern, $state)) {
                return $state;   
            }
        }
    }

    // for each pattern, find a match from states and store it in statesList
    for ($i = 0; $i < count($patterns); $i++) {
        $statesList[$i] = getState($patterns[$i], $states);
    }

?>

<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8" />
    <title>9. States List</title>
</head>
<body>
    <p>statement is : <b><?=$states_string;?></b></p>
    <p>Name ends with xas is : <b><?=$statesList[0];?></b></p>
    <p>Name starts with k and ends with s is : <b><?=$statesList[1];?></b></p>
    <p>Name starts with M ans ends with s is : <b><?=$statesList[2];?></b></p>
    <p>Name ends with a is : <b><?=$statesList[3];?></b></p>
</body>
</html>