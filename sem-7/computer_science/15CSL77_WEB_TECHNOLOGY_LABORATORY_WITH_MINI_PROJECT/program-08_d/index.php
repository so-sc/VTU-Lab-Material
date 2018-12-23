<!DOCTYPE html>
<html>
<head>
	<title>Matrix Addition</title>
</head>
<body>
	<?php
		$matA = Array(Array(1,2,3), Array(3,4,5), Array(5,6,7));
		$matB = Array(Array(0,0,0), Array(1,1,1), Array(2,2,2));
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

		// Compatibility condition for addition
		if((count($matA) != count($matB)) || (count($matA[0]) != count($matB[0]))){
			echo '<h1 align="center">Incompatible Matrices</h1>';
			exit(0);
		}

		// Adding two matrices
		for($i = 0; $i < count($matA); $i++){
			for($j = 0; $j < count($matA[0]); $j++){
				$res[$i][$j] = $matA[$i][$j] + $matB[$i][$j];
			}
		}

		echo '<h1 align="center">Matrix A:</h1>';
		print_matrix($matA);
		echo '<h2 align="center">Matrix B</h2>';
		print_matrix($matB);
		echo '<h1 align="center">Matrix A + B</h1>';
		print_matrix($res);
	?>
</body>
</html>