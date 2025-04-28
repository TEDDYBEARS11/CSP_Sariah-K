let images= "https://www.wallpapersshare.com/img/big/pink-lemon-slice-photo.jpg, https://uscitrusnursery.com/cdn/shop/articles/pink-variegated-lemons_551987ee-b504-400e-8673-25dce517f415_900x.jpg?v=1623611562"
let counter = 0
function change (){
    if(counter < images.length){
        document.getElementById("stuff").src = images[counter]
        counter += 1
}else{
    counter = 0
    document.getElementById("stuff").src = images[counter]
}
}
