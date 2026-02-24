<?php

if(isset($_POST["temperature"]) && isset($_POST["humidity"])){

    $temp = $_POST["temperature"];
    $hum = $_POST["humidity"];

    echo "Received OK";

    $file = "data.txt";
    $content = "$temp,$hum\n";
    file_put_contents($file, $content, FILE_APPEND);

} else {
    echo "No Data";
}

?>
