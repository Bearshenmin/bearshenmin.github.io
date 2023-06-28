const textInput = document.getElementById('text-input');
const wordCount = document.getElementById('word-count');

textInput.addEventListener('input', updateWordCount);

function updateWordCount() {
  const text = textInput.value.trim();
  const chineseCharacters = text.replace(/[^\u4e00-\u9fa5]/g, '');
  const wordCountText = `字數：${chineseCharacters.length}`;
  wordCount.textContent = wordCountText;
}
