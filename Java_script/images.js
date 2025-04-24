const container = document.querySelector('.container');
const hiddenImage = document.querySelector('.hidden-image');

container.addEventListener('mouseenter', () => {
  hiddenImage.style.display = 'block';
});

container.addEventListener('mouseleave', () => {
  hiddenImage.style.display = 'none';
});