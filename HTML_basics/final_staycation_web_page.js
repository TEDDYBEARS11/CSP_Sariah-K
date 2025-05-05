function toggleContent() {
    const content = document.getElementById("extraContent");
    content.style.display = (content.style.display === "none" || content.style.display === "") ? "block" : "none";
}

let images = ["https://upload.wikimedia.org/wikipedia/commons/c/cb/Park_City_overview.jpg", "https://www.parkcity.org/home/showpublishedimage/52280/637455453827930000", "https://res.cloudinary.com/dmq6kny6m/image/upload/f_auto/v1683418843/Marque%20Images%202280x1256/Summer-Street-2256x1280_ww8bnw.png"]
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
