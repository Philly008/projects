//自定义数组的remove操作
Array.prototype.remove = function (dx) {
    if (isNaN(dx) || dx > this.length) { return false; }
    for (var i = 0, n = 0; i < this.length; i++) {
        if (this[i] != this[dx]) {
            this[n++] = this[i]
        }
    }
    this.length -= 1;
}

//ajax方法(同步加载)
function AjaxFun(url, param, callback) {
    $.ajax({
        url: url,
        type: "GET",
        async: false,
        data: param,
        dataType: "json",
        success: function (response) {
            callback(response);
        }
    });
}

//ajax方法(异步加载)
function AjaxFun2(url, param, callback) {
    $.ajax({
        url: url,
        type: "POST",
        async: true,
        data: param,
        dataType: "json",
        timeout: 0, //设置超时时间
        success: function (response) {
            callback(response);
        }
        
    });
}

//ajax方法(异步加载)
function AjaxKaYuFun2(url, callback) {
    $.ajax({
        url: url,
        type: "POST",
        dataType: "jsonp",
        jsonp: "callback",
        async: true,
        timeout: 10000,
        success: function (response) {
            debugger
            callback(response);
        }
    });
}

//获取Cookie
function getCookie(name) {
    var cookie_start = document.cookie.indexOf(name);
    var cookie_end = document.cookie.indexOf(";", cookie_start);
    return cookie_start == -1 ? '' : unescape(document.cookie.substring(cookie_start + name.length + 1, (cookie_end > cookie_start ? cookie_end : document.cookie.length)));
}

//iframe页面获取父页面的Cookie
function getParentCookie(name) {
    var cookie_start = window.parent.document.cookie.indexOf(name);
    var cookie_end = window.parent.document.cookie.indexOf(";", cookie_start);
    return cookie_start == -1 ? '' : unescape(window.parent.document.cookie.substring(cookie_start + name.length + 1, (cookie_end > cookie_start ? cookie_end : window.parent.document.cookie.length)));
}

//设置Cookie
function setCookie(cookieName, cookieValue, seconds, path, domain, secure) {
    var expires = new Date();
    expires.setTime(expires.getTime() + seconds);
    document.cookie = escape(cookieName) + '=' + escape(cookieValue)
            + (expires ? '; expires=' + expires.toGMTString() : '')
            + (path ? '; path=' + path : '/')
            + (domain ? '; domain=' + domain : '')
            + (secure ? '; secure' : '');
}




