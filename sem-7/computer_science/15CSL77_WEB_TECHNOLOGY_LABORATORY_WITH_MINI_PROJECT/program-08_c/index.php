<!DOCTYPE html>
<html>
<head>
	<title>Matrix Multiplication</title>
</head>
<body>
	<?php
		$matA = Array(Array(1,2,3), Array(3,4,5), Array(5,6,7));
		$matB = Array(Array(4,5,6), Array(6,7,8), Array(8,9,0));
		$res = array();

		// Function to print a matrix
		function print_matrix($matrix){
			echo '<h1 align="center">';
			for($i=0; $i<count($matrix); $i++){
				for($j=0; $j<count($matrix[0]); $j++){
					echo $matrix[$i][$j].' ';
				}
				echo "</br/>";
			}
			echo '</h1>';
		}

		if(count($matA[0]) != count($matB)){
			echo '<h1 align="center">Incompatible Matrices</h1>';
			exit(0);
		}

		// Multiplying two matrices
		for($i = 0; $i < count($matA); $i++){
			for($j = 0; $j < count($matB[0]); $j++){
				$res[$i][$j] = 0;
				for($k=0; $k < count($matB); $k++){
					$res[$i][$j] = $res[$i][$j] + $matA[$i][$k]*$matB[$k][$j];
				}
			}
		}

		echo '<h1 align="center">Matrix A:</h1>';
		print_matrix($matA);
		echo '<h2 align="center">Matrix B</h2>';
		print_matrix($matB);
		echo '<h1 align="center">Matrix A X B</h1>';
		print_matrix($res);
	?>
</body>
</html>