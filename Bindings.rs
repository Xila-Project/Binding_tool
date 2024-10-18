mod Generated_bindings {
    #[derive(Debug, Copy, Clone, PartialEq, Eq)]
    #[repr(u32)]
    pub enum Function_calls_type {
        lv_point_transform,
        lv_point_array_transform,
        lv_point_from_precise,
        lv_point_to_precise,
        lv_point_set,
        lv_point_precise_set,
        lv_point_swap,
        lv_point_precise_swap,
        lv_color_format_get_bpp,
        lv_color_format_get_size,
        lv_color_format_has_alpha,
        lv_color_to_32,
        lv_color_to_int,
        lv_color_eq,
        lv_color32_eq,
        lv_color_hex,
        lv_color_make,
        lv_color32_make,
        lv_color_hex3,
        lv_color_to_u16,
        lv_color_to_u32,
        lv_color_16_16_mix,
        lv_color_lighten,
        lv_color_darken,
        lv_color_hsv_to_rgb,
        lv_color_rgb_to_hsv,
        lv_color_to_hsv,
        lv_color_white,
        lv_color_black,
        lv_color_premultiply,
        lv_color16_premultiply,
        lv_color_luminance,
        lv_color16_luminance,
        lv_color24_luminance,
        lv_color32_luminance,
        lv_color_mix,
        lv_color_mix32,
        lv_color_brightness,
        lv_color_filter_dsc_init,
        lv_obj_set_flex_flow,
        lv_obj_set_flex_align,
        lv_obj_set_flex_grow,
        lv_obj_set_grid_dsc_array,
        lv_obj_set_grid_align,
        lv_obj_set_grid_cell,
        lv_style_init,
        lv_style_reset,
        lv_style_register_prop,
        lv_style_get_num_custom_props,
        lv_style_remove_prop,
        lv_style_set_prop,
        lv_style_get_prop,
        lv_style_transition_dsc_init,
        lv_style_prop_get_default,
        lv_style_is_empty,
        lv_style_prop_lookup_flags,
        lv_style_set_width,
        lv_style_set_min_width,
        lv_style_set_max_width,
        lv_style_set_height,
        lv_style_set_min_height,
        lv_style_set_max_height,
        lv_style_set_length,
        lv_style_set_x,
        lv_style_set_y,
        lv_style_set_align,
        lv_style_set_transform_width,
        lv_style_set_transform_height,
        lv_style_set_translate_x,
        lv_style_set_translate_y,
        lv_style_set_transform_scale_x,
        lv_style_set_transform_scale_y,
        lv_style_set_transform_rotation,
        lv_style_set_transform_pivot_x,
        lv_style_set_transform_pivot_y,
        lv_style_set_transform_skew_x,
        lv_style_set_transform_skew_y,
        lv_style_set_pad_top,
        lv_style_set_pad_bottom,
        lv_style_set_pad_left,
        lv_style_set_pad_right,
        lv_style_set_pad_row,
        lv_style_set_pad_column,
        lv_style_set_margin_top,
        lv_style_set_margin_bottom,
        lv_style_set_margin_left,
        lv_style_set_margin_right,
        lv_style_set_bg_color,
        lv_style_set_bg_opa,
        lv_style_set_bg_grad_color,
        lv_style_set_bg_grad_dir,
        lv_style_set_bg_main_stop,
        lv_style_set_bg_grad_stop,
        lv_style_set_bg_main_opa,
        lv_style_set_bg_grad_opa,
        lv_style_set_bg_grad,
        lv_style_set_bg_image_src,
        lv_style_set_bg_image_opa,
        lv_style_set_bg_image_recolor,
        lv_style_set_bg_image_recolor_opa,
        lv_style_set_bg_image_tiled,
        lv_style_set_border_color,
        lv_style_set_border_opa,
        lv_style_set_border_width,
        lv_style_set_border_side,
        lv_style_set_border_post,
        lv_style_set_outline_width,
        lv_style_set_outline_color,
        lv_style_set_outline_opa,
        lv_style_set_outline_pad,
        lv_style_set_shadow_width,
        lv_style_set_shadow_offset_x,
        lv_style_set_shadow_offset_y,
        lv_style_set_shadow_spread,
        lv_style_set_shadow_color,
        lv_style_set_shadow_opa,
        lv_style_set_image_opa,
        lv_style_set_image_recolor,
        lv_style_set_image_recolor_opa,
        lv_style_set_line_width,
        lv_style_set_line_dash_width,
        lv_style_set_line_dash_gap,
        lv_style_set_line_rounded,
        lv_style_set_line_color,
        lv_style_set_line_opa,
        lv_style_set_arc_width,
        lv_style_set_arc_rounded,
        lv_style_set_arc_color,
        lv_style_set_arc_opa,
        lv_style_set_arc_image_src,
        lv_style_set_text_color,
        lv_style_set_text_opa,
        lv_style_set_text_font,
        lv_style_set_text_letter_space,
        lv_style_set_text_line_space,
        lv_style_set_text_decor,
        lv_style_set_text_align,
        lv_style_set_radius,
        lv_style_set_clip_corner,
        lv_style_set_opa,
        lv_style_set_opa_layered,
        lv_style_set_color_filter_dsc,
        lv_style_set_color_filter_opa,
        lv_style_set_anim,
        lv_style_set_anim_duration,
        lv_style_set_transition,
        lv_style_set_blend_mode,
        lv_style_set_layout,
        lv_style_set_base_dir,
        lv_style_set_bitmap_mask_src,
        lv_style_set_rotary_sensitivity,
        lv_style_set_flex_flow,
        lv_style_set_flex_main_place,
        lv_style_set_flex_cross_place,
        lv_style_set_flex_track_place,
        lv_style_set_flex_grow,
        lv_style_set_grid_column_dsc_array,
        lv_style_set_grid_column_align,
        lv_style_set_grid_row_dsc_array,
        lv_style_set_grid_row_align,
        lv_style_set_grid_cell_column_pos,
        lv_style_set_grid_cell_x_align,
        lv_style_set_grid_cell_column_span,
        lv_style_set_grid_cell_row_pos,
        lv_style_set_grid_cell_y_align,
        lv_style_set_grid_cell_row_span,
        lv_obj_delete,
        lv_obj_clean,
        lv_obj_delete_delayed,
        lv_obj_delete_anim_completed_cb,
        lv_obj_delete_async,
        lv_obj_set_parent,
        lv_obj_swap,
        lv_obj_move_to_index,
        lv_obj_get_screen,
        lv_obj_get_parent,
        lv_obj_get_child,
        lv_obj_get_child_by_type,
        lv_obj_get_sibling,
        lv_obj_get_sibling_by_type,
        lv_obj_get_child_count,
        lv_obj_get_child_count_by_type,
        lv_obj_get_index,
        lv_obj_get_index_by_type,
        lv_obj_tree_walk,
        lv_obj_dump_tree,
        lv_obj_set_pos,
        lv_obj_set_x,
        lv_obj_set_y,
        lv_obj_set_size,
        lv_obj_refr_size,
        lv_obj_set_width,
        lv_obj_set_height,
        lv_obj_set_content_width,
        lv_obj_set_content_height,
        lv_obj_set_layout,
        lv_obj_is_layout_positioned,
        lv_obj_mark_layout_as_dirty,
        lv_obj_update_layout,
        lv_obj_set_align,
        lv_obj_align,
        lv_obj_align_to,
        lv_obj_center,
        lv_obj_get_coords,
        lv_obj_get_x,
        lv_obj_get_x2,
        lv_obj_get_y,
        lv_obj_get_y2,
        lv_obj_get_x_aligned,
        lv_obj_get_y_aligned,
        lv_obj_get_width,
        lv_obj_get_height,
        lv_obj_get_content_width,
        lv_obj_get_content_height,
        lv_obj_get_content_coords,
        lv_obj_get_self_width,
        lv_obj_get_self_height,
        lv_obj_refresh_self_size,
        lv_obj_refr_pos,
        lv_obj_move_to,
        lv_obj_move_children_by,
        lv_obj_transform_point,
        lv_obj_transform_point_array,
        lv_obj_get_transformed_area,
        lv_obj_invalidate_area,
        lv_obj_invalidate,
        lv_obj_area_is_visible,
        lv_obj_is_visible,
        lv_obj_set_ext_click_area,
        lv_obj_get_click_area,
        lv_obj_hit_test,
        lv_obj_set_scrollbar_mode,
        lv_obj_set_scroll_dir,
        lv_obj_set_scroll_snap_x,
        lv_obj_set_scroll_snap_y,
        lv_obj_get_scrollbar_mode,
        lv_obj_get_scroll_dir,
        lv_obj_get_scroll_snap_x,
        lv_obj_get_scroll_snap_y,
        lv_obj_get_scroll_x,
        lv_obj_get_scroll_y,
        lv_obj_get_scroll_top,
        lv_obj_get_scroll_bottom,
        lv_obj_get_scroll_left,
        lv_obj_get_scroll_right,
        lv_obj_get_scroll_end,
        lv_obj_scroll_by,
        lv_obj_scroll_by_bounded,
        lv_obj_scroll_to,
        lv_obj_scroll_to_x,
        lv_obj_scroll_to_y,
        lv_obj_scroll_to_view,
        lv_obj_scroll_to_view_recursive,
        lv_obj_is_scrolling,
        lv_obj_update_snap,
        lv_obj_get_scrollbar_area,
        lv_obj_scrollbar_invalidate,
        lv_obj_readjust_scroll,
        lv_obj_add_style,
        lv_obj_replace_style,
        lv_obj_remove_style,
        lv_obj_remove_style_all,
        lv_obj_report_style_change,
        lv_obj_refresh_style,
        lv_obj_enable_style_refresh,
        lv_obj_get_style_prop,
        lv_obj_has_style_prop,
        lv_obj_set_local_style_prop,
        lv_obj_get_local_style_prop,
        lv_obj_remove_local_style_prop,
        lv_obj_style_apply_color_filter,
        lv_obj_fade_in,
        lv_obj_fade_out,
        lv_obj_set_style_width,
        lv_obj_set_style_min_width,
        lv_obj_set_style_max_width,
        lv_obj_set_style_height,
        lv_obj_set_style_min_height,
        lv_obj_set_style_max_height,
        lv_obj_set_style_length,
        lv_obj_set_style_x,
        lv_obj_set_style_y,
        lv_obj_set_style_align,
        lv_obj_set_style_transform_width,
        lv_obj_set_style_transform_height,
        lv_obj_set_style_translate_x,
        lv_obj_set_style_translate_y,
        lv_obj_set_style_transform_scale_x,
        lv_obj_set_style_transform_scale_y,
        lv_obj_set_style_transform_rotation,
        lv_obj_set_style_transform_pivot_x,
        lv_obj_set_style_transform_pivot_y,
        lv_obj_set_style_transform_skew_x,
        lv_obj_set_style_transform_skew_y,
        lv_obj_set_style_pad_top,
        lv_obj_set_style_pad_bottom,
        lv_obj_set_style_pad_left,
        lv_obj_set_style_pad_right,
        lv_obj_set_style_pad_row,
        lv_obj_set_style_pad_column,
        lv_obj_set_style_margin_top,
        lv_obj_set_style_margin_bottom,
        lv_obj_set_style_margin_left,
        lv_obj_set_style_margin_right,
        lv_obj_set_style_bg_color,
        lv_obj_set_style_bg_opa,
        lv_obj_set_style_bg_grad_color,
        lv_obj_set_style_bg_grad_dir,
        lv_obj_set_style_bg_main_stop,
        lv_obj_set_style_bg_grad_stop,
        lv_obj_set_style_bg_main_opa,
        lv_obj_set_style_bg_grad_opa,
        lv_obj_set_style_bg_grad,
        lv_obj_set_style_bg_image_src,
        lv_obj_set_style_bg_image_opa,
        lv_obj_set_style_bg_image_recolor,
        lv_obj_set_style_bg_image_recolor_opa,
        lv_obj_set_style_bg_image_tiled,
        lv_obj_set_style_border_color,
        lv_obj_set_style_border_opa,
        lv_obj_set_style_border_width,
        lv_obj_set_style_border_side,
        lv_obj_set_style_border_post,
        lv_obj_set_style_outline_width,
        lv_obj_set_style_outline_color,
        lv_obj_set_style_outline_opa,
        lv_obj_set_style_outline_pad,
        lv_obj_set_style_shadow_width,
        lv_obj_set_style_shadow_offset_x,
        lv_obj_set_style_shadow_offset_y,
        lv_obj_set_style_shadow_spread,
        lv_obj_set_style_shadow_color,
        lv_obj_set_style_shadow_opa,
        lv_obj_set_style_image_opa,
        lv_obj_set_style_image_recolor,
        lv_obj_set_style_image_recolor_opa,
        lv_obj_set_style_line_width,
        lv_obj_set_style_line_dash_width,
        lv_obj_set_style_line_dash_gap,
        lv_obj_set_style_line_rounded,
        lv_obj_set_style_line_color,
        lv_obj_set_style_line_opa,
        lv_obj_set_style_arc_width,
        lv_obj_set_style_arc_rounded,
        lv_obj_set_style_arc_color,
        lv_obj_set_style_arc_opa,
        lv_obj_set_style_arc_image_src,
        lv_obj_set_style_text_color,
        lv_obj_set_style_text_opa,
        lv_obj_set_style_text_font,
        lv_obj_set_style_text_letter_space,
        lv_obj_set_style_text_line_space,
        lv_obj_set_style_text_decor,
        lv_obj_set_style_text_align,
        lv_obj_set_style_radius,
        lv_obj_set_style_clip_corner,
        lv_obj_set_style_opa,
        lv_obj_set_style_opa_layered,
        lv_obj_set_style_color_filter_dsc,
        lv_obj_set_style_color_filter_opa,
        lv_obj_set_style_anim,
        lv_obj_set_style_anim_duration,
        lv_obj_set_style_transition,
        lv_obj_set_style_blend_mode,
        lv_obj_set_style_layout,
        lv_obj_set_style_base_dir,
        lv_obj_set_style_bitmap_mask_src,
        lv_obj_set_style_rotary_sensitivity,
        lv_obj_set_style_flex_flow,
        lv_obj_set_style_flex_main_place,
        lv_obj_set_style_flex_cross_place,
        lv_obj_set_style_flex_track_place,
        lv_obj_set_style_flex_grow,
        lv_obj_set_style_grid_column_dsc_array,
        lv_obj_set_style_grid_column_align,
        lv_obj_set_style_grid_row_dsc_array,
        lv_obj_set_style_grid_row_align,
        lv_obj_set_style_grid_cell_column_pos,
        lv_obj_set_style_grid_cell_x_align,
        lv_obj_set_style_grid_cell_column_span,
        lv_obj_set_style_grid_cell_row_pos,
        lv_obj_set_style_grid_cell_y_align,
        lv_obj_set_style_grid_cell_row_span,
        lv_obj_calculate_style_text_align,
        lv_obj_get_style_opa_recursive,
        lv_obj_init_draw_rect_dsc,
        lv_obj_init_draw_label_dsc,
        lv_obj_init_draw_image_dsc,
        lv_obj_init_draw_line_dsc,
        lv_obj_init_draw_arc_dsc,
        lv_obj_calculate_ext_draw_size,
        lv_obj_refresh_ext_draw_size,
        lv_obj_class_create_obj,
        lv_obj_class_init_obj,
        lv_obj_is_editable,
        lv_obj_is_group_def,
        lv_obj_send_event,
        lv_obj_event_base,
        lv_obj_add_event_cb,
        lv_obj_get_event_count,
        lv_obj_get_event_dsc,
        lv_obj_remove_event,
        lv_obj_remove_event_cb,
        lv_obj_remove_event_dsc,
        lv_obj_remove_event_cb_with_user_data,
        lv_obj_create,
        lv_obj_add_flag,
        lv_obj_remove_flag,
        lv_obj_update_flag,
        lv_obj_add_state,
        lv_obj_remove_state,
        lv_obj_set_state,
        lv_obj_set_user_data,
        lv_obj_has_flag,
        lv_obj_has_flag_any,
        lv_obj_get_state,
        lv_obj_has_state,
        lv_obj_get_group,
        lv_obj_get_user_data,
        lv_obj_allocate_spec_attr,
        lv_obj_check_type,
        lv_obj_has_class,
        lv_obj_get_class,
        lv_obj_is_valid,
        lv_obj_null_on_delete,
        lv_obj_redraw,
        lv_arc_create,
        lv_arc_set_start_angle,
        lv_arc_set_end_angle,
        lv_arc_set_angles,
        lv_arc_set_bg_start_angle,
        lv_arc_set_bg_end_angle,
        lv_arc_set_bg_angles,
        lv_arc_set_rotation,
        lv_arc_set_mode,
        lv_arc_set_value,
        lv_arc_set_range,
        lv_arc_set_change_rate,
        lv_arc_set_knob_offset,
        lv_arc_get_angle_start,
        lv_arc_get_angle_end,
        lv_arc_get_bg_angle_start,
        lv_arc_get_bg_angle_end,
        lv_arc_get_value,
        lv_arc_get_min_value,
        lv_arc_get_max_value,
        lv_arc_get_mode,
        lv_arc_get_rotation,
        lv_arc_get_knob_offset,
        lv_arc_align_obj_to_angle,
        lv_arc_rotate_obj_to_angle,
        lv_buttonmatrix_create,
        lv_buttonmatrix_set_map,
        lv_buttonmatrix_set_ctrl_map,
        lv_buttonmatrix_set_selected_button,
        lv_buttonmatrix_set_button_ctrl,
        lv_buttonmatrix_clear_button_ctrl,
        lv_buttonmatrix_set_button_ctrl_all,
        lv_buttonmatrix_clear_button_ctrl_all,
        lv_buttonmatrix_set_button_width,
        lv_buttonmatrix_set_one_checked,
        lv_buttonmatrix_get_map,
        lv_buttonmatrix_get_selected_button,
        lv_buttonmatrix_get_button_text,
        lv_buttonmatrix_has_button_ctrl,
        lv_buttonmatrix_get_one_checked,
        lv_calendar_create,
        lv_calendar_set_today_date,
        lv_calendar_set_showed_date,
        lv_calendar_set_highlighted_dates,
        lv_calendar_set_day_names,
        lv_calendar_get_btnmatrix,
        lv_calendar_get_today_date,
        lv_calendar_get_showed_date,
        lv_calendar_get_highlighted_dates,
        lv_calendar_get_highlighted_dates_num,
        lv_calendar_get_pressed_date,
        lv_calendar_header_arrow_create,
        lv_calendar_header_dropdown_create,
        lv_calendar_header_dropdown_set_year_list,
        lv_chart_create,
        lv_chart_set_type,
        lv_chart_set_point_count,
        lv_chart_set_range,
        lv_chart_set_update_mode,
        lv_chart_set_div_line_count,
        lv_chart_get_type,
        lv_chart_get_point_count,
        lv_chart_get_x_start_point,
        lv_chart_get_point_pos_by_id,
        lv_chart_refresh,
        lv_chart_add_series,
        lv_chart_remove_series,
        lv_chart_hide_series,
        lv_chart_set_series_color,
        lv_chart_get_series_color,
        lv_chart_set_x_start_point,
        lv_chart_get_series_next,
        lv_chart_add_cursor,
        lv_chart_set_cursor_pos,
        lv_chart_set_cursor_point,
        lv_chart_get_cursor_point,
        lv_chart_set_all_value,
        lv_chart_set_next_value,
        lv_chart_set_next_value2,
        lv_chart_set_value_by_id,
        lv_chart_set_value_by_id2,
        lv_chart_set_ext_y_array,
        lv_chart_set_ext_x_array,
        lv_chart_get_y_array,
        lv_chart_get_x_array,
        lv_chart_get_pressed_point,
        lv_chart_get_first_point_center_offset,
        lv_checkbox_create,
        lv_checkbox_set_text,
        lv_checkbox_set_text_static,
        lv_checkbox_get_text,
        lv_dropdown_create,
        lv_dropdown_set_text,
        lv_dropdown_set_options,
        lv_dropdown_set_options_static,
        lv_dropdown_add_option,
        lv_dropdown_clear_options,
        lv_dropdown_set_selected,
        lv_dropdown_set_dir,
        lv_dropdown_set_symbol,
        lv_dropdown_set_selected_highlight,
        lv_dropdown_get_list,
        lv_dropdown_get_text,
        lv_dropdown_get_options,
        lv_dropdown_get_selected,
        lv_dropdown_get_option_count,
        lv_dropdown_get_selected_str,
        lv_dropdown_get_option_index,
        lv_dropdown_get_symbol,
        lv_dropdown_get_selected_highlight,
        lv_dropdown_get_dir,
        lv_dropdown_open,
        lv_dropdown_close,
        lv_dropdown_is_open,
        lv_led_create,
        lv_led_set_color,
        lv_led_set_brightness,
        lv_led_on,
        lv_led_off,
        lv_led_toggle,
        lv_led_get_brightness,
        lv_line_create,
        lv_line_set_points,
        lv_line_set_points_mutable,
        lv_line_set_y_invert,
        lv_line_get_points,
        lv_line_get_point_count,
        lv_line_is_point_array_mutable,
        lv_line_get_points_mutable,
        lv_line_get_y_invert,
        lv_menu_create,
        lv_menu_page_create,
        lv_menu_cont_create,
        lv_menu_section_create,
        lv_menu_separator_create,
        lv_menu_set_page,
        lv_menu_set_page_title,
        lv_menu_set_page_title_static,
        lv_menu_set_sidebar_page,
        lv_menu_set_mode_header,
        lv_menu_set_mode_root_back_button,
        lv_menu_set_load_page_event,
        lv_menu_get_cur_main_page,
        lv_menu_get_cur_sidebar_page,
        lv_menu_get_main_header,
        lv_menu_get_main_header_back_button,
        lv_menu_get_sidebar_header,
        lv_menu_get_sidebar_header_back_button,
        lv_menu_back_button_is_root,
        lv_menu_clear_history,
        lv_msgbox_create,
        lv_msgbox_add_title,
        lv_msgbox_add_header_button,
        lv_msgbox_add_text,
        lv_msgbox_add_footer_button,
        lv_msgbox_add_close_button,
        lv_msgbox_get_header,
        lv_msgbox_get_footer,
        lv_msgbox_get_content,
        lv_msgbox_get_title,
        lv_msgbox_close,
        lv_msgbox_close_async,
        lv_roller_create,
        lv_roller_set_options,
        lv_roller_set_selected,
        lv_roller_set_visible_row_count,
        lv_roller_get_selected,
        lv_roller_get_selected_str,
        lv_roller_get_options,
        lv_roller_get_option_count,
        lv_scale_create,
        lv_scale_set_mode,
        lv_scale_set_total_tick_count,
        lv_scale_set_major_tick_every,
        lv_scale_set_label_show,
        lv_scale_set_range,
        lv_scale_set_angle_range,
        lv_scale_set_rotation,
        lv_scale_set_line_needle_value,
        lv_scale_set_image_needle_value,
        lv_scale_set_text_src,
        lv_scale_set_post_draw,
        lv_scale_set_draw_ticks_on_top,
        lv_scale_add_section,
        lv_scale_section_set_range,
        lv_scale_section_set_style,
        lv_scale_get_mode,
        lv_scale_get_total_tick_count,
        lv_scale_get_major_tick_every,
        lv_scale_get_label_show,
        lv_scale_get_angle_range,
        lv_scale_get_range_min_value,
        lv_scale_get_range_max_value,
        lv_slider_create,
        lv_slider_set_value,
        lv_slider_set_left_value,
        lv_slider_set_range,
        lv_slider_set_mode,
        lv_slider_get_value,
        lv_slider_get_left_value,
        lv_slider_get_min_value,
        lv_slider_get_max_value,
        lv_slider_is_dragged,
        lv_slider_get_mode,
        lv_slider_is_symmetrical,
        lv_span_stack_init,
        lv_span_stack_deinit,
        lv_spangroup_create,
        lv_spangroup_new_span,
        lv_spangroup_delete_span,
        lv_span_set_text,
        lv_span_set_text_static,
        lv_spangroup_set_align,
        lv_spangroup_set_overflow,
        lv_spangroup_set_indent,
        lv_spangroup_set_mode,
        lv_spangroup_set_max_lines,
        lv_span_get_style,
        lv_spangroup_get_child,
        lv_spangroup_get_span_count,
        lv_spangroup_get_align,
        lv_spangroup_get_overflow,
        lv_spangroup_get_indent,
        lv_spangroup_get_mode,
        lv_spangroup_get_max_lines,
        lv_spangroup_get_max_line_height,
        lv_spangroup_get_expand_width,
        lv_spangroup_get_expand_height,
        lv_spangroup_refr_mode,
        lv_textarea_create,
        lv_textarea_add_char,
        lv_textarea_add_text,
        lv_textarea_delete_char,
        lv_textarea_delete_char_forward,
        lv_textarea_set_text,
        lv_textarea_set_placeholder_text,
        lv_textarea_set_cursor_pos,
        lv_textarea_set_cursor_click_pos,
        lv_textarea_set_password_mode,
        lv_textarea_set_password_bullet,
        lv_textarea_set_one_line,
        lv_textarea_set_accepted_chars,
        lv_textarea_set_max_length,
        lv_textarea_set_insert_replace,
        lv_textarea_set_text_selection,
        lv_textarea_set_password_show_time,
        lv_textarea_set_align,
        lv_textarea_get_text,
        lv_textarea_get_placeholder_text,
        lv_textarea_get_label,
        lv_textarea_get_cursor_pos,
        lv_textarea_get_cursor_click_pos,
        lv_textarea_get_password_mode,
        lv_textarea_get_password_bullet,
        lv_textarea_get_one_line,
        lv_textarea_get_accepted_chars,
        lv_textarea_get_max_length,
        lv_textarea_text_is_selected,
        lv_textarea_get_text_selection,
        lv_textarea_get_password_show_time,
        lv_textarea_get_current_char,
        lv_textarea_clear_selection,
        lv_textarea_cursor_right,
        lv_textarea_cursor_left,
        lv_textarea_cursor_down,
        lv_textarea_cursor_up,
        lv_spinbox_create,
        lv_spinbox_set_value,
        lv_spinbox_set_rollover,
        lv_spinbox_set_digit_format,
        lv_spinbox_set_step,
        lv_spinbox_set_range,
        lv_spinbox_set_cursor_pos,
        lv_spinbox_set_digit_step_direction,
        lv_spinbox_get_rollover,
        lv_spinbox_get_value,
        lv_spinbox_get_step,
        lv_spinbox_step_next,
        lv_spinbox_step_prev,
        lv_spinbox_increment,
        lv_spinbox_decrement,
        lv_table_create,
        lv_table_set_cell_value,
        lv_table_set_cell_value_fmt,
        lv_table_set_row_count,
        lv_table_set_column_count,
        lv_table_set_column_width,
        lv_table_add_cell_ctrl,
        lv_table_clear_cell_ctrl,
        lv_table_set_cell_user_data,
        lv_table_set_selected_cell,
        lv_table_get_cell_value,
        lv_table_get_row_count,
        lv_table_get_column_count,
        lv_table_get_column_width,
        lv_table_has_cell_ctrl,
        lv_table_get_selected_cell,
        lv_table_get_cell_user_data,
        lv_tabview_create,
        lv_tabview_add_tab,
        lv_tabview_rename_tab,
        lv_tabview_set_active,
        lv_tabview_set_tab_bar_position,
        lv_tabview_set_tab_bar_size,
        lv_tabview_get_tab_count,
        lv_tabview_get_tab_active,
        lv_tabview_get_content,
        lv_tabview_get_tab_bar,
        lv_tileview_create,
        lv_tileview_add_tile,
        lv_tileview_set_tile,
        lv_tileview_set_tile_by_index,
        lv_tileview_get_tile_active,
        lv_subject_init_int,
        lv_subject_set_int,
        lv_subject_get_int,
        lv_subject_get_previous_int,
        lv_subject_init_string,
        lv_subject_copy_string,
        lv_subject_get_string,
        lv_subject_get_previous_string,
        lv_subject_init_pointer,
        lv_subject_set_pointer,
        lv_subject_get_pointer,
        lv_subject_get_previous_pointer,
        lv_subject_init_color,
        lv_subject_set_color,
        lv_subject_get_color,
        lv_subject_get_previous_color,
        lv_subject_init_group,
        lv_subject_deinit,
        lv_subject_get_group_element,
        lv_subject_add_observer,
        lv_subject_add_observer_obj,
        lv_subject_add_observer_with_target,
        lv_obj_remove_from_subject,
        lv_subject_notify,
        lv_obj_bind_flag_if_eq,
        lv_obj_bind_flag_if_not_eq,
        lv_obj_bind_state_if_eq,
        lv_obj_bind_state_if_not_eq,
        lv_obj_bind_checked,
        lv_arc_bind_value,
        lv_slider_bind_value,
        lv_roller_bind_value,
        lv_dropdown_bind_value,
    }
    use super::lvgl::*;
    use Virtual_machine::{Environment_type, WASM_pointer_type, WASM_usize_type};
    #[allow(clippy::too_many_arguments)]
    pub unsafe fn Call_function(
        __Environment: Environment_type,
        __Function: Function_calls_type,
        __Argument_0: WASM_usize_type,
        __Argument_1: WASM_usize_type,
        __Argument_2: WASM_usize_type,
        __Argument_3: WASM_usize_type,
        __Argument_4: WASM_usize_type,
        __Argument_5: WASM_usize_type,
        __Argument_6: WASM_usize_type,
        __Arguments_count: u8,
        __Result: WASM_pointer_type,
    ) {
        let __Result: *mut core::ffi::c_void = __Environment.Convert_to_native_pointer(__Result);
        match __Function {
            Function_calls_type::lv_point_transform => {
                if __Arguments_count != 6 {
                    return;
                }
                let point = __Argument_0;
                let angle = __Argument_1;
                let scale_x = __Argument_2;
                let scale_y = __Argument_3;
                let pivot = __Argument_4;
                let zoom_first = __Argument_5;
                let point: *mut lv_point_t =
                    __Environment.Convert_to_native_pointer(point) as *mut _;
                let angle = angle as i32;
                let scale_x = scale_x as i32;
                let scale_y = scale_y as i32;
                let pivot: *const lv_point_t =
                    __Environment.Convert_to_native_pointer(pivot) as *mut _;
                let zoom_first = zoom_first != 0;
                lv_point_transform(point, angle, scale_x, scale_y, pivot, zoom_first);
            }
            Function_calls_type::lv_point_array_transform => {
                if __Arguments_count != 7 {
                    return;
                }
                let points = __Argument_0;
                let count = __Argument_1;
                let angle = __Argument_2;
                let scale_x = __Argument_3;
                let scale_y = __Argument_4;
                let pivot = __Argument_5;
                let zoom_first = __Argument_6;
                let points: *mut lv_point_t =
                    __Environment.Convert_to_native_pointer(points) as *mut _;
                let angle = angle as i32;
                let scale_x = scale_x as i32;
                let scale_y = scale_y as i32;
                let pivot: *const lv_point_t =
                    __Environment.Convert_to_native_pointer(pivot) as *mut _;
                let zoom_first = zoom_first != 0;
                lv_point_array_transform(points, count, angle, scale_x, scale_y, pivot, zoom_first);
            }
            Function_calls_type::lv_point_from_precise => {
                if __Arguments_count != 1 {
                    return;
                }
                let p = __Argument_0;
                let p: *const lv_point_precise_t =
                    __Environment.Convert_to_native_pointer(p) as *mut _;
                let __Current_result = lv_point_from_precise(p);
                let __Result = __Result as *mut lv_point_t;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_point_to_precise => {
                if __Arguments_count != 1 {
                    return;
                }
                let p = __Argument_0;
                let p: *const lv_point_t = __Environment.Convert_to_native_pointer(p) as *mut _;
                let __Current_result = lv_point_to_precise(p);
                let __Result = __Result as *mut lv_point_precise_t;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_point_set => {
                if __Arguments_count != 3 {
                    return;
                }
                let p = __Argument_0;
                let x = __Argument_1;
                let y = __Argument_2;
                let p: *mut lv_point_t = __Environment.Convert_to_native_pointer(p) as *mut _;
                let x = x as i32;
                let y = y as i32;
                lv_point_set(p, x, y);
            }
            Function_calls_type::lv_point_precise_set => {
                if __Arguments_count != 3 {
                    return;
                }
                let p = __Argument_0;
                let x = __Argument_1;
                let y = __Argument_2;
                let p: *mut lv_point_precise_t =
                    __Environment.Convert_to_native_pointer(p) as *mut _;
                let x = x as i32;
                let y = y as i32;
                lv_point_precise_set(p, x, y);
            }
            Function_calls_type::lv_point_swap => {
                if __Arguments_count != 2 {
                    return;
                }
                let p1 = __Argument_0;
                let p2 = __Argument_1;
                let p1: *mut lv_point_t = __Environment.Convert_to_native_pointer(p1) as *mut _;
                let p2: *mut lv_point_t = __Environment.Convert_to_native_pointer(p2) as *mut _;
                lv_point_swap(p1, p2);
            }
            Function_calls_type::lv_point_precise_swap => {
                if __Arguments_count != 2 {
                    return;
                }
                let p1 = __Argument_0;
                let p2 = __Argument_1;
                let p1: *mut lv_point_precise_t =
                    __Environment.Convert_to_native_pointer(p1) as *mut _;
                let p2: *mut lv_point_precise_t =
                    __Environment.Convert_to_native_pointer(p2) as *mut _;
                lv_point_precise_swap(p1, p2);
            }
            Function_calls_type::lv_color_format_get_bpp => {
                if __Arguments_count != 1 {
                    return;
                }
                let cf = __Argument_0;
                let cf = cf as core::ffi::c_uint;
                let __Current_result = lv_color_format_get_bpp(cf);
                let __Result = __Result as *mut u8;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_color_format_get_size => {
                if __Arguments_count != 1 {
                    return;
                }
                let cf = __Argument_0;
                let cf = cf as core::ffi::c_uint;
                let __Current_result = lv_color_format_get_size(cf);
                let __Result = __Result as *mut u8;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_color_format_has_alpha => {
                if __Arguments_count != 1 {
                    return;
                }
                let src_cf = __Argument_0;
                let src_cf = src_cf as core::ffi::c_uint;
                let __Current_result = lv_color_format_has_alpha(src_cf);
                let __Result = __Result as *mut bool;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_color_to_32 => {
                if __Arguments_count != 2 {
                    return;
                }
                let color = __Argument_0;
                let opa = __Argument_1;
                let color = lv_color_t {
                    blue: color as u8,
                    green: (color >> 8) as u8,
                    red: (color >> 16) as u8,
                };
                let opa = opa as u8;
                let __Current_result = lv_color_to_32(color, opa);
                let __Result = __Result as *mut lv_color32_t;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_color_to_int => {
                if __Arguments_count != 1 {
                    return;
                }
                let c = __Argument_0;
                let c = lv_color_t {
                    blue: c as u8,
                    green: (c >> 8) as u8,
                    red: (c >> 16) as u8,
                };
                let __Current_result = lv_color_to_int(c);
                let __Result = __Result as *mut u32;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_color_eq => {
                if __Arguments_count != 2 {
                    return;
                }
                let c1 = __Argument_0;
                let c2 = __Argument_1;
                let c1 = lv_color_t {
                    blue: c1 as u8,
                    green: (c1 >> 8) as u8,
                    red: (c1 >> 16) as u8,
                };
                let c2 = lv_color_t {
                    blue: c2 as u8,
                    green: (c2 >> 8) as u8,
                    red: (c2 >> 16) as u8,
                };
                let __Current_result = lv_color_eq(c1, c2);
                let __Result = __Result as *mut bool;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_color32_eq => {
                if __Arguments_count != 2 {
                    return;
                }
                let c1 = __Argument_0;
                let c2 = __Argument_1;
                let c1 = core::mem::transmute::<u32, lv_color32_t>(c1 as u32);
                let c2 = core::mem::transmute::<u32, lv_color32_t>(c2 as u32);
                let __Current_result = lv_color32_eq(c1, c2);
                let __Result = __Result as *mut bool;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_color_hex => {
                if __Arguments_count != 1 {
                    return;
                }
                let c = __Argument_0;
                let c = c as u32;
                let __Current_result = lv_color_hex(c);
                let __Result = __Result as *mut lv_color_t;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_color_make => {
                if __Arguments_count != 3 {
                    return;
                }
                let r = __Argument_0;
                let g = __Argument_1;
                let b = __Argument_2;
                let r = r as u8;
                let g = g as u8;
                let b = b as u8;
                let __Current_result = lv_color_make(r, g, b);
                let __Result = __Result as *mut lv_color_t;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_color32_make => {
                if __Arguments_count != 4 {
                    return;
                }
                let r = __Argument_0;
                let g = __Argument_1;
                let b = __Argument_2;
                let a = __Argument_3;
                let r = r as u8;
                let g = g as u8;
                let b = b as u8;
                let a = a as u8;
                let __Current_result = lv_color32_make(r, g, b, a);
                let __Result = __Result as *mut lv_color32_t;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_color_hex3 => {
                if __Arguments_count != 1 {
                    return;
                }
                let c = __Argument_0;
                let c = c as u32;
                let __Current_result = lv_color_hex3(c);
                let __Result = __Result as *mut lv_color_t;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_color_to_u16 => {
                if __Arguments_count != 1 {
                    return;
                }
                let color = __Argument_0;
                let color = lv_color_t {
                    blue: color as u8,
                    green: (color >> 8) as u8,
                    red: (color >> 16) as u8,
                };
                let __Current_result = lv_color_to_u16(color);
                let __Result = __Result as *mut u16;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_color_to_u32 => {
                if __Arguments_count != 1 {
                    return;
                }
                let color = __Argument_0;
                let color = lv_color_t {
                    blue: color as u8,
                    green: (color >> 8) as u8,
                    red: (color >> 16) as u8,
                };
                let __Current_result = lv_color_to_u32(color);
                let __Result = __Result as *mut u32;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_color_16_16_mix => {
                if __Arguments_count != 3 {
                    return;
                }
                let c1 = __Argument_0;
                let c2 = __Argument_1;
                let mix = __Argument_2;
                let c1 = c1 as u16;
                let c2 = c2 as u16;
                let mix = mix as u8;
                let __Current_result = lv_color_16_16_mix(c1, c2, mix);
                let __Result = __Result as *mut u16;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_color_lighten => {
                if __Arguments_count != 2 {
                    return;
                }
                let c = __Argument_0;
                let lvl = __Argument_1;
                let c = lv_color_t {
                    blue: c as u8,
                    green: (c >> 8) as u8,
                    red: (c >> 16) as u8,
                };
                let lvl = lvl as u8;
                let __Current_result = lv_color_lighten(c, lvl);
                let __Result = __Result as *mut lv_color_t;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_color_darken => {
                if __Arguments_count != 2 {
                    return;
                }
                let c = __Argument_0;
                let lvl = __Argument_1;
                let c = lv_color_t {
                    blue: c as u8,
                    green: (c >> 8) as u8,
                    red: (c >> 16) as u8,
                };
                let lvl = lvl as u8;
                let __Current_result = lv_color_darken(c, lvl);
                let __Result = __Result as *mut lv_color_t;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_color_hsv_to_rgb => {
                if __Arguments_count != 3 {
                    return;
                }
                let h = __Argument_0;
                let s = __Argument_1;
                let v = __Argument_2;
                let h = h as u16;
                let s = s as u8;
                let v = v as u8;
                let __Current_result = lv_color_hsv_to_rgb(h, s, v);
                let __Result = __Result as *mut lv_color_t;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_color_rgb_to_hsv => {
                if __Arguments_count != 3 {
                    return;
                }
                let r8 = __Argument_0;
                let g8 = __Argument_1;
                let b8 = __Argument_2;
                let r8 = r8 as u8;
                let g8 = g8 as u8;
                let b8 = b8 as u8;
                let __Current_result = lv_color_rgb_to_hsv(r8, g8, b8);
                let __Result = __Result as *mut lv_color_hsv_t;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_color_to_hsv => {
                if __Arguments_count != 1 {
                    return;
                }
                let color = __Argument_0;
                let color = lv_color_t {
                    blue: color as u8,
                    green: (color >> 8) as u8,
                    red: (color >> 16) as u8,
                };
                let __Current_result = lv_color_to_hsv(color);
                let __Result = __Result as *mut lv_color_hsv_t;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_color_white => {
                if __Arguments_count != 0 {
                    return;
                }
                let __Current_result = lv_color_white();
                let __Result = __Result as *mut lv_color_t;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_color_black => {
                if __Arguments_count != 0 {
                    return;
                }
                let __Current_result = lv_color_black();
                let __Result = __Result as *mut lv_color_t;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_color_premultiply => {
                if __Arguments_count != 1 {
                    return;
                }
                let c = __Argument_0;
                let c: *mut lv_color32_t = __Environment.Convert_to_native_pointer(c) as *mut _;
                lv_color_premultiply(c);
            }
            Function_calls_type::lv_color16_premultiply => {
                if __Arguments_count != 2 {
                    return;
                }
                let c = __Argument_0;
                let a = __Argument_1;
                let c: *mut lv_color16_t = __Environment.Convert_to_native_pointer(c) as *mut _;
                let a = a as u8;
                lv_color16_premultiply(c, a);
            }
            Function_calls_type::lv_color_luminance => {
                if __Arguments_count != 1 {
                    return;
                }
                let c = __Argument_0;
                let c = lv_color_t {
                    blue: c as u8,
                    green: (c >> 8) as u8,
                    red: (c >> 16) as u8,
                };
                let __Current_result = lv_color_luminance(c);
                let __Result = __Result as *mut u8;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_color16_luminance => {
                if __Arguments_count != 1 {
                    return;
                }
                let c = __Argument_0;
                let c = core::mem::transmute::<u16, lv_color16_t>(c as u16);
                let __Current_result = lv_color16_luminance(c);
                let __Result = __Result as *mut u8;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_color24_luminance => {
                if __Arguments_count != 1 {
                    return;
                }
                let c = __Argument_0;
                let c: *const u8 = __Environment.Convert_to_native_pointer(c) as *mut _;
                let __Current_result = lv_color24_luminance(c);
                let __Result = __Result as *mut u8;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_color32_luminance => {
                if __Arguments_count != 1 {
                    return;
                }
                let c = __Argument_0;
                let c = core::mem::transmute::<u32, lv_color32_t>(c as u32);
                let __Current_result = lv_color32_luminance(c);
                let __Result = __Result as *mut u8;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_color_mix => {
                if __Arguments_count != 3 {
                    return;
                }
                let c1 = __Argument_0;
                let c2 = __Argument_1;
                let mix = __Argument_2;
                let c1 = lv_color_t {
                    blue: c1 as u8,
                    green: (c1 >> 8) as u8,
                    red: (c1 >> 16) as u8,
                };
                let c2 = lv_color_t {
                    blue: c2 as u8,
                    green: (c2 >> 8) as u8,
                    red: (c2 >> 16) as u8,
                };
                let mix = mix as u8;
                let __Current_result = lv_color_mix(c1, c2, mix);
                let __Result = __Result as *mut lv_color_t;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_color_mix32 => {
                if __Arguments_count != 2 {
                    return;
                }
                let fg = __Argument_0;
                let bg = __Argument_1;
                let fg = core::mem::transmute::<u32, lv_color32_t>(fg as u32);
                let bg = core::mem::transmute::<u32, lv_color32_t>(bg as u32);
                let __Current_result = lv_color_mix32(fg, bg);
                let __Result = __Result as *mut lv_color32_t;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_color_brightness => {
                if __Arguments_count != 1 {
                    return;
                }
                let c = __Argument_0;
                let c = lv_color_t {
                    blue: c as u8,
                    green: (c >> 8) as u8,
                    red: (c >> 16) as u8,
                };
                let __Current_result = lv_color_brightness(c);
                let __Result = __Result as *mut u8;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_color_filter_dsc_init => {
                if __Arguments_count != 2 {
                    return;
                }
                let dsc = __Argument_0;
                let cb = __Argument_1;
                let dsc: *mut lv_color_filter_dsc_t =
                    __Environment.Convert_to_native_pointer(dsc) as *mut _;
                let cb = if cb == 0 {
                    core::option::Option::None
                } else {
                    #[allow(clippy::missing_transmute_annotations)]
                    core::option::Option::Some(core::mem::transmute(cb))
                };
                lv_color_filter_dsc_init(dsc, cb);
            }
            Function_calls_type::lv_obj_set_flex_flow => {
                if __Arguments_count != 2 {
                    return;
                }
                let obj = __Argument_0;
                let flow = __Argument_1;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let flow = flow as core::ffi::c_uint;
                lv_obj_set_flex_flow(obj, flow);
            }
            Function_calls_type::lv_obj_set_flex_align => {
                if __Arguments_count != 4 {
                    return;
                }
                let obj = __Argument_0;
                let main_place = __Argument_1;
                let cross_place = __Argument_2;
                let track_cross_place = __Argument_3;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let main_place = main_place as core::ffi::c_uint;
                let cross_place = cross_place as core::ffi::c_uint;
                let track_cross_place = track_cross_place as core::ffi::c_uint;
                lv_obj_set_flex_align(obj, main_place, cross_place, track_cross_place);
            }
            Function_calls_type::lv_obj_set_flex_grow => {
                if __Arguments_count != 2 {
                    return;
                }
                let obj = __Argument_0;
                let grow = __Argument_1;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let grow = grow as u8;
                lv_obj_set_flex_grow(obj, grow);
            }
            Function_calls_type::lv_obj_set_grid_dsc_array => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let col_dsc = __Argument_1;
                let row_dsc = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let col_dsc: *const i32 =
                    __Environment.Convert_to_native_pointer(col_dsc) as *mut _;
                let row_dsc: *const i32 =
                    __Environment.Convert_to_native_pointer(row_dsc) as *mut _;
                lv_obj_set_grid_dsc_array(obj, col_dsc, row_dsc);
            }
            Function_calls_type::lv_obj_set_grid_align => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let column_align = __Argument_1;
                let row_align = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let column_align = column_align as core::ffi::c_uint;
                let row_align = row_align as core::ffi::c_uint;
                lv_obj_set_grid_align(obj, column_align, row_align);
            }
            Function_calls_type::lv_obj_set_grid_cell => {
                if __Arguments_count != 7 {
                    return;
                }
                let obj = __Argument_0;
                let column_align = __Argument_1;
                let col_pos = __Argument_2;
                let col_span = __Argument_3;
                let row_align = __Argument_4;
                let row_pos = __Argument_5;
                let row_span = __Argument_6;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let column_align = column_align as core::ffi::c_uint;
                let col_pos = col_pos as i32;
                let col_span = col_span as i32;
                let row_align = row_align as core::ffi::c_uint;
                let row_pos = row_pos as i32;
                let row_span = row_span as i32;
                lv_obj_set_grid_cell(
                    obj,
                    column_align,
                    col_pos,
                    col_span,
                    row_align,
                    row_pos,
                    row_span,
                );
            }
            Function_calls_type::lv_style_init => {
                if __Arguments_count != 1 {
                    return;
                }
                let style = __Argument_0;
                let style: *mut lv_style_t =
                    __Environment.Convert_to_native_pointer(style) as *mut _;
                lv_style_init(style);
            }
            Function_calls_type::lv_style_reset => {
                if __Arguments_count != 1 {
                    return;
                }
                let style = __Argument_0;
                let style: *mut lv_style_t =
                    __Environment.Convert_to_native_pointer(style) as *mut _;
                lv_style_reset(style);
            }
            Function_calls_type::lv_style_register_prop => {
                if __Arguments_count != 1 {
                    return;
                }
                let flag = __Argument_0;
                let flag = flag as u8;
                let __Current_result = lv_style_register_prop(flag);
                let __Result = __Result as *mut lv_style_prop_t;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_style_get_num_custom_props => {
                if __Arguments_count != 0 {
                    return;
                }
                let __Current_result = lv_style_get_num_custom_props();
                let __Result = __Result as *mut lv_style_prop_t;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_style_remove_prop => {
                if __Arguments_count != 2 {
                    return;
                }
                let style = __Argument_0;
                let prop = __Argument_1;
                let style: *mut lv_style_t =
                    __Environment.Convert_to_native_pointer(style) as *mut _;
                let prop = prop as u8;
                let __Current_result = lv_style_remove_prop(style, prop);
                let __Result = __Result as *mut bool;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_style_set_prop => {
                if __Arguments_count != 3 {
                    return;
                }
                let style = __Argument_0;
                let prop = __Argument_1;
                let value = __Argument_2;
                let style: *mut lv_style_t =
                    __Environment.Convert_to_native_pointer(style) as *mut _;
                let prop = prop as u8;
                let value = value as *mut lv_style_value_t;
                let value = *value;
                lv_style_set_prop(style, prop, value);
            }
            Function_calls_type::lv_style_get_prop => {
                if __Arguments_count != 3 {
                    return;
                }
                let style = __Argument_0;
                let prop = __Argument_1;
                let value = __Argument_2;
                let style: *const lv_style_t =
                    __Environment.Convert_to_native_pointer(style) as *mut _;
                let prop = prop as u8;
                let value: *mut lv_style_value_t =
                    __Environment.Convert_to_native_pointer(value) as *mut _;
                let __Current_result = lv_style_get_prop(style, prop, value);
                let __Result = __Result as *mut lv_style_res_t;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_style_transition_dsc_init => {
                if __Arguments_count != 6 {
                    return;
                }
                let tr = __Argument_0;
                let props = __Argument_1;
                let path_cb = __Argument_2;
                let time = __Argument_3;
                let delay = __Argument_4;
                let user_data = __Argument_5;
                let tr: *mut lv_style_transition_dsc_t =
                    __Environment.Convert_to_native_pointer(tr) as *mut _;
                let props: *const lv_style_prop_t =
                    __Environment.Convert_to_native_pointer(props) as *mut _;
                let path_cb = if path_cb == 0 {
                    core::option::Option::None
                } else {
                    #[allow(clippy::missing_transmute_annotations)]
                    core::option::Option::Some(core::mem::transmute(path_cb))
                };
                let time = time as u32;
                let delay = delay as u32;
                let user_data: *mut core::ffi::c_void =
                    __Environment.Convert_to_native_pointer(user_data) as *mut _;
                lv_style_transition_dsc_init(tr, props, path_cb, time, delay, user_data);
            }
            Function_calls_type::lv_style_prop_get_default => {
                if __Arguments_count != 1 {
                    return;
                }
                let prop = __Argument_0;
                let prop = prop as u8;
                let __Current_result = lv_style_prop_get_default(prop);
                let __Result = __Result as *mut lv_style_value_t;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_style_is_empty => {
                if __Arguments_count != 1 {
                    return;
                }
                let style = __Argument_0;
                let style: *const lv_style_t =
                    __Environment.Convert_to_native_pointer(style) as *mut _;
                let __Current_result = lv_style_is_empty(style);
                let __Result = __Result as *mut bool;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_style_prop_lookup_flags => {
                if __Arguments_count != 1 {
                    return;
                }
                let prop = __Argument_0;
                let prop = prop as u8;
                let __Current_result = lv_style_prop_lookup_flags(prop);
                let __Result = __Result as *mut u8;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_style_set_width => {
                if __Arguments_count != 2 {
                    return;
                }
                let style = __Argument_0;
                let value = __Argument_1;
                let style: *mut lv_style_t =
                    __Environment.Convert_to_native_pointer(style) as *mut _;
                let value = value as i32;
                lv_style_set_width(style, value);
            }
            Function_calls_type::lv_style_set_min_width => {
                if __Arguments_count != 2 {
                    return;
                }
                let style = __Argument_0;
                let value = __Argument_1;
                let style: *mut lv_style_t =
                    __Environment.Convert_to_native_pointer(style) as *mut _;
                let value = value as i32;
                lv_style_set_min_width(style, value);
            }
            Function_calls_type::lv_style_set_max_width => {
                if __Arguments_count != 2 {
                    return;
                }
                let style = __Argument_0;
                let value = __Argument_1;
                let style: *mut lv_style_t =
                    __Environment.Convert_to_native_pointer(style) as *mut _;
                let value = value as i32;
                lv_style_set_max_width(style, value);
            }
            Function_calls_type::lv_style_set_height => {
                if __Arguments_count != 2 {
                    return;
                }
                let style = __Argument_0;
                let value = __Argument_1;
                let style: *mut lv_style_t =
                    __Environment.Convert_to_native_pointer(style) as *mut _;
                let value = value as i32;
                lv_style_set_height(style, value);
            }
            Function_calls_type::lv_style_set_min_height => {
                if __Arguments_count != 2 {
                    return;
                }
                let style = __Argument_0;
                let value = __Argument_1;
                let style: *mut lv_style_t =
                    __Environment.Convert_to_native_pointer(style) as *mut _;
                let value = value as i32;
                lv_style_set_min_height(style, value);
            }
            Function_calls_type::lv_style_set_max_height => {
                if __Arguments_count != 2 {
                    return;
                }
                let style = __Argument_0;
                let value = __Argument_1;
                let style: *mut lv_style_t =
                    __Environment.Convert_to_native_pointer(style) as *mut _;
                let value = value as i32;
                lv_style_set_max_height(style, value);
            }
            Function_calls_type::lv_style_set_length => {
                if __Arguments_count != 2 {
                    return;
                }
                let style = __Argument_0;
                let value = __Argument_1;
                let style: *mut lv_style_t =
                    __Environment.Convert_to_native_pointer(style) as *mut _;
                let value = value as i32;
                lv_style_set_length(style, value);
            }
            Function_calls_type::lv_style_set_x => {
                if __Arguments_count != 2 {
                    return;
                }
                let style = __Argument_0;
                let value = __Argument_1;
                let style: *mut lv_style_t =
                    __Environment.Convert_to_native_pointer(style) as *mut _;
                let value = value as i32;
                lv_style_set_x(style, value);
            }
            Function_calls_type::lv_style_set_y => {
                if __Arguments_count != 2 {
                    return;
                }
                let style = __Argument_0;
                let value = __Argument_1;
                let style: *mut lv_style_t =
                    __Environment.Convert_to_native_pointer(style) as *mut _;
                let value = value as i32;
                lv_style_set_y(style, value);
            }
            Function_calls_type::lv_style_set_align => {
                if __Arguments_count != 2 {
                    return;
                }
                let style = __Argument_0;
                let value = __Argument_1;
                let style: *mut lv_style_t =
                    __Environment.Convert_to_native_pointer(style) as *mut _;
                let value = value as core::ffi::c_uint;
                lv_style_set_align(style, value);
            }
            Function_calls_type::lv_style_set_transform_width => {
                if __Arguments_count != 2 {
                    return;
                }
                let style = __Argument_0;
                let value = __Argument_1;
                let style: *mut lv_style_t =
                    __Environment.Convert_to_native_pointer(style) as *mut _;
                let value = value as i32;
                lv_style_set_transform_width(style, value);
            }
            Function_calls_type::lv_style_set_transform_height => {
                if __Arguments_count != 2 {
                    return;
                }
                let style = __Argument_0;
                let value = __Argument_1;
                let style: *mut lv_style_t =
                    __Environment.Convert_to_native_pointer(style) as *mut _;
                let value = value as i32;
                lv_style_set_transform_height(style, value);
            }
            Function_calls_type::lv_style_set_translate_x => {
                if __Arguments_count != 2 {
                    return;
                }
                let style = __Argument_0;
                let value = __Argument_1;
                let style: *mut lv_style_t =
                    __Environment.Convert_to_native_pointer(style) as *mut _;
                let value = value as i32;
                lv_style_set_translate_x(style, value);
            }
            Function_calls_type::lv_style_set_translate_y => {
                if __Arguments_count != 2 {
                    return;
                }
                let style = __Argument_0;
                let value = __Argument_1;
                let style: *mut lv_style_t =
                    __Environment.Convert_to_native_pointer(style) as *mut _;
                let value = value as i32;
                lv_style_set_translate_y(style, value);
            }
            Function_calls_type::lv_style_set_transform_scale_x => {
                if __Arguments_count != 2 {
                    return;
                }
                let style = __Argument_0;
                let value = __Argument_1;
                let style: *mut lv_style_t =
                    __Environment.Convert_to_native_pointer(style) as *mut _;
                let value = value as i32;
                lv_style_set_transform_scale_x(style, value);
            }
            Function_calls_type::lv_style_set_transform_scale_y => {
                if __Arguments_count != 2 {
                    return;
                }
                let style = __Argument_0;
                let value = __Argument_1;
                let style: *mut lv_style_t =
                    __Environment.Convert_to_native_pointer(style) as *mut _;
                let value = value as i32;
                lv_style_set_transform_scale_y(style, value);
            }
            Function_calls_type::lv_style_set_transform_rotation => {
                if __Arguments_count != 2 {
                    return;
                }
                let style = __Argument_0;
                let value = __Argument_1;
                let style: *mut lv_style_t =
                    __Environment.Convert_to_native_pointer(style) as *mut _;
                let value = value as i32;
                lv_style_set_transform_rotation(style, value);
            }
            Function_calls_type::lv_style_set_transform_pivot_x => {
                if __Arguments_count != 2 {
                    return;
                }
                let style = __Argument_0;
                let value = __Argument_1;
                let style: *mut lv_style_t =
                    __Environment.Convert_to_native_pointer(style) as *mut _;
                let value = value as i32;
                lv_style_set_transform_pivot_x(style, value);
            }
            Function_calls_type::lv_style_set_transform_pivot_y => {
                if __Arguments_count != 2 {
                    return;
                }
                let style = __Argument_0;
                let value = __Argument_1;
                let style: *mut lv_style_t =
                    __Environment.Convert_to_native_pointer(style) as *mut _;
                let value = value as i32;
                lv_style_set_transform_pivot_y(style, value);
            }
            Function_calls_type::lv_style_set_transform_skew_x => {
                if __Arguments_count != 2 {
                    return;
                }
                let style = __Argument_0;
                let value = __Argument_1;
                let style: *mut lv_style_t =
                    __Environment.Convert_to_native_pointer(style) as *mut _;
                let value = value as i32;
                lv_style_set_transform_skew_x(style, value);
            }
            Function_calls_type::lv_style_set_transform_skew_y => {
                if __Arguments_count != 2 {
                    return;
                }
                let style = __Argument_0;
                let value = __Argument_1;
                let style: *mut lv_style_t =
                    __Environment.Convert_to_native_pointer(style) as *mut _;
                let value = value as i32;
                lv_style_set_transform_skew_y(style, value);
            }
            Function_calls_type::lv_style_set_pad_top => {
                if __Arguments_count != 2 {
                    return;
                }
                let style = __Argument_0;
                let value = __Argument_1;
                let style: *mut lv_style_t =
                    __Environment.Convert_to_native_pointer(style) as *mut _;
                let value = value as i32;
                lv_style_set_pad_top(style, value);
            }
            Function_calls_type::lv_style_set_pad_bottom => {
                if __Arguments_count != 2 {
                    return;
                }
                let style = __Argument_0;
                let value = __Argument_1;
                let style: *mut lv_style_t =
                    __Environment.Convert_to_native_pointer(style) as *mut _;
                let value = value as i32;
                lv_style_set_pad_bottom(style, value);
            }
            Function_calls_type::lv_style_set_pad_left => {
                if __Arguments_count != 2 {
                    return;
                }
                let style = __Argument_0;
                let value = __Argument_1;
                let style: *mut lv_style_t =
                    __Environment.Convert_to_native_pointer(style) as *mut _;
                let value = value as i32;
                lv_style_set_pad_left(style, value);
            }
            Function_calls_type::lv_style_set_pad_right => {
                if __Arguments_count != 2 {
                    return;
                }
                let style = __Argument_0;
                let value = __Argument_1;
                let style: *mut lv_style_t =
                    __Environment.Convert_to_native_pointer(style) as *mut _;
                let value = value as i32;
                lv_style_set_pad_right(style, value);
            }
            Function_calls_type::lv_style_set_pad_row => {
                if __Arguments_count != 2 {
                    return;
                }
                let style = __Argument_0;
                let value = __Argument_1;
                let style: *mut lv_style_t =
                    __Environment.Convert_to_native_pointer(style) as *mut _;
                let value = value as i32;
                lv_style_set_pad_row(style, value);
            }
            Function_calls_type::lv_style_set_pad_column => {
                if __Arguments_count != 2 {
                    return;
                }
                let style = __Argument_0;
                let value = __Argument_1;
                let style: *mut lv_style_t =
                    __Environment.Convert_to_native_pointer(style) as *mut _;
                let value = value as i32;
                lv_style_set_pad_column(style, value);
            }
            Function_calls_type::lv_style_set_margin_top => {
                if __Arguments_count != 2 {
                    return;
                }
                let style = __Argument_0;
                let value = __Argument_1;
                let style: *mut lv_style_t =
                    __Environment.Convert_to_native_pointer(style) as *mut _;
                let value = value as i32;
                lv_style_set_margin_top(style, value);
            }
            Function_calls_type::lv_style_set_margin_bottom => {
                if __Arguments_count != 2 {
                    return;
                }
                let style = __Argument_0;
                let value = __Argument_1;
                let style: *mut lv_style_t =
                    __Environment.Convert_to_native_pointer(style) as *mut _;
                let value = value as i32;
                lv_style_set_margin_bottom(style, value);
            }
            Function_calls_type::lv_style_set_margin_left => {
                if __Arguments_count != 2 {
                    return;
                }
                let style = __Argument_0;
                let value = __Argument_1;
                let style: *mut lv_style_t =
                    __Environment.Convert_to_native_pointer(style) as *mut _;
                let value = value as i32;
                lv_style_set_margin_left(style, value);
            }
            Function_calls_type::lv_style_set_margin_right => {
                if __Arguments_count != 2 {
                    return;
                }
                let style = __Argument_0;
                let value = __Argument_1;
                let style: *mut lv_style_t =
                    __Environment.Convert_to_native_pointer(style) as *mut _;
                let value = value as i32;
                lv_style_set_margin_right(style, value);
            }
            Function_calls_type::lv_style_set_bg_color => {
                if __Arguments_count != 2 {
                    return;
                }
                let style = __Argument_0;
                let value = __Argument_1;
                let style: *mut lv_style_t =
                    __Environment.Convert_to_native_pointer(style) as *mut _;
                let value = lv_color_t {
                    blue: value as u8,
                    green: (value >> 8) as u8,
                    red: (value >> 16) as u8,
                };
                lv_style_set_bg_color(style, value);
            }
            Function_calls_type::lv_style_set_bg_opa => {
                if __Arguments_count != 2 {
                    return;
                }
                let style = __Argument_0;
                let value = __Argument_1;
                let style: *mut lv_style_t =
                    __Environment.Convert_to_native_pointer(style) as *mut _;
                let value = value as u8;
                lv_style_set_bg_opa(style, value);
            }
            Function_calls_type::lv_style_set_bg_grad_color => {
                if __Arguments_count != 2 {
                    return;
                }
                let style = __Argument_0;
                let value = __Argument_1;
                let style: *mut lv_style_t =
                    __Environment.Convert_to_native_pointer(style) as *mut _;
                let value = lv_color_t {
                    blue: value as u8,
                    green: (value >> 8) as u8,
                    red: (value >> 16) as u8,
                };
                lv_style_set_bg_grad_color(style, value);
            }
            Function_calls_type::lv_style_set_bg_grad_dir => {
                if __Arguments_count != 2 {
                    return;
                }
                let style = __Argument_0;
                let value = __Argument_1;
                let style: *mut lv_style_t =
                    __Environment.Convert_to_native_pointer(style) as *mut _;
                let value = value as core::ffi::c_uint;
                lv_style_set_bg_grad_dir(style, value);
            }
            Function_calls_type::lv_style_set_bg_main_stop => {
                if __Arguments_count != 2 {
                    return;
                }
                let style = __Argument_0;
                let value = __Argument_1;
                let style: *mut lv_style_t =
                    __Environment.Convert_to_native_pointer(style) as *mut _;
                let value = value as i32;
                lv_style_set_bg_main_stop(style, value);
            }
            Function_calls_type::lv_style_set_bg_grad_stop => {
                if __Arguments_count != 2 {
                    return;
                }
                let style = __Argument_0;
                let value = __Argument_1;
                let style: *mut lv_style_t =
                    __Environment.Convert_to_native_pointer(style) as *mut _;
                let value = value as i32;
                lv_style_set_bg_grad_stop(style, value);
            }
            Function_calls_type::lv_style_set_bg_main_opa => {
                if __Arguments_count != 2 {
                    return;
                }
                let style = __Argument_0;
                let value = __Argument_1;
                let style: *mut lv_style_t =
                    __Environment.Convert_to_native_pointer(style) as *mut _;
                let value = value as u8;
                lv_style_set_bg_main_opa(style, value);
            }
            Function_calls_type::lv_style_set_bg_grad_opa => {
                if __Arguments_count != 2 {
                    return;
                }
                let style = __Argument_0;
                let value = __Argument_1;
                let style: *mut lv_style_t =
                    __Environment.Convert_to_native_pointer(style) as *mut _;
                let value = value as u8;
                lv_style_set_bg_grad_opa(style, value);
            }
            Function_calls_type::lv_style_set_bg_grad => {
                if __Arguments_count != 2 {
                    return;
                }
                let style = __Argument_0;
                let value = __Argument_1;
                let style: *mut lv_style_t =
                    __Environment.Convert_to_native_pointer(style) as *mut _;
                let value: *const lv_grad_dsc_t =
                    __Environment.Convert_to_native_pointer(value) as *mut _;
                lv_style_set_bg_grad(style, value);
            }
            Function_calls_type::lv_style_set_bg_image_src => {
                if __Arguments_count != 2 {
                    return;
                }
                let style = __Argument_0;
                let value = __Argument_1;
                let style: *mut lv_style_t =
                    __Environment.Convert_to_native_pointer(style) as *mut _;
                let value: *const core::ffi::c_void =
                    __Environment.Convert_to_native_pointer(value) as *mut _;
                lv_style_set_bg_image_src(style, value);
            }
            Function_calls_type::lv_style_set_bg_image_opa => {
                if __Arguments_count != 2 {
                    return;
                }
                let style = __Argument_0;
                let value = __Argument_1;
                let style: *mut lv_style_t =
                    __Environment.Convert_to_native_pointer(style) as *mut _;
                let value = value as u8;
                lv_style_set_bg_image_opa(style, value);
            }
            Function_calls_type::lv_style_set_bg_image_recolor => {
                if __Arguments_count != 2 {
                    return;
                }
                let style = __Argument_0;
                let value = __Argument_1;
                let style: *mut lv_style_t =
                    __Environment.Convert_to_native_pointer(style) as *mut _;
                let value = lv_color_t {
                    blue: value as u8,
                    green: (value >> 8) as u8,
                    red: (value >> 16) as u8,
                };
                lv_style_set_bg_image_recolor(style, value);
            }
            Function_calls_type::lv_style_set_bg_image_recolor_opa => {
                if __Arguments_count != 2 {
                    return;
                }
                let style = __Argument_0;
                let value = __Argument_1;
                let style: *mut lv_style_t =
                    __Environment.Convert_to_native_pointer(style) as *mut _;
                let value = value as u8;
                lv_style_set_bg_image_recolor_opa(style, value);
            }
            Function_calls_type::lv_style_set_bg_image_tiled => {
                if __Arguments_count != 2 {
                    return;
                }
                let style = __Argument_0;
                let value = __Argument_1;
                let style: *mut lv_style_t =
                    __Environment.Convert_to_native_pointer(style) as *mut _;
                let value = value != 0;
                lv_style_set_bg_image_tiled(style, value);
            }
            Function_calls_type::lv_style_set_border_color => {
                if __Arguments_count != 2 {
                    return;
                }
                let style = __Argument_0;
                let value = __Argument_1;
                let style: *mut lv_style_t =
                    __Environment.Convert_to_native_pointer(style) as *mut _;
                let value = lv_color_t {
                    blue: value as u8,
                    green: (value >> 8) as u8,
                    red: (value >> 16) as u8,
                };
                lv_style_set_border_color(style, value);
            }
            Function_calls_type::lv_style_set_border_opa => {
                if __Arguments_count != 2 {
                    return;
                }
                let style = __Argument_0;
                let value = __Argument_1;
                let style: *mut lv_style_t =
                    __Environment.Convert_to_native_pointer(style) as *mut _;
                let value = value as u8;
                lv_style_set_border_opa(style, value);
            }
            Function_calls_type::lv_style_set_border_width => {
                if __Arguments_count != 2 {
                    return;
                }
                let style = __Argument_0;
                let value = __Argument_1;
                let style: *mut lv_style_t =
                    __Environment.Convert_to_native_pointer(style) as *mut _;
                let value = value as i32;
                lv_style_set_border_width(style, value);
            }
            Function_calls_type::lv_style_set_border_side => {
                if __Arguments_count != 2 {
                    return;
                }
                let style = __Argument_0;
                let value = __Argument_1;
                let style: *mut lv_style_t =
                    __Environment.Convert_to_native_pointer(style) as *mut _;
                let value = value as core::ffi::c_uint;
                lv_style_set_border_side(style, value);
            }
            Function_calls_type::lv_style_set_border_post => {
                if __Arguments_count != 2 {
                    return;
                }
                let style = __Argument_0;
                let value = __Argument_1;
                let style: *mut lv_style_t =
                    __Environment.Convert_to_native_pointer(style) as *mut _;
                let value = value != 0;
                lv_style_set_border_post(style, value);
            }
            Function_calls_type::lv_style_set_outline_width => {
                if __Arguments_count != 2 {
                    return;
                }
                let style = __Argument_0;
                let value = __Argument_1;
                let style: *mut lv_style_t =
                    __Environment.Convert_to_native_pointer(style) as *mut _;
                let value = value as i32;
                lv_style_set_outline_width(style, value);
            }
            Function_calls_type::lv_style_set_outline_color => {
                if __Arguments_count != 2 {
                    return;
                }
                let style = __Argument_0;
                let value = __Argument_1;
                let style: *mut lv_style_t =
                    __Environment.Convert_to_native_pointer(style) as *mut _;
                let value = lv_color_t {
                    blue: value as u8,
                    green: (value >> 8) as u8,
                    red: (value >> 16) as u8,
                };
                lv_style_set_outline_color(style, value);
            }
            Function_calls_type::lv_style_set_outline_opa => {
                if __Arguments_count != 2 {
                    return;
                }
                let style = __Argument_0;
                let value = __Argument_1;
                let style: *mut lv_style_t =
                    __Environment.Convert_to_native_pointer(style) as *mut _;
                let value = value as u8;
                lv_style_set_outline_opa(style, value);
            }
            Function_calls_type::lv_style_set_outline_pad => {
                if __Arguments_count != 2 {
                    return;
                }
                let style = __Argument_0;
                let value = __Argument_1;
                let style: *mut lv_style_t =
                    __Environment.Convert_to_native_pointer(style) as *mut _;
                let value = value as i32;
                lv_style_set_outline_pad(style, value);
            }
            Function_calls_type::lv_style_set_shadow_width => {
                if __Arguments_count != 2 {
                    return;
                }
                let style = __Argument_0;
                let value = __Argument_1;
                let style: *mut lv_style_t =
                    __Environment.Convert_to_native_pointer(style) as *mut _;
                let value = value as i32;
                lv_style_set_shadow_width(style, value);
            }
            Function_calls_type::lv_style_set_shadow_offset_x => {
                if __Arguments_count != 2 {
                    return;
                }
                let style = __Argument_0;
                let value = __Argument_1;
                let style: *mut lv_style_t =
                    __Environment.Convert_to_native_pointer(style) as *mut _;
                let value = value as i32;
                lv_style_set_shadow_offset_x(style, value);
            }
            Function_calls_type::lv_style_set_shadow_offset_y => {
                if __Arguments_count != 2 {
                    return;
                }
                let style = __Argument_0;
                let value = __Argument_1;
                let style: *mut lv_style_t =
                    __Environment.Convert_to_native_pointer(style) as *mut _;
                let value = value as i32;
                lv_style_set_shadow_offset_y(style, value);
            }
            Function_calls_type::lv_style_set_shadow_spread => {
                if __Arguments_count != 2 {
                    return;
                }
                let style = __Argument_0;
                let value = __Argument_1;
                let style: *mut lv_style_t =
                    __Environment.Convert_to_native_pointer(style) as *mut _;
                let value = value as i32;
                lv_style_set_shadow_spread(style, value);
            }
            Function_calls_type::lv_style_set_shadow_color => {
                if __Arguments_count != 2 {
                    return;
                }
                let style = __Argument_0;
                let value = __Argument_1;
                let style: *mut lv_style_t =
                    __Environment.Convert_to_native_pointer(style) as *mut _;
                let value = lv_color_t {
                    blue: value as u8,
                    green: (value >> 8) as u8,
                    red: (value >> 16) as u8,
                };
                lv_style_set_shadow_color(style, value);
            }
            Function_calls_type::lv_style_set_shadow_opa => {
                if __Arguments_count != 2 {
                    return;
                }
                let style = __Argument_0;
                let value = __Argument_1;
                let style: *mut lv_style_t =
                    __Environment.Convert_to_native_pointer(style) as *mut _;
                let value = value as u8;
                lv_style_set_shadow_opa(style, value);
            }
            Function_calls_type::lv_style_set_image_opa => {
                if __Arguments_count != 2 {
                    return;
                }
                let style = __Argument_0;
                let value = __Argument_1;
                let style: *mut lv_style_t =
                    __Environment.Convert_to_native_pointer(style) as *mut _;
                let value = value as u8;
                lv_style_set_image_opa(style, value);
            }
            Function_calls_type::lv_style_set_image_recolor => {
                if __Arguments_count != 2 {
                    return;
                }
                let style = __Argument_0;
                let value = __Argument_1;
                let style: *mut lv_style_t =
                    __Environment.Convert_to_native_pointer(style) as *mut _;
                let value = lv_color_t {
                    blue: value as u8,
                    green: (value >> 8) as u8,
                    red: (value >> 16) as u8,
                };
                lv_style_set_image_recolor(style, value);
            }
            Function_calls_type::lv_style_set_image_recolor_opa => {
                if __Arguments_count != 2 {
                    return;
                }
                let style = __Argument_0;
                let value = __Argument_1;
                let style: *mut lv_style_t =
                    __Environment.Convert_to_native_pointer(style) as *mut _;
                let value = value as u8;
                lv_style_set_image_recolor_opa(style, value);
            }
            Function_calls_type::lv_style_set_line_width => {
                if __Arguments_count != 2 {
                    return;
                }
                let style = __Argument_0;
                let value = __Argument_1;
                let style: *mut lv_style_t =
                    __Environment.Convert_to_native_pointer(style) as *mut _;
                let value = value as i32;
                lv_style_set_line_width(style, value);
            }
            Function_calls_type::lv_style_set_line_dash_width => {
                if __Arguments_count != 2 {
                    return;
                }
                let style = __Argument_0;
                let value = __Argument_1;
                let style: *mut lv_style_t =
                    __Environment.Convert_to_native_pointer(style) as *mut _;
                let value = value as i32;
                lv_style_set_line_dash_width(style, value);
            }
            Function_calls_type::lv_style_set_line_dash_gap => {
                if __Arguments_count != 2 {
                    return;
                }
                let style = __Argument_0;
                let value = __Argument_1;
                let style: *mut lv_style_t =
                    __Environment.Convert_to_native_pointer(style) as *mut _;
                let value = value as i32;
                lv_style_set_line_dash_gap(style, value);
            }
            Function_calls_type::lv_style_set_line_rounded => {
                if __Arguments_count != 2 {
                    return;
                }
                let style = __Argument_0;
                let value = __Argument_1;
                let style: *mut lv_style_t =
                    __Environment.Convert_to_native_pointer(style) as *mut _;
                let value = value != 0;
                lv_style_set_line_rounded(style, value);
            }
            Function_calls_type::lv_style_set_line_color => {
                if __Arguments_count != 2 {
                    return;
                }
                let style = __Argument_0;
                let value = __Argument_1;
                let style: *mut lv_style_t =
                    __Environment.Convert_to_native_pointer(style) as *mut _;
                let value = lv_color_t {
                    blue: value as u8,
                    green: (value >> 8) as u8,
                    red: (value >> 16) as u8,
                };
                lv_style_set_line_color(style, value);
            }
            Function_calls_type::lv_style_set_line_opa => {
                if __Arguments_count != 2 {
                    return;
                }
                let style = __Argument_0;
                let value = __Argument_1;
                let style: *mut lv_style_t =
                    __Environment.Convert_to_native_pointer(style) as *mut _;
                let value = value as u8;
                lv_style_set_line_opa(style, value);
            }
            Function_calls_type::lv_style_set_arc_width => {
                if __Arguments_count != 2 {
                    return;
                }
                let style = __Argument_0;
                let value = __Argument_1;
                let style: *mut lv_style_t =
                    __Environment.Convert_to_native_pointer(style) as *mut _;
                let value = value as i32;
                lv_style_set_arc_width(style, value);
            }
            Function_calls_type::lv_style_set_arc_rounded => {
                if __Arguments_count != 2 {
                    return;
                }
                let style = __Argument_0;
                let value = __Argument_1;
                let style: *mut lv_style_t =
                    __Environment.Convert_to_native_pointer(style) as *mut _;
                let value = value != 0;
                lv_style_set_arc_rounded(style, value);
            }
            Function_calls_type::lv_style_set_arc_color => {
                if __Arguments_count != 2 {
                    return;
                }
                let style = __Argument_0;
                let value = __Argument_1;
                let style: *mut lv_style_t =
                    __Environment.Convert_to_native_pointer(style) as *mut _;
                let value = lv_color_t {
                    blue: value as u8,
                    green: (value >> 8) as u8,
                    red: (value >> 16) as u8,
                };
                lv_style_set_arc_color(style, value);
            }
            Function_calls_type::lv_style_set_arc_opa => {
                if __Arguments_count != 2 {
                    return;
                }
                let style = __Argument_0;
                let value = __Argument_1;
                let style: *mut lv_style_t =
                    __Environment.Convert_to_native_pointer(style) as *mut _;
                let value = value as u8;
                lv_style_set_arc_opa(style, value);
            }
            Function_calls_type::lv_style_set_arc_image_src => {
                if __Arguments_count != 2 {
                    return;
                }
                let style = __Argument_0;
                let value = __Argument_1;
                let style: *mut lv_style_t =
                    __Environment.Convert_to_native_pointer(style) as *mut _;
                let value: *const core::ffi::c_void =
                    __Environment.Convert_to_native_pointer(value) as *mut _;
                lv_style_set_arc_image_src(style, value);
            }
            Function_calls_type::lv_style_set_text_color => {
                if __Arguments_count != 2 {
                    return;
                }
                let style = __Argument_0;
                let value = __Argument_1;
                let style: *mut lv_style_t =
                    __Environment.Convert_to_native_pointer(style) as *mut _;
                let value = lv_color_t {
                    blue: value as u8,
                    green: (value >> 8) as u8,
                    red: (value >> 16) as u8,
                };
                lv_style_set_text_color(style, value);
            }
            Function_calls_type::lv_style_set_text_opa => {
                if __Arguments_count != 2 {
                    return;
                }
                let style = __Argument_0;
                let value = __Argument_1;
                let style: *mut lv_style_t =
                    __Environment.Convert_to_native_pointer(style) as *mut _;
                let value = value as u8;
                lv_style_set_text_opa(style, value);
            }
            Function_calls_type::lv_style_set_text_font => {
                if __Arguments_count != 2 {
                    return;
                }
                let style = __Argument_0;
                let value = __Argument_1;
                let style: *mut lv_style_t =
                    __Environment.Convert_to_native_pointer(style) as *mut _;
                let value: *const lv_font_t =
                    __Environment.Convert_to_native_pointer(value) as *mut _;
                lv_style_set_text_font(style, value);
            }
            Function_calls_type::lv_style_set_text_letter_space => {
                if __Arguments_count != 2 {
                    return;
                }
                let style = __Argument_0;
                let value = __Argument_1;
                let style: *mut lv_style_t =
                    __Environment.Convert_to_native_pointer(style) as *mut _;
                let value = value as i32;
                lv_style_set_text_letter_space(style, value);
            }
            Function_calls_type::lv_style_set_text_line_space => {
                if __Arguments_count != 2 {
                    return;
                }
                let style = __Argument_0;
                let value = __Argument_1;
                let style: *mut lv_style_t =
                    __Environment.Convert_to_native_pointer(style) as *mut _;
                let value = value as i32;
                lv_style_set_text_line_space(style, value);
            }
            Function_calls_type::lv_style_set_text_decor => {
                if __Arguments_count != 2 {
                    return;
                }
                let style = __Argument_0;
                let value = __Argument_1;
                let style: *mut lv_style_t =
                    __Environment.Convert_to_native_pointer(style) as *mut _;
                let value = value as core::ffi::c_uint;
                lv_style_set_text_decor(style, value);
            }
            Function_calls_type::lv_style_set_text_align => {
                if __Arguments_count != 2 {
                    return;
                }
                let style = __Argument_0;
                let value = __Argument_1;
                let style: *mut lv_style_t =
                    __Environment.Convert_to_native_pointer(style) as *mut _;
                let value = value as core::ffi::c_uint;
                lv_style_set_text_align(style, value);
            }
            Function_calls_type::lv_style_set_radius => {
                if __Arguments_count != 2 {
                    return;
                }
                let style = __Argument_0;
                let value = __Argument_1;
                let style: *mut lv_style_t =
                    __Environment.Convert_to_native_pointer(style) as *mut _;
                let value = value as i32;
                lv_style_set_radius(style, value);
            }
            Function_calls_type::lv_style_set_clip_corner => {
                if __Arguments_count != 2 {
                    return;
                }
                let style = __Argument_0;
                let value = __Argument_1;
                let style: *mut lv_style_t =
                    __Environment.Convert_to_native_pointer(style) as *mut _;
                let value = value != 0;
                lv_style_set_clip_corner(style, value);
            }
            Function_calls_type::lv_style_set_opa => {
                if __Arguments_count != 2 {
                    return;
                }
                let style = __Argument_0;
                let value = __Argument_1;
                let style: *mut lv_style_t =
                    __Environment.Convert_to_native_pointer(style) as *mut _;
                let value = value as u8;
                lv_style_set_opa(style, value);
            }
            Function_calls_type::lv_style_set_opa_layered => {
                if __Arguments_count != 2 {
                    return;
                }
                let style = __Argument_0;
                let value = __Argument_1;
                let style: *mut lv_style_t =
                    __Environment.Convert_to_native_pointer(style) as *mut _;
                let value = value as u8;
                lv_style_set_opa_layered(style, value);
            }
            Function_calls_type::lv_style_set_color_filter_dsc => {
                if __Arguments_count != 2 {
                    return;
                }
                let style = __Argument_0;
                let value = __Argument_1;
                let style: *mut lv_style_t =
                    __Environment.Convert_to_native_pointer(style) as *mut _;
                let value: *const lv_color_filter_dsc_t =
                    __Environment.Convert_to_native_pointer(value) as *mut _;
                lv_style_set_color_filter_dsc(style, value);
            }
            Function_calls_type::lv_style_set_color_filter_opa => {
                if __Arguments_count != 2 {
                    return;
                }
                let style = __Argument_0;
                let value = __Argument_1;
                let style: *mut lv_style_t =
                    __Environment.Convert_to_native_pointer(style) as *mut _;
                let value = value as u8;
                lv_style_set_color_filter_opa(style, value);
            }
            Function_calls_type::lv_style_set_anim => {
                if __Arguments_count != 2 {
                    return;
                }
                let style = __Argument_0;
                let value = __Argument_1;
                let style: *mut lv_style_t =
                    __Environment.Convert_to_native_pointer(style) as *mut _;
                let value: *const lv_anim_t =
                    __Environment.Convert_to_native_pointer(value) as *mut _;
                lv_style_set_anim(style, value);
            }
            Function_calls_type::lv_style_set_anim_duration => {
                if __Arguments_count != 2 {
                    return;
                }
                let style = __Argument_0;
                let value = __Argument_1;
                let style: *mut lv_style_t =
                    __Environment.Convert_to_native_pointer(style) as *mut _;
                let value = value as u32;
                lv_style_set_anim_duration(style, value);
            }
            Function_calls_type::lv_style_set_transition => {
                if __Arguments_count != 2 {
                    return;
                }
                let style = __Argument_0;
                let value = __Argument_1;
                let style: *mut lv_style_t =
                    __Environment.Convert_to_native_pointer(style) as *mut _;
                let value: *const lv_style_transition_dsc_t =
                    __Environment.Convert_to_native_pointer(value) as *mut _;
                lv_style_set_transition(style, value);
            }
            Function_calls_type::lv_style_set_blend_mode => {
                if __Arguments_count != 2 {
                    return;
                }
                let style = __Argument_0;
                let value = __Argument_1;
                let style: *mut lv_style_t =
                    __Environment.Convert_to_native_pointer(style) as *mut _;
                let value = value as core::ffi::c_uint;
                lv_style_set_blend_mode(style, value);
            }
            Function_calls_type::lv_style_set_layout => {
                if __Arguments_count != 2 {
                    return;
                }
                let style = __Argument_0;
                let value = __Argument_1;
                let style: *mut lv_style_t =
                    __Environment.Convert_to_native_pointer(style) as *mut _;
                let value = value as u16;
                lv_style_set_layout(style, value);
            }
            Function_calls_type::lv_style_set_base_dir => {
                if __Arguments_count != 2 {
                    return;
                }
                let style = __Argument_0;
                let value = __Argument_1;
                let style: *mut lv_style_t =
                    __Environment.Convert_to_native_pointer(style) as *mut _;
                let value = value as core::ffi::c_uint;
                lv_style_set_base_dir(style, value);
            }
            Function_calls_type::lv_style_set_bitmap_mask_src => {
                if __Arguments_count != 2 {
                    return;
                }
                let style = __Argument_0;
                let value = __Argument_1;
                let style: *mut lv_style_t =
                    __Environment.Convert_to_native_pointer(style) as *mut _;
                let value: *const core::ffi::c_void =
                    __Environment.Convert_to_native_pointer(value) as *mut _;
                lv_style_set_bitmap_mask_src(style, value);
            }
            Function_calls_type::lv_style_set_rotary_sensitivity => {
                if __Arguments_count != 2 {
                    return;
                }
                let style = __Argument_0;
                let value = __Argument_1;
                let style: *mut lv_style_t =
                    __Environment.Convert_to_native_pointer(style) as *mut _;
                let value = value as u32;
                lv_style_set_rotary_sensitivity(style, value);
            }
            Function_calls_type::lv_style_set_flex_flow => {
                if __Arguments_count != 2 {
                    return;
                }
                let style = __Argument_0;
                let value = __Argument_1;
                let style: *mut lv_style_t =
                    __Environment.Convert_to_native_pointer(style) as *mut _;
                let value = value as core::ffi::c_uint;
                lv_style_set_flex_flow(style, value);
            }
            Function_calls_type::lv_style_set_flex_main_place => {
                if __Arguments_count != 2 {
                    return;
                }
                let style = __Argument_0;
                let value = __Argument_1;
                let style: *mut lv_style_t =
                    __Environment.Convert_to_native_pointer(style) as *mut _;
                let value = value as core::ffi::c_uint;
                lv_style_set_flex_main_place(style, value);
            }
            Function_calls_type::lv_style_set_flex_cross_place => {
                if __Arguments_count != 2 {
                    return;
                }
                let style = __Argument_0;
                let value = __Argument_1;
                let style: *mut lv_style_t =
                    __Environment.Convert_to_native_pointer(style) as *mut _;
                let value = value as core::ffi::c_uint;
                lv_style_set_flex_cross_place(style, value);
            }
            Function_calls_type::lv_style_set_flex_track_place => {
                if __Arguments_count != 2 {
                    return;
                }
                let style = __Argument_0;
                let value = __Argument_1;
                let style: *mut lv_style_t =
                    __Environment.Convert_to_native_pointer(style) as *mut _;
                let value = value as core::ffi::c_uint;
                lv_style_set_flex_track_place(style, value);
            }
            Function_calls_type::lv_style_set_flex_grow => {
                if __Arguments_count != 2 {
                    return;
                }
                let style = __Argument_0;
                let value = __Argument_1;
                let style: *mut lv_style_t =
                    __Environment.Convert_to_native_pointer(style) as *mut _;
                let value = value as u8;
                lv_style_set_flex_grow(style, value);
            }
            Function_calls_type::lv_style_set_grid_column_dsc_array => {
                if __Arguments_count != 2 {
                    return;
                }
                let style = __Argument_0;
                let value = __Argument_1;
                let style: *mut lv_style_t =
                    __Environment.Convert_to_native_pointer(style) as *mut _;
                let value: *const i32 = __Environment.Convert_to_native_pointer(value) as *mut _;
                lv_style_set_grid_column_dsc_array(style, value);
            }
            Function_calls_type::lv_style_set_grid_column_align => {
                if __Arguments_count != 2 {
                    return;
                }
                let style = __Argument_0;
                let value = __Argument_1;
                let style: *mut lv_style_t =
                    __Environment.Convert_to_native_pointer(style) as *mut _;
                let value = value as core::ffi::c_uint;
                lv_style_set_grid_column_align(style, value);
            }
            Function_calls_type::lv_style_set_grid_row_dsc_array => {
                if __Arguments_count != 2 {
                    return;
                }
                let style = __Argument_0;
                let value = __Argument_1;
                let style: *mut lv_style_t =
                    __Environment.Convert_to_native_pointer(style) as *mut _;
                let value: *const i32 = __Environment.Convert_to_native_pointer(value) as *mut _;
                lv_style_set_grid_row_dsc_array(style, value);
            }
            Function_calls_type::lv_style_set_grid_row_align => {
                if __Arguments_count != 2 {
                    return;
                }
                let style = __Argument_0;
                let value = __Argument_1;
                let style: *mut lv_style_t =
                    __Environment.Convert_to_native_pointer(style) as *mut _;
                let value = value as core::ffi::c_uint;
                lv_style_set_grid_row_align(style, value);
            }
            Function_calls_type::lv_style_set_grid_cell_column_pos => {
                if __Arguments_count != 2 {
                    return;
                }
                let style = __Argument_0;
                let value = __Argument_1;
                let style: *mut lv_style_t =
                    __Environment.Convert_to_native_pointer(style) as *mut _;
                let value = value as i32;
                lv_style_set_grid_cell_column_pos(style, value);
            }
            Function_calls_type::lv_style_set_grid_cell_x_align => {
                if __Arguments_count != 2 {
                    return;
                }
                let style = __Argument_0;
                let value = __Argument_1;
                let style: *mut lv_style_t =
                    __Environment.Convert_to_native_pointer(style) as *mut _;
                let value = value as core::ffi::c_uint;
                lv_style_set_grid_cell_x_align(style, value);
            }
            Function_calls_type::lv_style_set_grid_cell_column_span => {
                if __Arguments_count != 2 {
                    return;
                }
                let style = __Argument_0;
                let value = __Argument_1;
                let style: *mut lv_style_t =
                    __Environment.Convert_to_native_pointer(style) as *mut _;
                let value = value as i32;
                lv_style_set_grid_cell_column_span(style, value);
            }
            Function_calls_type::lv_style_set_grid_cell_row_pos => {
                if __Arguments_count != 2 {
                    return;
                }
                let style = __Argument_0;
                let value = __Argument_1;
                let style: *mut lv_style_t =
                    __Environment.Convert_to_native_pointer(style) as *mut _;
                let value = value as i32;
                lv_style_set_grid_cell_row_pos(style, value);
            }
            Function_calls_type::lv_style_set_grid_cell_y_align => {
                if __Arguments_count != 2 {
                    return;
                }
                let style = __Argument_0;
                let value = __Argument_1;
                let style: *mut lv_style_t =
                    __Environment.Convert_to_native_pointer(style) as *mut _;
                let value = value as core::ffi::c_uint;
                lv_style_set_grid_cell_y_align(style, value);
            }
            Function_calls_type::lv_style_set_grid_cell_row_span => {
                if __Arguments_count != 2 {
                    return;
                }
                let style = __Argument_0;
                let value = __Argument_1;
                let style: *mut lv_style_t =
                    __Environment.Convert_to_native_pointer(style) as *mut _;
                let value = value as i32;
                lv_style_set_grid_cell_row_span(style, value);
            }
            Function_calls_type::lv_obj_delete => {
                if __Arguments_count != 1 {
                    return;
                }
                let obj = __Argument_0;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                lv_obj_delete(obj);
            }
            Function_calls_type::lv_obj_clean => {
                if __Arguments_count != 1 {
                    return;
                }
                let obj = __Argument_0;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                lv_obj_clean(obj);
            }
            Function_calls_type::lv_obj_delete_delayed => {
                if __Arguments_count != 2 {
                    return;
                }
                let obj = __Argument_0;
                let delay_ms = __Argument_1;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let delay_ms = delay_ms as u32;
                lv_obj_delete_delayed(obj, delay_ms);
            }
            Function_calls_type::lv_obj_delete_anim_completed_cb => {
                if __Arguments_count != 1 {
                    return;
                }
                let a = __Argument_0;
                let a: *mut lv_anim_t = __Environment.Convert_to_native_pointer(a) as *mut _;
                lv_obj_delete_anim_completed_cb(a);
            }
            Function_calls_type::lv_obj_delete_async => {
                if __Arguments_count != 1 {
                    return;
                }
                let obj = __Argument_0;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                lv_obj_delete_async(obj);
            }
            Function_calls_type::lv_obj_set_parent => {
                if __Arguments_count != 2 {
                    return;
                }
                let obj = __Argument_0;
                let parent = __Argument_1;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let parent: *mut lv_obj_t =
                    __Environment.Convert_to_native_pointer(parent) as *mut _;
                lv_obj_set_parent(obj, parent);
            }
            Function_calls_type::lv_obj_swap => {
                if __Arguments_count != 2 {
                    return;
                }
                let obj1 = __Argument_0;
                let obj2 = __Argument_1;
                let obj1: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj1) as *mut _;
                let obj2: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj2) as *mut _;
                lv_obj_swap(obj1, obj2);
            }
            Function_calls_type::lv_obj_move_to_index => {
                if __Arguments_count != 2 {
                    return;
                }
                let obj = __Argument_0;
                let index = __Argument_1;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let index = index as i32;
                lv_obj_move_to_index(obj, index);
            }
            Function_calls_type::lv_obj_get_screen => {
                if __Arguments_count != 1 {
                    return;
                }
                let obj = __Argument_0;
                let obj: *const lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let __Current_result = lv_obj_get_screen(obj);
                let __Current_result = __Environment.Convert_to_WASM_pointer(__Current_result);
                let __Result = __Result as *mut WASM_pointer_type;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_obj_get_parent => {
                if __Arguments_count != 1 {
                    return;
                }
                let obj = __Argument_0;
                let obj: *const lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let __Current_result = lv_obj_get_parent(obj);
                let __Current_result = __Environment.Convert_to_WASM_pointer(__Current_result);
                let __Result = __Result as *mut WASM_pointer_type;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_obj_get_child => {
                if __Arguments_count != 2 {
                    return;
                }
                let obj = __Argument_0;
                let idx = __Argument_1;
                let obj: *const lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let idx = idx as i32;
                let __Current_result = lv_obj_get_child(obj, idx);
                let __Current_result = __Environment.Convert_to_WASM_pointer(__Current_result);
                let __Result = __Result as *mut WASM_pointer_type;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_obj_get_child_by_type => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let idx = __Argument_1;
                let class_p = __Argument_2;
                let obj: *const lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let idx = idx as i32;
                let class_p: *const lv_obj_class_t =
                    __Environment.Convert_to_native_pointer(class_p) as *mut _;
                let __Current_result = lv_obj_get_child_by_type(obj, idx, class_p);
                let __Current_result = __Environment.Convert_to_WASM_pointer(__Current_result);
                let __Result = __Result as *mut WASM_pointer_type;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_obj_get_sibling => {
                if __Arguments_count != 2 {
                    return;
                }
                let obj = __Argument_0;
                let idx = __Argument_1;
                let obj: *const lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let idx = idx as i32;
                let __Current_result = lv_obj_get_sibling(obj, idx);
                let __Current_result = __Environment.Convert_to_WASM_pointer(__Current_result);
                let __Result = __Result as *mut WASM_pointer_type;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_obj_get_sibling_by_type => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let idx = __Argument_1;
                let class_p = __Argument_2;
                let obj: *const lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let idx = idx as i32;
                let class_p: *const lv_obj_class_t =
                    __Environment.Convert_to_native_pointer(class_p) as *mut _;
                let __Current_result = lv_obj_get_sibling_by_type(obj, idx, class_p);
                let __Current_result = __Environment.Convert_to_WASM_pointer(__Current_result);
                let __Result = __Result as *mut WASM_pointer_type;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_obj_get_child_count => {
                if __Arguments_count != 1 {
                    return;
                }
                let obj = __Argument_0;
                let obj: *const lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let __Current_result = lv_obj_get_child_count(obj);
                let __Result = __Result as *mut u32;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_obj_get_child_count_by_type => {
                if __Arguments_count != 2 {
                    return;
                }
                let obj = __Argument_0;
                let class_p = __Argument_1;
                let obj: *const lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let class_p: *const lv_obj_class_t =
                    __Environment.Convert_to_native_pointer(class_p) as *mut _;
                let __Current_result = lv_obj_get_child_count_by_type(obj, class_p);
                let __Result = __Result as *mut u32;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_obj_get_index => {
                if __Arguments_count != 1 {
                    return;
                }
                let obj = __Argument_0;
                let obj: *const lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let __Current_result = lv_obj_get_index(obj);
                let __Result = __Result as *mut i32;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_obj_get_index_by_type => {
                if __Arguments_count != 2 {
                    return;
                }
                let obj = __Argument_0;
                let class_p = __Argument_1;
                let obj: *const lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let class_p: *const lv_obj_class_t =
                    __Environment.Convert_to_native_pointer(class_p) as *mut _;
                let __Current_result = lv_obj_get_index_by_type(obj, class_p);
                let __Result = __Result as *mut i32;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_obj_tree_walk => {
                if __Arguments_count != 3 {
                    return;
                }
                let start_obj = __Argument_0;
                let cb = __Argument_1;
                let user_data = __Argument_2;
                let start_obj: *mut lv_obj_t =
                    __Environment.Convert_to_native_pointer(start_obj) as *mut _;
                let cb = if cb == 0 {
                    core::option::Option::None
                } else {
                    #[allow(clippy::missing_transmute_annotations)]
                    core::option::Option::Some(core::mem::transmute(cb))
                };
                let user_data: *mut core::ffi::c_void =
                    __Environment.Convert_to_native_pointer(user_data) as *mut _;
                lv_obj_tree_walk(start_obj, cb, user_data);
            }
            Function_calls_type::lv_obj_dump_tree => {
                if __Arguments_count != 1 {
                    return;
                }
                let start_obj = __Argument_0;
                let start_obj: *mut lv_obj_t =
                    __Environment.Convert_to_native_pointer(start_obj) as *mut _;
                lv_obj_dump_tree(start_obj);
            }
            Function_calls_type::lv_obj_set_pos => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let x = __Argument_1;
                let y = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let x = x as i32;
                let y = y as i32;
                lv_obj_set_pos(obj, x, y);
            }
            Function_calls_type::lv_obj_set_x => {
                if __Arguments_count != 2 {
                    return;
                }
                let obj = __Argument_0;
                let x = __Argument_1;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let x = x as i32;
                lv_obj_set_x(obj, x);
            }
            Function_calls_type::lv_obj_set_y => {
                if __Arguments_count != 2 {
                    return;
                }
                let obj = __Argument_0;
                let y = __Argument_1;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let y = y as i32;
                lv_obj_set_y(obj, y);
            }
            Function_calls_type::lv_obj_set_size => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let w = __Argument_1;
                let h = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let w = w as i32;
                let h = h as i32;
                lv_obj_set_size(obj, w, h);
            }
            Function_calls_type::lv_obj_refr_size => {
                if __Arguments_count != 1 {
                    return;
                }
                let obj = __Argument_0;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let __Current_result = lv_obj_refr_size(obj);
                let __Result = __Result as *mut bool;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_obj_set_width => {
                if __Arguments_count != 2 {
                    return;
                }
                let obj = __Argument_0;
                let w = __Argument_1;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let w = w as i32;
                lv_obj_set_width(obj, w);
            }
            Function_calls_type::lv_obj_set_height => {
                if __Arguments_count != 2 {
                    return;
                }
                let obj = __Argument_0;
                let h = __Argument_1;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let h = h as i32;
                lv_obj_set_height(obj, h);
            }
            Function_calls_type::lv_obj_set_content_width => {
                if __Arguments_count != 2 {
                    return;
                }
                let obj = __Argument_0;
                let w = __Argument_1;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let w = w as i32;
                lv_obj_set_content_width(obj, w);
            }
            Function_calls_type::lv_obj_set_content_height => {
                if __Arguments_count != 2 {
                    return;
                }
                let obj = __Argument_0;
                let h = __Argument_1;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let h = h as i32;
                lv_obj_set_content_height(obj, h);
            }
            Function_calls_type::lv_obj_set_layout => {
                if __Arguments_count != 2 {
                    return;
                }
                let obj = __Argument_0;
                let layout = __Argument_1;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let layout = layout as u32;
                lv_obj_set_layout(obj, layout);
            }
            Function_calls_type::lv_obj_is_layout_positioned => {
                if __Arguments_count != 1 {
                    return;
                }
                let obj = __Argument_0;
                let obj: *const lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let __Current_result = lv_obj_is_layout_positioned(obj);
                let __Result = __Result as *mut bool;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_obj_mark_layout_as_dirty => {
                if __Arguments_count != 1 {
                    return;
                }
                let obj = __Argument_0;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                lv_obj_mark_layout_as_dirty(obj);
            }
            Function_calls_type::lv_obj_update_layout => {
                if __Arguments_count != 1 {
                    return;
                }
                let obj = __Argument_0;
                let obj: *const lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                lv_obj_update_layout(obj);
            }
            Function_calls_type::lv_obj_set_align => {
                if __Arguments_count != 2 {
                    return;
                }
                let obj = __Argument_0;
                let align = __Argument_1;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let align = align as core::ffi::c_uint;
                lv_obj_set_align(obj, align);
            }
            Function_calls_type::lv_obj_align => {
                if __Arguments_count != 4 {
                    return;
                }
                let obj = __Argument_0;
                let align = __Argument_1;
                let x_ofs = __Argument_2;
                let y_ofs = __Argument_3;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let align = align as core::ffi::c_uint;
                let x_ofs = x_ofs as i32;
                let y_ofs = y_ofs as i32;
                lv_obj_align(obj, align, x_ofs, y_ofs);
            }
            Function_calls_type::lv_obj_align_to => {
                if __Arguments_count != 5 {
                    return;
                }
                let obj = __Argument_0;
                let base = __Argument_1;
                let align = __Argument_2;
                let x_ofs = __Argument_3;
                let y_ofs = __Argument_4;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let base: *const lv_obj_t = __Environment.Convert_to_native_pointer(base) as *mut _;
                let align = align as core::ffi::c_uint;
                let x_ofs = x_ofs as i32;
                let y_ofs = y_ofs as i32;
                lv_obj_align_to(obj, base, align, x_ofs, y_ofs);
            }
            Function_calls_type::lv_obj_center => {
                if __Arguments_count != 1 {
                    return;
                }
                let obj = __Argument_0;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                lv_obj_center(obj);
            }
            Function_calls_type::lv_obj_get_coords => {
                if __Arguments_count != 2 {
                    return;
                }
                let obj = __Argument_0;
                let coords = __Argument_1;
                let obj: *const lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let coords: *mut lv_area_t =
                    __Environment.Convert_to_native_pointer(coords) as *mut _;
                lv_obj_get_coords(obj, coords);
            }
            Function_calls_type::lv_obj_get_x => {
                if __Arguments_count != 1 {
                    return;
                }
                let obj = __Argument_0;
                let obj: *const lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let __Current_result = lv_obj_get_x(obj);
                let __Result = __Result as *mut i32;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_obj_get_x2 => {
                if __Arguments_count != 1 {
                    return;
                }
                let obj = __Argument_0;
                let obj: *const lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let __Current_result = lv_obj_get_x2(obj);
                let __Result = __Result as *mut i32;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_obj_get_y => {
                if __Arguments_count != 1 {
                    return;
                }
                let obj = __Argument_0;
                let obj: *const lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let __Current_result = lv_obj_get_y(obj);
                let __Result = __Result as *mut i32;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_obj_get_y2 => {
                if __Arguments_count != 1 {
                    return;
                }
                let obj = __Argument_0;
                let obj: *const lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let __Current_result = lv_obj_get_y2(obj);
                let __Result = __Result as *mut i32;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_obj_get_x_aligned => {
                if __Arguments_count != 1 {
                    return;
                }
                let obj = __Argument_0;
                let obj: *const lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let __Current_result = lv_obj_get_x_aligned(obj);
                let __Result = __Result as *mut i32;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_obj_get_y_aligned => {
                if __Arguments_count != 1 {
                    return;
                }
                let obj = __Argument_0;
                let obj: *const lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let __Current_result = lv_obj_get_y_aligned(obj);
                let __Result = __Result as *mut i32;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_obj_get_width => {
                if __Arguments_count != 1 {
                    return;
                }
                let obj = __Argument_0;
                let obj: *const lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let __Current_result = lv_obj_get_width(obj);
                let __Result = __Result as *mut i32;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_obj_get_height => {
                if __Arguments_count != 1 {
                    return;
                }
                let obj = __Argument_0;
                let obj: *const lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let __Current_result = lv_obj_get_height(obj);
                let __Result = __Result as *mut i32;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_obj_get_content_width => {
                if __Arguments_count != 1 {
                    return;
                }
                let obj = __Argument_0;
                let obj: *const lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let __Current_result = lv_obj_get_content_width(obj);
                let __Result = __Result as *mut i32;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_obj_get_content_height => {
                if __Arguments_count != 1 {
                    return;
                }
                let obj = __Argument_0;
                let obj: *const lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let __Current_result = lv_obj_get_content_height(obj);
                let __Result = __Result as *mut i32;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_obj_get_content_coords => {
                if __Arguments_count != 2 {
                    return;
                }
                let obj = __Argument_0;
                let area = __Argument_1;
                let obj: *const lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let area: *mut lv_area_t = __Environment.Convert_to_native_pointer(area) as *mut _;
                lv_obj_get_content_coords(obj, area);
            }
            Function_calls_type::lv_obj_get_self_width => {
                if __Arguments_count != 1 {
                    return;
                }
                let obj = __Argument_0;
                let obj: *const lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let __Current_result = lv_obj_get_self_width(obj);
                let __Result = __Result as *mut i32;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_obj_get_self_height => {
                if __Arguments_count != 1 {
                    return;
                }
                let obj = __Argument_0;
                let obj: *const lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let __Current_result = lv_obj_get_self_height(obj);
                let __Result = __Result as *mut i32;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_obj_refresh_self_size => {
                if __Arguments_count != 1 {
                    return;
                }
                let obj = __Argument_0;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let __Current_result = lv_obj_refresh_self_size(obj);
                let __Result = __Result as *mut bool;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_obj_refr_pos => {
                if __Arguments_count != 1 {
                    return;
                }
                let obj = __Argument_0;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                lv_obj_refr_pos(obj);
            }
            Function_calls_type::lv_obj_move_to => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let x = __Argument_1;
                let y = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let x = x as i32;
                let y = y as i32;
                lv_obj_move_to(obj, x, y);
            }
            Function_calls_type::lv_obj_move_children_by => {
                if __Arguments_count != 4 {
                    return;
                }
                let obj = __Argument_0;
                let x_diff = __Argument_1;
                let y_diff = __Argument_2;
                let ignore_floating = __Argument_3;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let x_diff = x_diff as i32;
                let y_diff = y_diff as i32;
                let ignore_floating = ignore_floating != 0;
                lv_obj_move_children_by(obj, x_diff, y_diff, ignore_floating);
            }
            Function_calls_type::lv_obj_transform_point => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let p = __Argument_1;
                let flags = __Argument_2;
                let obj: *const lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let p: *mut lv_point_t = __Environment.Convert_to_native_pointer(p) as *mut _;
                let flags = flags as core::ffi::c_uint;
                lv_obj_transform_point(obj, p, flags);
            }
            Function_calls_type::lv_obj_transform_point_array => {
                if __Arguments_count != 4 {
                    return;
                }
                let obj = __Argument_0;
                let points = __Argument_1;
                let count = __Argument_2;
                let flags = __Argument_3;
                let obj: *const lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let points: *mut lv_point_t =
                    __Environment.Convert_to_native_pointer(points) as *mut _;
                let flags = flags as core::ffi::c_uint;
                lv_obj_transform_point_array(obj, points, count, flags);
            }
            Function_calls_type::lv_obj_get_transformed_area => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let area = __Argument_1;
                let flags = __Argument_2;
                let obj: *const lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let area: *mut lv_area_t = __Environment.Convert_to_native_pointer(area) as *mut _;
                let flags = flags as core::ffi::c_uint;
                lv_obj_get_transformed_area(obj, area, flags);
            }
            Function_calls_type::lv_obj_invalidate_area => {
                if __Arguments_count != 2 {
                    return;
                }
                let obj = __Argument_0;
                let area = __Argument_1;
                let obj: *const lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let area: *const lv_area_t =
                    __Environment.Convert_to_native_pointer(area) as *mut _;
                lv_obj_invalidate_area(obj, area);
            }
            Function_calls_type::lv_obj_invalidate => {
                if __Arguments_count != 1 {
                    return;
                }
                let obj = __Argument_0;
                let obj: *const lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                lv_obj_invalidate(obj);
            }
            Function_calls_type::lv_obj_area_is_visible => {
                if __Arguments_count != 2 {
                    return;
                }
                let obj = __Argument_0;
                let area = __Argument_1;
                let obj: *const lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let area: *mut lv_area_t = __Environment.Convert_to_native_pointer(area) as *mut _;
                let __Current_result = lv_obj_area_is_visible(obj, area);
                let __Result = __Result as *mut bool;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_obj_is_visible => {
                if __Arguments_count != 1 {
                    return;
                }
                let obj = __Argument_0;
                let obj: *const lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let __Current_result = lv_obj_is_visible(obj);
                let __Result = __Result as *mut bool;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_obj_set_ext_click_area => {
                if __Arguments_count != 2 {
                    return;
                }
                let obj = __Argument_0;
                let size = __Argument_1;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let size = size as i32;
                lv_obj_set_ext_click_area(obj, size);
            }
            Function_calls_type::lv_obj_get_click_area => {
                if __Arguments_count != 2 {
                    return;
                }
                let obj = __Argument_0;
                let area = __Argument_1;
                let obj: *const lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let area: *mut lv_area_t = __Environment.Convert_to_native_pointer(area) as *mut _;
                lv_obj_get_click_area(obj, area);
            }
            Function_calls_type::lv_obj_hit_test => {
                if __Arguments_count != 2 {
                    return;
                }
                let obj = __Argument_0;
                let point = __Argument_1;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let point: *const lv_point_t =
                    __Environment.Convert_to_native_pointer(point) as *mut _;
                let __Current_result = lv_obj_hit_test(obj, point);
                let __Result = __Result as *mut bool;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_obj_set_scrollbar_mode => {
                if __Arguments_count != 2 {
                    return;
                }
                let obj = __Argument_0;
                let mode = __Argument_1;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let mode = mode as core::ffi::c_uint;
                lv_obj_set_scrollbar_mode(obj, mode);
            }
            Function_calls_type::lv_obj_set_scroll_dir => {
                if __Arguments_count != 2 {
                    return;
                }
                let obj = __Argument_0;
                let dir = __Argument_1;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let dir = dir as core::ffi::c_uint;
                lv_obj_set_scroll_dir(obj, dir);
            }
            Function_calls_type::lv_obj_set_scroll_snap_x => {
                if __Arguments_count != 2 {
                    return;
                }
                let obj = __Argument_0;
                let align = __Argument_1;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let align = align as core::ffi::c_uint;
                lv_obj_set_scroll_snap_x(obj, align);
            }
            Function_calls_type::lv_obj_set_scroll_snap_y => {
                if __Arguments_count != 2 {
                    return;
                }
                let obj = __Argument_0;
                let align = __Argument_1;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let align = align as core::ffi::c_uint;
                lv_obj_set_scroll_snap_y(obj, align);
            }
            Function_calls_type::lv_obj_get_scrollbar_mode => {
                if __Arguments_count != 1 {
                    return;
                }
                let obj = __Argument_0;
                let obj: *const lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let __Current_result = lv_obj_get_scrollbar_mode(obj);
                let __Result = __Result as *mut lv_scrollbar_mode_t;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_obj_get_scroll_dir => {
                if __Arguments_count != 1 {
                    return;
                }
                let obj = __Argument_0;
                let obj: *const lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let __Current_result = lv_obj_get_scroll_dir(obj);
                let __Result = __Result as *mut lv_dir_t;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_obj_get_scroll_snap_x => {
                if __Arguments_count != 1 {
                    return;
                }
                let obj = __Argument_0;
                let obj: *const lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let __Current_result = lv_obj_get_scroll_snap_x(obj);
                let __Result = __Result as *mut lv_scroll_snap_t;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_obj_get_scroll_snap_y => {
                if __Arguments_count != 1 {
                    return;
                }
                let obj = __Argument_0;
                let obj: *const lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let __Current_result = lv_obj_get_scroll_snap_y(obj);
                let __Result = __Result as *mut lv_scroll_snap_t;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_obj_get_scroll_x => {
                if __Arguments_count != 1 {
                    return;
                }
                let obj = __Argument_0;
                let obj: *const lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let __Current_result = lv_obj_get_scroll_x(obj);
                let __Result = __Result as *mut i32;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_obj_get_scroll_y => {
                if __Arguments_count != 1 {
                    return;
                }
                let obj = __Argument_0;
                let obj: *const lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let __Current_result = lv_obj_get_scroll_y(obj);
                let __Result = __Result as *mut i32;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_obj_get_scroll_top => {
                if __Arguments_count != 1 {
                    return;
                }
                let obj = __Argument_0;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let __Current_result = lv_obj_get_scroll_top(obj);
                let __Result = __Result as *mut i32;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_obj_get_scroll_bottom => {
                if __Arguments_count != 1 {
                    return;
                }
                let obj = __Argument_0;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let __Current_result = lv_obj_get_scroll_bottom(obj);
                let __Result = __Result as *mut i32;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_obj_get_scroll_left => {
                if __Arguments_count != 1 {
                    return;
                }
                let obj = __Argument_0;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let __Current_result = lv_obj_get_scroll_left(obj);
                let __Result = __Result as *mut i32;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_obj_get_scroll_right => {
                if __Arguments_count != 1 {
                    return;
                }
                let obj = __Argument_0;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let __Current_result = lv_obj_get_scroll_right(obj);
                let __Result = __Result as *mut i32;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_obj_get_scroll_end => {
                if __Arguments_count != 2 {
                    return;
                }
                let obj = __Argument_0;
                let end = __Argument_1;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let end: *mut lv_point_t = __Environment.Convert_to_native_pointer(end) as *mut _;
                lv_obj_get_scroll_end(obj, end);
            }
            Function_calls_type::lv_obj_scroll_by => {
                if __Arguments_count != 4 {
                    return;
                }
                let obj = __Argument_0;
                let x = __Argument_1;
                let y = __Argument_2;
                let anim_en = __Argument_3;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let x = x as i32;
                let y = y as i32;
                let anim_en = anim_en as core::ffi::c_uint;
                lv_obj_scroll_by(obj, x, y, anim_en);
            }
            Function_calls_type::lv_obj_scroll_by_bounded => {
                if __Arguments_count != 4 {
                    return;
                }
                let obj = __Argument_0;
                let dx = __Argument_1;
                let dy = __Argument_2;
                let anim_en = __Argument_3;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let dx = dx as i32;
                let dy = dy as i32;
                let anim_en = anim_en as core::ffi::c_uint;
                lv_obj_scroll_by_bounded(obj, dx, dy, anim_en);
            }
            Function_calls_type::lv_obj_scroll_to => {
                if __Arguments_count != 4 {
                    return;
                }
                let obj = __Argument_0;
                let x = __Argument_1;
                let y = __Argument_2;
                let anim_en = __Argument_3;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let x = x as i32;
                let y = y as i32;
                let anim_en = anim_en as core::ffi::c_uint;
                lv_obj_scroll_to(obj, x, y, anim_en);
            }
            Function_calls_type::lv_obj_scroll_to_x => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let x = __Argument_1;
                let anim_en = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let x = x as i32;
                let anim_en = anim_en as core::ffi::c_uint;
                lv_obj_scroll_to_x(obj, x, anim_en);
            }
            Function_calls_type::lv_obj_scroll_to_y => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let y = __Argument_1;
                let anim_en = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let y = y as i32;
                let anim_en = anim_en as core::ffi::c_uint;
                lv_obj_scroll_to_y(obj, y, anim_en);
            }
            Function_calls_type::lv_obj_scroll_to_view => {
                if __Arguments_count != 2 {
                    return;
                }
                let obj = __Argument_0;
                let anim_en = __Argument_1;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let anim_en = anim_en as core::ffi::c_uint;
                lv_obj_scroll_to_view(obj, anim_en);
            }
            Function_calls_type::lv_obj_scroll_to_view_recursive => {
                if __Arguments_count != 2 {
                    return;
                }
                let obj = __Argument_0;
                let anim_en = __Argument_1;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let anim_en = anim_en as core::ffi::c_uint;
                lv_obj_scroll_to_view_recursive(obj, anim_en);
            }
            Function_calls_type::lv_obj_is_scrolling => {
                if __Arguments_count != 1 {
                    return;
                }
                let obj = __Argument_0;
                let obj: *const lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let __Current_result = lv_obj_is_scrolling(obj);
                let __Result = __Result as *mut bool;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_obj_update_snap => {
                if __Arguments_count != 2 {
                    return;
                }
                let obj = __Argument_0;
                let anim_en = __Argument_1;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let anim_en = anim_en as core::ffi::c_uint;
                lv_obj_update_snap(obj, anim_en);
            }
            Function_calls_type::lv_obj_get_scrollbar_area => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let hor = __Argument_1;
                let ver = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let hor: *mut lv_area_t = __Environment.Convert_to_native_pointer(hor) as *mut _;
                let ver: *mut lv_area_t = __Environment.Convert_to_native_pointer(ver) as *mut _;
                lv_obj_get_scrollbar_area(obj, hor, ver);
            }
            Function_calls_type::lv_obj_scrollbar_invalidate => {
                if __Arguments_count != 1 {
                    return;
                }
                let obj = __Argument_0;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                lv_obj_scrollbar_invalidate(obj);
            }
            Function_calls_type::lv_obj_readjust_scroll => {
                if __Arguments_count != 2 {
                    return;
                }
                let obj = __Argument_0;
                let anim_en = __Argument_1;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let anim_en = anim_en as core::ffi::c_uint;
                lv_obj_readjust_scroll(obj, anim_en);
            }
            Function_calls_type::lv_obj_add_style => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let style = __Argument_1;
                let selector = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let style: *const lv_style_t =
                    __Environment.Convert_to_native_pointer(style) as *mut _;
                let selector = selector as u32;
                lv_obj_add_style(obj, style, selector);
            }
            Function_calls_type::lv_obj_replace_style => {
                if __Arguments_count != 4 {
                    return;
                }
                let obj = __Argument_0;
                let old_style = __Argument_1;
                let new_style = __Argument_2;
                let selector = __Argument_3;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let old_style: *const lv_style_t =
                    __Environment.Convert_to_native_pointer(old_style) as *mut _;
                let new_style: *const lv_style_t =
                    __Environment.Convert_to_native_pointer(new_style) as *mut _;
                let selector = selector as u32;
                let __Current_result = lv_obj_replace_style(obj, old_style, new_style, selector);
                let __Result = __Result as *mut bool;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_obj_remove_style => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let style = __Argument_1;
                let selector = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let style: *const lv_style_t =
                    __Environment.Convert_to_native_pointer(style) as *mut _;
                let selector = selector as u32;
                lv_obj_remove_style(obj, style, selector);
            }
            Function_calls_type::lv_obj_remove_style_all => {
                if __Arguments_count != 1 {
                    return;
                }
                let obj = __Argument_0;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                lv_obj_remove_style_all(obj);
            }
            Function_calls_type::lv_obj_report_style_change => {
                if __Arguments_count != 1 {
                    return;
                }
                let style = __Argument_0;
                let style: *mut lv_style_t =
                    __Environment.Convert_to_native_pointer(style) as *mut _;
                lv_obj_report_style_change(style);
            }
            Function_calls_type::lv_obj_refresh_style => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let part = __Argument_1;
                let prop = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let part = part as u32;
                let prop = prop as u8;
                lv_obj_refresh_style(obj, part, prop);
            }
            Function_calls_type::lv_obj_enable_style_refresh => {
                if __Arguments_count != 1 {
                    return;
                }
                let en = __Argument_0;
                let en = en != 0;
                lv_obj_enable_style_refresh(en);
            }
            Function_calls_type::lv_obj_get_style_prop => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let part = __Argument_1;
                let prop = __Argument_2;
                let obj: *const lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let part = part as u32;
                let prop = prop as u8;
                let __Current_result = lv_obj_get_style_prop(obj, part, prop);
                let __Result = __Result as *mut lv_style_value_t;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_obj_has_style_prop => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let selector = __Argument_1;
                let prop = __Argument_2;
                let obj: *const lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let selector = selector as u32;
                let prop = prop as u8;
                let __Current_result = lv_obj_has_style_prop(obj, selector, prop);
                let __Result = __Result as *mut bool;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_obj_set_local_style_prop => {
                if __Arguments_count != 4 {
                    return;
                }
                let obj = __Argument_0;
                let prop = __Argument_1;
                let value = __Argument_2;
                let selector = __Argument_3;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let prop = prop as u8;
                let value = value as *mut lv_style_value_t;
                let value = *value;
                let selector = selector as u32;
                lv_obj_set_local_style_prop(obj, prop, value, selector);
            }
            Function_calls_type::lv_obj_get_local_style_prop => {
                if __Arguments_count != 4 {
                    return;
                }
                let obj = __Argument_0;
                let prop = __Argument_1;
                let value = __Argument_2;
                let selector = __Argument_3;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let prop = prop as u8;
                let value: *mut lv_style_value_t =
                    __Environment.Convert_to_native_pointer(value) as *mut _;
                let selector = selector as u32;
                let __Current_result = lv_obj_get_local_style_prop(obj, prop, value, selector);
                let __Result = __Result as *mut lv_style_res_t;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_obj_remove_local_style_prop => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let prop = __Argument_1;
                let selector = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let prop = prop as u8;
                let selector = selector as u32;
                let __Current_result = lv_obj_remove_local_style_prop(obj, prop, selector);
                let __Result = __Result as *mut bool;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_obj_style_apply_color_filter => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let part = __Argument_1;
                let v = __Argument_2;
                let obj: *const lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let part = part as u32;
                let v = v as *mut lv_style_value_t;
                let v = *v;
                let __Current_result = lv_obj_style_apply_color_filter(obj, part, v);
                let __Result = __Result as *mut lv_style_value_t;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_obj_fade_in => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let time = __Argument_1;
                let delay = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let time = time as u32;
                let delay = delay as u32;
                lv_obj_fade_in(obj, time, delay);
            }
            Function_calls_type::lv_obj_fade_out => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let time = __Argument_1;
                let delay = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let time = time as u32;
                let delay = delay as u32;
                lv_obj_fade_out(obj, time, delay);
            }
            Function_calls_type::lv_obj_set_style_width => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let value = __Argument_1;
                let selector = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let value = value as i32;
                let selector = selector as u32;
                lv_obj_set_style_width(obj, value, selector);
            }
            Function_calls_type::lv_obj_set_style_min_width => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let value = __Argument_1;
                let selector = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let value = value as i32;
                let selector = selector as u32;
                lv_obj_set_style_min_width(obj, value, selector);
            }
            Function_calls_type::lv_obj_set_style_max_width => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let value = __Argument_1;
                let selector = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let value = value as i32;
                let selector = selector as u32;
                lv_obj_set_style_max_width(obj, value, selector);
            }
            Function_calls_type::lv_obj_set_style_height => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let value = __Argument_1;
                let selector = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let value = value as i32;
                let selector = selector as u32;
                lv_obj_set_style_height(obj, value, selector);
            }
            Function_calls_type::lv_obj_set_style_min_height => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let value = __Argument_1;
                let selector = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let value = value as i32;
                let selector = selector as u32;
                lv_obj_set_style_min_height(obj, value, selector);
            }
            Function_calls_type::lv_obj_set_style_max_height => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let value = __Argument_1;
                let selector = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let value = value as i32;
                let selector = selector as u32;
                lv_obj_set_style_max_height(obj, value, selector);
            }
            Function_calls_type::lv_obj_set_style_length => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let value = __Argument_1;
                let selector = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let value = value as i32;
                let selector = selector as u32;
                lv_obj_set_style_length(obj, value, selector);
            }
            Function_calls_type::lv_obj_set_style_x => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let value = __Argument_1;
                let selector = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let value = value as i32;
                let selector = selector as u32;
                lv_obj_set_style_x(obj, value, selector);
            }
            Function_calls_type::lv_obj_set_style_y => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let value = __Argument_1;
                let selector = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let value = value as i32;
                let selector = selector as u32;
                lv_obj_set_style_y(obj, value, selector);
            }
            Function_calls_type::lv_obj_set_style_align => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let value = __Argument_1;
                let selector = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let value = value as core::ffi::c_uint;
                let selector = selector as u32;
                lv_obj_set_style_align(obj, value, selector);
            }
            Function_calls_type::lv_obj_set_style_transform_width => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let value = __Argument_1;
                let selector = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let value = value as i32;
                let selector = selector as u32;
                lv_obj_set_style_transform_width(obj, value, selector);
            }
            Function_calls_type::lv_obj_set_style_transform_height => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let value = __Argument_1;
                let selector = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let value = value as i32;
                let selector = selector as u32;
                lv_obj_set_style_transform_height(obj, value, selector);
            }
            Function_calls_type::lv_obj_set_style_translate_x => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let value = __Argument_1;
                let selector = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let value = value as i32;
                let selector = selector as u32;
                lv_obj_set_style_translate_x(obj, value, selector);
            }
            Function_calls_type::lv_obj_set_style_translate_y => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let value = __Argument_1;
                let selector = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let value = value as i32;
                let selector = selector as u32;
                lv_obj_set_style_translate_y(obj, value, selector);
            }
            Function_calls_type::lv_obj_set_style_transform_scale_x => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let value = __Argument_1;
                let selector = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let value = value as i32;
                let selector = selector as u32;
                lv_obj_set_style_transform_scale_x(obj, value, selector);
            }
            Function_calls_type::lv_obj_set_style_transform_scale_y => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let value = __Argument_1;
                let selector = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let value = value as i32;
                let selector = selector as u32;
                lv_obj_set_style_transform_scale_y(obj, value, selector);
            }
            Function_calls_type::lv_obj_set_style_transform_rotation => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let value = __Argument_1;
                let selector = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let value = value as i32;
                let selector = selector as u32;
                lv_obj_set_style_transform_rotation(obj, value, selector);
            }
            Function_calls_type::lv_obj_set_style_transform_pivot_x => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let value = __Argument_1;
                let selector = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let value = value as i32;
                let selector = selector as u32;
                lv_obj_set_style_transform_pivot_x(obj, value, selector);
            }
            Function_calls_type::lv_obj_set_style_transform_pivot_y => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let value = __Argument_1;
                let selector = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let value = value as i32;
                let selector = selector as u32;
                lv_obj_set_style_transform_pivot_y(obj, value, selector);
            }
            Function_calls_type::lv_obj_set_style_transform_skew_x => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let value = __Argument_1;
                let selector = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let value = value as i32;
                let selector = selector as u32;
                lv_obj_set_style_transform_skew_x(obj, value, selector);
            }
            Function_calls_type::lv_obj_set_style_transform_skew_y => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let value = __Argument_1;
                let selector = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let value = value as i32;
                let selector = selector as u32;
                lv_obj_set_style_transform_skew_y(obj, value, selector);
            }
            Function_calls_type::lv_obj_set_style_pad_top => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let value = __Argument_1;
                let selector = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let value = value as i32;
                let selector = selector as u32;
                lv_obj_set_style_pad_top(obj, value, selector);
            }
            Function_calls_type::lv_obj_set_style_pad_bottom => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let value = __Argument_1;
                let selector = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let value = value as i32;
                let selector = selector as u32;
                lv_obj_set_style_pad_bottom(obj, value, selector);
            }
            Function_calls_type::lv_obj_set_style_pad_left => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let value = __Argument_1;
                let selector = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let value = value as i32;
                let selector = selector as u32;
                lv_obj_set_style_pad_left(obj, value, selector);
            }
            Function_calls_type::lv_obj_set_style_pad_right => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let value = __Argument_1;
                let selector = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let value = value as i32;
                let selector = selector as u32;
                lv_obj_set_style_pad_right(obj, value, selector);
            }
            Function_calls_type::lv_obj_set_style_pad_row => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let value = __Argument_1;
                let selector = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let value = value as i32;
                let selector = selector as u32;
                lv_obj_set_style_pad_row(obj, value, selector);
            }
            Function_calls_type::lv_obj_set_style_pad_column => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let value = __Argument_1;
                let selector = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let value = value as i32;
                let selector = selector as u32;
                lv_obj_set_style_pad_column(obj, value, selector);
            }
            Function_calls_type::lv_obj_set_style_margin_top => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let value = __Argument_1;
                let selector = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let value = value as i32;
                let selector = selector as u32;
                lv_obj_set_style_margin_top(obj, value, selector);
            }
            Function_calls_type::lv_obj_set_style_margin_bottom => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let value = __Argument_1;
                let selector = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let value = value as i32;
                let selector = selector as u32;
                lv_obj_set_style_margin_bottom(obj, value, selector);
            }
            Function_calls_type::lv_obj_set_style_margin_left => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let value = __Argument_1;
                let selector = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let value = value as i32;
                let selector = selector as u32;
                lv_obj_set_style_margin_left(obj, value, selector);
            }
            Function_calls_type::lv_obj_set_style_margin_right => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let value = __Argument_1;
                let selector = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let value = value as i32;
                let selector = selector as u32;
                lv_obj_set_style_margin_right(obj, value, selector);
            }
            Function_calls_type::lv_obj_set_style_bg_color => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let value = __Argument_1;
                let selector = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let value = lv_color_t {
                    blue: value as u8,
                    green: (value >> 8) as u8,
                    red: (value >> 16) as u8,
                };
                let selector = selector as u32;
                lv_obj_set_style_bg_color(obj, value, selector);
            }
            Function_calls_type::lv_obj_set_style_bg_opa => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let value = __Argument_1;
                let selector = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let value = value as u8;
                let selector = selector as u32;
                lv_obj_set_style_bg_opa(obj, value, selector);
            }
            Function_calls_type::lv_obj_set_style_bg_grad_color => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let value = __Argument_1;
                let selector = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let value = lv_color_t {
                    blue: value as u8,
                    green: (value >> 8) as u8,
                    red: (value >> 16) as u8,
                };
                let selector = selector as u32;
                lv_obj_set_style_bg_grad_color(obj, value, selector);
            }
            Function_calls_type::lv_obj_set_style_bg_grad_dir => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let value = __Argument_1;
                let selector = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let value = value as core::ffi::c_uint;
                let selector = selector as u32;
                lv_obj_set_style_bg_grad_dir(obj, value, selector);
            }
            Function_calls_type::lv_obj_set_style_bg_main_stop => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let value = __Argument_1;
                let selector = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let value = value as i32;
                let selector = selector as u32;
                lv_obj_set_style_bg_main_stop(obj, value, selector);
            }
            Function_calls_type::lv_obj_set_style_bg_grad_stop => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let value = __Argument_1;
                let selector = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let value = value as i32;
                let selector = selector as u32;
                lv_obj_set_style_bg_grad_stop(obj, value, selector);
            }
            Function_calls_type::lv_obj_set_style_bg_main_opa => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let value = __Argument_1;
                let selector = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let value = value as u8;
                let selector = selector as u32;
                lv_obj_set_style_bg_main_opa(obj, value, selector);
            }
            Function_calls_type::lv_obj_set_style_bg_grad_opa => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let value = __Argument_1;
                let selector = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let value = value as u8;
                let selector = selector as u32;
                lv_obj_set_style_bg_grad_opa(obj, value, selector);
            }
            Function_calls_type::lv_obj_set_style_bg_grad => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let value = __Argument_1;
                let selector = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let value: *const lv_grad_dsc_t =
                    __Environment.Convert_to_native_pointer(value) as *mut _;
                let selector = selector as u32;
                lv_obj_set_style_bg_grad(obj, value, selector);
            }
            Function_calls_type::lv_obj_set_style_bg_image_src => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let value = __Argument_1;
                let selector = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let value: *const core::ffi::c_void =
                    __Environment.Convert_to_native_pointer(value) as *mut _;
                let selector = selector as u32;
                lv_obj_set_style_bg_image_src(obj, value, selector);
            }
            Function_calls_type::lv_obj_set_style_bg_image_opa => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let value = __Argument_1;
                let selector = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let value = value as u8;
                let selector = selector as u32;
                lv_obj_set_style_bg_image_opa(obj, value, selector);
            }
            Function_calls_type::lv_obj_set_style_bg_image_recolor => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let value = __Argument_1;
                let selector = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let value = lv_color_t {
                    blue: value as u8,
                    green: (value >> 8) as u8,
                    red: (value >> 16) as u8,
                };
                let selector = selector as u32;
                lv_obj_set_style_bg_image_recolor(obj, value, selector);
            }
            Function_calls_type::lv_obj_set_style_bg_image_recolor_opa => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let value = __Argument_1;
                let selector = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let value = value as u8;
                let selector = selector as u32;
                lv_obj_set_style_bg_image_recolor_opa(obj, value, selector);
            }
            Function_calls_type::lv_obj_set_style_bg_image_tiled => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let value = __Argument_1;
                let selector = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let value = value != 0;
                let selector = selector as u32;
                lv_obj_set_style_bg_image_tiled(obj, value, selector);
            }
            Function_calls_type::lv_obj_set_style_border_color => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let value = __Argument_1;
                let selector = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let value = lv_color_t {
                    blue: value as u8,
                    green: (value >> 8) as u8,
                    red: (value >> 16) as u8,
                };
                let selector = selector as u32;
                lv_obj_set_style_border_color(obj, value, selector);
            }
            Function_calls_type::lv_obj_set_style_border_opa => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let value = __Argument_1;
                let selector = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let value = value as u8;
                let selector = selector as u32;
                lv_obj_set_style_border_opa(obj, value, selector);
            }
            Function_calls_type::lv_obj_set_style_border_width => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let value = __Argument_1;
                let selector = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let value = value as i32;
                let selector = selector as u32;
                lv_obj_set_style_border_width(obj, value, selector);
            }
            Function_calls_type::lv_obj_set_style_border_side => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let value = __Argument_1;
                let selector = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let value = value as core::ffi::c_uint;
                let selector = selector as u32;
                lv_obj_set_style_border_side(obj, value, selector);
            }
            Function_calls_type::lv_obj_set_style_border_post => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let value = __Argument_1;
                let selector = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let value = value != 0;
                let selector = selector as u32;
                lv_obj_set_style_border_post(obj, value, selector);
            }
            Function_calls_type::lv_obj_set_style_outline_width => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let value = __Argument_1;
                let selector = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let value = value as i32;
                let selector = selector as u32;
                lv_obj_set_style_outline_width(obj, value, selector);
            }
            Function_calls_type::lv_obj_set_style_outline_color => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let value = __Argument_1;
                let selector = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let value = lv_color_t {
                    blue: value as u8,
                    green: (value >> 8) as u8,
                    red: (value >> 16) as u8,
                };
                let selector = selector as u32;
                lv_obj_set_style_outline_color(obj, value, selector);
            }
            Function_calls_type::lv_obj_set_style_outline_opa => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let value = __Argument_1;
                let selector = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let value = value as u8;
                let selector = selector as u32;
                lv_obj_set_style_outline_opa(obj, value, selector);
            }
            Function_calls_type::lv_obj_set_style_outline_pad => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let value = __Argument_1;
                let selector = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let value = value as i32;
                let selector = selector as u32;
                lv_obj_set_style_outline_pad(obj, value, selector);
            }
            Function_calls_type::lv_obj_set_style_shadow_width => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let value = __Argument_1;
                let selector = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let value = value as i32;
                let selector = selector as u32;
                lv_obj_set_style_shadow_width(obj, value, selector);
            }
            Function_calls_type::lv_obj_set_style_shadow_offset_x => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let value = __Argument_1;
                let selector = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let value = value as i32;
                let selector = selector as u32;
                lv_obj_set_style_shadow_offset_x(obj, value, selector);
            }
            Function_calls_type::lv_obj_set_style_shadow_offset_y => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let value = __Argument_1;
                let selector = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let value = value as i32;
                let selector = selector as u32;
                lv_obj_set_style_shadow_offset_y(obj, value, selector);
            }
            Function_calls_type::lv_obj_set_style_shadow_spread => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let value = __Argument_1;
                let selector = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let value = value as i32;
                let selector = selector as u32;
                lv_obj_set_style_shadow_spread(obj, value, selector);
            }
            Function_calls_type::lv_obj_set_style_shadow_color => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let value = __Argument_1;
                let selector = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let value = lv_color_t {
                    blue: value as u8,
                    green: (value >> 8) as u8,
                    red: (value >> 16) as u8,
                };
                let selector = selector as u32;
                lv_obj_set_style_shadow_color(obj, value, selector);
            }
            Function_calls_type::lv_obj_set_style_shadow_opa => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let value = __Argument_1;
                let selector = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let value = value as u8;
                let selector = selector as u32;
                lv_obj_set_style_shadow_opa(obj, value, selector);
            }
            Function_calls_type::lv_obj_set_style_image_opa => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let value = __Argument_1;
                let selector = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let value = value as u8;
                let selector = selector as u32;
                lv_obj_set_style_image_opa(obj, value, selector);
            }
            Function_calls_type::lv_obj_set_style_image_recolor => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let value = __Argument_1;
                let selector = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let value = lv_color_t {
                    blue: value as u8,
                    green: (value >> 8) as u8,
                    red: (value >> 16) as u8,
                };
                let selector = selector as u32;
                lv_obj_set_style_image_recolor(obj, value, selector);
            }
            Function_calls_type::lv_obj_set_style_image_recolor_opa => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let value = __Argument_1;
                let selector = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let value = value as u8;
                let selector = selector as u32;
                lv_obj_set_style_image_recolor_opa(obj, value, selector);
            }
            Function_calls_type::lv_obj_set_style_line_width => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let value = __Argument_1;
                let selector = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let value = value as i32;
                let selector = selector as u32;
                lv_obj_set_style_line_width(obj, value, selector);
            }
            Function_calls_type::lv_obj_set_style_line_dash_width => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let value = __Argument_1;
                let selector = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let value = value as i32;
                let selector = selector as u32;
                lv_obj_set_style_line_dash_width(obj, value, selector);
            }
            Function_calls_type::lv_obj_set_style_line_dash_gap => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let value = __Argument_1;
                let selector = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let value = value as i32;
                let selector = selector as u32;
                lv_obj_set_style_line_dash_gap(obj, value, selector);
            }
            Function_calls_type::lv_obj_set_style_line_rounded => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let value = __Argument_1;
                let selector = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let value = value != 0;
                let selector = selector as u32;
                lv_obj_set_style_line_rounded(obj, value, selector);
            }
            Function_calls_type::lv_obj_set_style_line_color => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let value = __Argument_1;
                let selector = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let value = lv_color_t {
                    blue: value as u8,
                    green: (value >> 8) as u8,
                    red: (value >> 16) as u8,
                };
                let selector = selector as u32;
                lv_obj_set_style_line_color(obj, value, selector);
            }
            Function_calls_type::lv_obj_set_style_line_opa => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let value = __Argument_1;
                let selector = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let value = value as u8;
                let selector = selector as u32;
                lv_obj_set_style_line_opa(obj, value, selector);
            }
            Function_calls_type::lv_obj_set_style_arc_width => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let value = __Argument_1;
                let selector = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let value = value as i32;
                let selector = selector as u32;
                lv_obj_set_style_arc_width(obj, value, selector);
            }
            Function_calls_type::lv_obj_set_style_arc_rounded => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let value = __Argument_1;
                let selector = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let value = value != 0;
                let selector = selector as u32;
                lv_obj_set_style_arc_rounded(obj, value, selector);
            }
            Function_calls_type::lv_obj_set_style_arc_color => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let value = __Argument_1;
                let selector = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let value = lv_color_t {
                    blue: value as u8,
                    green: (value >> 8) as u8,
                    red: (value >> 16) as u8,
                };
                let selector = selector as u32;
                lv_obj_set_style_arc_color(obj, value, selector);
            }
            Function_calls_type::lv_obj_set_style_arc_opa => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let value = __Argument_1;
                let selector = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let value = value as u8;
                let selector = selector as u32;
                lv_obj_set_style_arc_opa(obj, value, selector);
            }
            Function_calls_type::lv_obj_set_style_arc_image_src => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let value = __Argument_1;
                let selector = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let value: *const core::ffi::c_void =
                    __Environment.Convert_to_native_pointer(value) as *mut _;
                let selector = selector as u32;
                lv_obj_set_style_arc_image_src(obj, value, selector);
            }
            Function_calls_type::lv_obj_set_style_text_color => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let value = __Argument_1;
                let selector = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let value = lv_color_t {
                    blue: value as u8,
                    green: (value >> 8) as u8,
                    red: (value >> 16) as u8,
                };
                let selector = selector as u32;
                lv_obj_set_style_text_color(obj, value, selector);
            }
            Function_calls_type::lv_obj_set_style_text_opa => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let value = __Argument_1;
                let selector = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let value = value as u8;
                let selector = selector as u32;
                lv_obj_set_style_text_opa(obj, value, selector);
            }
            Function_calls_type::lv_obj_set_style_text_font => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let value = __Argument_1;
                let selector = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let value: *const lv_font_t =
                    __Environment.Convert_to_native_pointer(value) as *mut _;
                let selector = selector as u32;
                lv_obj_set_style_text_font(obj, value, selector);
            }
            Function_calls_type::lv_obj_set_style_text_letter_space => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let value = __Argument_1;
                let selector = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let value = value as i32;
                let selector = selector as u32;
                lv_obj_set_style_text_letter_space(obj, value, selector);
            }
            Function_calls_type::lv_obj_set_style_text_line_space => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let value = __Argument_1;
                let selector = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let value = value as i32;
                let selector = selector as u32;
                lv_obj_set_style_text_line_space(obj, value, selector);
            }
            Function_calls_type::lv_obj_set_style_text_decor => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let value = __Argument_1;
                let selector = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let value = value as core::ffi::c_uint;
                let selector = selector as u32;
                lv_obj_set_style_text_decor(obj, value, selector);
            }
            Function_calls_type::lv_obj_set_style_text_align => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let value = __Argument_1;
                let selector = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let value = value as core::ffi::c_uint;
                let selector = selector as u32;
                lv_obj_set_style_text_align(obj, value, selector);
            }
            Function_calls_type::lv_obj_set_style_radius => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let value = __Argument_1;
                let selector = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let value = value as i32;
                let selector = selector as u32;
                lv_obj_set_style_radius(obj, value, selector);
            }
            Function_calls_type::lv_obj_set_style_clip_corner => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let value = __Argument_1;
                let selector = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let value = value != 0;
                let selector = selector as u32;
                lv_obj_set_style_clip_corner(obj, value, selector);
            }
            Function_calls_type::lv_obj_set_style_opa => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let value = __Argument_1;
                let selector = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let value = value as u8;
                let selector = selector as u32;
                lv_obj_set_style_opa(obj, value, selector);
            }
            Function_calls_type::lv_obj_set_style_opa_layered => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let value = __Argument_1;
                let selector = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let value = value as u8;
                let selector = selector as u32;
                lv_obj_set_style_opa_layered(obj, value, selector);
            }
            Function_calls_type::lv_obj_set_style_color_filter_dsc => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let value = __Argument_1;
                let selector = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let value: *const lv_color_filter_dsc_t =
                    __Environment.Convert_to_native_pointer(value) as *mut _;
                let selector = selector as u32;
                lv_obj_set_style_color_filter_dsc(obj, value, selector);
            }
            Function_calls_type::lv_obj_set_style_color_filter_opa => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let value = __Argument_1;
                let selector = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let value = value as u8;
                let selector = selector as u32;
                lv_obj_set_style_color_filter_opa(obj, value, selector);
            }
            Function_calls_type::lv_obj_set_style_anim => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let value = __Argument_1;
                let selector = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let value: *const lv_anim_t =
                    __Environment.Convert_to_native_pointer(value) as *mut _;
                let selector = selector as u32;
                lv_obj_set_style_anim(obj, value, selector);
            }
            Function_calls_type::lv_obj_set_style_anim_duration => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let value = __Argument_1;
                let selector = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let value = value as u32;
                let selector = selector as u32;
                lv_obj_set_style_anim_duration(obj, value, selector);
            }
            Function_calls_type::lv_obj_set_style_transition => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let value = __Argument_1;
                let selector = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let value: *const lv_style_transition_dsc_t =
                    __Environment.Convert_to_native_pointer(value) as *mut _;
                let selector = selector as u32;
                lv_obj_set_style_transition(obj, value, selector);
            }
            Function_calls_type::lv_obj_set_style_blend_mode => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let value = __Argument_1;
                let selector = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let value = value as core::ffi::c_uint;
                let selector = selector as u32;
                lv_obj_set_style_blend_mode(obj, value, selector);
            }
            Function_calls_type::lv_obj_set_style_layout => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let value = __Argument_1;
                let selector = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let value = value as u16;
                let selector = selector as u32;
                lv_obj_set_style_layout(obj, value, selector);
            }
            Function_calls_type::lv_obj_set_style_base_dir => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let value = __Argument_1;
                let selector = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let value = value as core::ffi::c_uint;
                let selector = selector as u32;
                lv_obj_set_style_base_dir(obj, value, selector);
            }
            Function_calls_type::lv_obj_set_style_bitmap_mask_src => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let value = __Argument_1;
                let selector = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let value: *const core::ffi::c_void =
                    __Environment.Convert_to_native_pointer(value) as *mut _;
                let selector = selector as u32;
                lv_obj_set_style_bitmap_mask_src(obj, value, selector);
            }
            Function_calls_type::lv_obj_set_style_rotary_sensitivity => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let value = __Argument_1;
                let selector = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let value = value as u32;
                let selector = selector as u32;
                lv_obj_set_style_rotary_sensitivity(obj, value, selector);
            }
            Function_calls_type::lv_obj_set_style_flex_flow => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let value = __Argument_1;
                let selector = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let value = value as core::ffi::c_uint;
                let selector = selector as u32;
                lv_obj_set_style_flex_flow(obj, value, selector);
            }
            Function_calls_type::lv_obj_set_style_flex_main_place => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let value = __Argument_1;
                let selector = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let value = value as core::ffi::c_uint;
                let selector = selector as u32;
                lv_obj_set_style_flex_main_place(obj, value, selector);
            }
            Function_calls_type::lv_obj_set_style_flex_cross_place => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let value = __Argument_1;
                let selector = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let value = value as core::ffi::c_uint;
                let selector = selector as u32;
                lv_obj_set_style_flex_cross_place(obj, value, selector);
            }
            Function_calls_type::lv_obj_set_style_flex_track_place => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let value = __Argument_1;
                let selector = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let value = value as core::ffi::c_uint;
                let selector = selector as u32;
                lv_obj_set_style_flex_track_place(obj, value, selector);
            }
            Function_calls_type::lv_obj_set_style_flex_grow => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let value = __Argument_1;
                let selector = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let value = value as u8;
                let selector = selector as u32;
                lv_obj_set_style_flex_grow(obj, value, selector);
            }
            Function_calls_type::lv_obj_set_style_grid_column_dsc_array => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let value = __Argument_1;
                let selector = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let value: *const i32 = __Environment.Convert_to_native_pointer(value) as *mut _;
                let selector = selector as u32;
                lv_obj_set_style_grid_column_dsc_array(obj, value, selector);
            }
            Function_calls_type::lv_obj_set_style_grid_column_align => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let value = __Argument_1;
                let selector = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let value = value as core::ffi::c_uint;
                let selector = selector as u32;
                lv_obj_set_style_grid_column_align(obj, value, selector);
            }
            Function_calls_type::lv_obj_set_style_grid_row_dsc_array => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let value = __Argument_1;
                let selector = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let value: *const i32 = __Environment.Convert_to_native_pointer(value) as *mut _;
                let selector = selector as u32;
                lv_obj_set_style_grid_row_dsc_array(obj, value, selector);
            }
            Function_calls_type::lv_obj_set_style_grid_row_align => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let value = __Argument_1;
                let selector = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let value = value as core::ffi::c_uint;
                let selector = selector as u32;
                lv_obj_set_style_grid_row_align(obj, value, selector);
            }
            Function_calls_type::lv_obj_set_style_grid_cell_column_pos => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let value = __Argument_1;
                let selector = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let value = value as i32;
                let selector = selector as u32;
                lv_obj_set_style_grid_cell_column_pos(obj, value, selector);
            }
            Function_calls_type::lv_obj_set_style_grid_cell_x_align => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let value = __Argument_1;
                let selector = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let value = value as core::ffi::c_uint;
                let selector = selector as u32;
                lv_obj_set_style_grid_cell_x_align(obj, value, selector);
            }
            Function_calls_type::lv_obj_set_style_grid_cell_column_span => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let value = __Argument_1;
                let selector = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let value = value as i32;
                let selector = selector as u32;
                lv_obj_set_style_grid_cell_column_span(obj, value, selector);
            }
            Function_calls_type::lv_obj_set_style_grid_cell_row_pos => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let value = __Argument_1;
                let selector = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let value = value as i32;
                let selector = selector as u32;
                lv_obj_set_style_grid_cell_row_pos(obj, value, selector);
            }
            Function_calls_type::lv_obj_set_style_grid_cell_y_align => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let value = __Argument_1;
                let selector = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let value = value as core::ffi::c_uint;
                let selector = selector as u32;
                lv_obj_set_style_grid_cell_y_align(obj, value, selector);
            }
            Function_calls_type::lv_obj_set_style_grid_cell_row_span => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let value = __Argument_1;
                let selector = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let value = value as i32;
                let selector = selector as u32;
                lv_obj_set_style_grid_cell_row_span(obj, value, selector);
            }
            Function_calls_type::lv_obj_calculate_style_text_align => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let part = __Argument_1;
                let txt = __Argument_2;
                let obj: *const lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let part = part as u32;
                let txt: *const core::ffi::c_char =
                    __Environment.Convert_to_native_pointer(txt) as *mut _;
                let __Current_result = lv_obj_calculate_style_text_align(obj, part, txt);
                let __Result = __Result as *mut lv_text_align_t;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_obj_get_style_opa_recursive => {
                if __Arguments_count != 2 {
                    return;
                }
                let obj = __Argument_0;
                let part = __Argument_1;
                let obj: *const lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let part = part as u32;
                let __Current_result = lv_obj_get_style_opa_recursive(obj, part);
                let __Result = __Result as *mut lv_opa_t;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_obj_init_draw_rect_dsc => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let part = __Argument_1;
                let draw_dsc = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let part = part as u32;
                let draw_dsc: *mut lv_draw_rect_dsc_t =
                    __Environment.Convert_to_native_pointer(draw_dsc) as *mut _;
                lv_obj_init_draw_rect_dsc(obj, part, draw_dsc);
            }
            Function_calls_type::lv_obj_init_draw_label_dsc => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let part = __Argument_1;
                let draw_dsc = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let part = part as u32;
                let draw_dsc: *mut lv_draw_label_dsc_t =
                    __Environment.Convert_to_native_pointer(draw_dsc) as *mut _;
                lv_obj_init_draw_label_dsc(obj, part, draw_dsc);
            }
            Function_calls_type::lv_obj_init_draw_image_dsc => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let part = __Argument_1;
                let draw_dsc = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let part = part as u32;
                let draw_dsc: *mut lv_draw_image_dsc_t =
                    __Environment.Convert_to_native_pointer(draw_dsc) as *mut _;
                lv_obj_init_draw_image_dsc(obj, part, draw_dsc);
            }
            Function_calls_type::lv_obj_init_draw_line_dsc => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let part = __Argument_1;
                let draw_dsc = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let part = part as u32;
                let draw_dsc: *mut lv_draw_line_dsc_t =
                    __Environment.Convert_to_native_pointer(draw_dsc) as *mut _;
                lv_obj_init_draw_line_dsc(obj, part, draw_dsc);
            }
            Function_calls_type::lv_obj_init_draw_arc_dsc => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let part = __Argument_1;
                let draw_dsc = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let part = part as u32;
                let draw_dsc: *mut lv_draw_arc_dsc_t =
                    __Environment.Convert_to_native_pointer(draw_dsc) as *mut _;
                lv_obj_init_draw_arc_dsc(obj, part, draw_dsc);
            }
            Function_calls_type::lv_obj_calculate_ext_draw_size => {
                if __Arguments_count != 2 {
                    return;
                }
                let obj = __Argument_0;
                let part = __Argument_1;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let part = part as u32;
                let __Current_result = lv_obj_calculate_ext_draw_size(obj, part);
                let __Result = __Result as *mut i32;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_obj_refresh_ext_draw_size => {
                if __Arguments_count != 1 {
                    return;
                }
                let obj = __Argument_0;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                lv_obj_refresh_ext_draw_size(obj);
            }
            Function_calls_type::lv_obj_class_create_obj => {
                if __Arguments_count != 2 {
                    return;
                }
                let class_p = __Argument_0;
                let parent = __Argument_1;
                let class_p: *const lv_obj_class_t =
                    __Environment.Convert_to_native_pointer(class_p) as *mut _;
                let parent: *mut lv_obj_t =
                    __Environment.Convert_to_native_pointer(parent) as *mut _;
                let __Current_result = lv_obj_class_create_obj(class_p, parent);
                let __Current_result = __Environment.Convert_to_WASM_pointer(__Current_result);
                let __Result = __Result as *mut WASM_pointer_type;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_obj_class_init_obj => {
                if __Arguments_count != 1 {
                    return;
                }
                let obj = __Argument_0;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                lv_obj_class_init_obj(obj);
            }
            Function_calls_type::lv_obj_is_editable => {
                if __Arguments_count != 1 {
                    return;
                }
                let obj = __Argument_0;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let __Current_result = lv_obj_is_editable(obj);
                let __Result = __Result as *mut bool;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_obj_is_group_def => {
                if __Arguments_count != 1 {
                    return;
                }
                let obj = __Argument_0;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let __Current_result = lv_obj_is_group_def(obj);
                let __Result = __Result as *mut bool;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_obj_send_event => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let event_code = __Argument_1;
                let param = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let event_code = event_code as core::ffi::c_uint;
                let param: *mut core::ffi::c_void =
                    __Environment.Convert_to_native_pointer(param) as *mut _;
                let __Current_result = lv_obj_send_event(obj, event_code, param);
                let __Result = __Result as *mut lv_result_t;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_obj_event_base => {
                if __Arguments_count != 2 {
                    return;
                }
                let class_p = __Argument_0;
                let e = __Argument_1;
                let class_p: *const lv_obj_class_t =
                    __Environment.Convert_to_native_pointer(class_p) as *mut _;
                let e: *mut lv_event_t = __Environment.Convert_to_native_pointer(e) as *mut _;
                let __Current_result = lv_obj_event_base(class_p, e);
                let __Result = __Result as *mut lv_result_t;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_obj_add_event_cb => {
                if __Arguments_count != 4 {
                    return;
                }
                let obj = __Argument_0;
                let event_cb = __Argument_1;
                let filter = __Argument_2;
                let user_data = __Argument_3;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let event_cb = if event_cb == 0 {
                    core::option::Option::None
                } else {
                    #[allow(clippy::missing_transmute_annotations)]
                    core::option::Option::Some(core::mem::transmute(event_cb))
                };
                let filter = filter as core::ffi::c_uint;
                let user_data: *mut core::ffi::c_void =
                    __Environment.Convert_to_native_pointer(user_data) as *mut _;
                let __Current_result = lv_obj_add_event_cb(obj, event_cb, filter, user_data);
                let __Current_result = __Environment.Convert_to_WASM_pointer(__Current_result);
                let __Result = __Result as *mut WASM_pointer_type;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_obj_get_event_count => {
                if __Arguments_count != 1 {
                    return;
                }
                let obj = __Argument_0;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let __Current_result = lv_obj_get_event_count(obj);
                let __Result = __Result as *mut u32;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_obj_get_event_dsc => {
                if __Arguments_count != 2 {
                    return;
                }
                let obj = __Argument_0;
                let index = __Argument_1;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let index = index as u32;
                let __Current_result = lv_obj_get_event_dsc(obj, index);
                let __Current_result = __Environment.Convert_to_WASM_pointer(__Current_result);
                let __Result = __Result as *mut WASM_pointer_type;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_obj_remove_event => {
                if __Arguments_count != 2 {
                    return;
                }
                let obj = __Argument_0;
                let index = __Argument_1;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let index = index as u32;
                let __Current_result = lv_obj_remove_event(obj, index);
                let __Result = __Result as *mut bool;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_obj_remove_event_cb => {
                if __Arguments_count != 2 {
                    return;
                }
                let obj = __Argument_0;
                let event_cb = __Argument_1;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let event_cb = if event_cb == 0 {
                    core::option::Option::None
                } else {
                    #[allow(clippy::missing_transmute_annotations)]
                    core::option::Option::Some(core::mem::transmute(event_cb))
                };
                let __Current_result = lv_obj_remove_event_cb(obj, event_cb);
                let __Result = __Result as *mut bool;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_obj_remove_event_dsc => {
                if __Arguments_count != 2 {
                    return;
                }
                let obj = __Argument_0;
                let dsc = __Argument_1;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let dsc: *mut lv_event_dsc_t =
                    __Environment.Convert_to_native_pointer(dsc) as *mut _;
                let __Current_result = lv_obj_remove_event_dsc(obj, dsc);
                let __Result = __Result as *mut bool;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_obj_remove_event_cb_with_user_data => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let event_cb = __Argument_1;
                let user_data = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let event_cb = if event_cb == 0 {
                    core::option::Option::None
                } else {
                    #[allow(clippy::missing_transmute_annotations)]
                    core::option::Option::Some(core::mem::transmute(event_cb))
                };
                let user_data: *mut core::ffi::c_void =
                    __Environment.Convert_to_native_pointer(user_data) as *mut _;
                let __Current_result =
                    lv_obj_remove_event_cb_with_user_data(obj, event_cb, user_data);
                let __Result = __Result as *mut u32;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_obj_create => {
                if __Arguments_count != 1 {
                    return;
                }
                let parent = __Argument_0;
                let parent: *mut lv_obj_t =
                    __Environment.Convert_to_native_pointer(parent) as *mut _;
                let __Current_result = lv_obj_create(parent);
                let __Current_result = __Environment.Convert_to_WASM_pointer(__Current_result);
                let __Result = __Result as *mut WASM_pointer_type;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_obj_add_flag => {
                if __Arguments_count != 2 {
                    return;
                }
                let obj = __Argument_0;
                let f = __Argument_1;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let f = f as core::ffi::c_uint;
                lv_obj_add_flag(obj, f);
            }
            Function_calls_type::lv_obj_remove_flag => {
                if __Arguments_count != 2 {
                    return;
                }
                let obj = __Argument_0;
                let f = __Argument_1;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let f = f as core::ffi::c_uint;
                lv_obj_remove_flag(obj, f);
            }
            Function_calls_type::lv_obj_update_flag => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let f = __Argument_1;
                let v = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let f = f as core::ffi::c_uint;
                let v = v != 0;
                lv_obj_update_flag(obj, f, v);
            }
            Function_calls_type::lv_obj_add_state => {
                if __Arguments_count != 2 {
                    return;
                }
                let obj = __Argument_0;
                let state = __Argument_1;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let state = state as u16;
                lv_obj_add_state(obj, state);
            }
            Function_calls_type::lv_obj_remove_state => {
                if __Arguments_count != 2 {
                    return;
                }
                let obj = __Argument_0;
                let state = __Argument_1;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let state = state as u16;
                lv_obj_remove_state(obj, state);
            }
            Function_calls_type::lv_obj_set_state => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let state = __Argument_1;
                let v = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let state = state as u16;
                let v = v != 0;
                lv_obj_set_state(obj, state, v);
            }
            Function_calls_type::lv_obj_set_user_data => {
                if __Arguments_count != 2 {
                    return;
                }
                let obj = __Argument_0;
                let user_data = __Argument_1;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let user_data: *mut core::ffi::c_void =
                    __Environment.Convert_to_native_pointer(user_data) as *mut _;
                lv_obj_set_user_data(obj, user_data);
            }
            Function_calls_type::lv_obj_has_flag => {
                if __Arguments_count != 2 {
                    return;
                }
                let obj = __Argument_0;
                let f = __Argument_1;
                let obj: *const lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let f = f as core::ffi::c_uint;
                let __Current_result = lv_obj_has_flag(obj, f);
                let __Result = __Result as *mut bool;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_obj_has_flag_any => {
                if __Arguments_count != 2 {
                    return;
                }
                let obj = __Argument_0;
                let f = __Argument_1;
                let obj: *const lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let f = f as core::ffi::c_uint;
                let __Current_result = lv_obj_has_flag_any(obj, f);
                let __Result = __Result as *mut bool;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_obj_get_state => {
                if __Arguments_count != 1 {
                    return;
                }
                let obj = __Argument_0;
                let obj: *const lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let __Current_result = lv_obj_get_state(obj);
                let __Result = __Result as *mut lv_state_t;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_obj_has_state => {
                if __Arguments_count != 2 {
                    return;
                }
                let obj = __Argument_0;
                let state = __Argument_1;
                let obj: *const lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let state = state as u16;
                let __Current_result = lv_obj_has_state(obj, state);
                let __Result = __Result as *mut bool;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_obj_get_group => {
                if __Arguments_count != 1 {
                    return;
                }
                let obj = __Argument_0;
                let obj: *const lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let __Current_result = lv_obj_get_group(obj);
                let __Current_result = __Environment.Convert_to_WASM_pointer(__Current_result);
                let __Result = __Result as *mut WASM_pointer_type;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_obj_get_user_data => {
                if __Arguments_count != 1 {
                    return;
                }
                let obj = __Argument_0;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let __Current_result = lv_obj_get_user_data(obj);
                let __Current_result = __Environment.Convert_to_WASM_pointer(__Current_result);
                let __Result = __Result as *mut WASM_pointer_type;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_obj_allocate_spec_attr => {
                if __Arguments_count != 1 {
                    return;
                }
                let obj = __Argument_0;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                lv_obj_allocate_spec_attr(obj);
            }
            Function_calls_type::lv_obj_check_type => {
                if __Arguments_count != 2 {
                    return;
                }
                let obj = __Argument_0;
                let class_p = __Argument_1;
                let obj: *const lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let class_p: *const lv_obj_class_t =
                    __Environment.Convert_to_native_pointer(class_p) as *mut _;
                let __Current_result = lv_obj_check_type(obj, class_p);
                let __Result = __Result as *mut bool;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_obj_has_class => {
                if __Arguments_count != 2 {
                    return;
                }
                let obj = __Argument_0;
                let class_p = __Argument_1;
                let obj: *const lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let class_p: *const lv_obj_class_t =
                    __Environment.Convert_to_native_pointer(class_p) as *mut _;
                let __Current_result = lv_obj_has_class(obj, class_p);
                let __Result = __Result as *mut bool;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_obj_get_class => {
                if __Arguments_count != 1 {
                    return;
                }
                let obj = __Argument_0;
                let obj: *const lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let __Current_result = lv_obj_get_class(obj);
                let __Current_result = __Environment.Convert_to_WASM_pointer(__Current_result);
                let __Result = __Result as *mut WASM_pointer_type;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_obj_is_valid => {
                if __Arguments_count != 1 {
                    return;
                }
                let obj = __Argument_0;
                let obj: *const lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let __Current_result = lv_obj_is_valid(obj);
                let __Result = __Result as *mut bool;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_obj_null_on_delete => {
                if __Arguments_count != 1 {
                    return;
                }
                let obj_ptr = __Argument_0;
                let obj_ptr: *mut *mut lv_obj_t =
                    __Environment.Convert_to_native_pointer(obj_ptr) as *mut _;
                lv_obj_null_on_delete(obj_ptr);
            }
            Function_calls_type::lv_obj_redraw => {
                if __Arguments_count != 2 {
                    return;
                }
                let layer = __Argument_0;
                let obj = __Argument_1;
                let layer: *mut lv_layer_t =
                    __Environment.Convert_to_native_pointer(layer) as *mut _;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                lv_obj_redraw(layer, obj);
            }
            Function_calls_type::lv_arc_create => {
                if __Arguments_count != 1 {
                    return;
                }
                let parent = __Argument_0;
                let parent: *mut lv_obj_t =
                    __Environment.Convert_to_native_pointer(parent) as *mut _;
                let __Current_result = lv_arc_create(parent);
                let __Current_result = __Environment.Convert_to_WASM_pointer(__Current_result);
                let __Result = __Result as *mut WASM_pointer_type;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_arc_set_start_angle => {
                if __Arguments_count != 2 {
                    return;
                }
                let obj = __Argument_0;
                let start = __Argument_1;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let start = start as i32;
                lv_arc_set_start_angle(obj, start);
            }
            Function_calls_type::lv_arc_set_end_angle => {
                if __Arguments_count != 2 {
                    return;
                }
                let obj = __Argument_0;
                let end = __Argument_1;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let end = end as i32;
                lv_arc_set_end_angle(obj, end);
            }
            Function_calls_type::lv_arc_set_angles => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let start = __Argument_1;
                let end = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let start = start as i32;
                let end = end as i32;
                lv_arc_set_angles(obj, start, end);
            }
            Function_calls_type::lv_arc_set_bg_start_angle => {
                if __Arguments_count != 2 {
                    return;
                }
                let obj = __Argument_0;
                let start = __Argument_1;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let start = start as i32;
                lv_arc_set_bg_start_angle(obj, start);
            }
            Function_calls_type::lv_arc_set_bg_end_angle => {
                if __Arguments_count != 2 {
                    return;
                }
                let obj = __Argument_0;
                let end = __Argument_1;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let end = end as i32;
                lv_arc_set_bg_end_angle(obj, end);
            }
            Function_calls_type::lv_arc_set_bg_angles => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let start = __Argument_1;
                let end = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let start = start as i32;
                let end = end as i32;
                lv_arc_set_bg_angles(obj, start, end);
            }
            Function_calls_type::lv_arc_set_rotation => {
                if __Arguments_count != 2 {
                    return;
                }
                let obj = __Argument_0;
                let rotation = __Argument_1;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let rotation = rotation as i32;
                lv_arc_set_rotation(obj, rotation);
            }
            Function_calls_type::lv_arc_set_mode => {
                if __Arguments_count != 2 {
                    return;
                }
                let obj = __Argument_0;
                let type_ = __Argument_1;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let type_ = type_ as core::ffi::c_uint;
                lv_arc_set_mode(obj, type_);
            }
            Function_calls_type::lv_arc_set_value => {
                if __Arguments_count != 2 {
                    return;
                }
                let obj = __Argument_0;
                let value = __Argument_1;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let value = value as i32;
                lv_arc_set_value(obj, value);
            }
            Function_calls_type::lv_arc_set_range => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let min = __Argument_1;
                let max = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let min = min as i32;
                let max = max as i32;
                lv_arc_set_range(obj, min, max);
            }
            Function_calls_type::lv_arc_set_change_rate => {
                if __Arguments_count != 2 {
                    return;
                }
                let obj = __Argument_0;
                let rate = __Argument_1;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let rate = rate as u32;
                lv_arc_set_change_rate(obj, rate);
            }
            Function_calls_type::lv_arc_set_knob_offset => {
                if __Arguments_count != 2 {
                    return;
                }
                let obj = __Argument_0;
                let offset = __Argument_1;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let offset = offset as i32;
                lv_arc_set_knob_offset(obj, offset);
            }
            Function_calls_type::lv_arc_get_angle_start => {
                if __Arguments_count != 1 {
                    return;
                }
                let obj = __Argument_0;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let __Current_result = lv_arc_get_angle_start(obj);
                let __Result = __Result as *mut lv_value_precise_t;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_arc_get_angle_end => {
                if __Arguments_count != 1 {
                    return;
                }
                let obj = __Argument_0;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let __Current_result = lv_arc_get_angle_end(obj);
                let __Result = __Result as *mut lv_value_precise_t;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_arc_get_bg_angle_start => {
                if __Arguments_count != 1 {
                    return;
                }
                let obj = __Argument_0;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let __Current_result = lv_arc_get_bg_angle_start(obj);
                let __Result = __Result as *mut lv_value_precise_t;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_arc_get_bg_angle_end => {
                if __Arguments_count != 1 {
                    return;
                }
                let obj = __Argument_0;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let __Current_result = lv_arc_get_bg_angle_end(obj);
                let __Result = __Result as *mut lv_value_precise_t;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_arc_get_value => {
                if __Arguments_count != 1 {
                    return;
                }
                let obj = __Argument_0;
                let obj: *const lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let __Current_result = lv_arc_get_value(obj);
                let __Result = __Result as *mut i32;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_arc_get_min_value => {
                if __Arguments_count != 1 {
                    return;
                }
                let obj = __Argument_0;
                let obj: *const lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let __Current_result = lv_arc_get_min_value(obj);
                let __Result = __Result as *mut i32;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_arc_get_max_value => {
                if __Arguments_count != 1 {
                    return;
                }
                let obj = __Argument_0;
                let obj: *const lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let __Current_result = lv_arc_get_max_value(obj);
                let __Result = __Result as *mut i32;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_arc_get_mode => {
                if __Arguments_count != 1 {
                    return;
                }
                let obj = __Argument_0;
                let obj: *const lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let __Current_result = lv_arc_get_mode(obj);
                let __Result = __Result as *mut lv_arc_mode_t;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_arc_get_rotation => {
                if __Arguments_count != 1 {
                    return;
                }
                let obj = __Argument_0;
                let obj: *const lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let __Current_result = lv_arc_get_rotation(obj);
                let __Result = __Result as *mut i32;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_arc_get_knob_offset => {
                if __Arguments_count != 1 {
                    return;
                }
                let obj = __Argument_0;
                let obj: *const lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let __Current_result = lv_arc_get_knob_offset(obj);
                let __Result = __Result as *mut i32;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_arc_align_obj_to_angle => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let obj_to_align = __Argument_1;
                let r_offset = __Argument_2;
                let obj: *const lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let obj_to_align: *mut lv_obj_t =
                    __Environment.Convert_to_native_pointer(obj_to_align) as *mut _;
                let r_offset = r_offset as i32;
                lv_arc_align_obj_to_angle(obj, obj_to_align, r_offset);
            }
            Function_calls_type::lv_arc_rotate_obj_to_angle => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let obj_to_rotate = __Argument_1;
                let r_offset = __Argument_2;
                let obj: *const lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let obj_to_rotate: *mut lv_obj_t =
                    __Environment.Convert_to_native_pointer(obj_to_rotate) as *mut _;
                let r_offset = r_offset as i32;
                lv_arc_rotate_obj_to_angle(obj, obj_to_rotate, r_offset);
            }
            Function_calls_type::lv_buttonmatrix_create => {
                if __Arguments_count != 1 {
                    return;
                }
                let parent = __Argument_0;
                let parent: *mut lv_obj_t =
                    __Environment.Convert_to_native_pointer(parent) as *mut _;
                let __Current_result = lv_buttonmatrix_create(parent);
                let __Current_result = __Environment.Convert_to_WASM_pointer(__Current_result);
                let __Result = __Result as *mut WASM_pointer_type;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_buttonmatrix_set_map => {
                if __Arguments_count != 2 {
                    return;
                }
                let obj = __Argument_0;
                let map = __Argument_1;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let map: *mut *const core::ffi::c_char =
                    __Environment.Convert_to_native_pointer(map) as *mut _;
                lv_buttonmatrix_set_map(obj, map);
            }
            Function_calls_type::lv_buttonmatrix_set_ctrl_map => {
                if __Arguments_count != 2 {
                    return;
                }
                let obj = __Argument_0;
                let ctrl_map = __Argument_1;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let ctrl_map: *const lv_buttonmatrix_ctrl_t =
                    __Environment.Convert_to_native_pointer(ctrl_map) as *mut _;
                lv_buttonmatrix_set_ctrl_map(obj, ctrl_map);
            }
            Function_calls_type::lv_buttonmatrix_set_selected_button => {
                if __Arguments_count != 2 {
                    return;
                }
                let obj = __Argument_0;
                let btn_id = __Argument_1;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let btn_id = btn_id as u32;
                lv_buttonmatrix_set_selected_button(obj, btn_id);
            }
            Function_calls_type::lv_buttonmatrix_set_button_ctrl => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let btn_id = __Argument_1;
                let ctrl = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let btn_id = btn_id as u32;
                let ctrl = ctrl as core::ffi::c_uint;
                lv_buttonmatrix_set_button_ctrl(obj, btn_id, ctrl);
            }
            Function_calls_type::lv_buttonmatrix_clear_button_ctrl => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let btn_id = __Argument_1;
                let ctrl = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let btn_id = btn_id as u32;
                let ctrl = ctrl as core::ffi::c_uint;
                lv_buttonmatrix_clear_button_ctrl(obj, btn_id, ctrl);
            }
            Function_calls_type::lv_buttonmatrix_set_button_ctrl_all => {
                if __Arguments_count != 2 {
                    return;
                }
                let obj = __Argument_0;
                let ctrl = __Argument_1;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let ctrl = ctrl as core::ffi::c_uint;
                lv_buttonmatrix_set_button_ctrl_all(obj, ctrl);
            }
            Function_calls_type::lv_buttonmatrix_clear_button_ctrl_all => {
                if __Arguments_count != 2 {
                    return;
                }
                let obj = __Argument_0;
                let ctrl = __Argument_1;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let ctrl = ctrl as core::ffi::c_uint;
                lv_buttonmatrix_clear_button_ctrl_all(obj, ctrl);
            }
            Function_calls_type::lv_buttonmatrix_set_button_width => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let btn_id = __Argument_1;
                let width = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let btn_id = btn_id as u32;
                let width = width as u32;
                lv_buttonmatrix_set_button_width(obj, btn_id, width);
            }
            Function_calls_type::lv_buttonmatrix_set_one_checked => {
                if __Arguments_count != 2 {
                    return;
                }
                let obj = __Argument_0;
                let en = __Argument_1;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let en = en != 0;
                lv_buttonmatrix_set_one_checked(obj, en);
            }
            Function_calls_type::lv_buttonmatrix_get_map => {
                if __Arguments_count != 1 {
                    return;
                }
                let obj = __Argument_0;
                let obj: *const lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let __Current_result = lv_buttonmatrix_get_map(obj);
                let __Current_result = __Environment.Convert_to_WASM_pointer(__Current_result);
                let __Result = __Result as *mut WASM_pointer_type;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_buttonmatrix_get_selected_button => {
                if __Arguments_count != 1 {
                    return;
                }
                let obj = __Argument_0;
                let obj: *const lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let __Current_result = lv_buttonmatrix_get_selected_button(obj);
                let __Result = __Result as *mut u32;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_buttonmatrix_get_button_text => {
                if __Arguments_count != 2 {
                    return;
                }
                let obj = __Argument_0;
                let btn_id = __Argument_1;
                let obj: *const lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let btn_id = btn_id as u32;
                let __Current_result = lv_buttonmatrix_get_button_text(obj, btn_id);
                let __Current_result = __Environment.Convert_to_WASM_pointer(__Current_result);
                let __Result = __Result as *mut WASM_pointer_type;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_buttonmatrix_has_button_ctrl => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let btn_id = __Argument_1;
                let ctrl = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let btn_id = btn_id as u32;
                let ctrl = ctrl as core::ffi::c_uint;
                let __Current_result = lv_buttonmatrix_has_button_ctrl(obj, btn_id, ctrl);
                let __Result = __Result as *mut bool;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_buttonmatrix_get_one_checked => {
                if __Arguments_count != 1 {
                    return;
                }
                let obj = __Argument_0;
                let obj: *const lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let __Current_result = lv_buttonmatrix_get_one_checked(obj);
                let __Result = __Result as *mut bool;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_calendar_create => {
                if __Arguments_count != 1 {
                    return;
                }
                let parent = __Argument_0;
                let parent: *mut lv_obj_t =
                    __Environment.Convert_to_native_pointer(parent) as *mut _;
                let __Current_result = lv_calendar_create(parent);
                let __Current_result = __Environment.Convert_to_WASM_pointer(__Current_result);
                let __Result = __Result as *mut WASM_pointer_type;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_calendar_set_today_date => {
                if __Arguments_count != 4 {
                    return;
                }
                let obj = __Argument_0;
                let year = __Argument_1;
                let month = __Argument_2;
                let day = __Argument_3;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let year = year as u32;
                let month = month as u32;
                let day = day as u32;
                lv_calendar_set_today_date(obj, year, month, day);
            }
            Function_calls_type::lv_calendar_set_showed_date => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let year = __Argument_1;
                let month = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let year = year as u32;
                let month = month as u32;
                lv_calendar_set_showed_date(obj, year, month);
            }
            Function_calls_type::lv_calendar_set_highlighted_dates => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let highlighted = __Argument_1;
                let date_num = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let highlighted: *mut lv_calendar_date_t =
                    __Environment.Convert_to_native_pointer(highlighted) as *mut _;
                lv_calendar_set_highlighted_dates(obj, highlighted, date_num);
            }
            Function_calls_type::lv_calendar_set_day_names => {
                if __Arguments_count != 2 {
                    return;
                }
                let obj = __Argument_0;
                let day_names = __Argument_1;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let day_names: *mut *const core::ffi::c_char =
                    __Environment.Convert_to_native_pointer(day_names) as *mut _;
                lv_calendar_set_day_names(obj, day_names);
            }
            Function_calls_type::lv_calendar_get_btnmatrix => {
                if __Arguments_count != 1 {
                    return;
                }
                let obj = __Argument_0;
                let obj: *const lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let __Current_result = lv_calendar_get_btnmatrix(obj);
                let __Current_result = __Environment.Convert_to_WASM_pointer(__Current_result);
                let __Result = __Result as *mut WASM_pointer_type;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_calendar_get_today_date => {
                if __Arguments_count != 1 {
                    return;
                }
                let calendar = __Argument_0;
                let calendar: *const lv_obj_t =
                    __Environment.Convert_to_native_pointer(calendar) as *mut _;
                let __Current_result = lv_calendar_get_today_date(calendar);
                let __Current_result = __Environment.Convert_to_WASM_pointer(__Current_result);
                let __Result = __Result as *mut WASM_pointer_type;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_calendar_get_showed_date => {
                if __Arguments_count != 1 {
                    return;
                }
                let calendar = __Argument_0;
                let calendar: *const lv_obj_t =
                    __Environment.Convert_to_native_pointer(calendar) as *mut _;
                let __Current_result = lv_calendar_get_showed_date(calendar);
                let __Current_result = __Environment.Convert_to_WASM_pointer(__Current_result);
                let __Result = __Result as *mut WASM_pointer_type;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_calendar_get_highlighted_dates => {
                if __Arguments_count != 1 {
                    return;
                }
                let calendar = __Argument_0;
                let calendar: *const lv_obj_t =
                    __Environment.Convert_to_native_pointer(calendar) as *mut _;
                let __Current_result = lv_calendar_get_highlighted_dates(calendar);
                let __Current_result = __Environment.Convert_to_WASM_pointer(__Current_result);
                let __Result = __Result as *mut WASM_pointer_type;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_calendar_get_highlighted_dates_num => {
                if __Arguments_count != 1 {
                    return;
                }
                let calendar = __Argument_0;
                let calendar: *const lv_obj_t =
                    __Environment.Convert_to_native_pointer(calendar) as *mut _;
                let __Current_result = lv_calendar_get_highlighted_dates_num(calendar);
                let __Result = __Result as *mut usize;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_calendar_get_pressed_date => {
                if __Arguments_count != 2 {
                    return;
                }
                let calendar = __Argument_0;
                let date = __Argument_1;
                let calendar: *const lv_obj_t =
                    __Environment.Convert_to_native_pointer(calendar) as *mut _;
                let date: *mut lv_calendar_date_t =
                    __Environment.Convert_to_native_pointer(date) as *mut _;
                let __Current_result = lv_calendar_get_pressed_date(calendar, date);
                let __Result = __Result as *mut lv_result_t;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_calendar_header_arrow_create => {
                if __Arguments_count != 1 {
                    return;
                }
                let parent = __Argument_0;
                let parent: *mut lv_obj_t =
                    __Environment.Convert_to_native_pointer(parent) as *mut _;
                let __Current_result = lv_calendar_header_arrow_create(parent);
                let __Current_result = __Environment.Convert_to_WASM_pointer(__Current_result);
                let __Result = __Result as *mut WASM_pointer_type;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_calendar_header_dropdown_create => {
                if __Arguments_count != 1 {
                    return;
                }
                let parent = __Argument_0;
                let parent: *mut lv_obj_t =
                    __Environment.Convert_to_native_pointer(parent) as *mut _;
                let __Current_result = lv_calendar_header_dropdown_create(parent);
                let __Current_result = __Environment.Convert_to_WASM_pointer(__Current_result);
                let __Result = __Result as *mut WASM_pointer_type;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_calendar_header_dropdown_set_year_list => {
                if __Arguments_count != 2 {
                    return;
                }
                let parent = __Argument_0;
                let years_list = __Argument_1;
                let parent: *mut lv_obj_t =
                    __Environment.Convert_to_native_pointer(parent) as *mut _;
                let years_list: *const core::ffi::c_char =
                    __Environment.Convert_to_native_pointer(years_list) as *mut _;
                lv_calendar_header_dropdown_set_year_list(parent, years_list);
            }
            Function_calls_type::lv_chart_create => {
                if __Arguments_count != 1 {
                    return;
                }
                let parent = __Argument_0;
                let parent: *mut lv_obj_t =
                    __Environment.Convert_to_native_pointer(parent) as *mut _;
                let __Current_result = lv_chart_create(parent);
                let __Current_result = __Environment.Convert_to_WASM_pointer(__Current_result);
                let __Result = __Result as *mut WASM_pointer_type;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_chart_set_type => {
                if __Arguments_count != 2 {
                    return;
                }
                let obj = __Argument_0;
                let type_ = __Argument_1;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let type_ = type_ as core::ffi::c_uint;
                lv_chart_set_type(obj, type_);
            }
            Function_calls_type::lv_chart_set_point_count => {
                if __Arguments_count != 2 {
                    return;
                }
                let obj = __Argument_0;
                let cnt = __Argument_1;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let cnt = cnt as u32;
                lv_chart_set_point_count(obj, cnt);
            }
            Function_calls_type::lv_chart_set_range => {
                if __Arguments_count != 4 {
                    return;
                }
                let obj = __Argument_0;
                let axis = __Argument_1;
                let min = __Argument_2;
                let max = __Argument_3;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let axis = axis as core::ffi::c_uint;
                let min = min as i32;
                let max = max as i32;
                lv_chart_set_range(obj, axis, min, max);
            }
            Function_calls_type::lv_chart_set_update_mode => {
                if __Arguments_count != 2 {
                    return;
                }
                let obj = __Argument_0;
                let update_mode = __Argument_1;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let update_mode = update_mode as core::ffi::c_uint;
                lv_chart_set_update_mode(obj, update_mode);
            }
            Function_calls_type::lv_chart_set_div_line_count => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let hdiv = __Argument_1;
                let vdiv = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let hdiv = hdiv as u8;
                let vdiv = vdiv as u8;
                lv_chart_set_div_line_count(obj, hdiv, vdiv);
            }
            Function_calls_type::lv_chart_get_type => {
                if __Arguments_count != 1 {
                    return;
                }
                let obj = __Argument_0;
                let obj: *const lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let __Current_result = lv_chart_get_type(obj);
                let __Result = __Result as *mut lv_chart_type_t;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_chart_get_point_count => {
                if __Arguments_count != 1 {
                    return;
                }
                let obj = __Argument_0;
                let obj: *const lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let __Current_result = lv_chart_get_point_count(obj);
                let __Result = __Result as *mut u32;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_chart_get_x_start_point => {
                if __Arguments_count != 2 {
                    return;
                }
                let obj = __Argument_0;
                let ser = __Argument_1;
                let obj: *const lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let ser: *mut lv_chart_series_t =
                    __Environment.Convert_to_native_pointer(ser) as *mut _;
                let __Current_result = lv_chart_get_x_start_point(obj, ser);
                let __Result = __Result as *mut u32;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_chart_get_point_pos_by_id => {
                if __Arguments_count != 4 {
                    return;
                }
                let obj = __Argument_0;
                let ser = __Argument_1;
                let id = __Argument_2;
                let p_out = __Argument_3;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let ser: *mut lv_chart_series_t =
                    __Environment.Convert_to_native_pointer(ser) as *mut _;
                let id = id as u32;
                let p_out: *mut lv_point_t =
                    __Environment.Convert_to_native_pointer(p_out) as *mut _;
                lv_chart_get_point_pos_by_id(obj, ser, id, p_out);
            }
            Function_calls_type::lv_chart_refresh => {
                if __Arguments_count != 1 {
                    return;
                }
                let obj = __Argument_0;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                lv_chart_refresh(obj);
            }
            Function_calls_type::lv_chart_add_series => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let color = __Argument_1;
                let axis = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let color = lv_color_t {
                    blue: color as u8,
                    green: (color >> 8) as u8,
                    red: (color >> 16) as u8,
                };
                let axis = axis as core::ffi::c_uint;
                let __Current_result = lv_chart_add_series(obj, color, axis);
                let __Current_result = __Environment.Convert_to_WASM_pointer(__Current_result);
                let __Result = __Result as *mut WASM_pointer_type;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_chart_remove_series => {
                if __Arguments_count != 2 {
                    return;
                }
                let obj = __Argument_0;
                let series = __Argument_1;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let series: *mut lv_chart_series_t =
                    __Environment.Convert_to_native_pointer(series) as *mut _;
                lv_chart_remove_series(obj, series);
            }
            Function_calls_type::lv_chart_hide_series => {
                if __Arguments_count != 3 {
                    return;
                }
                let chart = __Argument_0;
                let series = __Argument_1;
                let hide = __Argument_2;
                let chart: *mut lv_obj_t = __Environment.Convert_to_native_pointer(chart) as *mut _;
                let series: *mut lv_chart_series_t =
                    __Environment.Convert_to_native_pointer(series) as *mut _;
                let hide = hide != 0;
                lv_chart_hide_series(chart, series, hide);
            }
            Function_calls_type::lv_chart_set_series_color => {
                if __Arguments_count != 3 {
                    return;
                }
                let chart = __Argument_0;
                let series = __Argument_1;
                let color = __Argument_2;
                let chart: *mut lv_obj_t = __Environment.Convert_to_native_pointer(chart) as *mut _;
                let series: *mut lv_chart_series_t =
                    __Environment.Convert_to_native_pointer(series) as *mut _;
                let color = lv_color_t {
                    blue: color as u8,
                    green: (color >> 8) as u8,
                    red: (color >> 16) as u8,
                };
                lv_chart_set_series_color(chart, series, color);
            }
            Function_calls_type::lv_chart_get_series_color => {
                if __Arguments_count != 2 {
                    return;
                }
                let chart = __Argument_0;
                let series = __Argument_1;
                let chart: *mut lv_obj_t = __Environment.Convert_to_native_pointer(chart) as *mut _;
                let series: *const lv_chart_series_t =
                    __Environment.Convert_to_native_pointer(series) as *mut _;
                let __Current_result = lv_chart_get_series_color(chart, series);
                let __Result = __Result as *mut lv_color_t;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_chart_set_x_start_point => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let ser = __Argument_1;
                let id = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let ser: *mut lv_chart_series_t =
                    __Environment.Convert_to_native_pointer(ser) as *mut _;
                let id = id as u32;
                lv_chart_set_x_start_point(obj, ser, id);
            }
            Function_calls_type::lv_chart_get_series_next => {
                if __Arguments_count != 2 {
                    return;
                }
                let chart = __Argument_0;
                let ser = __Argument_1;
                let chart: *const lv_obj_t =
                    __Environment.Convert_to_native_pointer(chart) as *mut _;
                let ser: *const lv_chart_series_t =
                    __Environment.Convert_to_native_pointer(ser) as *mut _;
                let __Current_result = lv_chart_get_series_next(chart, ser);
                let __Current_result = __Environment.Convert_to_WASM_pointer(__Current_result);
                let __Result = __Result as *mut WASM_pointer_type;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_chart_add_cursor => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let color = __Argument_1;
                let dir = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let color = lv_color_t {
                    blue: color as u8,
                    green: (color >> 8) as u8,
                    red: (color >> 16) as u8,
                };
                let dir = dir as core::ffi::c_uint;
                let __Current_result = lv_chart_add_cursor(obj, color, dir);
                let __Current_result = __Environment.Convert_to_WASM_pointer(__Current_result);
                let __Result = __Result as *mut WASM_pointer_type;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_chart_set_cursor_pos => {
                if __Arguments_count != 3 {
                    return;
                }
                let chart = __Argument_0;
                let cursor = __Argument_1;
                let pos = __Argument_2;
                let chart: *mut lv_obj_t = __Environment.Convert_to_native_pointer(chart) as *mut _;
                let cursor: *mut lv_chart_cursor_t =
                    __Environment.Convert_to_native_pointer(cursor) as *mut _;
                let pos: *mut lv_point_t = __Environment.Convert_to_native_pointer(pos) as *mut _;
                lv_chart_set_cursor_pos(chart, cursor, pos);
            }
            Function_calls_type::lv_chart_set_cursor_point => {
                if __Arguments_count != 4 {
                    return;
                }
                let chart = __Argument_0;
                let cursor = __Argument_1;
                let ser = __Argument_2;
                let point_id = __Argument_3;
                let chart: *mut lv_obj_t = __Environment.Convert_to_native_pointer(chart) as *mut _;
                let cursor: *mut lv_chart_cursor_t =
                    __Environment.Convert_to_native_pointer(cursor) as *mut _;
                let ser: *mut lv_chart_series_t =
                    __Environment.Convert_to_native_pointer(ser) as *mut _;
                let point_id = point_id as u32;
                lv_chart_set_cursor_point(chart, cursor, ser, point_id);
            }
            Function_calls_type::lv_chart_get_cursor_point => {
                if __Arguments_count != 2 {
                    return;
                }
                let chart = __Argument_0;
                let cursor = __Argument_1;
                let chart: *mut lv_obj_t = __Environment.Convert_to_native_pointer(chart) as *mut _;
                let cursor: *mut lv_chart_cursor_t =
                    __Environment.Convert_to_native_pointer(cursor) as *mut _;
                let __Current_result = lv_chart_get_cursor_point(chart, cursor);
                let __Result = __Result as *mut lv_point_t;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_chart_set_all_value => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let ser = __Argument_1;
                let value = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let ser: *mut lv_chart_series_t =
                    __Environment.Convert_to_native_pointer(ser) as *mut _;
                let value = value as i32;
                lv_chart_set_all_value(obj, ser, value);
            }
            Function_calls_type::lv_chart_set_next_value => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let ser = __Argument_1;
                let value = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let ser: *mut lv_chart_series_t =
                    __Environment.Convert_to_native_pointer(ser) as *mut _;
                let value = value as i32;
                lv_chart_set_next_value(obj, ser, value);
            }
            Function_calls_type::lv_chart_set_next_value2 => {
                if __Arguments_count != 4 {
                    return;
                }
                let obj = __Argument_0;
                let ser = __Argument_1;
                let x_value = __Argument_2;
                let y_value = __Argument_3;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let ser: *mut lv_chart_series_t =
                    __Environment.Convert_to_native_pointer(ser) as *mut _;
                let x_value = x_value as i32;
                let y_value = y_value as i32;
                lv_chart_set_next_value2(obj, ser, x_value, y_value);
            }
            Function_calls_type::lv_chart_set_value_by_id => {
                if __Arguments_count != 4 {
                    return;
                }
                let obj = __Argument_0;
                let ser = __Argument_1;
                let id = __Argument_2;
                let value = __Argument_3;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let ser: *mut lv_chart_series_t =
                    __Environment.Convert_to_native_pointer(ser) as *mut _;
                let id = id as u32;
                let value = value as i32;
                lv_chart_set_value_by_id(obj, ser, id, value);
            }
            Function_calls_type::lv_chart_set_value_by_id2 => {
                if __Arguments_count != 5 {
                    return;
                }
                let obj = __Argument_0;
                let ser = __Argument_1;
                let id = __Argument_2;
                let x_value = __Argument_3;
                let y_value = __Argument_4;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let ser: *mut lv_chart_series_t =
                    __Environment.Convert_to_native_pointer(ser) as *mut _;
                let id = id as u32;
                let x_value = x_value as i32;
                let y_value = y_value as i32;
                lv_chart_set_value_by_id2(obj, ser, id, x_value, y_value);
            }
            Function_calls_type::lv_chart_set_ext_y_array => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let ser = __Argument_1;
                let array = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let ser: *mut lv_chart_series_t =
                    __Environment.Convert_to_native_pointer(ser) as *mut _;
                let array: *mut i32 = __Environment.Convert_to_native_pointer(array) as *mut _;
                lv_chart_set_ext_y_array(obj, ser, array);
            }
            Function_calls_type::lv_chart_set_ext_x_array => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let ser = __Argument_1;
                let array = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let ser: *mut lv_chart_series_t =
                    __Environment.Convert_to_native_pointer(ser) as *mut _;
                let array: *mut i32 = __Environment.Convert_to_native_pointer(array) as *mut _;
                lv_chart_set_ext_x_array(obj, ser, array);
            }
            Function_calls_type::lv_chart_get_y_array => {
                if __Arguments_count != 2 {
                    return;
                }
                let obj = __Argument_0;
                let ser = __Argument_1;
                let obj: *const lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let ser: *mut lv_chart_series_t =
                    __Environment.Convert_to_native_pointer(ser) as *mut _;
                let __Current_result = lv_chart_get_y_array(obj, ser);
                let __Current_result = __Environment.Convert_to_WASM_pointer(__Current_result);
                let __Result = __Result as *mut WASM_pointer_type;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_chart_get_x_array => {
                if __Arguments_count != 2 {
                    return;
                }
                let obj = __Argument_0;
                let ser = __Argument_1;
                let obj: *const lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let ser: *mut lv_chart_series_t =
                    __Environment.Convert_to_native_pointer(ser) as *mut _;
                let __Current_result = lv_chart_get_x_array(obj, ser);
                let __Current_result = __Environment.Convert_to_WASM_pointer(__Current_result);
                let __Result = __Result as *mut WASM_pointer_type;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_chart_get_pressed_point => {
                if __Arguments_count != 1 {
                    return;
                }
                let obj = __Argument_0;
                let obj: *const lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let __Current_result = lv_chart_get_pressed_point(obj);
                let __Result = __Result as *mut u32;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_chart_get_first_point_center_offset => {
                if __Arguments_count != 1 {
                    return;
                }
                let obj = __Argument_0;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let __Current_result = lv_chart_get_first_point_center_offset(obj);
                let __Result = __Result as *mut i32;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_checkbox_create => {
                if __Arguments_count != 1 {
                    return;
                }
                let parent = __Argument_0;
                let parent: *mut lv_obj_t =
                    __Environment.Convert_to_native_pointer(parent) as *mut _;
                let __Current_result = lv_checkbox_create(parent);
                let __Current_result = __Environment.Convert_to_WASM_pointer(__Current_result);
                let __Result = __Result as *mut WASM_pointer_type;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_checkbox_set_text => {
                if __Arguments_count != 2 {
                    return;
                }
                let obj = __Argument_0;
                let txt = __Argument_1;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let txt: *const core::ffi::c_char =
                    __Environment.Convert_to_native_pointer(txt) as *mut _;
                lv_checkbox_set_text(obj, txt);
            }
            Function_calls_type::lv_checkbox_set_text_static => {
                if __Arguments_count != 2 {
                    return;
                }
                let obj = __Argument_0;
                let txt = __Argument_1;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let txt: *const core::ffi::c_char =
                    __Environment.Convert_to_native_pointer(txt) as *mut _;
                lv_checkbox_set_text_static(obj, txt);
            }
            Function_calls_type::lv_checkbox_get_text => {
                if __Arguments_count != 1 {
                    return;
                }
                let obj = __Argument_0;
                let obj: *const lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let __Current_result = lv_checkbox_get_text(obj);
                let __Current_result = __Environment.Convert_to_WASM_pointer(__Current_result);
                let __Result = __Result as *mut WASM_pointer_type;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_dropdown_create => {
                if __Arguments_count != 1 {
                    return;
                }
                let parent = __Argument_0;
                let parent: *mut lv_obj_t =
                    __Environment.Convert_to_native_pointer(parent) as *mut _;
                let __Current_result = lv_dropdown_create(parent);
                let __Current_result = __Environment.Convert_to_WASM_pointer(__Current_result);
                let __Result = __Result as *mut WASM_pointer_type;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_dropdown_set_text => {
                if __Arguments_count != 2 {
                    return;
                }
                let obj = __Argument_0;
                let txt = __Argument_1;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let txt: *const core::ffi::c_char =
                    __Environment.Convert_to_native_pointer(txt) as *mut _;
                lv_dropdown_set_text(obj, txt);
            }
            Function_calls_type::lv_dropdown_set_options => {
                if __Arguments_count != 2 {
                    return;
                }
                let obj = __Argument_0;
                let options = __Argument_1;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let options: *const core::ffi::c_char =
                    __Environment.Convert_to_native_pointer(options) as *mut _;
                lv_dropdown_set_options(obj, options);
            }
            Function_calls_type::lv_dropdown_set_options_static => {
                if __Arguments_count != 2 {
                    return;
                }
                let obj = __Argument_0;
                let options = __Argument_1;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let options: *const core::ffi::c_char =
                    __Environment.Convert_to_native_pointer(options) as *mut _;
                lv_dropdown_set_options_static(obj, options);
            }
            Function_calls_type::lv_dropdown_add_option => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let option = __Argument_1;
                let pos = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let option: *const core::ffi::c_char =
                    __Environment.Convert_to_native_pointer(option) as *mut _;
                let pos = pos as u32;
                lv_dropdown_add_option(obj, option, pos);
            }
            Function_calls_type::lv_dropdown_clear_options => {
                if __Arguments_count != 1 {
                    return;
                }
                let obj = __Argument_0;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                lv_dropdown_clear_options(obj);
            }
            Function_calls_type::lv_dropdown_set_selected => {
                if __Arguments_count != 2 {
                    return;
                }
                let obj = __Argument_0;
                let sel_opt = __Argument_1;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let sel_opt = sel_opt as u32;
                lv_dropdown_set_selected(obj, sel_opt);
            }
            Function_calls_type::lv_dropdown_set_dir => {
                if __Arguments_count != 2 {
                    return;
                }
                let obj = __Argument_0;
                let dir = __Argument_1;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let dir = dir as core::ffi::c_uint;
                lv_dropdown_set_dir(obj, dir);
            }
            Function_calls_type::lv_dropdown_set_symbol => {
                if __Arguments_count != 2 {
                    return;
                }
                let obj = __Argument_0;
                let symbol = __Argument_1;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let symbol: *const core::ffi::c_void =
                    __Environment.Convert_to_native_pointer(symbol) as *mut _;
                lv_dropdown_set_symbol(obj, symbol);
            }
            Function_calls_type::lv_dropdown_set_selected_highlight => {
                if __Arguments_count != 2 {
                    return;
                }
                let obj = __Argument_0;
                let en = __Argument_1;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let en = en != 0;
                lv_dropdown_set_selected_highlight(obj, en);
            }
            Function_calls_type::lv_dropdown_get_list => {
                if __Arguments_count != 1 {
                    return;
                }
                let obj = __Argument_0;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let __Current_result = lv_dropdown_get_list(obj);
                let __Current_result = __Environment.Convert_to_WASM_pointer(__Current_result);
                let __Result = __Result as *mut WASM_pointer_type;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_dropdown_get_text => {
                if __Arguments_count != 1 {
                    return;
                }
                let obj = __Argument_0;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let __Current_result = lv_dropdown_get_text(obj);
                let __Current_result = __Environment.Convert_to_WASM_pointer(__Current_result);
                let __Result = __Result as *mut WASM_pointer_type;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_dropdown_get_options => {
                if __Arguments_count != 1 {
                    return;
                }
                let obj = __Argument_0;
                let obj: *const lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let __Current_result = lv_dropdown_get_options(obj);
                let __Current_result = __Environment.Convert_to_WASM_pointer(__Current_result);
                let __Result = __Result as *mut WASM_pointer_type;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_dropdown_get_selected => {
                if __Arguments_count != 1 {
                    return;
                }
                let obj = __Argument_0;
                let obj: *const lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let __Current_result = lv_dropdown_get_selected(obj);
                let __Result = __Result as *mut u32;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_dropdown_get_option_count => {
                if __Arguments_count != 1 {
                    return;
                }
                let obj = __Argument_0;
                let obj: *const lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let __Current_result = lv_dropdown_get_option_count(obj);
                let __Result = __Result as *mut u32;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_dropdown_get_selected_str => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let buf = __Argument_1;
                let buf_size = __Argument_2;
                let obj: *const lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let buf: *mut core::ffi::c_char =
                    __Environment.Convert_to_native_pointer(buf) as *mut _;
                let buf_size = buf_size as u32;
                lv_dropdown_get_selected_str(obj, buf, buf_size);
            }
            Function_calls_type::lv_dropdown_get_option_index => {
                if __Arguments_count != 2 {
                    return;
                }
                let obj = __Argument_0;
                let option = __Argument_1;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let option: *const core::ffi::c_char =
                    __Environment.Convert_to_native_pointer(option) as *mut _;
                let __Current_result = lv_dropdown_get_option_index(obj, option);
                let __Result = __Result as *mut i32;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_dropdown_get_symbol => {
                if __Arguments_count != 1 {
                    return;
                }
                let obj = __Argument_0;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let __Current_result = lv_dropdown_get_symbol(obj);
                let __Current_result = __Environment.Convert_to_WASM_pointer(__Current_result);
                let __Result = __Result as *mut WASM_pointer_type;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_dropdown_get_selected_highlight => {
                if __Arguments_count != 1 {
                    return;
                }
                let obj = __Argument_0;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let __Current_result = lv_dropdown_get_selected_highlight(obj);
                let __Result = __Result as *mut bool;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_dropdown_get_dir => {
                if __Arguments_count != 1 {
                    return;
                }
                let obj = __Argument_0;
                let obj: *const lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let __Current_result = lv_dropdown_get_dir(obj);
                let __Result = __Result as *mut lv_dir_t;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_dropdown_open => {
                if __Arguments_count != 1 {
                    return;
                }
                let dropdown_obj = __Argument_0;
                let dropdown_obj: *mut lv_obj_t =
                    __Environment.Convert_to_native_pointer(dropdown_obj) as *mut _;
                lv_dropdown_open(dropdown_obj);
            }
            Function_calls_type::lv_dropdown_close => {
                if __Arguments_count != 1 {
                    return;
                }
                let obj = __Argument_0;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                lv_dropdown_close(obj);
            }
            Function_calls_type::lv_dropdown_is_open => {
                if __Arguments_count != 1 {
                    return;
                }
                let obj = __Argument_0;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let __Current_result = lv_dropdown_is_open(obj);
                let __Result = __Result as *mut bool;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_led_create => {
                if __Arguments_count != 1 {
                    return;
                }
                let parent = __Argument_0;
                let parent: *mut lv_obj_t =
                    __Environment.Convert_to_native_pointer(parent) as *mut _;
                let __Current_result = lv_led_create(parent);
                let __Current_result = __Environment.Convert_to_WASM_pointer(__Current_result);
                let __Result = __Result as *mut WASM_pointer_type;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_led_set_color => {
                if __Arguments_count != 2 {
                    return;
                }
                let led = __Argument_0;
                let color = __Argument_1;
                let led: *mut lv_obj_t = __Environment.Convert_to_native_pointer(led) as *mut _;
                let color = lv_color_t {
                    blue: color as u8,
                    green: (color >> 8) as u8,
                    red: (color >> 16) as u8,
                };
                lv_led_set_color(led, color);
            }
            Function_calls_type::lv_led_set_brightness => {
                if __Arguments_count != 2 {
                    return;
                }
                let led = __Argument_0;
                let bright = __Argument_1;
                let led: *mut lv_obj_t = __Environment.Convert_to_native_pointer(led) as *mut _;
                let bright = bright as u8;
                lv_led_set_brightness(led, bright);
            }
            Function_calls_type::lv_led_on => {
                if __Arguments_count != 1 {
                    return;
                }
                let led = __Argument_0;
                let led: *mut lv_obj_t = __Environment.Convert_to_native_pointer(led) as *mut _;
                lv_led_on(led);
            }
            Function_calls_type::lv_led_off => {
                if __Arguments_count != 1 {
                    return;
                }
                let led = __Argument_0;
                let led: *mut lv_obj_t = __Environment.Convert_to_native_pointer(led) as *mut _;
                lv_led_off(led);
            }
            Function_calls_type::lv_led_toggle => {
                if __Arguments_count != 1 {
                    return;
                }
                let led = __Argument_0;
                let led: *mut lv_obj_t = __Environment.Convert_to_native_pointer(led) as *mut _;
                lv_led_toggle(led);
            }
            Function_calls_type::lv_led_get_brightness => {
                if __Arguments_count != 1 {
                    return;
                }
                let obj = __Argument_0;
                let obj: *const lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let __Current_result = lv_led_get_brightness(obj);
                let __Result = __Result as *mut u8;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_line_create => {
                if __Arguments_count != 1 {
                    return;
                }
                let parent = __Argument_0;
                let parent: *mut lv_obj_t =
                    __Environment.Convert_to_native_pointer(parent) as *mut _;
                let __Current_result = lv_line_create(parent);
                let __Current_result = __Environment.Convert_to_WASM_pointer(__Current_result);
                let __Result = __Result as *mut WASM_pointer_type;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_line_set_points => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let points = __Argument_1;
                let point_num = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let points: *const lv_point_precise_t =
                    __Environment.Convert_to_native_pointer(points) as *mut _;
                let point_num = point_num as u32;
                lv_line_set_points(obj, points, point_num);
            }
            Function_calls_type::lv_line_set_points_mutable => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let points = __Argument_1;
                let point_num = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let points: *mut lv_point_precise_t =
                    __Environment.Convert_to_native_pointer(points) as *mut _;
                let point_num = point_num as u32;
                lv_line_set_points_mutable(obj, points, point_num);
            }
            Function_calls_type::lv_line_set_y_invert => {
                if __Arguments_count != 2 {
                    return;
                }
                let obj = __Argument_0;
                let en = __Argument_1;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let en = en != 0;
                lv_line_set_y_invert(obj, en);
            }
            Function_calls_type::lv_line_get_points => {
                if __Arguments_count != 1 {
                    return;
                }
                let obj = __Argument_0;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let __Current_result = lv_line_get_points(obj);
                let __Current_result = __Environment.Convert_to_WASM_pointer(__Current_result);
                let __Result = __Result as *mut WASM_pointer_type;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_line_get_point_count => {
                if __Arguments_count != 1 {
                    return;
                }
                let obj = __Argument_0;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let __Current_result = lv_line_get_point_count(obj);
                let __Result = __Result as *mut u32;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_line_is_point_array_mutable => {
                if __Arguments_count != 1 {
                    return;
                }
                let obj = __Argument_0;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let __Current_result = lv_line_is_point_array_mutable(obj);
                let __Result = __Result as *mut bool;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_line_get_points_mutable => {
                if __Arguments_count != 1 {
                    return;
                }
                let obj = __Argument_0;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let __Current_result = lv_line_get_points_mutable(obj);
                let __Current_result = __Environment.Convert_to_WASM_pointer(__Current_result);
                let __Result = __Result as *mut WASM_pointer_type;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_line_get_y_invert => {
                if __Arguments_count != 1 {
                    return;
                }
                let obj = __Argument_0;
                let obj: *const lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let __Current_result = lv_line_get_y_invert(obj);
                let __Result = __Result as *mut bool;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_menu_create => {
                if __Arguments_count != 1 {
                    return;
                }
                let parent = __Argument_0;
                let parent: *mut lv_obj_t =
                    __Environment.Convert_to_native_pointer(parent) as *mut _;
                let __Current_result = lv_menu_create(parent);
                let __Current_result = __Environment.Convert_to_WASM_pointer(__Current_result);
                let __Result = __Result as *mut WASM_pointer_type;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_menu_page_create => {
                if __Arguments_count != 2 {
                    return;
                }
                let parent = __Argument_0;
                let title = __Argument_1;
                let parent: *mut lv_obj_t =
                    __Environment.Convert_to_native_pointer(parent) as *mut _;
                let title: *const core::ffi::c_char =
                    __Environment.Convert_to_native_pointer(title) as *mut _;
                let __Current_result = lv_menu_page_create(parent, title);
                let __Current_result = __Environment.Convert_to_WASM_pointer(__Current_result);
                let __Result = __Result as *mut WASM_pointer_type;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_menu_cont_create => {
                if __Arguments_count != 1 {
                    return;
                }
                let parent = __Argument_0;
                let parent: *mut lv_obj_t =
                    __Environment.Convert_to_native_pointer(parent) as *mut _;
                let __Current_result = lv_menu_cont_create(parent);
                let __Current_result = __Environment.Convert_to_WASM_pointer(__Current_result);
                let __Result = __Result as *mut WASM_pointer_type;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_menu_section_create => {
                if __Arguments_count != 1 {
                    return;
                }
                let parent = __Argument_0;
                let parent: *mut lv_obj_t =
                    __Environment.Convert_to_native_pointer(parent) as *mut _;
                let __Current_result = lv_menu_section_create(parent);
                let __Current_result = __Environment.Convert_to_WASM_pointer(__Current_result);
                let __Result = __Result as *mut WASM_pointer_type;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_menu_separator_create => {
                if __Arguments_count != 1 {
                    return;
                }
                let parent = __Argument_0;
                let parent: *mut lv_obj_t =
                    __Environment.Convert_to_native_pointer(parent) as *mut _;
                let __Current_result = lv_menu_separator_create(parent);
                let __Current_result = __Environment.Convert_to_WASM_pointer(__Current_result);
                let __Result = __Result as *mut WASM_pointer_type;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_menu_set_page => {
                if __Arguments_count != 2 {
                    return;
                }
                let obj = __Argument_0;
                let page = __Argument_1;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let page: *mut lv_obj_t = __Environment.Convert_to_native_pointer(page) as *mut _;
                lv_menu_set_page(obj, page);
            }
            Function_calls_type::lv_menu_set_page_title => {
                if __Arguments_count != 2 {
                    return;
                }
                let page = __Argument_0;
                let title = __Argument_1;
                let page: *mut lv_obj_t = __Environment.Convert_to_native_pointer(page) as *mut _;
                let title: *const core::ffi::c_char =
                    __Environment.Convert_to_native_pointer(title) as *mut _;
                lv_menu_set_page_title(page, title);
            }
            Function_calls_type::lv_menu_set_page_title_static => {
                if __Arguments_count != 2 {
                    return;
                }
                let page = __Argument_0;
                let title = __Argument_1;
                let page: *mut lv_obj_t = __Environment.Convert_to_native_pointer(page) as *mut _;
                let title: *const core::ffi::c_char =
                    __Environment.Convert_to_native_pointer(title) as *mut _;
                lv_menu_set_page_title_static(page, title);
            }
            Function_calls_type::lv_menu_set_sidebar_page => {
                if __Arguments_count != 2 {
                    return;
                }
                let obj = __Argument_0;
                let page = __Argument_1;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let page: *mut lv_obj_t = __Environment.Convert_to_native_pointer(page) as *mut _;
                lv_menu_set_sidebar_page(obj, page);
            }
            Function_calls_type::lv_menu_set_mode_header => {
                if __Arguments_count != 2 {
                    return;
                }
                let obj = __Argument_0;
                let mode = __Argument_1;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let mode = mode as core::ffi::c_uint;
                lv_menu_set_mode_header(obj, mode);
            }
            Function_calls_type::lv_menu_set_mode_root_back_button => {
                if __Arguments_count != 2 {
                    return;
                }
                let obj = __Argument_0;
                let mode = __Argument_1;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let mode = mode as core::ffi::c_uint;
                lv_menu_set_mode_root_back_button(obj, mode);
            }
            Function_calls_type::lv_menu_set_load_page_event => {
                if __Arguments_count != 3 {
                    return;
                }
                let menu = __Argument_0;
                let obj = __Argument_1;
                let page = __Argument_2;
                let menu: *mut lv_obj_t = __Environment.Convert_to_native_pointer(menu) as *mut _;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let page: *mut lv_obj_t = __Environment.Convert_to_native_pointer(page) as *mut _;
                lv_menu_set_load_page_event(menu, obj, page);
            }
            Function_calls_type::lv_menu_get_cur_main_page => {
                if __Arguments_count != 1 {
                    return;
                }
                let obj = __Argument_0;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let __Current_result = lv_menu_get_cur_main_page(obj);
                let __Current_result = __Environment.Convert_to_WASM_pointer(__Current_result);
                let __Result = __Result as *mut WASM_pointer_type;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_menu_get_cur_sidebar_page => {
                if __Arguments_count != 1 {
                    return;
                }
                let obj = __Argument_0;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let __Current_result = lv_menu_get_cur_sidebar_page(obj);
                let __Current_result = __Environment.Convert_to_WASM_pointer(__Current_result);
                let __Result = __Result as *mut WASM_pointer_type;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_menu_get_main_header => {
                if __Arguments_count != 1 {
                    return;
                }
                let obj = __Argument_0;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let __Current_result = lv_menu_get_main_header(obj);
                let __Current_result = __Environment.Convert_to_WASM_pointer(__Current_result);
                let __Result = __Result as *mut WASM_pointer_type;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_menu_get_main_header_back_button => {
                if __Arguments_count != 1 {
                    return;
                }
                let obj = __Argument_0;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let __Current_result = lv_menu_get_main_header_back_button(obj);
                let __Current_result = __Environment.Convert_to_WASM_pointer(__Current_result);
                let __Result = __Result as *mut WASM_pointer_type;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_menu_get_sidebar_header => {
                if __Arguments_count != 1 {
                    return;
                }
                let obj = __Argument_0;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let __Current_result = lv_menu_get_sidebar_header(obj);
                let __Current_result = __Environment.Convert_to_WASM_pointer(__Current_result);
                let __Result = __Result as *mut WASM_pointer_type;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_menu_get_sidebar_header_back_button => {
                if __Arguments_count != 1 {
                    return;
                }
                let obj = __Argument_0;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let __Current_result = lv_menu_get_sidebar_header_back_button(obj);
                let __Current_result = __Environment.Convert_to_WASM_pointer(__Current_result);
                let __Result = __Result as *mut WASM_pointer_type;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_menu_back_button_is_root => {
                if __Arguments_count != 2 {
                    return;
                }
                let menu = __Argument_0;
                let obj = __Argument_1;
                let menu: *mut lv_obj_t = __Environment.Convert_to_native_pointer(menu) as *mut _;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let __Current_result = lv_menu_back_button_is_root(menu, obj);
                let __Result = __Result as *mut bool;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_menu_clear_history => {
                if __Arguments_count != 1 {
                    return;
                }
                let obj = __Argument_0;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                lv_menu_clear_history(obj);
            }
            Function_calls_type::lv_msgbox_create => {
                if __Arguments_count != 1 {
                    return;
                }
                let parent = __Argument_0;
                let parent: *mut lv_obj_t =
                    __Environment.Convert_to_native_pointer(parent) as *mut _;
                let __Current_result = lv_msgbox_create(parent);
                let __Current_result = __Environment.Convert_to_WASM_pointer(__Current_result);
                let __Result = __Result as *mut WASM_pointer_type;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_msgbox_add_title => {
                if __Arguments_count != 2 {
                    return;
                }
                let obj = __Argument_0;
                let title = __Argument_1;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let title: *const core::ffi::c_char =
                    __Environment.Convert_to_native_pointer(title) as *mut _;
                let __Current_result = lv_msgbox_add_title(obj, title);
                let __Current_result = __Environment.Convert_to_WASM_pointer(__Current_result);
                let __Result = __Result as *mut WASM_pointer_type;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_msgbox_add_header_button => {
                if __Arguments_count != 2 {
                    return;
                }
                let obj = __Argument_0;
                let icon = __Argument_1;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let icon: *const core::ffi::c_void =
                    __Environment.Convert_to_native_pointer(icon) as *mut _;
                let __Current_result = lv_msgbox_add_header_button(obj, icon);
                let __Current_result = __Environment.Convert_to_WASM_pointer(__Current_result);
                let __Result = __Result as *mut WASM_pointer_type;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_msgbox_add_text => {
                if __Arguments_count != 2 {
                    return;
                }
                let obj = __Argument_0;
                let text = __Argument_1;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let text: *const core::ffi::c_char =
                    __Environment.Convert_to_native_pointer(text) as *mut _;
                let __Current_result = lv_msgbox_add_text(obj, text);
                let __Current_result = __Environment.Convert_to_WASM_pointer(__Current_result);
                let __Result = __Result as *mut WASM_pointer_type;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_msgbox_add_footer_button => {
                if __Arguments_count != 2 {
                    return;
                }
                let obj = __Argument_0;
                let text = __Argument_1;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let text: *const core::ffi::c_char =
                    __Environment.Convert_to_native_pointer(text) as *mut _;
                let __Current_result = lv_msgbox_add_footer_button(obj, text);
                let __Current_result = __Environment.Convert_to_WASM_pointer(__Current_result);
                let __Result = __Result as *mut WASM_pointer_type;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_msgbox_add_close_button => {
                if __Arguments_count != 1 {
                    return;
                }
                let obj = __Argument_0;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let __Current_result = lv_msgbox_add_close_button(obj);
                let __Current_result = __Environment.Convert_to_WASM_pointer(__Current_result);
                let __Result = __Result as *mut WASM_pointer_type;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_msgbox_get_header => {
                if __Arguments_count != 1 {
                    return;
                }
                let obj = __Argument_0;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let __Current_result = lv_msgbox_get_header(obj);
                let __Current_result = __Environment.Convert_to_WASM_pointer(__Current_result);
                let __Result = __Result as *mut WASM_pointer_type;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_msgbox_get_footer => {
                if __Arguments_count != 1 {
                    return;
                }
                let obj = __Argument_0;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let __Current_result = lv_msgbox_get_footer(obj);
                let __Current_result = __Environment.Convert_to_WASM_pointer(__Current_result);
                let __Result = __Result as *mut WASM_pointer_type;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_msgbox_get_content => {
                if __Arguments_count != 1 {
                    return;
                }
                let obj = __Argument_0;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let __Current_result = lv_msgbox_get_content(obj);
                let __Current_result = __Environment.Convert_to_WASM_pointer(__Current_result);
                let __Result = __Result as *mut WASM_pointer_type;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_msgbox_get_title => {
                if __Arguments_count != 1 {
                    return;
                }
                let obj = __Argument_0;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let __Current_result = lv_msgbox_get_title(obj);
                let __Current_result = __Environment.Convert_to_WASM_pointer(__Current_result);
                let __Result = __Result as *mut WASM_pointer_type;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_msgbox_close => {
                if __Arguments_count != 1 {
                    return;
                }
                let mbox = __Argument_0;
                let mbox: *mut lv_obj_t = __Environment.Convert_to_native_pointer(mbox) as *mut _;
                lv_msgbox_close(mbox);
            }
            Function_calls_type::lv_msgbox_close_async => {
                if __Arguments_count != 1 {
                    return;
                }
                let mbox = __Argument_0;
                let mbox: *mut lv_obj_t = __Environment.Convert_to_native_pointer(mbox) as *mut _;
                lv_msgbox_close_async(mbox);
            }
            Function_calls_type::lv_roller_create => {
                if __Arguments_count != 1 {
                    return;
                }
                let parent = __Argument_0;
                let parent: *mut lv_obj_t =
                    __Environment.Convert_to_native_pointer(parent) as *mut _;
                let __Current_result = lv_roller_create(parent);
                let __Current_result = __Environment.Convert_to_WASM_pointer(__Current_result);
                let __Result = __Result as *mut WASM_pointer_type;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_roller_set_options => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let options = __Argument_1;
                let mode = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let options: *const core::ffi::c_char =
                    __Environment.Convert_to_native_pointer(options) as *mut _;
                let mode = mode as core::ffi::c_uint;
                lv_roller_set_options(obj, options, mode);
            }
            Function_calls_type::lv_roller_set_selected => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let sel_opt = __Argument_1;
                let anim = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let sel_opt = sel_opt as u32;
                let anim = anim as core::ffi::c_uint;
                lv_roller_set_selected(obj, sel_opt, anim);
            }
            Function_calls_type::lv_roller_set_visible_row_count => {
                if __Arguments_count != 2 {
                    return;
                }
                let obj = __Argument_0;
                let row_cnt = __Argument_1;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let row_cnt = row_cnt as u32;
                lv_roller_set_visible_row_count(obj, row_cnt);
            }
            Function_calls_type::lv_roller_get_selected => {
                if __Arguments_count != 1 {
                    return;
                }
                let obj = __Argument_0;
                let obj: *const lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let __Current_result = lv_roller_get_selected(obj);
                let __Result = __Result as *mut u32;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_roller_get_selected_str => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let buf = __Argument_1;
                let buf_size = __Argument_2;
                let obj: *const lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let buf: *mut core::ffi::c_char =
                    __Environment.Convert_to_native_pointer(buf) as *mut _;
                let buf_size = buf_size as u32;
                lv_roller_get_selected_str(obj, buf, buf_size);
            }
            Function_calls_type::lv_roller_get_options => {
                if __Arguments_count != 1 {
                    return;
                }
                let obj = __Argument_0;
                let obj: *const lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let __Current_result = lv_roller_get_options(obj);
                let __Current_result = __Environment.Convert_to_WASM_pointer(__Current_result);
                let __Result = __Result as *mut WASM_pointer_type;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_roller_get_option_count => {
                if __Arguments_count != 1 {
                    return;
                }
                let obj = __Argument_0;
                let obj: *const lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let __Current_result = lv_roller_get_option_count(obj);
                let __Result = __Result as *mut u32;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_scale_create => {
                if __Arguments_count != 1 {
                    return;
                }
                let parent = __Argument_0;
                let parent: *mut lv_obj_t =
                    __Environment.Convert_to_native_pointer(parent) as *mut _;
                let __Current_result = lv_scale_create(parent);
                let __Current_result = __Environment.Convert_to_WASM_pointer(__Current_result);
                let __Result = __Result as *mut WASM_pointer_type;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_scale_set_mode => {
                if __Arguments_count != 2 {
                    return;
                }
                let obj = __Argument_0;
                let mode = __Argument_1;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let mode = mode as core::ffi::c_uint;
                lv_scale_set_mode(obj, mode);
            }
            Function_calls_type::lv_scale_set_total_tick_count => {
                if __Arguments_count != 2 {
                    return;
                }
                let obj = __Argument_0;
                let total_tick_count = __Argument_1;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let total_tick_count = total_tick_count as u32;
                lv_scale_set_total_tick_count(obj, total_tick_count);
            }
            Function_calls_type::lv_scale_set_major_tick_every => {
                if __Arguments_count != 2 {
                    return;
                }
                let obj = __Argument_0;
                let major_tick_every = __Argument_1;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let major_tick_every = major_tick_every as u32;
                lv_scale_set_major_tick_every(obj, major_tick_every);
            }
            Function_calls_type::lv_scale_set_label_show => {
                if __Arguments_count != 2 {
                    return;
                }
                let obj = __Argument_0;
                let show_label = __Argument_1;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let show_label = show_label != 0;
                lv_scale_set_label_show(obj, show_label);
            }
            Function_calls_type::lv_scale_set_range => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let min = __Argument_1;
                let max = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let min = min as i32;
                let max = max as i32;
                lv_scale_set_range(obj, min, max);
            }
            Function_calls_type::lv_scale_set_angle_range => {
                if __Arguments_count != 2 {
                    return;
                }
                let obj = __Argument_0;
                let angle_range = __Argument_1;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let angle_range = angle_range as u32;
                lv_scale_set_angle_range(obj, angle_range);
            }
            Function_calls_type::lv_scale_set_rotation => {
                if __Arguments_count != 2 {
                    return;
                }
                let obj = __Argument_0;
                let rotation = __Argument_1;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let rotation = rotation as i32;
                lv_scale_set_rotation(obj, rotation);
            }
            Function_calls_type::lv_scale_set_line_needle_value => {
                if __Arguments_count != 4 {
                    return;
                }
                let obj = __Argument_0;
                let needle_line = __Argument_1;
                let needle_length = __Argument_2;
                let value = __Argument_3;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let needle_line: *mut lv_obj_t =
                    __Environment.Convert_to_native_pointer(needle_line) as *mut _;
                let needle_length = needle_length as i32;
                let value = value as i32;
                lv_scale_set_line_needle_value(obj, needle_line, needle_length, value);
            }
            Function_calls_type::lv_scale_set_image_needle_value => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let needle_img = __Argument_1;
                let value = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let needle_img: *mut lv_obj_t =
                    __Environment.Convert_to_native_pointer(needle_img) as *mut _;
                let value = value as i32;
                lv_scale_set_image_needle_value(obj, needle_img, value);
            }
            Function_calls_type::lv_scale_set_text_src => {
                if __Arguments_count != 2 {
                    return;
                }
                let obj = __Argument_0;
                let txt_src = __Argument_1;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let txt_src: *mut *const core::ffi::c_char =
                    __Environment.Convert_to_native_pointer(txt_src) as *mut _;
                lv_scale_set_text_src(obj, txt_src);
            }
            Function_calls_type::lv_scale_set_post_draw => {
                if __Arguments_count != 2 {
                    return;
                }
                let obj = __Argument_0;
                let en = __Argument_1;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let en = en != 0;
                lv_scale_set_post_draw(obj, en);
            }
            Function_calls_type::lv_scale_set_draw_ticks_on_top => {
                if __Arguments_count != 2 {
                    return;
                }
                let obj = __Argument_0;
                let en = __Argument_1;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let en = en != 0;
                lv_scale_set_draw_ticks_on_top(obj, en);
            }
            Function_calls_type::lv_scale_add_section => {
                if __Arguments_count != 1 {
                    return;
                }
                let obj = __Argument_0;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let __Current_result = lv_scale_add_section(obj);
                let __Current_result = __Environment.Convert_to_WASM_pointer(__Current_result);
                let __Result = __Result as *mut WASM_pointer_type;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_scale_section_set_range => {
                if __Arguments_count != 3 {
                    return;
                }
                let section = __Argument_0;
                let minor_range = __Argument_1;
                let major_range = __Argument_2;
                let section: *mut lv_scale_section_t =
                    __Environment.Convert_to_native_pointer(section) as *mut _;
                let minor_range = minor_range as i32;
                let major_range = major_range as i32;
                lv_scale_section_set_range(section, minor_range, major_range);
            }
            Function_calls_type::lv_scale_section_set_style => {
                if __Arguments_count != 3 {
                    return;
                }
                let section = __Argument_0;
                let part = __Argument_1;
                let section_part_style = __Argument_2;
                let section: *mut lv_scale_section_t =
                    __Environment.Convert_to_native_pointer(section) as *mut _;
                let part = part as u32;
                let section_part_style: *mut lv_style_t =
                    __Environment.Convert_to_native_pointer(section_part_style) as *mut _;
                lv_scale_section_set_style(section, part, section_part_style);
            }
            Function_calls_type::lv_scale_get_mode => {
                if __Arguments_count != 1 {
                    return;
                }
                let obj = __Argument_0;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let __Current_result = lv_scale_get_mode(obj);
                let __Result = __Result as *mut lv_scale_mode_t;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_scale_get_total_tick_count => {
                if __Arguments_count != 1 {
                    return;
                }
                let obj = __Argument_0;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let __Current_result = lv_scale_get_total_tick_count(obj);
                let __Result = __Result as *mut i32;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_scale_get_major_tick_every => {
                if __Arguments_count != 1 {
                    return;
                }
                let obj = __Argument_0;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let __Current_result = lv_scale_get_major_tick_every(obj);
                let __Result = __Result as *mut i32;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_scale_get_label_show => {
                if __Arguments_count != 1 {
                    return;
                }
                let obj = __Argument_0;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let __Current_result = lv_scale_get_label_show(obj);
                let __Result = __Result as *mut bool;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_scale_get_angle_range => {
                if __Arguments_count != 1 {
                    return;
                }
                let obj = __Argument_0;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let __Current_result = lv_scale_get_angle_range(obj);
                let __Result = __Result as *mut u32;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_scale_get_range_min_value => {
                if __Arguments_count != 1 {
                    return;
                }
                let obj = __Argument_0;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let __Current_result = lv_scale_get_range_min_value(obj);
                let __Result = __Result as *mut i32;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_scale_get_range_max_value => {
                if __Arguments_count != 1 {
                    return;
                }
                let obj = __Argument_0;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let __Current_result = lv_scale_get_range_max_value(obj);
                let __Result = __Result as *mut i32;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_slider_create => {
                if __Arguments_count != 1 {
                    return;
                }
                let parent = __Argument_0;
                let parent: *mut lv_obj_t =
                    __Environment.Convert_to_native_pointer(parent) as *mut _;
                let __Current_result = lv_slider_create(parent);
                let __Current_result = __Environment.Convert_to_WASM_pointer(__Current_result);
                let __Result = __Result as *mut WASM_pointer_type;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_slider_set_value => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let value = __Argument_1;
                let anim = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let value = value as i32;
                let anim = anim as core::ffi::c_uint;
                lv_slider_set_value(obj, value, anim);
            }
            Function_calls_type::lv_slider_set_left_value => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let value = __Argument_1;
                let anim = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let value = value as i32;
                let anim = anim as core::ffi::c_uint;
                lv_slider_set_left_value(obj, value, anim);
            }
            Function_calls_type::lv_slider_set_range => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let min = __Argument_1;
                let max = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let min = min as i32;
                let max = max as i32;
                lv_slider_set_range(obj, min, max);
            }
            Function_calls_type::lv_slider_set_mode => {
                if __Arguments_count != 2 {
                    return;
                }
                let obj = __Argument_0;
                let mode = __Argument_1;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let mode = mode as core::ffi::c_uint;
                lv_slider_set_mode(obj, mode);
            }
            Function_calls_type::lv_slider_get_value => {
                if __Arguments_count != 1 {
                    return;
                }
                let obj = __Argument_0;
                let obj: *const lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let __Current_result = lv_slider_get_value(obj);
                let __Result = __Result as *mut i32;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_slider_get_left_value => {
                if __Arguments_count != 1 {
                    return;
                }
                let obj = __Argument_0;
                let obj: *const lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let __Current_result = lv_slider_get_left_value(obj);
                let __Result = __Result as *mut i32;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_slider_get_min_value => {
                if __Arguments_count != 1 {
                    return;
                }
                let obj = __Argument_0;
                let obj: *const lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let __Current_result = lv_slider_get_min_value(obj);
                let __Result = __Result as *mut i32;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_slider_get_max_value => {
                if __Arguments_count != 1 {
                    return;
                }
                let obj = __Argument_0;
                let obj: *const lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let __Current_result = lv_slider_get_max_value(obj);
                let __Result = __Result as *mut i32;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_slider_is_dragged => {
                if __Arguments_count != 1 {
                    return;
                }
                let obj = __Argument_0;
                let obj: *const lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let __Current_result = lv_slider_is_dragged(obj);
                let __Result = __Result as *mut bool;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_slider_get_mode => {
                if __Arguments_count != 1 {
                    return;
                }
                let slider = __Argument_0;
                let slider: *mut lv_obj_t =
                    __Environment.Convert_to_native_pointer(slider) as *mut _;
                let __Current_result = lv_slider_get_mode(slider);
                let __Result = __Result as *mut lv_slider_mode_t;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_slider_is_symmetrical => {
                if __Arguments_count != 1 {
                    return;
                }
                let obj = __Argument_0;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let __Current_result = lv_slider_is_symmetrical(obj);
                let __Result = __Result as *mut bool;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_span_stack_init => {
                if __Arguments_count != 0 {
                    return;
                }
                lv_span_stack_init();
            }
            Function_calls_type::lv_span_stack_deinit => {
                if __Arguments_count != 0 {
                    return;
                }
                lv_span_stack_deinit();
            }
            Function_calls_type::lv_spangroup_create => {
                if __Arguments_count != 1 {
                    return;
                }
                let parent = __Argument_0;
                let parent: *mut lv_obj_t =
                    __Environment.Convert_to_native_pointer(parent) as *mut _;
                let __Current_result = lv_spangroup_create(parent);
                let __Current_result = __Environment.Convert_to_WASM_pointer(__Current_result);
                let __Result = __Result as *mut WASM_pointer_type;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_spangroup_new_span => {
                if __Arguments_count != 1 {
                    return;
                }
                let obj = __Argument_0;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let __Current_result = lv_spangroup_new_span(obj);
                let __Current_result = __Environment.Convert_to_WASM_pointer(__Current_result);
                let __Result = __Result as *mut WASM_pointer_type;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_spangroup_delete_span => {
                if __Arguments_count != 2 {
                    return;
                }
                let obj = __Argument_0;
                let span = __Argument_1;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let span: *mut lv_span_t = __Environment.Convert_to_native_pointer(span) as *mut _;
                lv_spangroup_delete_span(obj, span);
            }
            Function_calls_type::lv_span_set_text => {
                if __Arguments_count != 2 {
                    return;
                }
                let span = __Argument_0;
                let text = __Argument_1;
                let span: *mut lv_span_t = __Environment.Convert_to_native_pointer(span) as *mut _;
                let text: *const core::ffi::c_char =
                    __Environment.Convert_to_native_pointer(text) as *mut _;
                lv_span_set_text(span, text);
            }
            Function_calls_type::lv_span_set_text_static => {
                if __Arguments_count != 2 {
                    return;
                }
                let span = __Argument_0;
                let text = __Argument_1;
                let span: *mut lv_span_t = __Environment.Convert_to_native_pointer(span) as *mut _;
                let text: *const core::ffi::c_char =
                    __Environment.Convert_to_native_pointer(text) as *mut _;
                lv_span_set_text_static(span, text);
            }
            Function_calls_type::lv_spangroup_set_align => {
                if __Arguments_count != 2 {
                    return;
                }
                let obj = __Argument_0;
                let align = __Argument_1;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let align = align as core::ffi::c_uint;
                lv_spangroup_set_align(obj, align);
            }
            Function_calls_type::lv_spangroup_set_overflow => {
                if __Arguments_count != 2 {
                    return;
                }
                let obj = __Argument_0;
                let overflow = __Argument_1;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let overflow = overflow as core::ffi::c_uint;
                lv_spangroup_set_overflow(obj, overflow);
            }
            Function_calls_type::lv_spangroup_set_indent => {
                if __Arguments_count != 2 {
                    return;
                }
                let obj = __Argument_0;
                let indent = __Argument_1;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let indent = indent as i32;
                lv_spangroup_set_indent(obj, indent);
            }
            Function_calls_type::lv_spangroup_set_mode => {
                if __Arguments_count != 2 {
                    return;
                }
                let obj = __Argument_0;
                let mode = __Argument_1;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let mode = mode as core::ffi::c_uint;
                lv_spangroup_set_mode(obj, mode);
            }
            Function_calls_type::lv_spangroup_set_max_lines => {
                if __Arguments_count != 2 {
                    return;
                }
                let obj = __Argument_0;
                let lines = __Argument_1;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let lines = lines as i32;
                lv_spangroup_set_max_lines(obj, lines);
            }
            Function_calls_type::lv_span_get_style => {
                if __Arguments_count != 1 {
                    return;
                }
                let span = __Argument_0;
                let span: *mut lv_span_t = __Environment.Convert_to_native_pointer(span) as *mut _;
                let __Current_result = lv_span_get_style(span);
                let __Current_result = __Environment.Convert_to_WASM_pointer(__Current_result);
                let __Result = __Result as *mut WASM_pointer_type;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_spangroup_get_child => {
                if __Arguments_count != 2 {
                    return;
                }
                let obj = __Argument_0;
                let id = __Argument_1;
                let obj: *const lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let id = id as i32;
                let __Current_result = lv_spangroup_get_child(obj, id);
                let __Current_result = __Environment.Convert_to_WASM_pointer(__Current_result);
                let __Result = __Result as *mut WASM_pointer_type;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_spangroup_get_span_count => {
                if __Arguments_count != 1 {
                    return;
                }
                let obj = __Argument_0;
                let obj: *const lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let __Current_result = lv_spangroup_get_span_count(obj);
                let __Result = __Result as *mut u32;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_spangroup_get_align => {
                if __Arguments_count != 1 {
                    return;
                }
                let obj = __Argument_0;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let __Current_result = lv_spangroup_get_align(obj);
                let __Result = __Result as *mut lv_text_align_t;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_spangroup_get_overflow => {
                if __Arguments_count != 1 {
                    return;
                }
                let obj = __Argument_0;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let __Current_result = lv_spangroup_get_overflow(obj);
                let __Result = __Result as *mut lv_span_overflow_t;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_spangroup_get_indent => {
                if __Arguments_count != 1 {
                    return;
                }
                let obj = __Argument_0;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let __Current_result = lv_spangroup_get_indent(obj);
                let __Result = __Result as *mut i32;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_spangroup_get_mode => {
                if __Arguments_count != 1 {
                    return;
                }
                let obj = __Argument_0;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let __Current_result = lv_spangroup_get_mode(obj);
                let __Result = __Result as *mut lv_span_mode_t;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_spangroup_get_max_lines => {
                if __Arguments_count != 1 {
                    return;
                }
                let obj = __Argument_0;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let __Current_result = lv_spangroup_get_max_lines(obj);
                let __Result = __Result as *mut i32;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_spangroup_get_max_line_height => {
                if __Arguments_count != 1 {
                    return;
                }
                let obj = __Argument_0;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let __Current_result = lv_spangroup_get_max_line_height(obj);
                let __Result = __Result as *mut i32;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_spangroup_get_expand_width => {
                if __Arguments_count != 2 {
                    return;
                }
                let obj = __Argument_0;
                let max_width = __Argument_1;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let max_width = max_width as u32;
                let __Current_result = lv_spangroup_get_expand_width(obj, max_width);
                let __Result = __Result as *mut u32;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_spangroup_get_expand_height => {
                if __Arguments_count != 2 {
                    return;
                }
                let obj = __Argument_0;
                let width = __Argument_1;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let width = width as i32;
                let __Current_result = lv_spangroup_get_expand_height(obj, width);
                let __Result = __Result as *mut i32;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_spangroup_refr_mode => {
                if __Arguments_count != 1 {
                    return;
                }
                let obj = __Argument_0;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                lv_spangroup_refr_mode(obj);
            }
            Function_calls_type::lv_textarea_create => {
                if __Arguments_count != 1 {
                    return;
                }
                let parent = __Argument_0;
                let parent: *mut lv_obj_t =
                    __Environment.Convert_to_native_pointer(parent) as *mut _;
                let __Current_result = lv_textarea_create(parent);
                let __Current_result = __Environment.Convert_to_WASM_pointer(__Current_result);
                let __Result = __Result as *mut WASM_pointer_type;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_textarea_add_char => {
                if __Arguments_count != 2 {
                    return;
                }
                let obj = __Argument_0;
                let c = __Argument_1;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let c = c as u32;
                lv_textarea_add_char(obj, c);
            }
            Function_calls_type::lv_textarea_add_text => {
                if __Arguments_count != 2 {
                    return;
                }
                let obj = __Argument_0;
                let txt = __Argument_1;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let txt: *const core::ffi::c_char =
                    __Environment.Convert_to_native_pointer(txt) as *mut _;
                lv_textarea_add_text(obj, txt);
            }
            Function_calls_type::lv_textarea_delete_char => {
                if __Arguments_count != 1 {
                    return;
                }
                let obj = __Argument_0;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                lv_textarea_delete_char(obj);
            }
            Function_calls_type::lv_textarea_delete_char_forward => {
                if __Arguments_count != 1 {
                    return;
                }
                let obj = __Argument_0;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                lv_textarea_delete_char_forward(obj);
            }
            Function_calls_type::lv_textarea_set_text => {
                if __Arguments_count != 2 {
                    return;
                }
                let obj = __Argument_0;
                let txt = __Argument_1;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let txt: *const core::ffi::c_char =
                    __Environment.Convert_to_native_pointer(txt) as *mut _;
                lv_textarea_set_text(obj, txt);
            }
            Function_calls_type::lv_textarea_set_placeholder_text => {
                if __Arguments_count != 2 {
                    return;
                }
                let obj = __Argument_0;
                let txt = __Argument_1;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let txt: *const core::ffi::c_char =
                    __Environment.Convert_to_native_pointer(txt) as *mut _;
                lv_textarea_set_placeholder_text(obj, txt);
            }
            Function_calls_type::lv_textarea_set_cursor_pos => {
                if __Arguments_count != 2 {
                    return;
                }
                let obj = __Argument_0;
                let pos = __Argument_1;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let pos = pos as i32;
                lv_textarea_set_cursor_pos(obj, pos);
            }
            Function_calls_type::lv_textarea_set_cursor_click_pos => {
                if __Arguments_count != 2 {
                    return;
                }
                let obj = __Argument_0;
                let en = __Argument_1;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let en = en != 0;
                lv_textarea_set_cursor_click_pos(obj, en);
            }
            Function_calls_type::lv_textarea_set_password_mode => {
                if __Arguments_count != 2 {
                    return;
                }
                let obj = __Argument_0;
                let en = __Argument_1;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let en = en != 0;
                lv_textarea_set_password_mode(obj, en);
            }
            Function_calls_type::lv_textarea_set_password_bullet => {
                if __Arguments_count != 2 {
                    return;
                }
                let obj = __Argument_0;
                let bullet = __Argument_1;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let bullet: *const core::ffi::c_char =
                    __Environment.Convert_to_native_pointer(bullet) as *mut _;
                lv_textarea_set_password_bullet(obj, bullet);
            }
            Function_calls_type::lv_textarea_set_one_line => {
                if __Arguments_count != 2 {
                    return;
                }
                let obj = __Argument_0;
                let en = __Argument_1;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let en = en != 0;
                lv_textarea_set_one_line(obj, en);
            }
            Function_calls_type::lv_textarea_set_accepted_chars => {
                if __Arguments_count != 2 {
                    return;
                }
                let obj = __Argument_0;
                let list = __Argument_1;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let list: *const core::ffi::c_char =
                    __Environment.Convert_to_native_pointer(list) as *mut _;
                lv_textarea_set_accepted_chars(obj, list);
            }
            Function_calls_type::lv_textarea_set_max_length => {
                if __Arguments_count != 2 {
                    return;
                }
                let obj = __Argument_0;
                let num = __Argument_1;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let num = num as u32;
                lv_textarea_set_max_length(obj, num);
            }
            Function_calls_type::lv_textarea_set_insert_replace => {
                if __Arguments_count != 2 {
                    return;
                }
                let obj = __Argument_0;
                let txt = __Argument_1;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let txt: *const core::ffi::c_char =
                    __Environment.Convert_to_native_pointer(txt) as *mut _;
                lv_textarea_set_insert_replace(obj, txt);
            }
            Function_calls_type::lv_textarea_set_text_selection => {
                if __Arguments_count != 2 {
                    return;
                }
                let obj = __Argument_0;
                let en = __Argument_1;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let en = en != 0;
                lv_textarea_set_text_selection(obj, en);
            }
            Function_calls_type::lv_textarea_set_password_show_time => {
                if __Arguments_count != 2 {
                    return;
                }
                let obj = __Argument_0;
                let time = __Argument_1;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let time = time as u32;
                lv_textarea_set_password_show_time(obj, time);
            }
            Function_calls_type::lv_textarea_set_align => {
                if __Arguments_count != 2 {
                    return;
                }
                let obj = __Argument_0;
                let align = __Argument_1;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let align = align as core::ffi::c_uint;
                lv_textarea_set_align(obj, align);
            }
            Function_calls_type::lv_textarea_get_text => {
                if __Arguments_count != 1 {
                    return;
                }
                let obj = __Argument_0;
                let obj: *const lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let __Current_result = lv_textarea_get_text(obj);
                let __Current_result = __Environment.Convert_to_WASM_pointer(__Current_result);
                let __Result = __Result as *mut WASM_pointer_type;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_textarea_get_placeholder_text => {
                if __Arguments_count != 1 {
                    return;
                }
                let obj = __Argument_0;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let __Current_result = lv_textarea_get_placeholder_text(obj);
                let __Current_result = __Environment.Convert_to_WASM_pointer(__Current_result);
                let __Result = __Result as *mut WASM_pointer_type;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_textarea_get_label => {
                if __Arguments_count != 1 {
                    return;
                }
                let obj = __Argument_0;
                let obj: *const lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let __Current_result = lv_textarea_get_label(obj);
                let __Current_result = __Environment.Convert_to_WASM_pointer(__Current_result);
                let __Result = __Result as *mut WASM_pointer_type;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_textarea_get_cursor_pos => {
                if __Arguments_count != 1 {
                    return;
                }
                let obj = __Argument_0;
                let obj: *const lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let __Current_result = lv_textarea_get_cursor_pos(obj);
                let __Result = __Result as *mut u32;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_textarea_get_cursor_click_pos => {
                if __Arguments_count != 1 {
                    return;
                }
                let obj = __Argument_0;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let __Current_result = lv_textarea_get_cursor_click_pos(obj);
                let __Result = __Result as *mut bool;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_textarea_get_password_mode => {
                if __Arguments_count != 1 {
                    return;
                }
                let obj = __Argument_0;
                let obj: *const lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let __Current_result = lv_textarea_get_password_mode(obj);
                let __Result = __Result as *mut bool;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_textarea_get_password_bullet => {
                if __Arguments_count != 1 {
                    return;
                }
                let obj = __Argument_0;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let __Current_result = lv_textarea_get_password_bullet(obj);
                let __Current_result = __Environment.Convert_to_WASM_pointer(__Current_result);
                let __Result = __Result as *mut WASM_pointer_type;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_textarea_get_one_line => {
                if __Arguments_count != 1 {
                    return;
                }
                let obj = __Argument_0;
                let obj: *const lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let __Current_result = lv_textarea_get_one_line(obj);
                let __Result = __Result as *mut bool;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_textarea_get_accepted_chars => {
                if __Arguments_count != 1 {
                    return;
                }
                let obj = __Argument_0;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let __Current_result = lv_textarea_get_accepted_chars(obj);
                let __Current_result = __Environment.Convert_to_WASM_pointer(__Current_result);
                let __Result = __Result as *mut WASM_pointer_type;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_textarea_get_max_length => {
                if __Arguments_count != 1 {
                    return;
                }
                let obj = __Argument_0;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let __Current_result = lv_textarea_get_max_length(obj);
                let __Result = __Result as *mut u32;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_textarea_text_is_selected => {
                if __Arguments_count != 1 {
                    return;
                }
                let obj = __Argument_0;
                let obj: *const lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let __Current_result = lv_textarea_text_is_selected(obj);
                let __Result = __Result as *mut bool;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_textarea_get_text_selection => {
                if __Arguments_count != 1 {
                    return;
                }
                let obj = __Argument_0;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let __Current_result = lv_textarea_get_text_selection(obj);
                let __Result = __Result as *mut bool;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_textarea_get_password_show_time => {
                if __Arguments_count != 1 {
                    return;
                }
                let obj = __Argument_0;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let __Current_result = lv_textarea_get_password_show_time(obj);
                let __Result = __Result as *mut u32;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_textarea_get_current_char => {
                if __Arguments_count != 1 {
                    return;
                }
                let obj = __Argument_0;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let __Current_result = lv_textarea_get_current_char(obj);
                let __Result = __Result as *mut u32;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_textarea_clear_selection => {
                if __Arguments_count != 1 {
                    return;
                }
                let obj = __Argument_0;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                lv_textarea_clear_selection(obj);
            }
            Function_calls_type::lv_textarea_cursor_right => {
                if __Arguments_count != 1 {
                    return;
                }
                let obj = __Argument_0;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                lv_textarea_cursor_right(obj);
            }
            Function_calls_type::lv_textarea_cursor_left => {
                if __Arguments_count != 1 {
                    return;
                }
                let obj = __Argument_0;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                lv_textarea_cursor_left(obj);
            }
            Function_calls_type::lv_textarea_cursor_down => {
                if __Arguments_count != 1 {
                    return;
                }
                let obj = __Argument_0;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                lv_textarea_cursor_down(obj);
            }
            Function_calls_type::lv_textarea_cursor_up => {
                if __Arguments_count != 1 {
                    return;
                }
                let obj = __Argument_0;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                lv_textarea_cursor_up(obj);
            }
            Function_calls_type::lv_spinbox_create => {
                if __Arguments_count != 1 {
                    return;
                }
                let parent = __Argument_0;
                let parent: *mut lv_obj_t =
                    __Environment.Convert_to_native_pointer(parent) as *mut _;
                let __Current_result = lv_spinbox_create(parent);
                let __Current_result = __Environment.Convert_to_WASM_pointer(__Current_result);
                let __Result = __Result as *mut WASM_pointer_type;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_spinbox_set_value => {
                if __Arguments_count != 2 {
                    return;
                }
                let obj = __Argument_0;
                let v = __Argument_1;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let v = v as i32;
                lv_spinbox_set_value(obj, v);
            }
            Function_calls_type::lv_spinbox_set_rollover => {
                if __Arguments_count != 2 {
                    return;
                }
                let obj = __Argument_0;
                let rollover = __Argument_1;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let rollover = rollover != 0;
                lv_spinbox_set_rollover(obj, rollover);
            }
            Function_calls_type::lv_spinbox_set_digit_format => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let digit_count = __Argument_1;
                let sep_pos = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let digit_count = digit_count as u32;
                let sep_pos = sep_pos as u32;
                lv_spinbox_set_digit_format(obj, digit_count, sep_pos);
            }
            Function_calls_type::lv_spinbox_set_step => {
                if __Arguments_count != 2 {
                    return;
                }
                let obj = __Argument_0;
                let step = __Argument_1;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let step = step as u32;
                lv_spinbox_set_step(obj, step);
            }
            Function_calls_type::lv_spinbox_set_range => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let range_min = __Argument_1;
                let range_max = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let range_min = range_min as i32;
                let range_max = range_max as i32;
                lv_spinbox_set_range(obj, range_min, range_max);
            }
            Function_calls_type::lv_spinbox_set_cursor_pos => {
                if __Arguments_count != 2 {
                    return;
                }
                let obj = __Argument_0;
                let pos = __Argument_1;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let pos = pos as u32;
                lv_spinbox_set_cursor_pos(obj, pos);
            }
            Function_calls_type::lv_spinbox_set_digit_step_direction => {
                if __Arguments_count != 2 {
                    return;
                }
                let obj = __Argument_0;
                let direction = __Argument_1;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let direction = direction as core::ffi::c_uint;
                lv_spinbox_set_digit_step_direction(obj, direction);
            }
            Function_calls_type::lv_spinbox_get_rollover => {
                if __Arguments_count != 1 {
                    return;
                }
                let obj = __Argument_0;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let __Current_result = lv_spinbox_get_rollover(obj);
                let __Result = __Result as *mut bool;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_spinbox_get_value => {
                if __Arguments_count != 1 {
                    return;
                }
                let obj = __Argument_0;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let __Current_result = lv_spinbox_get_value(obj);
                let __Result = __Result as *mut i32;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_spinbox_get_step => {
                if __Arguments_count != 1 {
                    return;
                }
                let obj = __Argument_0;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let __Current_result = lv_spinbox_get_step(obj);
                let __Result = __Result as *mut i32;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_spinbox_step_next => {
                if __Arguments_count != 1 {
                    return;
                }
                let obj = __Argument_0;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                lv_spinbox_step_next(obj);
            }
            Function_calls_type::lv_spinbox_step_prev => {
                if __Arguments_count != 1 {
                    return;
                }
                let obj = __Argument_0;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                lv_spinbox_step_prev(obj);
            }
            Function_calls_type::lv_spinbox_increment => {
                if __Arguments_count != 1 {
                    return;
                }
                let obj = __Argument_0;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                lv_spinbox_increment(obj);
            }
            Function_calls_type::lv_spinbox_decrement => {
                if __Arguments_count != 1 {
                    return;
                }
                let obj = __Argument_0;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                lv_spinbox_decrement(obj);
            }
            Function_calls_type::lv_table_create => {
                if __Arguments_count != 1 {
                    return;
                }
                let parent = __Argument_0;
                let parent: *mut lv_obj_t =
                    __Environment.Convert_to_native_pointer(parent) as *mut _;
                let __Current_result = lv_table_create(parent);
                let __Current_result = __Environment.Convert_to_WASM_pointer(__Current_result);
                let __Result = __Result as *mut WASM_pointer_type;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_table_set_cell_value => {
                if __Arguments_count != 4 {
                    return;
                }
                let obj = __Argument_0;
                let row = __Argument_1;
                let col = __Argument_2;
                let txt = __Argument_3;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let row = row as u32;
                let col = col as u32;
                let txt: *const core::ffi::c_char =
                    __Environment.Convert_to_native_pointer(txt) as *mut _;
                lv_table_set_cell_value(obj, row, col, txt);
            }
            Function_calls_type::lv_table_set_cell_value_fmt => {
                if __Arguments_count != 4 {
                    return;
                }
                let obj = __Argument_0;
                let row = __Argument_1;
                let col = __Argument_2;
                let fmt = __Argument_3;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let row = row as u32;
                let col = col as u32;
                let fmt: *const core::ffi::c_char =
                    __Environment.Convert_to_native_pointer(fmt) as *mut _;
                lv_table_set_cell_value_fmt(obj, row, col, fmt);
            }
            Function_calls_type::lv_table_set_row_count => {
                if __Arguments_count != 2 {
                    return;
                }
                let obj = __Argument_0;
                let row_cnt = __Argument_1;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let row_cnt = row_cnt as u32;
                lv_table_set_row_count(obj, row_cnt);
            }
            Function_calls_type::lv_table_set_column_count => {
                if __Arguments_count != 2 {
                    return;
                }
                let obj = __Argument_0;
                let col_cnt = __Argument_1;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let col_cnt = col_cnt as u32;
                lv_table_set_column_count(obj, col_cnt);
            }
            Function_calls_type::lv_table_set_column_width => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let col_id = __Argument_1;
                let w = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let col_id = col_id as u32;
                let w = w as i32;
                lv_table_set_column_width(obj, col_id, w);
            }
            Function_calls_type::lv_table_add_cell_ctrl => {
                if __Arguments_count != 4 {
                    return;
                }
                let obj = __Argument_0;
                let row = __Argument_1;
                let col = __Argument_2;
                let ctrl = __Argument_3;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let row = row as u32;
                let col = col as u32;
                let ctrl = ctrl as core::ffi::c_uint;
                lv_table_add_cell_ctrl(obj, row, col, ctrl);
            }
            Function_calls_type::lv_table_clear_cell_ctrl => {
                if __Arguments_count != 4 {
                    return;
                }
                let obj = __Argument_0;
                let row = __Argument_1;
                let col = __Argument_2;
                let ctrl = __Argument_3;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let row = row as u32;
                let col = col as u32;
                let ctrl = ctrl as core::ffi::c_uint;
                lv_table_clear_cell_ctrl(obj, row, col, ctrl);
            }
            Function_calls_type::lv_table_set_cell_user_data => {
                if __Arguments_count != 4 {
                    return;
                }
                let obj = __Argument_0;
                let row = __Argument_1;
                let col = __Argument_2;
                let user_data = __Argument_3;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let row = row as u16;
                let col = col as u16;
                let user_data: *mut core::ffi::c_void =
                    __Environment.Convert_to_native_pointer(user_data) as *mut _;
                lv_table_set_cell_user_data(obj, row, col, user_data);
            }
            Function_calls_type::lv_table_set_selected_cell => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let row = __Argument_1;
                let col = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let row = row as u16;
                let col = col as u16;
                lv_table_set_selected_cell(obj, row, col);
            }
            Function_calls_type::lv_table_get_cell_value => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let row = __Argument_1;
                let col = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let row = row as u32;
                let col = col as u32;
                let __Current_result = lv_table_get_cell_value(obj, row, col);
                let __Current_result = __Environment.Convert_to_WASM_pointer(__Current_result);
                let __Result = __Result as *mut WASM_pointer_type;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_table_get_row_count => {
                if __Arguments_count != 1 {
                    return;
                }
                let obj = __Argument_0;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let __Current_result = lv_table_get_row_count(obj);
                let __Result = __Result as *mut u32;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_table_get_column_count => {
                if __Arguments_count != 1 {
                    return;
                }
                let obj = __Argument_0;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let __Current_result = lv_table_get_column_count(obj);
                let __Result = __Result as *mut u32;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_table_get_column_width => {
                if __Arguments_count != 2 {
                    return;
                }
                let obj = __Argument_0;
                let col = __Argument_1;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let col = col as u32;
                let __Current_result = lv_table_get_column_width(obj, col);
                let __Result = __Result as *mut i32;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_table_has_cell_ctrl => {
                if __Arguments_count != 4 {
                    return;
                }
                let obj = __Argument_0;
                let row = __Argument_1;
                let col = __Argument_2;
                let ctrl = __Argument_3;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let row = row as u32;
                let col = col as u32;
                let ctrl = ctrl as core::ffi::c_uint;
                let __Current_result = lv_table_has_cell_ctrl(obj, row, col, ctrl);
                let __Result = __Result as *mut bool;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_table_get_selected_cell => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let row = __Argument_1;
                let col = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let row: *mut u32 = __Environment.Convert_to_native_pointer(row) as *mut _;
                let col: *mut u32 = __Environment.Convert_to_native_pointer(col) as *mut _;
                lv_table_get_selected_cell(obj, row, col);
            }
            Function_calls_type::lv_table_get_cell_user_data => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let row = __Argument_1;
                let col = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let row = row as u16;
                let col = col as u16;
                let __Current_result = lv_table_get_cell_user_data(obj, row, col);
                let __Current_result = __Environment.Convert_to_WASM_pointer(__Current_result);
                let __Result = __Result as *mut WASM_pointer_type;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_tabview_create => {
                if __Arguments_count != 1 {
                    return;
                }
                let parent = __Argument_0;
                let parent: *mut lv_obj_t =
                    __Environment.Convert_to_native_pointer(parent) as *mut _;
                let __Current_result = lv_tabview_create(parent);
                let __Current_result = __Environment.Convert_to_WASM_pointer(__Current_result);
                let __Result = __Result as *mut WASM_pointer_type;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_tabview_add_tab => {
                if __Arguments_count != 2 {
                    return;
                }
                let obj = __Argument_0;
                let name = __Argument_1;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let name: *const core::ffi::c_char =
                    __Environment.Convert_to_native_pointer(name) as *mut _;
                let __Current_result = lv_tabview_add_tab(obj, name);
                let __Current_result = __Environment.Convert_to_WASM_pointer(__Current_result);
                let __Result = __Result as *mut WASM_pointer_type;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_tabview_rename_tab => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let idx = __Argument_1;
                let new_name = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let idx = idx as u32;
                let new_name: *const core::ffi::c_char =
                    __Environment.Convert_to_native_pointer(new_name) as *mut _;
                lv_tabview_rename_tab(obj, idx, new_name);
            }
            Function_calls_type::lv_tabview_set_active => {
                if __Arguments_count != 3 {
                    return;
                }
                let obj = __Argument_0;
                let idx = __Argument_1;
                let anim_en = __Argument_2;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let idx = idx as u32;
                let anim_en = anim_en as core::ffi::c_uint;
                lv_tabview_set_active(obj, idx, anim_en);
            }
            Function_calls_type::lv_tabview_set_tab_bar_position => {
                if __Arguments_count != 2 {
                    return;
                }
                let obj = __Argument_0;
                let dir = __Argument_1;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let dir = dir as core::ffi::c_uint;
                lv_tabview_set_tab_bar_position(obj, dir);
            }
            Function_calls_type::lv_tabview_set_tab_bar_size => {
                if __Arguments_count != 2 {
                    return;
                }
                let obj = __Argument_0;
                let size = __Argument_1;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let size = size as i32;
                lv_tabview_set_tab_bar_size(obj, size);
            }
            Function_calls_type::lv_tabview_get_tab_count => {
                if __Arguments_count != 1 {
                    return;
                }
                let obj = __Argument_0;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let __Current_result = lv_tabview_get_tab_count(obj);
                let __Result = __Result as *mut u32;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_tabview_get_tab_active => {
                if __Arguments_count != 1 {
                    return;
                }
                let obj = __Argument_0;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let __Current_result = lv_tabview_get_tab_active(obj);
                let __Result = __Result as *mut u32;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_tabview_get_content => {
                if __Arguments_count != 1 {
                    return;
                }
                let obj = __Argument_0;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let __Current_result = lv_tabview_get_content(obj);
                let __Current_result = __Environment.Convert_to_WASM_pointer(__Current_result);
                let __Result = __Result as *mut WASM_pointer_type;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_tabview_get_tab_bar => {
                if __Arguments_count != 1 {
                    return;
                }
                let obj = __Argument_0;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let __Current_result = lv_tabview_get_tab_bar(obj);
                let __Current_result = __Environment.Convert_to_WASM_pointer(__Current_result);
                let __Result = __Result as *mut WASM_pointer_type;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_tileview_create => {
                if __Arguments_count != 1 {
                    return;
                }
                let parent = __Argument_0;
                let parent: *mut lv_obj_t =
                    __Environment.Convert_to_native_pointer(parent) as *mut _;
                let __Current_result = lv_tileview_create(parent);
                let __Current_result = __Environment.Convert_to_WASM_pointer(__Current_result);
                let __Result = __Result as *mut WASM_pointer_type;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_tileview_add_tile => {
                if __Arguments_count != 4 {
                    return;
                }
                let tv = __Argument_0;
                let col_id = __Argument_1;
                let row_id = __Argument_2;
                let dir = __Argument_3;
                let tv: *mut lv_obj_t = __Environment.Convert_to_native_pointer(tv) as *mut _;
                let col_id = col_id as u8;
                let row_id = row_id as u8;
                let dir = dir as core::ffi::c_uint;
                let __Current_result = lv_tileview_add_tile(tv, col_id, row_id, dir);
                let __Current_result = __Environment.Convert_to_WASM_pointer(__Current_result);
                let __Result = __Result as *mut WASM_pointer_type;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_tileview_set_tile => {
                if __Arguments_count != 3 {
                    return;
                }
                let tv = __Argument_0;
                let tile_obj = __Argument_1;
                let anim_en = __Argument_2;
                let tv: *mut lv_obj_t = __Environment.Convert_to_native_pointer(tv) as *mut _;
                let tile_obj: *mut lv_obj_t =
                    __Environment.Convert_to_native_pointer(tile_obj) as *mut _;
                let anim_en = anim_en as core::ffi::c_uint;
                lv_tileview_set_tile(tv, tile_obj, anim_en);
            }
            Function_calls_type::lv_tileview_set_tile_by_index => {
                if __Arguments_count != 4 {
                    return;
                }
                let tv = __Argument_0;
                let col_id = __Argument_1;
                let row_id = __Argument_2;
                let anim_en = __Argument_3;
                let tv: *mut lv_obj_t = __Environment.Convert_to_native_pointer(tv) as *mut _;
                let col_id = col_id as u32;
                let row_id = row_id as u32;
                let anim_en = anim_en as core::ffi::c_uint;
                lv_tileview_set_tile_by_index(tv, col_id, row_id, anim_en);
            }
            Function_calls_type::lv_tileview_get_tile_active => {
                if __Arguments_count != 1 {
                    return;
                }
                let obj = __Argument_0;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let __Current_result = lv_tileview_get_tile_active(obj);
                let __Current_result = __Environment.Convert_to_WASM_pointer(__Current_result);
                let __Result = __Result as *mut WASM_pointer_type;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_subject_init_int => {
                if __Arguments_count != 2 {
                    return;
                }
                let subject = __Argument_0;
                let value = __Argument_1;
                let subject: *mut lv_subject_t =
                    __Environment.Convert_to_native_pointer(subject) as *mut _;
                let value = value as i32;
                lv_subject_init_int(subject, value);
            }
            Function_calls_type::lv_subject_set_int => {
                if __Arguments_count != 2 {
                    return;
                }
                let subject = __Argument_0;
                let value = __Argument_1;
                let subject: *mut lv_subject_t =
                    __Environment.Convert_to_native_pointer(subject) as *mut _;
                let value = value as i32;
                lv_subject_set_int(subject, value);
            }
            Function_calls_type::lv_subject_get_int => {
                if __Arguments_count != 1 {
                    return;
                }
                let subject = __Argument_0;
                let subject: *mut lv_subject_t =
                    __Environment.Convert_to_native_pointer(subject) as *mut _;
                let __Current_result = lv_subject_get_int(subject);
                let __Result = __Result as *mut i32;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_subject_get_previous_int => {
                if __Arguments_count != 1 {
                    return;
                }
                let subject = __Argument_0;
                let subject: *mut lv_subject_t =
                    __Environment.Convert_to_native_pointer(subject) as *mut _;
                let __Current_result = lv_subject_get_previous_int(subject);
                let __Result = __Result as *mut i32;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_subject_init_string => {
                if __Arguments_count != 5 {
                    return;
                }
                let subject = __Argument_0;
                let buf = __Argument_1;
                let prev_buf = __Argument_2;
                let size = __Argument_3;
                let value = __Argument_4;
                let subject: *mut lv_subject_t =
                    __Environment.Convert_to_native_pointer(subject) as *mut _;
                let buf: *mut core::ffi::c_char =
                    __Environment.Convert_to_native_pointer(buf) as *mut _;
                let prev_buf: *mut core::ffi::c_char =
                    __Environment.Convert_to_native_pointer(prev_buf) as *mut _;
                let value: *const core::ffi::c_char =
                    __Environment.Convert_to_native_pointer(value) as *mut _;
                lv_subject_init_string(subject, buf, prev_buf, size, value);
            }
            Function_calls_type::lv_subject_copy_string => {
                if __Arguments_count != 2 {
                    return;
                }
                let subject = __Argument_0;
                let buf = __Argument_1;
                let subject: *mut lv_subject_t =
                    __Environment.Convert_to_native_pointer(subject) as *mut _;
                let buf: *const core::ffi::c_char =
                    __Environment.Convert_to_native_pointer(buf) as *mut _;
                lv_subject_copy_string(subject, buf);
            }
            Function_calls_type::lv_subject_get_string => {
                if __Arguments_count != 1 {
                    return;
                }
                let subject = __Argument_0;
                let subject: *mut lv_subject_t =
                    __Environment.Convert_to_native_pointer(subject) as *mut _;
                let __Current_result = lv_subject_get_string(subject);
                let __Current_result = __Environment.Convert_to_WASM_pointer(__Current_result);
                let __Result = __Result as *mut WASM_pointer_type;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_subject_get_previous_string => {
                if __Arguments_count != 1 {
                    return;
                }
                let subject = __Argument_0;
                let subject: *mut lv_subject_t =
                    __Environment.Convert_to_native_pointer(subject) as *mut _;
                let __Current_result = lv_subject_get_previous_string(subject);
                let __Current_result = __Environment.Convert_to_WASM_pointer(__Current_result);
                let __Result = __Result as *mut WASM_pointer_type;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_subject_init_pointer => {
                if __Arguments_count != 2 {
                    return;
                }
                let subject = __Argument_0;
                let value = __Argument_1;
                let subject: *mut lv_subject_t =
                    __Environment.Convert_to_native_pointer(subject) as *mut _;
                let value: *mut core::ffi::c_void =
                    __Environment.Convert_to_native_pointer(value) as *mut _;
                lv_subject_init_pointer(subject, value);
            }
            Function_calls_type::lv_subject_set_pointer => {
                if __Arguments_count != 2 {
                    return;
                }
                let subject = __Argument_0;
                let ptr = __Argument_1;
                let subject: *mut lv_subject_t =
                    __Environment.Convert_to_native_pointer(subject) as *mut _;
                let ptr: *mut core::ffi::c_void =
                    __Environment.Convert_to_native_pointer(ptr) as *mut _;
                lv_subject_set_pointer(subject, ptr);
            }
            Function_calls_type::lv_subject_get_pointer => {
                if __Arguments_count != 1 {
                    return;
                }
                let subject = __Argument_0;
                let subject: *mut lv_subject_t =
                    __Environment.Convert_to_native_pointer(subject) as *mut _;
                let __Current_result = lv_subject_get_pointer(subject);
                let __Current_result = __Environment.Convert_to_WASM_pointer(__Current_result);
                let __Result = __Result as *mut WASM_pointer_type;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_subject_get_previous_pointer => {
                if __Arguments_count != 1 {
                    return;
                }
                let subject = __Argument_0;
                let subject: *mut lv_subject_t =
                    __Environment.Convert_to_native_pointer(subject) as *mut _;
                let __Current_result = lv_subject_get_previous_pointer(subject);
                let __Current_result = __Environment.Convert_to_WASM_pointer(__Current_result);
                let __Result = __Result as *mut WASM_pointer_type;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_subject_init_color => {
                if __Arguments_count != 2 {
                    return;
                }
                let subject = __Argument_0;
                let color = __Argument_1;
                let subject: *mut lv_subject_t =
                    __Environment.Convert_to_native_pointer(subject) as *mut _;
                let color = lv_color_t {
                    blue: color as u8,
                    green: (color >> 8) as u8,
                    red: (color >> 16) as u8,
                };
                lv_subject_init_color(subject, color);
            }
            Function_calls_type::lv_subject_set_color => {
                if __Arguments_count != 2 {
                    return;
                }
                let subject = __Argument_0;
                let color = __Argument_1;
                let subject: *mut lv_subject_t =
                    __Environment.Convert_to_native_pointer(subject) as *mut _;
                let color = lv_color_t {
                    blue: color as u8,
                    green: (color >> 8) as u8,
                    red: (color >> 16) as u8,
                };
                lv_subject_set_color(subject, color);
            }
            Function_calls_type::lv_subject_get_color => {
                if __Arguments_count != 1 {
                    return;
                }
                let subject = __Argument_0;
                let subject: *mut lv_subject_t =
                    __Environment.Convert_to_native_pointer(subject) as *mut _;
                let __Current_result = lv_subject_get_color(subject);
                let __Result = __Result as *mut lv_color_t;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_subject_get_previous_color => {
                if __Arguments_count != 1 {
                    return;
                }
                let subject = __Argument_0;
                let subject: *mut lv_subject_t =
                    __Environment.Convert_to_native_pointer(subject) as *mut _;
                let __Current_result = lv_subject_get_previous_color(subject);
                let __Result = __Result as *mut lv_color_t;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_subject_init_group => {
                if __Arguments_count != 3 {
                    return;
                }
                let subject = __Argument_0;
                let list = __Argument_1;
                let list_len = __Argument_2;
                let subject: *mut lv_subject_t =
                    __Environment.Convert_to_native_pointer(subject) as *mut _;
                let list: *mut *mut lv_subject_t =
                    __Environment.Convert_to_native_pointer(list) as *mut _;
                let list_len = list_len as u32;
                lv_subject_init_group(subject, list, list_len);
            }
            Function_calls_type::lv_subject_deinit => {
                if __Arguments_count != 1 {
                    return;
                }
                let subject = __Argument_0;
                let subject: *mut lv_subject_t =
                    __Environment.Convert_to_native_pointer(subject) as *mut _;
                lv_subject_deinit(subject);
            }
            Function_calls_type::lv_subject_get_group_element => {
                if __Arguments_count != 2 {
                    return;
                }
                let subject = __Argument_0;
                let index = __Argument_1;
                let subject: *mut lv_subject_t =
                    __Environment.Convert_to_native_pointer(subject) as *mut _;
                let index = index as i32;
                let __Current_result = lv_subject_get_group_element(subject, index);
                let __Current_result = __Environment.Convert_to_WASM_pointer(__Current_result);
                let __Result = __Result as *mut WASM_pointer_type;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_subject_add_observer => {
                if __Arguments_count != 3 {
                    return;
                }
                let subject = __Argument_0;
                let observer_cb = __Argument_1;
                let user_data = __Argument_2;
                let subject: *mut lv_subject_t =
                    __Environment.Convert_to_native_pointer(subject) as *mut _;
                let observer_cb = if observer_cb == 0 {
                    core::option::Option::None
                } else {
                    #[allow(clippy::missing_transmute_annotations)]
                    core::option::Option::Some(core::mem::transmute(observer_cb))
                };
                let user_data: *mut core::ffi::c_void =
                    __Environment.Convert_to_native_pointer(user_data) as *mut _;
                let __Current_result = lv_subject_add_observer(subject, observer_cb, user_data);
                let __Current_result = __Environment.Convert_to_WASM_pointer(__Current_result);
                let __Result = __Result as *mut WASM_pointer_type;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_subject_add_observer_obj => {
                if __Arguments_count != 4 {
                    return;
                }
                let subject = __Argument_0;
                let observer_cb = __Argument_1;
                let obj = __Argument_2;
                let user_data = __Argument_3;
                let subject: *mut lv_subject_t =
                    __Environment.Convert_to_native_pointer(subject) as *mut _;
                let observer_cb = if observer_cb == 0 {
                    core::option::Option::None
                } else {
                    #[allow(clippy::missing_transmute_annotations)]
                    core::option::Option::Some(core::mem::transmute(observer_cb))
                };
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let user_data: *mut core::ffi::c_void =
                    __Environment.Convert_to_native_pointer(user_data) as *mut _;
                let __Current_result =
                    lv_subject_add_observer_obj(subject, observer_cb, obj, user_data);
                let __Current_result = __Environment.Convert_to_WASM_pointer(__Current_result);
                let __Result = __Result as *mut WASM_pointer_type;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_subject_add_observer_with_target => {
                if __Arguments_count != 4 {
                    return;
                }
                let subject = __Argument_0;
                let observer_cb = __Argument_1;
                let target = __Argument_2;
                let user_data = __Argument_3;
                let subject: *mut lv_subject_t =
                    __Environment.Convert_to_native_pointer(subject) as *mut _;
                let observer_cb = if observer_cb == 0 {
                    core::option::Option::None
                } else {
                    #[allow(clippy::missing_transmute_annotations)]
                    core::option::Option::Some(core::mem::transmute(observer_cb))
                };
                let target: *mut core::ffi::c_void =
                    __Environment.Convert_to_native_pointer(target) as *mut _;
                let user_data: *mut core::ffi::c_void =
                    __Environment.Convert_to_native_pointer(user_data) as *mut _;
                let __Current_result =
                    lv_subject_add_observer_with_target(subject, observer_cb, target, user_data);
                let __Current_result = __Environment.Convert_to_WASM_pointer(__Current_result);
                let __Result = __Result as *mut WASM_pointer_type;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_obj_remove_from_subject => {
                if __Arguments_count != 2 {
                    return;
                }
                let obj = __Argument_0;
                let subject = __Argument_1;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let subject: *mut lv_subject_t =
                    __Environment.Convert_to_native_pointer(subject) as *mut _;
                lv_obj_remove_from_subject(obj, subject);
            }
            Function_calls_type::lv_subject_notify => {
                if __Arguments_count != 1 {
                    return;
                }
                let subject = __Argument_0;
                let subject: *mut lv_subject_t =
                    __Environment.Convert_to_native_pointer(subject) as *mut _;
                lv_subject_notify(subject);
            }
            Function_calls_type::lv_obj_bind_flag_if_eq => {
                if __Arguments_count != 4 {
                    return;
                }
                let obj = __Argument_0;
                let subject = __Argument_1;
                let flag = __Argument_2;
                let ref_value = __Argument_3;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let subject: *mut lv_subject_t =
                    __Environment.Convert_to_native_pointer(subject) as *mut _;
                let flag = flag as core::ffi::c_uint;
                let ref_value = ref_value as i32;
                let __Current_result = lv_obj_bind_flag_if_eq(obj, subject, flag, ref_value);
                let __Current_result = __Environment.Convert_to_WASM_pointer(__Current_result);
                let __Result = __Result as *mut WASM_pointer_type;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_obj_bind_flag_if_not_eq => {
                if __Arguments_count != 4 {
                    return;
                }
                let obj = __Argument_0;
                let subject = __Argument_1;
                let flag = __Argument_2;
                let ref_value = __Argument_3;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let subject: *mut lv_subject_t =
                    __Environment.Convert_to_native_pointer(subject) as *mut _;
                let flag = flag as core::ffi::c_uint;
                let ref_value = ref_value as i32;
                let __Current_result = lv_obj_bind_flag_if_not_eq(obj, subject, flag, ref_value);
                let __Current_result = __Environment.Convert_to_WASM_pointer(__Current_result);
                let __Result = __Result as *mut WASM_pointer_type;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_obj_bind_state_if_eq => {
                if __Arguments_count != 4 {
                    return;
                }
                let obj = __Argument_0;
                let subject = __Argument_1;
                let state = __Argument_2;
                let ref_value = __Argument_3;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let subject: *mut lv_subject_t =
                    __Environment.Convert_to_native_pointer(subject) as *mut _;
                let state = state as u16;
                let ref_value = ref_value as i32;
                let __Current_result = lv_obj_bind_state_if_eq(obj, subject, state, ref_value);
                let __Current_result = __Environment.Convert_to_WASM_pointer(__Current_result);
                let __Result = __Result as *mut WASM_pointer_type;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_obj_bind_state_if_not_eq => {
                if __Arguments_count != 4 {
                    return;
                }
                let obj = __Argument_0;
                let subject = __Argument_1;
                let state = __Argument_2;
                let ref_value = __Argument_3;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let subject: *mut lv_subject_t =
                    __Environment.Convert_to_native_pointer(subject) as *mut _;
                let state = state as u16;
                let ref_value = ref_value as i32;
                let __Current_result = lv_obj_bind_state_if_not_eq(obj, subject, state, ref_value);
                let __Current_result = __Environment.Convert_to_WASM_pointer(__Current_result);
                let __Result = __Result as *mut WASM_pointer_type;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_obj_bind_checked => {
                if __Arguments_count != 2 {
                    return;
                }
                let obj = __Argument_0;
                let subject = __Argument_1;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let subject: *mut lv_subject_t =
                    __Environment.Convert_to_native_pointer(subject) as *mut _;
                let __Current_result = lv_obj_bind_checked(obj, subject);
                let __Current_result = __Environment.Convert_to_WASM_pointer(__Current_result);
                let __Result = __Result as *mut WASM_pointer_type;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_arc_bind_value => {
                if __Arguments_count != 2 {
                    return;
                }
                let obj = __Argument_0;
                let subject = __Argument_1;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let subject: *mut lv_subject_t =
                    __Environment.Convert_to_native_pointer(subject) as *mut _;
                let __Current_result = lv_arc_bind_value(obj, subject);
                let __Current_result = __Environment.Convert_to_WASM_pointer(__Current_result);
                let __Result = __Result as *mut WASM_pointer_type;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_slider_bind_value => {
                if __Arguments_count != 2 {
                    return;
                }
                let obj = __Argument_0;
                let subject = __Argument_1;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let subject: *mut lv_subject_t =
                    __Environment.Convert_to_native_pointer(subject) as *mut _;
                let __Current_result = lv_slider_bind_value(obj, subject);
                let __Current_result = __Environment.Convert_to_WASM_pointer(__Current_result);
                let __Result = __Result as *mut WASM_pointer_type;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_roller_bind_value => {
                if __Arguments_count != 2 {
                    return;
                }
                let obj = __Argument_0;
                let subject = __Argument_1;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let subject: *mut lv_subject_t =
                    __Environment.Convert_to_native_pointer(subject) as *mut _;
                let __Current_result = lv_roller_bind_value(obj, subject);
                let __Current_result = __Environment.Convert_to_WASM_pointer(__Current_result);
                let __Result = __Result as *mut WASM_pointer_type;
                *__Result = __Current_result;
            }
            Function_calls_type::lv_dropdown_bind_value => {
                if __Arguments_count != 2 {
                    return;
                }
                let obj = __Argument_0;
                let subject = __Argument_1;
                let obj: *mut lv_obj_t = __Environment.Convert_to_native_pointer(obj) as *mut _;
                let subject: *mut lv_subject_t =
                    __Environment.Convert_to_native_pointer(subject) as *mut _;
                let __Current_result = lv_dropdown_bind_value(obj, subject);
                let __Current_result = __Environment.Convert_to_WASM_pointer(__Current_result);
                let __Result = __Result as *mut WASM_pointer_type;
                *__Result = __Current_result;
            }
        }
    }
}
