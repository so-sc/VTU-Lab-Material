<html>
<head>
	<title>Visiter Count</title>
</head>
<body>	
	<?php
		// Fetch file content as in integer
		$file_content = (int)file_get_contents("count.txt");
		// Increment the value
		$file_content += 1;
		// Display the value
		echo '<h1 align="center">Page Views:' . $file_content . '</h1>';
		// Write the value back into the file
		file_put_contents("count.txt", $file_content);
	?>
</body>
</html>