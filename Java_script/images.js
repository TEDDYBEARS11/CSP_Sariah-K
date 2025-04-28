function view(){
  if (document.getElementById("img").style.display = "block"){
  document.getElementById("img").style.display = "none"
  document.getElementById("shw").innerHTML = "show more"
}else{
  document.getElementById("more").style.display = "block"
  document.getElementById("shw").innerHTML = "show less"
}
}