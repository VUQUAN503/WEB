var count = 0;
$(document).ready(function(){
    $("div.footer a").click(function(){
        event.preventDefault();
        $("html, body").animate({
            "scrollTop": 0 
        }, 1000).css({
            "transition": "all linner"
        })
    })
    $("div.form-top input, input").blur(function(){
        if($(this).val() == "")
        {
            $(this).attr("placeholder", "Vui lòng nhập trường này 😜😜");
            $(this).css({
                "border": "1px solid red",
            })
        }
        else{
            $(this).css({
                "border": "1px solid aqua",
            })
        }
    })

    $(".contain-item a.search").click(function(){
            $(".container-search").addClass("active");
    })

    $(".container-search .close").click(function(){
        $(".container-search").removeClass("active");
    })
    
    $(".sendmessage").click(function(){
        event.preventDefault();
        if($("div.form-top input, input").val() == '')
        {
            $("div.form-top input, input").attr("placeholder", "Vui lòng nhập trường này");
            $("div.form-top input, input").css({
                "border": "1px solid red",
            })
            $("div.form-top input, input").focus();
        }
        else{
            console.log("xử lý trong này");
        }
    })
    $(".contain-item a.mobile").click(function(){
        count++;
        if(count % 2 == 0)
            $(".contain-item").addClass("active");
        else
            $(".contain-item").removeClass("active");
    })
    $(window).scroll(function(){
        if($(this).scrollTop() > 100)
        {
            $("#myNavbar .contain-item").addClass("test");
        }
        else{
            $("#myNavbar .contain-item").removeClass("test");
        }
    })
})
// window.onscroll = function () { myFunction() };
// function myFunction() {
//     var navbar = document.querySelector("#myNavbar .contain-item");
//     if (document.body.scrollTop > 100 || document.documentElement.scrollTop > 100) {
//         navbar.className = "contain-item test";
//     } else {
//         navbar.className = navbar.className.replace(" test", "");
//     }
// }