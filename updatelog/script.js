function closePopup() {
    document.querySelector('.overlay').style.display = 'none';
  }
  
  window.onload = function() {
    // 检查本地存储，看是否已经显示过更新日志
    var hasShownPopup = localStorage.getItem('hasShownPopup');
    
    if (!hasShownPopup) {
      // 第一次进入网站，显示更新日志
      document.querySelector('.overlay').style.display = 'flex';
      
      // 标记已经显示过更新日志
      localStorage.setItem('hasShownPopup', 'true');
    }
  };
  