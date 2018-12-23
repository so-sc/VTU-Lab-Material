<html>
<head>
<title>Pattern Matching using Python</title>
</head>
<body>
	<?php
		$res = shell_exec("python match.py");
		$match = explode("\n",$res);
		echo '<h2 align="center">Statement is: '.$match[4].'</h2>';
		echo '<h2 align="center">Word that end with xas: '.$match[0].'</h2>';
		echo '<h2 align="center">Word that Starts with k and ends with s(Case Insensitive): '.$match[1].'</h2>';
		echo '<h2 align="center">Word that starts with M and ends with s: '.$match[2].'</h2>';
		echo '<h2 align="center">Word that end with a: '.$match[3].'</h2>';
	?>
</body>
</html>

