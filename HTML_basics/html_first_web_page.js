let images = ["https://wavesinthekitchen.com/wp-content/uploads/2020/11/Pink-Lemons-2-of-3.jpg", "https://d4c5gb8slvq7w.cloudfront.net/eyJlZGl0cyI6eyJyZXNpemUiOnsid2lkdGgiOjUwMCwiaGVpZ2h0IjozNzV9fSwiYnVja2V0IjoiZmluZWdhcmRlbmluZy5zMy50YXVudG9uY2xvdWQuY29tIiwia2V5IjoiYXBwXC91cGxvYWRzXC92Zy1taWdyYXRpb25cLzIwMTBcLzA2XC8yNzIzNTI1OVwvVkdfTWV5ZXJfbGVtb24xLmpwZyJ9"]
let counter = 0

function change(){
    if(counter < images.length){
        document.getElementById("img"). src = images[counter]
        [counter]
        counter + 1
    }else{ 
        counter = 0
        document.getElementById
        ("img").src = images
        [counter]
    }
    
}