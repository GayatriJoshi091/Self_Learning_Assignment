$(document).ready(function () {
    $("h1").click(function () {
        $("h1").hide();
    });

    $("h2").click(function () {
        $("h2").hide();
    });

    $("h3").click(function () {
        $("h3").hide();
    });

    $(document).mousemove(function(event){
        $('#p1').text("X: "+event.offsetX +"   "+ "Y: "+event.offsetY)
    })

})