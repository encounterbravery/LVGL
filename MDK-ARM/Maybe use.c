

//缩放的---ZOOM
//void lv_chart_set_zoom_x(lv_obj_t * obj, uint16_t zoom_x)
//{
//    LV_ASSERT_OBJ(obj, MY_CLASS);

//    lv_chart_t * chart  = (lv_chart_t *)obj;
//    if(chart->zoom_x == zoom_x) return;

//    chart->zoom_x = zoom_x;
//    lv_obj_refresh_self_size(obj);
//    /*Be the chart doesn't remain scrolled out*/
//    lv_obj_readjust_scroll(obj, LV_ANIM_OFF);
//    lv_obj_invalidate(obj);
//}


//刷新
//lv_chart_set_series_points(chart, series, 数据数组, 数据数量);


/*********************
      DEFINES
*********************/

//#if LV_USE_LARGE_COORD
//typedef int32_t lv_coord_t;
//#else
//typedef int16_t lv_coord_t;
//#endif

