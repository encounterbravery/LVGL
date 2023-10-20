// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.2
// LVGL version: 8.3.6
// Project name: SquareLine_Project

#include "./ui.h"

lv_chart_series_t* ui_Chart1_series_1 ;

void ui_Screen1_screen_init(void)
{
ui_Screen1 = lv_obj_create(NULL);
lv_obj_clear_flag( ui_Screen1, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_Chart1 = lv_chart_create(ui_Screen1);
lv_obj_set_width( ui_Chart1, 280);
lv_obj_set_height( ui_Chart1, 180);
lv_obj_set_x( ui_Chart1, -60 );
lv_obj_set_y( ui_Chart1, -10 );
lv_obj_set_align( ui_Chart1, LV_ALIGN_CENTER );
lv_chart_set_type( ui_Chart1, LV_CHART_TYPE_LINE);
lv_chart_set_range( ui_Chart1, LV_CHART_AXIS_PRIMARY_Y, 0, 3);
lv_chart_set_range( ui_Chart1, LV_CHART_AXIS_SECONDARY_Y, 0, 3);
lv_chart_set_div_line_count( ui_Chart1, 3, 10);
lv_chart_set_axis_tick( ui_Chart1, LV_CHART_AXIS_PRIMARY_X, 10, 5, 5, 2, true, 50);
lv_chart_set_axis_tick( ui_Chart1, LV_CHART_AXIS_PRIMARY_Y, 10, 5, 4, 2, true, 50);
lv_chart_set_axis_tick( ui_Chart1, LV_CHART_AXIS_SECONDARY_Y, 10, 5, 4, 2, true, 25);
ui_Chart1_series_1 = lv_chart_add_series(ui_Chart1, lv_palette_main(LV_PALETTE_BLUE), LV_CHART_AXIS_SECONDARY_Y);
static lv_coord_t ui_Chart1_series_1_array[] = { 0,0,0,0,0,0,0,0,0,0 };
lv_chart_set_ext_y_array(ui_Chart1, ui_Chart1_series_1, ui_Chart1_series_1_array);

//ˢ�·�ʽ
lv_chart_set_update_mode(ui_Chart1,LV_CHART_UPDATE_MODE_SHIFT);
}



