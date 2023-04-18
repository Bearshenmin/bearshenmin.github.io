// 模擬載入過程
function simulateLoading() {
    var progressBar = document.getElementById('progress-bar');
    var width = 0;
    var interval = setInterval(function() {
      width += 10;
      progressBar.style.width = width + '%';
      if (width >= 100) {
        clearInterval(interval);
      }
    }, 300);
  }
  
  simulateLoading();
  