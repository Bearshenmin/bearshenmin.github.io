const textInput = document.getElementById('text-input');
const wordCount = document.getElementById('word-count');

textInput.addEventListener('input', updateWordCount);

function updateWordCount() {
  const text = textInput.value.trim();
  const wordCountText = `字數：${countWords(text)}`;
  wordCount.textContent = wordCountText;
}

function countWords(text) {
  const matches = text.match(/[\u4e00-\u9fa5a-zA-Z0-9\s\p{P}]/gu) || [];
  return matches.length;
}
