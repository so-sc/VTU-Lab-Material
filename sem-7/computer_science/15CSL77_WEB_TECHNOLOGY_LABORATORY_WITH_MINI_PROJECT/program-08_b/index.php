<<<<<<< HEAD
<!DOCTYPE html>
<html>
<head>
	<title>Matrix Transpose</title>
</head>
<body>
	<?php
		$matrix=Array(Array(1,2), Array(4,5), Array(7,8));
		$transpose = Array();
		
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
		
		// Create transpose of the matrix
		for($i = 0; $i < count($matrix); $i++){
			for($j = 0; $j < count($matrix[0]); $j++){
				$transpose[$j][$i] = $matrix[$i][$j];
			}
		}

		echo '<h1 align="center">Actual Matrix is:</h1>';
		print_matrix($matrix);	
		echo '<h1 align="center">Transpose Matrix is:</h1>';
		print_matrix($transpose);
	?>
</body>
=======
<!DOCTYPE html>
<html>
<head>
	<title>Matrix Transpose</title>
</head>
<body>
	<?php
		$matrix=Array(Array(1,2), Array(4,5), Array(7,8));
		$transpose = Array();
		
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
		
		// Create transpose of the matrix
		for($i = 0; $i < count($matrix); $i++){
			for($j = 0; $j < count($matrix[0]); $j++){
				$transpose[$j][$i] = $matrix[$i][$j];
			}
		}

		echo '<h1 align="center">Actual Matrix is:</h1>';
		print_matrix($matrix);	
		echo '<h1 align="center">Transpose Matrix is:</h1>';
		print_matrix($transpose);
	?>
</body>
>>>>>>> 8c6ec7dee2e69b01976459206eb713b748e23f9b
</html>