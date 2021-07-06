function f() {
    $.ajax({
        url :"https://foodgroup.herokuapp.com/api/food/1",
        method:"get",
        success:function (sp) {
            var sanPham = sp.data;
            var sanPhamHTMLCode = $("#san-pham");


            var SP_node ="<div>\n" +
                "                <p>Id : "+sanPham.id+" </p>\n" +
                "                <p>Name : "+sanPham.name+"</p>\n" +
                "                <img src=\""+sanPham.image+"\" alt=\"\">\n" +
                "                <p>Price : "+sanPham.price+"</p>\n" +
                "            </div>";
            sanPhamHTMLCode.append(SP_node);
        }
    })
}
f();
// var sanPhamHTMLCode = $("#san-pham");
// sanPhamHTMLCode.append(SP_node);