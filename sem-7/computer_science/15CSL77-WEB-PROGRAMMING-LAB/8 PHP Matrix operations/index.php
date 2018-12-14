<?php 


    $matrix1 = array(array(5,3), array(4,3));
    $matrix2 = array(array(9, 3), array(9, 7));

    function transpose ($matrix) {
        $tMatrix = [];
        $m = count($matrix);
        $n = count($matrix[0]);
        for ($i = 0; $i < $m; $i++) {
            for ($j = 0; $j < $n; $j++) {
                $tMatrix[$j][$i] = $matrix[$i][$j];
            }
        }
        return $tMatrix;
    }

    function display ($matrix) {
        $m = count($matrix);
        $n = count($matrix[0]);

        for ($i = 0; $i < $m; $i++) {
            echo "<br>";
            for ($j = 0; $j < $n; $j++) {
                echo $matrix[$i][$j]."&nbsp;";
            }
        }
    }

    function addMatrix ($m1, $m2) {
        $result = array();
        $m = count($m1);
        $n = count($m1[0]);

        for ($i = 0; $i < $m; $i++) {
            for ($j = 0; $j < $n; $j++) {
                $result[$i][$j] = $m1[$i][$j] + $m2[$i][$j];
            }
        }
        return $result;
    }

    function multiplyMatrix ($m1, $m2) {
        $result = array();
        $p = count($m1);
        $q = count($m2[0]);
        $r = count($m2);
        

        for ($i = 0; $i < $p; $i++) {
            for ($j = 0; $j < $q; $j++) {
                $result[$i][$j] = 0;
                for ($k = 0; $k < $r; $k++) {
                    $result[$i][$j] += $m1[$i][$k] * $m2[$k][$j];
                }
            }
        }

        return $result;
    }

?>

<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8" />
    <title>Matrix Multiplication</title>
</head>
<body>
    <h1>Matrix Operations</h1>
    <h2>Input Matrix 1</h2>
    <?php display($matrix1); ?>
    <h3>Transpose Matrix 1</h3>
    <?php display(transpose($matrix1)); ?>

    <h2>Input Matrix 2</h2>
    <?php display($matrix2); ?>
    <h2>Transpose Matrix 2</h2>
    <?php display(transpose($matrix2)); ?>

    <h2>Sum of Matrix 1 and Matrix 2</h2>
    <?php display(addMatrix($matrix1, $matrix2)); ?>
    
    <h2>Product of Matrix 1 and Matrix 2</h2>
    <?php display(multiplyMatrix($matrix1, $matrix2)); ?>

</body>
</html>