//初始化登录后首页
$(function () {
    initLeftTreeBox();
});

//初始化左侧功能树
function initLeftTreeBox() {
    //对每个一级目录添加点击事件

    $("#leftTreeBox  .1stLevel ").children("a").click(function () {
        $(this).next("ul").slideToggle();
    });


    //对每个二级目录添加点击事件
    $("#leftTreeBox .2ndLevel a").click(function (e) {
        //清除所有高亮
        $("#leftTreeBox .2ndLevel a").removeClass("cur");
        //高亮当前选项
        $(this).first().addClass("cur");

        e.preventDefault(e);
        //                //如果提供了事件对象，则这是一个非IE浏览器     
        //                if(e && e.preventDefault) {    
        //      　　        //阻止默认浏览器动作(W3C)    
        //       　　       e.preventDefault(e);    
        //                } else {    
        //       　　       //IE中阻止函数器默认动作的方式     
        //       　　       window.event.returnValue = false;     
        //                }  
        var tabTitle = $(this).text();
        var tabContent = '<iframe src="' + $(this).attr("href") + '" style="width:100%;height:99%;border:0px;"></iframe>';
        //新增标签
        addTabs(tabTitle, tabContent);
    });

}


//新增选项卡操作
function addTabs(title, content) {
    //删除所有tab选项卡
    var tablist = $('#tabsBar').tabs('tabs');
    for (var i = tablist.length - 1; i >= 0; i--) {
        $('#tabsBar').tabs('close', i);
    };
    //添加一个tab标签
    $('#tabsBar').tabs('add', {
        title: title,
        content: content,
        closable: true
    });
    //判断标签是否存在
//    if ($('#tabsBar').tabs('exists', title)) {
//        $('#tabsBar').tabs('select', title);
//    } else {
//        //添加一个tab标签
//        $('#tabsBar').tabs('add', {
//            title: title,
//            content: content,
//            closable: true
//        });
//    }
    //如果是专家的待处理诊断则隐藏左导航
    //title = $.trim(title);
    //var name = $.trim('待处理诊断');
    //if (title.indexOf(name) != -1) {
    //    hiddenNag();
    //}
}
//隐藏导航栏
function hiddenNag() {
    $('#layoutBody').layout('collapse', 'west');
   
}

//隐藏导航栏
function showNag() {
    $('#layoutBody').layout('expand', 'west');

   
    
}