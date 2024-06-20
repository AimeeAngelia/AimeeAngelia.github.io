<a href="https://time.is/Beijing" id="time_is_link" rel="nofollow" style="font-size:36px;color:#df41fb">北京时间:</a>
<span id="Beijing_z43d" style="font-size:100px;color:#df41fb"></span>
<script src="//widget.time.is/zh.js"></script>
<script>
function getWeekNumber(date) {
    const startDate = new Date(date.getFullYear(), 0, 1);
    const days = Math.floor((date - startDate) / (24 * 60 * 60 * 1000));
    return Math.ceil((date.getDay() + 1 + days) / 7);
}

time_is_widget.init({
    Beijing_z43d: {
        template: "TIME<br>DATE<br>SUN",
        date_format: "year-monthnum-daynum dname，第" + getWeekNumber(new Date()) + "周",
        sun_format: "日出: srhour:srminute 日落: sshour:ssminute<br>昼长: dlhours时 dlminutes分",
        coords: "39.9075000,116.3972300"
    }
});
</script>