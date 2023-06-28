const textInput = document.getElementById('text-input');
const wordCount = document.getElementById('word-count');

textInput.addEventListener('input', updateWordCount);

function updateWordCount() {
  const text = textInput.value.trim();
  const wordCountText = `字數：${countWords(text)}`;
  wordCount.textContent = wordCountText;
}

function countWords(text) {
  const chineseCharacters = text.replace(/[^\u4e00-\u9fa5]/g, '');
  const englishWords = text.match(/\b[a-zA-Z]+\b/g) || [];
  const numbers = text.match(/\d+/g) || [];
  return chineseCharacters.length + englishWords.length + numbers.length;
}
