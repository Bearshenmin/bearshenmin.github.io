const gameArea = document.getElementById('game-area');
const count = document.getElementById('count');
let clickCount = 0;

gameArea.addEventListener('click', () => {
  clickCount++;
  count.innerText = clickCount;
});
