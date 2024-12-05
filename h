<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <title>Video en Pantalla Completa</title>
  <style>
    body, html {
      margin: 0;
      padding: 0;
      overflow: hidden;
      width: 100%;
      height: 100%;
      display: flex;
      justify-content: center;
      align-items: center;
      background-color: #000;
    }
    video {
      width: 100%;
      height: 100%;
      object-fit: cover;
    }
  </style>
</head>
<body>
  <video id="videoPlayer" controls autoplay>
    <source src="https://streamable.com/e/uulv9h?" type="video/mp4">
    Tu navegador no soporta la etiqueta de video.
  </video>
  <script>
    const video = document.getElementById('videoPlayer');

    // Hacer que el video entre en pantalla completa automáticamente
    document.addEventListener('DOMContentLoaded', () => {
      if (video.requestFullscreen) {
        video.requestFullscreen();
      } else if (video.webkitRequestFullscreen) { // Safari
        video.webkitRequestFullscreen();
      } else if (video.mozRequestFullScreen) { // Firefox
        video.mozRequestFullScreen();
      } else if (video.msRequestFullscreen) { // IE/Edge
        video.msRequestFullscreen();
      }
    });
  </script>
</body>
</html>
