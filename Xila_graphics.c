#include "Xila_graphics.h"
typedef enum {
  Xila_graphics_call_point_transform,
  Xila_graphics_call_point_array_transform,
  Xila_graphics_call_point_from_precise,
  Xila_graphics_call_point_to_precise,
  Xila_graphics_call_point_set,
  Xila_graphics_call_point_precise_set,
  Xila_graphics_call_point_swap,
  Xila_graphics_call_point_precise_swap,
  Xila_graphics_call_color_format_get_bpp,
  Xila_graphics_call_color_format_get_size,
  Xila_graphics_call_color_format_has_alpha,
  Xila_graphics_call_color_to_32,
  Xila_graphics_call_color_to_int,
  Xila_graphics_call_color_eq,
  Xila_graphics_call_color32_eq,
  Xila_graphics_call_color_hex,
  Xila_graphics_call_color_make,
  Xila_graphics_call_color32_make,
  Xila_graphics_call_color_hex3,
  Xila_graphics_call_color_to_u16,
  Xila_graphics_call_color_to_u32,
  Xila_graphics_call_color_16_16_mix,
  Xila_graphics_call_color_lighten,
  Xila_graphics_call_color_darken,
  Xila_graphics_call_color_hsv_to_rgb,
  Xila_graphics_call_color_rgb_to_hsv,
  Xila_graphics_call_color_to_hsv,
  Xila_graphics_call_color_white,
  Xila_graphics_call_color_black,
  Xila_graphics_call_color_premultiply,
  Xila_graphics_call_color16_premultiply,
  Xila_graphics_call_color_luminance,
  Xila_graphics_call_color16_luminance,
  Xila_graphics_call_color24_luminance,
  Xila_graphics_call_color32_luminance,
  Xila_graphics_call_color_mix,
  Xila_graphics_call_color_mix32,
  Xila_graphics_call_color_brightness,
  Xila_graphics_call_color_filter_dsc_init,
  Xila_graphics_call_obj_set_flex_flow,
  Xila_graphics_call_obj_set_flex_align,
  Xila_graphics_call_obj_set_flex_grow,
  Xila_graphics_call_obj_set_grid_dsc_array,
  Xila_graphics_call_obj_set_grid_align,
  Xila_graphics_call_obj_set_grid_cell,
  Xila_graphics_call_style_init,
  Xila_graphics_call_style_reset,
  Xila_graphics_call_style_register_prop,
  Xila_graphics_call_style_get_num_custom_props,
  Xila_graphics_call_style_remove_prop,
  Xila_graphics_call_style_set_prop,
  Xila_graphics_call_style_get_prop,
  Xila_graphics_call_style_transition_dsc_init,
  Xila_graphics_call_style_prop_get_default,
  Xila_graphics_call_style_is_empty,
  Xila_graphics_call_style_prop_lookup_flags,
  Xila_graphics_call_style_set_width,
  Xila_graphics_call_style_set_min_width,
  Xila_graphics_call_style_set_max_width,
  Xila_graphics_call_style_set_height,
  Xila_graphics_call_style_set_min_height,
  Xila_graphics_call_style_set_max_height,
  Xila_graphics_call_style_set_length,
  Xila_graphics_call_style_set_x,
  Xila_graphics_call_style_set_y,
  Xila_graphics_call_style_set_align,
  Xila_graphics_call_style_set_transform_width,
  Xila_graphics_call_style_set_transform_height,
  Xila_graphics_call_style_set_translate_x,
  Xila_graphics_call_style_set_translate_y,
  Xila_graphics_call_style_set_transform_scale_x,
  Xila_graphics_call_style_set_transform_scale_y,
  Xila_graphics_call_style_set_transform_rotation,
  Xila_graphics_call_style_set_transform_pivot_x,
  Xila_graphics_call_style_set_transform_pivot_y,
  Xila_graphics_call_style_set_transform_skew_x,
  Xila_graphics_call_style_set_transform_skew_y,
  Xila_graphics_call_style_set_pad_top,
  Xila_graphics_call_style_set_pad_bottom,
  Xila_graphics_call_style_set_pad_left,
  Xila_graphics_call_style_set_pad_right,
  Xila_graphics_call_style_set_pad_row,
  Xila_graphics_call_style_set_pad_column,
  Xila_graphics_call_style_set_margin_top,
  Xila_graphics_call_style_set_margin_bottom,
  Xila_graphics_call_style_set_margin_left,
  Xila_graphics_call_style_set_margin_right,
  Xila_graphics_call_style_set_bg_color,
  Xila_graphics_call_style_set_bg_opa,
  Xila_graphics_call_style_set_bg_grad_color,
  Xila_graphics_call_style_set_bg_grad_dir,
  Xila_graphics_call_style_set_bg_main_stop,
  Xila_graphics_call_style_set_bg_grad_stop,
  Xila_graphics_call_style_set_bg_main_opa,
  Xila_graphics_call_style_set_bg_grad_opa,
  Xila_graphics_call_style_set_bg_grad,
  Xila_graphics_call_style_set_bg_image_src,
  Xila_graphics_call_style_set_bg_image_opa,
  Xila_graphics_call_style_set_bg_image_recolor,
  Xila_graphics_call_style_set_bg_image_recolor_opa,
  Xila_graphics_call_style_set_bg_image_tiled,
  Xila_graphics_call_style_set_border_color,
  Xila_graphics_call_style_set_border_opa,
  Xila_graphics_call_style_set_border_width,
  Xila_graphics_call_style_set_border_side,
  Xila_graphics_call_style_set_border_post,
  Xila_graphics_call_style_set_outline_width,
  Xila_graphics_call_style_set_outline_color,
  Xila_graphics_call_style_set_outline_opa,
  Xila_graphics_call_style_set_outline_pad,
  Xila_graphics_call_style_set_shadow_width,
  Xila_graphics_call_style_set_shadow_offset_x,
  Xila_graphics_call_style_set_shadow_offset_y,
  Xila_graphics_call_style_set_shadow_spread,
  Xila_graphics_call_style_set_shadow_color,
  Xila_graphics_call_style_set_shadow_opa,
  Xila_graphics_call_style_set_image_opa,
  Xila_graphics_call_style_set_image_recolor,
  Xila_graphics_call_style_set_image_recolor_opa,
  Xila_graphics_call_style_set_line_width,
  Xila_graphics_call_style_set_line_dash_width,
  Xila_graphics_call_style_set_line_dash_gap,
  Xila_graphics_call_style_set_line_rounded,
  Xila_graphics_call_style_set_line_color,
  Xila_graphics_call_style_set_line_opa,
  Xila_graphics_call_style_set_arc_width,
  Xila_graphics_call_style_set_arc_rounded,
  Xila_graphics_call_style_set_arc_color,
  Xila_graphics_call_style_set_arc_opa,
  Xila_graphics_call_style_set_arc_image_src,
  Xila_graphics_call_style_set_text_color,
  Xila_graphics_call_style_set_text_opa,
  Xila_graphics_call_style_set_text_font,
  Xila_graphics_call_style_set_text_letter_space,
  Xila_graphics_call_style_set_text_line_space,
  Xila_graphics_call_style_set_text_decor,
  Xila_graphics_call_style_set_text_align,
  Xila_graphics_call_style_set_radius,
  Xila_graphics_call_style_set_clip_corner,
  Xila_graphics_call_style_set_opa,
  Xila_graphics_call_style_set_opa_layered,
  Xila_graphics_call_style_set_color_filter_dsc,
  Xila_graphics_call_style_set_color_filter_opa,
  Xila_graphics_call_style_set_anim,
  Xila_graphics_call_style_set_anim_duration,
  Xila_graphics_call_style_set_transition,
  Xila_graphics_call_style_set_blend_mode,
  Xila_graphics_call_style_set_layout,
  Xila_graphics_call_style_set_base_dir,
  Xila_graphics_call_style_set_bitmap_mask_src,
  Xila_graphics_call_style_set_rotary_sensitivity,
  Xila_graphics_call_style_set_flex_flow,
  Xila_graphics_call_style_set_flex_main_place,
  Xila_graphics_call_style_set_flex_cross_place,
  Xila_graphics_call_style_set_flex_track_place,
  Xila_graphics_call_style_set_flex_grow,
  Xila_graphics_call_style_set_grid_column_dsc_array,
  Xila_graphics_call_style_set_grid_column_align,
  Xila_graphics_call_style_set_grid_row_dsc_array,
  Xila_graphics_call_style_set_grid_row_align,
  Xila_graphics_call_style_set_grid_cell_column_pos,
  Xila_graphics_call_style_set_grid_cell_x_align,
  Xila_graphics_call_style_set_grid_cell_column_span,
  Xila_graphics_call_style_set_grid_cell_row_pos,
  Xila_graphics_call_style_set_grid_cell_y_align,
  Xila_graphics_call_style_set_grid_cell_row_span,
  Xila_graphics_call_obj_delete,
  Xila_graphics_call_obj_clean,
  Xila_graphics_call_obj_delete_delayed,
  Xila_graphics_call_obj_delete_anim_completed_cb,
  Xila_graphics_call_obj_delete_async,
  Xila_graphics_call_obj_set_parent,
  Xila_graphics_call_obj_swap,
  Xila_graphics_call_obj_move_to_index,
  Xila_graphics_call_obj_get_screen,
  Xila_graphics_call_obj_get_parent,
  Xila_graphics_call_obj_get_child,
  Xila_graphics_call_obj_get_child_by_type,
  Xila_graphics_call_obj_get_sibling,
  Xila_graphics_call_obj_get_sibling_by_type,
  Xila_graphics_call_obj_get_child_count,
  Xila_graphics_call_obj_get_child_count_by_type,
  Xila_graphics_call_obj_get_index,
  Xila_graphics_call_obj_get_index_by_type,
  Xila_graphics_call_obj_tree_walk,
  Xila_graphics_call_obj_dump_tree,
  Xila_graphics_call_obj_set_pos,
  Xila_graphics_call_obj_set_x,
  Xila_graphics_call_obj_set_y,
  Xila_graphics_call_obj_set_size,
  Xila_graphics_call_obj_refr_size,
  Xila_graphics_call_obj_set_width,
  Xila_graphics_call_obj_set_height,
  Xila_graphics_call_obj_set_content_width,
  Xila_graphics_call_obj_set_content_height,
  Xila_graphics_call_obj_set_layout,
  Xila_graphics_call_obj_is_layout_positioned,
  Xila_graphics_call_obj_mark_layout_as_dirty,
  Xila_graphics_call_obj_update_layout,
  Xila_graphics_call_obj_set_align,
  Xila_graphics_call_obj_align,
  Xila_graphics_call_obj_align_to,
  Xila_graphics_call_obj_center,
  Xila_graphics_call_obj_get_coords,
  Xila_graphics_call_obj_get_x,
  Xila_graphics_call_obj_get_x2,
  Xila_graphics_call_obj_get_y,
  Xila_graphics_call_obj_get_y2,
  Xila_graphics_call_obj_get_x_aligned,
  Xila_graphics_call_obj_get_y_aligned,
  Xila_graphics_call_obj_get_width,
  Xila_graphics_call_obj_get_height,
  Xila_graphics_call_obj_get_content_width,
  Xila_graphics_call_obj_get_content_height,
  Xila_graphics_call_obj_get_content_coords,
  Xila_graphics_call_obj_get_self_width,
  Xila_graphics_call_obj_get_self_height,
  Xila_graphics_call_obj_refresh_self_size,
  Xila_graphics_call_obj_refr_pos,
  Xila_graphics_call_obj_move_to,
  Xila_graphics_call_obj_move_children_by,
  Xila_graphics_call_obj_transform_point,
  Xila_graphics_call_obj_transform_point_array,
  Xila_graphics_call_obj_get_transformed_area,
  Xila_graphics_call_obj_invalidate_area,
  Xila_graphics_call_obj_invalidate,
  Xila_graphics_call_obj_area_is_visible,
  Xila_graphics_call_obj_is_visible,
  Xila_graphics_call_obj_set_ext_click_area,
  Xila_graphics_call_obj_get_click_area,
  Xila_graphics_call_obj_hit_test,
  Xila_graphics_call_obj_set_scrollbar_mode,
  Xila_graphics_call_obj_set_scroll_dir,
  Xila_graphics_call_obj_set_scroll_snap_x,
  Xila_graphics_call_obj_set_scroll_snap_y,
  Xila_graphics_call_obj_get_scrollbar_mode,
  Xila_graphics_call_obj_get_scroll_dir,
  Xila_graphics_call_obj_get_scroll_snap_x,
  Xila_graphics_call_obj_get_scroll_snap_y,
  Xila_graphics_call_obj_get_scroll_x,
  Xila_graphics_call_obj_get_scroll_y,
  Xila_graphics_call_obj_get_scroll_top,
  Xila_graphics_call_obj_get_scroll_bottom,
  Xila_graphics_call_obj_get_scroll_left,
  Xila_graphics_call_obj_get_scroll_right,
  Xila_graphics_call_obj_get_scroll_end,
  Xila_graphics_call_obj_scroll_by,
  Xila_graphics_call_obj_scroll_by_bounded,
  Xila_graphics_call_obj_scroll_to,
  Xila_graphics_call_obj_scroll_to_x,
  Xila_graphics_call_obj_scroll_to_y,
  Xila_graphics_call_obj_scroll_to_view,
  Xila_graphics_call_obj_scroll_to_view_recursive,
  Xila_graphics_call_obj_is_scrolling,
  Xila_graphics_call_obj_update_snap,
  Xila_graphics_call_obj_get_scrollbar_area,
  Xila_graphics_call_obj_scrollbar_invalidate,
  Xila_graphics_call_obj_readjust_scroll,
  Xila_graphics_call_obj_add_style,
  Xila_graphics_call_obj_replace_style,
  Xila_graphics_call_obj_remove_style,
  Xila_graphics_call_obj_remove_style_all,
  Xila_graphics_call_obj_report_style_change,
  Xila_graphics_call_obj_refresh_style,
  Xila_graphics_call_obj_enable_style_refresh,
  Xila_graphics_call_obj_get_style_prop,
  Xila_graphics_call_obj_has_style_prop,
  Xila_graphics_call_obj_set_local_style_prop,
  Xila_graphics_call_obj_get_local_style_prop,
  Xila_graphics_call_obj_remove_local_style_prop,
  Xila_graphics_call_obj_style_apply_color_filter,
  Xila_graphics_call_obj_fade_in,
  Xila_graphics_call_obj_fade_out,
  Xila_graphics_call_obj_set_style_width,
  Xila_graphics_call_obj_set_style_min_width,
  Xila_graphics_call_obj_set_style_max_width,
  Xila_graphics_call_obj_set_style_height,
  Xila_graphics_call_obj_set_style_min_height,
  Xila_graphics_call_obj_set_style_max_height,
  Xila_graphics_call_obj_set_style_length,
  Xila_graphics_call_obj_set_style_x,
  Xila_graphics_call_obj_set_style_y,
  Xila_graphics_call_obj_set_style_align,
  Xila_graphics_call_obj_set_style_transform_width,
  Xila_graphics_call_obj_set_style_transform_height,
  Xila_graphics_call_obj_set_style_translate_x,
  Xila_graphics_call_obj_set_style_translate_y,
  Xila_graphics_call_obj_set_style_transform_scale_x,
  Xila_graphics_call_obj_set_style_transform_scale_y,
  Xila_graphics_call_obj_set_style_transform_rotation,
  Xila_graphics_call_obj_set_style_transform_pivot_x,
  Xila_graphics_call_obj_set_style_transform_pivot_y,
  Xila_graphics_call_obj_set_style_transform_skew_x,
  Xila_graphics_call_obj_set_style_transform_skew_y,
  Xila_graphics_call_obj_set_style_pad_top,
  Xila_graphics_call_obj_set_style_pad_bottom,
  Xila_graphics_call_obj_set_style_pad_left,
  Xila_graphics_call_obj_set_style_pad_right,
  Xila_graphics_call_obj_set_style_pad_row,
  Xila_graphics_call_obj_set_style_pad_column,
  Xila_graphics_call_obj_set_style_margin_top,
  Xila_graphics_call_obj_set_style_margin_bottom,
  Xila_graphics_call_obj_set_style_margin_left,
  Xila_graphics_call_obj_set_style_margin_right,
  Xila_graphics_call_obj_set_style_bg_color,
  Xila_graphics_call_obj_set_style_bg_opa,
  Xila_graphics_call_obj_set_style_bg_grad_color,
  Xila_graphics_call_obj_set_style_bg_grad_dir,
  Xila_graphics_call_obj_set_style_bg_main_stop,
  Xila_graphics_call_obj_set_style_bg_grad_stop,
  Xila_graphics_call_obj_set_style_bg_main_opa,
  Xila_graphics_call_obj_set_style_bg_grad_opa,
  Xila_graphics_call_obj_set_style_bg_grad,
  Xila_graphics_call_obj_set_style_bg_image_src,
  Xila_graphics_call_obj_set_style_bg_image_opa,
  Xila_graphics_call_obj_set_style_bg_image_recolor,
  Xila_graphics_call_obj_set_style_bg_image_recolor_opa,
  Xila_graphics_call_obj_set_style_bg_image_tiled,
  Xila_graphics_call_obj_set_style_border_color,
  Xila_graphics_call_obj_set_style_border_opa,
  Xila_graphics_call_obj_set_style_border_width,
  Xila_graphics_call_obj_set_style_border_side,
  Xila_graphics_call_obj_set_style_border_post,
  Xila_graphics_call_obj_set_style_outline_width,
  Xila_graphics_call_obj_set_style_outline_color,
  Xila_graphics_call_obj_set_style_outline_opa,
  Xila_graphics_call_obj_set_style_outline_pad,
  Xila_graphics_call_obj_set_style_shadow_width,
  Xila_graphics_call_obj_set_style_shadow_offset_x,
  Xila_graphics_call_obj_set_style_shadow_offset_y,
  Xila_graphics_call_obj_set_style_shadow_spread,
  Xila_graphics_call_obj_set_style_shadow_color,
  Xila_graphics_call_obj_set_style_shadow_opa,
  Xila_graphics_call_obj_set_style_image_opa,
  Xila_graphics_call_obj_set_style_image_recolor,
  Xila_graphics_call_obj_set_style_image_recolor_opa,
  Xila_graphics_call_obj_set_style_line_width,
  Xila_graphics_call_obj_set_style_line_dash_width,
  Xila_graphics_call_obj_set_style_line_dash_gap,
  Xila_graphics_call_obj_set_style_line_rounded,
  Xila_graphics_call_obj_set_style_line_color,
  Xila_graphics_call_obj_set_style_line_opa,
  Xila_graphics_call_obj_set_style_arc_width,
  Xila_graphics_call_obj_set_style_arc_rounded,
  Xila_graphics_call_obj_set_style_arc_color,
  Xila_graphics_call_obj_set_style_arc_opa,
  Xila_graphics_call_obj_set_style_arc_image_src,
  Xila_graphics_call_obj_set_style_text_color,
  Xila_graphics_call_obj_set_style_text_opa,
  Xila_graphics_call_obj_set_style_text_font,
  Xila_graphics_call_obj_set_style_text_letter_space,
  Xila_graphics_call_obj_set_style_text_line_space,
  Xila_graphics_call_obj_set_style_text_decor,
  Xila_graphics_call_obj_set_style_text_align,
  Xila_graphics_call_obj_set_style_radius,
  Xila_graphics_call_obj_set_style_clip_corner,
  Xila_graphics_call_obj_set_style_opa,
  Xila_graphics_call_obj_set_style_opa_layered,
  Xila_graphics_call_obj_set_style_color_filter_dsc,
  Xila_graphics_call_obj_set_style_color_filter_opa,
  Xila_graphics_call_obj_set_style_anim,
  Xila_graphics_call_obj_set_style_anim_duration,
  Xila_graphics_call_obj_set_style_transition,
  Xila_graphics_call_obj_set_style_blend_mode,
  Xila_graphics_call_obj_set_style_layout,
  Xila_graphics_call_obj_set_style_base_dir,
  Xila_graphics_call_obj_set_style_bitmap_mask_src,
  Xila_graphics_call_obj_set_style_rotary_sensitivity,
  Xila_graphics_call_obj_set_style_flex_flow,
  Xila_graphics_call_obj_set_style_flex_main_place,
  Xila_graphics_call_obj_set_style_flex_cross_place,
  Xila_graphics_call_obj_set_style_flex_track_place,
  Xila_graphics_call_obj_set_style_flex_grow,
  Xila_graphics_call_obj_set_style_grid_column_dsc_array,
  Xila_graphics_call_obj_set_style_grid_column_align,
  Xila_graphics_call_obj_set_style_grid_row_dsc_array,
  Xila_graphics_call_obj_set_style_grid_row_align,
  Xila_graphics_call_obj_set_style_grid_cell_column_pos,
  Xila_graphics_call_obj_set_style_grid_cell_x_align,
  Xila_graphics_call_obj_set_style_grid_cell_column_span,
  Xila_graphics_call_obj_set_style_grid_cell_row_pos,
  Xila_graphics_call_obj_set_style_grid_cell_y_align,
  Xila_graphics_call_obj_set_style_grid_cell_row_span,
  Xila_graphics_call_obj_calculate_style_text_align,
  Xila_graphics_call_obj_get_style_opa_recursive,
  Xila_graphics_call_obj_init_draw_rect_dsc,
  Xila_graphics_call_obj_init_draw_label_dsc,
  Xila_graphics_call_obj_init_draw_image_dsc,
  Xila_graphics_call_obj_init_draw_line_dsc,
  Xila_graphics_call_obj_init_draw_arc_dsc,
  Xila_graphics_call_obj_calculate_ext_draw_size,
  Xila_graphics_call_obj_refresh_ext_draw_size,
  Xila_graphics_call_obj_class_create_obj,
  Xila_graphics_call_obj_class_init_obj,
  Xila_graphics_call_obj_is_editable,
  Xila_graphics_call_obj_is_group_def,
  Xila_graphics_call_obj_send_event,
  Xila_graphics_call_obj_event_base,
  Xila_graphics_call_obj_add_event_cb,
  Xila_graphics_call_obj_get_event_count,
  Xila_graphics_call_obj_get_event_dsc,
  Xila_graphics_call_obj_remove_event,
  Xila_graphics_call_obj_remove_event_cb,
  Xila_graphics_call_obj_remove_event_dsc,
  Xila_graphics_call_obj_remove_event_cb_with_user_data,
  Xila_graphics_call_obj_create,
  Xila_graphics_call_obj_add_flag,
  Xila_graphics_call_obj_remove_flag,
  Xila_graphics_call_obj_update_flag,
  Xila_graphics_call_obj_add_state,
  Xila_graphics_call_obj_remove_state,
  Xila_graphics_call_obj_set_state,
  Xila_graphics_call_obj_set_user_data,
  Xila_graphics_call_obj_has_flag,
  Xila_graphics_call_obj_has_flag_any,
  Xila_graphics_call_obj_get_state,
  Xila_graphics_call_obj_has_state,
  Xila_graphics_call_obj_get_group,
  Xila_graphics_call_obj_get_user_data,
  Xila_graphics_call_obj_allocate_spec_attr,
  Xila_graphics_call_obj_check_type,
  Xila_graphics_call_obj_has_class,
  Xila_graphics_call_obj_get_class,
  Xila_graphics_call_obj_is_valid,
  Xila_graphics_call_obj_null_on_delete,
  Xila_graphics_call_obj_redraw,
  Xila_graphics_call_arc_create,
  Xila_graphics_call_arc_set_start_angle,
  Xila_graphics_call_arc_set_end_angle,
  Xila_graphics_call_arc_set_angles,
  Xila_graphics_call_arc_set_bg_start_angle,
  Xila_graphics_call_arc_set_bg_end_angle,
  Xila_graphics_call_arc_set_bg_angles,
  Xila_graphics_call_arc_set_rotation,
  Xila_graphics_call_arc_set_mode,
  Xila_graphics_call_arc_set_value,
  Xila_graphics_call_arc_set_range,
  Xila_graphics_call_arc_set_change_rate,
  Xila_graphics_call_arc_set_knob_offset,
  Xila_graphics_call_arc_get_angle_start,
  Xila_graphics_call_arc_get_angle_end,
  Xila_graphics_call_arc_get_bg_angle_start,
  Xila_graphics_call_arc_get_bg_angle_end,
  Xila_graphics_call_arc_get_value,
  Xila_graphics_call_arc_get_min_value,
  Xila_graphics_call_arc_get_max_value,
  Xila_graphics_call_arc_get_mode,
  Xila_graphics_call_arc_get_rotation,
  Xila_graphics_call_arc_get_knob_offset,
  Xila_graphics_call_arc_align_obj_to_angle,
  Xila_graphics_call_arc_rotate_obj_to_angle,
  Xila_graphics_call_buttonmatrix_create,
  Xila_graphics_call_buttonmatrix_set_map,
  Xila_graphics_call_buttonmatrix_set_ctrl_map,
  Xila_graphics_call_buttonmatrix_set_selected_button,
  Xila_graphics_call_buttonmatrix_set_button_ctrl,
  Xila_graphics_call_buttonmatrix_clear_button_ctrl,
  Xila_graphics_call_buttonmatrix_set_button_ctrl_all,
  Xila_graphics_call_buttonmatrix_clear_button_ctrl_all,
  Xila_graphics_call_buttonmatrix_set_button_width,
  Xila_graphics_call_buttonmatrix_set_one_checked,
  Xila_graphics_call_buttonmatrix_get_map,
  Xila_graphics_call_buttonmatrix_get_selected_button,
  Xila_graphics_call_buttonmatrix_get_button_text,
  Xila_graphics_call_buttonmatrix_has_button_ctrl,
  Xila_graphics_call_buttonmatrix_get_one_checked,
  Xila_graphics_call_calendar_create,
  Xila_graphics_call_calendar_set_today_date,
  Xila_graphics_call_calendar_set_showed_date,
  Xila_graphics_call_calendar_set_highlighted_dates,
  Xila_graphics_call_calendar_set_day_names,
  Xila_graphics_call_calendar_get_btnmatrix,
  Xila_graphics_call_calendar_get_today_date,
  Xila_graphics_call_calendar_get_showed_date,
  Xila_graphics_call_calendar_get_highlighted_dates,
  Xila_graphics_call_calendar_get_highlighted_dates_num,
  Xila_graphics_call_calendar_get_pressed_date,
  Xila_graphics_call_calendar_header_arrow_create,
  Xila_graphics_call_calendar_header_dropdown_create,
  Xila_graphics_call_calendar_header_dropdown_set_year_list,
  Xila_graphics_call_chart_create,
  Xila_graphics_call_chart_set_type,
  Xila_graphics_call_chart_set_point_count,
  Xila_graphics_call_chart_set_range,
  Xila_graphics_call_chart_set_update_mode,
  Xila_graphics_call_chart_set_div_line_count,
  Xila_graphics_call_chart_get_type,
  Xila_graphics_call_chart_get_point_count,
  Xila_graphics_call_chart_get_x_start_point,
  Xila_graphics_call_chart_get_point_pos_by_id,
  Xila_graphics_call_chart_refresh,
  Xila_graphics_call_chart_add_series,
  Xila_graphics_call_chart_remove_series,
  Xila_graphics_call_chart_hide_series,
  Xila_graphics_call_chart_set_series_color,
  Xila_graphics_call_chart_get_series_color,
  Xila_graphics_call_chart_set_x_start_point,
  Xila_graphics_call_chart_get_series_next,
  Xila_graphics_call_chart_add_cursor,
  Xila_graphics_call_chart_set_cursor_pos,
  Xila_graphics_call_chart_set_cursor_point,
  Xila_graphics_call_chart_get_cursor_point,
  Xila_graphics_call_chart_set_all_value,
  Xila_graphics_call_chart_set_next_value,
  Xila_graphics_call_chart_set_next_value2,
  Xila_graphics_call_chart_set_value_by_id,
  Xila_graphics_call_chart_set_value_by_id2,
  Xila_graphics_call_chart_set_ext_y_array,
  Xila_graphics_call_chart_set_ext_x_array,
  Xila_graphics_call_chart_get_y_array,
  Xila_graphics_call_chart_get_x_array,
  Xila_graphics_call_chart_get_pressed_point,
  Xila_graphics_call_chart_get_first_point_center_offset,
  Xila_graphics_call_checkbox_create,
  Xila_graphics_call_checkbox_set_text,
  Xila_graphics_call_checkbox_set_text_static,
  Xila_graphics_call_checkbox_get_text,
  Xila_graphics_call_dropdown_create,
  Xila_graphics_call_dropdown_set_text,
  Xila_graphics_call_dropdown_set_options,
  Xila_graphics_call_dropdown_set_options_static,
  Xila_graphics_call_dropdown_add_option,
  Xila_graphics_call_dropdown_clear_options,
  Xila_graphics_call_dropdown_set_selected,
  Xila_graphics_call_dropdown_set_dir,
  Xila_graphics_call_dropdown_set_symbol,
  Xila_graphics_call_dropdown_set_selected_highlight,
  Xila_graphics_call_dropdown_get_list,
  Xila_graphics_call_dropdown_get_text,
  Xila_graphics_call_dropdown_get_options,
  Xila_graphics_call_dropdown_get_selected,
  Xila_graphics_call_dropdown_get_option_count,
  Xila_graphics_call_dropdown_get_selected_str,
  Xila_graphics_call_dropdown_get_option_index,
  Xila_graphics_call_dropdown_get_symbol,
  Xila_graphics_call_dropdown_get_selected_highlight,
  Xila_graphics_call_dropdown_get_dir,
  Xila_graphics_call_dropdown_open,
  Xila_graphics_call_dropdown_close,
  Xila_graphics_call_dropdown_is_open,
  Xila_graphics_call_led_create,
  Xila_graphics_call_led_set_color,
  Xila_graphics_call_led_set_brightness,
  Xila_graphics_call_led_on,
  Xila_graphics_call_led_off,
  Xila_graphics_call_led_toggle,
  Xila_graphics_call_led_get_brightness,
  Xila_graphics_call_line_create,
  Xila_graphics_call_line_set_points,
  Xila_graphics_call_line_set_points_mutable,
  Xila_graphics_call_line_set_y_invert,
  Xila_graphics_call_line_get_points,
  Xila_graphics_call_line_get_point_count,
  Xila_graphics_call_line_is_point_array_mutable,
  Xila_graphics_call_line_get_points_mutable,
  Xila_graphics_call_line_get_y_invert,
  Xila_graphics_call_menu_create,
  Xila_graphics_call_menu_page_create,
  Xila_graphics_call_menu_cont_create,
  Xila_graphics_call_menu_section_create,
  Xila_graphics_call_menu_separator_create,
  Xila_graphics_call_menu_set_page,
  Xila_graphics_call_menu_set_page_title,
  Xila_graphics_call_menu_set_page_title_static,
  Xila_graphics_call_menu_set_sidebar_page,
  Xila_graphics_call_menu_set_mode_header,
  Xila_graphics_call_menu_set_mode_root_back_button,
  Xila_graphics_call_menu_set_load_page_event,
  Xila_graphics_call_menu_get_cur_main_page,
  Xila_graphics_call_menu_get_cur_sidebar_page,
  Xila_graphics_call_menu_get_main_header,
  Xila_graphics_call_menu_get_main_header_back_button,
  Xila_graphics_call_menu_get_sidebar_header,
  Xila_graphics_call_menu_get_sidebar_header_back_button,
  Xila_graphics_call_menu_back_button_is_root,
  Xila_graphics_call_menu_clear_history,
  Xila_graphics_call_msgbox_create,
  Xila_graphics_call_msgbox_add_title,
  Xila_graphics_call_msgbox_add_header_button,
  Xila_graphics_call_msgbox_add_text,
  Xila_graphics_call_msgbox_add_footer_button,
  Xila_graphics_call_msgbox_add_close_button,
  Xila_graphics_call_msgbox_get_header,
  Xila_graphics_call_msgbox_get_footer,
  Xila_graphics_call_msgbox_get_content,
  Xila_graphics_call_msgbox_get_title,
  Xila_graphics_call_msgbox_close,
  Xila_graphics_call_msgbox_close_async,
  Xila_graphics_call_roller_create,
  Xila_graphics_call_roller_set_options,
  Xila_graphics_call_roller_set_selected,
  Xila_graphics_call_roller_set_visible_row_count,
  Xila_graphics_call_roller_get_selected,
  Xila_graphics_call_roller_get_selected_str,
  Xila_graphics_call_roller_get_options,
  Xila_graphics_call_roller_get_option_count,
  Xila_graphics_call_scale_create,
  Xila_graphics_call_scale_set_mode,
  Xila_graphics_call_scale_set_total_tick_count,
  Xila_graphics_call_scale_set_major_tick_every,
  Xila_graphics_call_scale_set_label_show,
  Xila_graphics_call_scale_set_range,
  Xila_graphics_call_scale_set_angle_range,
  Xila_graphics_call_scale_set_rotation,
  Xila_graphics_call_scale_set_line_needle_value,
  Xila_graphics_call_scale_set_image_needle_value,
  Xila_graphics_call_scale_set_text_src,
  Xila_graphics_call_scale_set_post_draw,
  Xila_graphics_call_scale_set_draw_ticks_on_top,
  Xila_graphics_call_scale_add_section,
  Xila_graphics_call_scale_section_set_range,
  Xila_graphics_call_scale_section_set_style,
  Xila_graphics_call_scale_get_mode,
  Xila_graphics_call_scale_get_total_tick_count,
  Xila_graphics_call_scale_get_major_tick_every,
  Xila_graphics_call_scale_get_label_show,
  Xila_graphics_call_scale_get_angle_range,
  Xila_graphics_call_scale_get_range_min_value,
  Xila_graphics_call_scale_get_range_max_value,
  Xila_graphics_call_slider_create,
  Xila_graphics_call_slider_set_value,
  Xila_graphics_call_slider_set_left_value,
  Xila_graphics_call_slider_set_range,
  Xila_graphics_call_slider_set_mode,
  Xila_graphics_call_slider_get_value,
  Xila_graphics_call_slider_get_left_value,
  Xila_graphics_call_slider_get_min_value,
  Xila_graphics_call_slider_get_max_value,
  Xila_graphics_call_slider_is_dragged,
  Xila_graphics_call_slider_get_mode,
  Xila_graphics_call_slider_is_symmetrical,
  Xila_graphics_call_span_stack_init,
  Xila_graphics_call_span_stack_deinit,
  Xila_graphics_call_spangroup_create,
  Xila_graphics_call_spangroup_new_span,
  Xila_graphics_call_spangroup_delete_span,
  Xila_graphics_call_span_set_text,
  Xila_graphics_call_span_set_text_static,
  Xila_graphics_call_spangroup_set_align,
  Xila_graphics_call_spangroup_set_overflow,
  Xila_graphics_call_spangroup_set_indent,
  Xila_graphics_call_spangroup_set_mode,
  Xila_graphics_call_spangroup_set_max_lines,
  Xila_graphics_call_span_get_style,
  Xila_graphics_call_spangroup_get_child,
  Xila_graphics_call_spangroup_get_span_count,
  Xila_graphics_call_spangroup_get_align,
  Xila_graphics_call_spangroup_get_overflow,
  Xila_graphics_call_spangroup_get_indent,
  Xila_graphics_call_spangroup_get_mode,
  Xila_graphics_call_spangroup_get_max_lines,
  Xila_graphics_call_spangroup_get_max_line_height,
  Xila_graphics_call_spangroup_get_expand_width,
  Xila_graphics_call_spangroup_get_expand_height,
  Xila_graphics_call_spangroup_refr_mode,
  Xila_graphics_call_textarea_create,
  Xila_graphics_call_textarea_add_char,
  Xila_graphics_call_textarea_add_text,
  Xila_graphics_call_textarea_delete_char,
  Xila_graphics_call_textarea_delete_char_forward,
  Xila_graphics_call_textarea_set_text,
  Xila_graphics_call_textarea_set_placeholder_text,
  Xila_graphics_call_textarea_set_cursor_pos,
  Xila_graphics_call_textarea_set_cursor_click_pos,
  Xila_graphics_call_textarea_set_password_mode,
  Xila_graphics_call_textarea_set_password_bullet,
  Xila_graphics_call_textarea_set_one_line,
  Xila_graphics_call_textarea_set_accepted_chars,
  Xila_graphics_call_textarea_set_max_length,
  Xila_graphics_call_textarea_set_insert_replace,
  Xila_graphics_call_textarea_set_text_selection,
  Xila_graphics_call_textarea_set_password_show_time,
  Xila_graphics_call_textarea_set_align,
  Xila_graphics_call_textarea_get_text,
  Xila_graphics_call_textarea_get_placeholder_text,
  Xila_graphics_call_textarea_get_label,
  Xila_graphics_call_textarea_get_cursor_pos,
  Xila_graphics_call_textarea_get_cursor_click_pos,
  Xila_graphics_call_textarea_get_password_mode,
  Xila_graphics_call_textarea_get_password_bullet,
  Xila_graphics_call_textarea_get_one_line,
  Xila_graphics_call_textarea_get_accepted_chars,
  Xila_graphics_call_textarea_get_max_length,
  Xila_graphics_call_textarea_text_is_selected,
  Xila_graphics_call_textarea_get_text_selection,
  Xila_graphics_call_textarea_get_password_show_time,
  Xila_graphics_call_textarea_get_current_char,
  Xila_graphics_call_textarea_clear_selection,
  Xila_graphics_call_textarea_cursor_right,
  Xila_graphics_call_textarea_cursor_left,
  Xila_graphics_call_textarea_cursor_down,
  Xila_graphics_call_textarea_cursor_up,
  Xila_graphics_call_spinbox_create,
  Xila_graphics_call_spinbox_set_value,
  Xila_graphics_call_spinbox_set_rollover,
  Xila_graphics_call_spinbox_set_digit_format,
  Xila_graphics_call_spinbox_set_step,
  Xila_graphics_call_spinbox_set_range,
  Xila_graphics_call_spinbox_set_cursor_pos,
  Xila_graphics_call_spinbox_set_digit_step_direction,
  Xila_graphics_call_spinbox_get_rollover,
  Xila_graphics_call_spinbox_get_value,
  Xila_graphics_call_spinbox_get_step,
  Xila_graphics_call_spinbox_step_next,
  Xila_graphics_call_spinbox_step_prev,
  Xila_graphics_call_spinbox_increment,
  Xila_graphics_call_spinbox_decrement,
  Xila_graphics_call_table_create,
  Xila_graphics_call_table_set_cell_value,
  Xila_graphics_call_table_set_cell_value_fmt,
  Xila_graphics_call_table_set_row_count,
  Xila_graphics_call_table_set_column_count,
  Xila_graphics_call_table_set_column_width,
  Xila_graphics_call_table_add_cell_ctrl,
  Xila_graphics_call_table_clear_cell_ctrl,
  Xila_graphics_call_table_set_cell_user_data,
  Xila_graphics_call_table_set_selected_cell,
  Xila_graphics_call_table_get_cell_value,
  Xila_graphics_call_table_get_row_count,
  Xila_graphics_call_table_get_column_count,
  Xila_graphics_call_table_get_column_width,
  Xila_graphics_call_table_has_cell_ctrl,
  Xila_graphics_call_table_get_selected_cell,
  Xila_graphics_call_table_get_cell_user_data,
  Xila_graphics_call_tabview_create,
  Xila_graphics_call_tabview_add_tab,
  Xila_graphics_call_tabview_rename_tab,
  Xila_graphics_call_tabview_set_active,
  Xila_graphics_call_tabview_set_tab_bar_position,
  Xila_graphics_call_tabview_set_tab_bar_size,
  Xila_graphics_call_tabview_get_tab_count,
  Xila_graphics_call_tabview_get_tab_active,
  Xila_graphics_call_tabview_get_content,
  Xila_graphics_call_tabview_get_tab_bar,
  Xila_graphics_call_tileview_create,
  Xila_graphics_call_tileview_add_tile,
  Xila_graphics_call_tileview_set_tile,
  Xila_graphics_call_tileview_set_tile_by_index,
  Xila_graphics_call_tileview_get_tile_active,
  Xila_graphics_call_subject_init_int,
  Xila_graphics_call_subject_set_int,
  Xila_graphics_call_subject_get_int,
  Xila_graphics_call_subject_get_previous_int,
  Xila_graphics_call_subject_init_string,
  Xila_graphics_call_subject_copy_string,
  Xila_graphics_call_subject_get_string,
  Xila_graphics_call_subject_get_previous_string,
  Xila_graphics_call_subject_init_pointer,
  Xila_graphics_call_subject_set_pointer,
  Xila_graphics_call_subject_get_pointer,
  Xila_graphics_call_subject_get_previous_pointer,
  Xila_graphics_call_subject_init_color,
  Xila_graphics_call_subject_set_color,
  Xila_graphics_call_subject_get_color,
  Xila_graphics_call_subject_get_previous_color,
  Xila_graphics_call_subject_init_group,
  Xila_graphics_call_subject_deinit,
  Xila_graphics_call_subject_get_group_element,
  Xila_graphics_call_subject_add_observer,
  Xila_graphics_call_subject_add_observer_obj,
  Xila_graphics_call_subject_add_observer_with_target,
  Xila_graphics_call_obj_remove_from_subject,
  Xila_graphics_call_subject_notify,
  Xila_graphics_call_obj_bind_flag_if_eq,
  Xila_graphics_call_obj_bind_flag_if_not_eq,
  Xila_graphics_call_obj_bind_state_if_eq,
  Xila_graphics_call_obj_bind_state_if_not_eq,
  Xila_graphics_call_obj_bind_checked,
  Xila_graphics_call_arc_bind_value,
  Xila_graphics_call_slider_bind_value,
  Xila_graphics_call_roller_bind_value,
  Xila_graphics_call_dropdown_bind_value
} Function_calls_type;
extern void Xila_graphics_call(Function_calls_type Function_call,
                               size_t Argument_0, size_t Argument_1,
                               size_t Argument_2, size_t Argument_3,
                               size_t Argument_4, size_t Argument_5,
                               size_t Argument_6, uint8_t Arguments_cout,
                               void *Result);
void Xila_graphics_point_transform(Xila_graphics_point_t *point, int32_t angle,
                                   int32_t scale_x, int32_t scale_y,
                                   const Xila_graphics_point_t *pivot,
                                   bool zoom_first) {
  Xila_graphics_call(Xila_graphics_call_point_transform, point, angle, scale_x,
                     scale_y, pivot, zoom_first, 0, 6, NULL);
}
void Xila_graphics_point_array_transform(Xila_graphics_point_t *points,
                                         size_t count, int32_t angle,
                                         int32_t scale_x, int32_t scale_y,
                                         const Xila_graphics_point_t *pivot,
                                         bool zoom_first) {
  Xila_graphics_call(Xila_graphics_call_point_array_transform, points, count,
                     angle, scale_x, scale_y, pivot, zoom_first, 7, NULL);
}
Xila_graphics_point_t
Xila_graphics_point_from_precise(const Xila_graphics_point_precise_t *p) {
  Xila_graphics_call(Xila_graphics_call_point_from_precise, p, 0, 0, 0, 0, 0, 0,
                     1, NULL);
}
Xila_graphics_point_precise_t
Xila_graphics_point_to_precise(const Xila_graphics_point_t *p) {
  Xila_graphics_call(Xila_graphics_call_point_to_precise, p, 0, 0, 0, 0, 0, 0,
                     1, NULL);
}
void Xila_graphics_point_set(Xila_graphics_point_t *p, int32_t x, int32_t y) {
  Xila_graphics_call(Xila_graphics_call_point_set, p, x, y, 0, 0, 0, 0, 3,
                     NULL);
}
void Xila_graphics_point_precise_set(Xila_graphics_point_precise_t *p,
                                     Xila_graphics_value_precise_t x,
                                     Xila_graphics_value_precise_t y) {
  Xila_graphics_call(Xila_graphics_call_point_precise_set, p, x, y, 0, 0, 0, 0,
                     3, NULL);
}
void Xila_graphics_point_swap(Xila_graphics_point_t *p1,
                              Xila_graphics_point_t *p2) {
  Xila_graphics_call(Xila_graphics_call_point_swap, p1, p2, 0, 0, 0, 0, 0, 2,
                     NULL);
}
void Xila_graphics_point_precise_swap(Xila_graphics_point_precise_t *p1,
                                      Xila_graphics_point_precise_t *p2) {
  Xila_graphics_call(Xila_graphics_call_point_precise_swap, p1, p2, 0, 0, 0, 0,
                     0, 2, NULL);
}
uint8_t Xila_graphics_color_format_get_bpp(Xila_graphics_color_format_t cf) {
  Xila_graphics_call(Xila_graphics_call_color_format_get_bpp, cf, 0, 0, 0, 0, 0,
                     0, 1, NULL);
}
uint8_t Xila_graphics_color_format_get_size(Xila_graphics_color_format_t cf) {
  Xila_graphics_call(Xila_graphics_call_color_format_get_size, cf, 0, 0, 0, 0,
                     0, 0, 1, NULL);
}
bool Xila_graphics_color_format_has_alpha(Xila_graphics_color_format_t src_cf) {
  Xila_graphics_call(Xila_graphics_call_color_format_has_alpha, src_cf, 0, 0, 0,
                     0, 0, 0, 1, NULL);
}
Xila_graphics_color32_t Xila_graphics_color_to_32(Xila_graphics_color_t color,
                                                  Xila_graphics_opa_t opa) {
  Xila_graphics_call(Xila_graphics_call_color_to_32, *(size_t *)&color, opa, 0,
                     0, 0, 0, 0, 2, NULL);
}
uint32_t Xila_graphics_color_to_int(Xila_graphics_color_t c) {
  Xila_graphics_call(Xila_graphics_call_color_to_int, *(size_t *)&c, 0, 0, 0, 0,
                     0, 0, 1, NULL);
}
bool Xila_graphics_color_eq(Xila_graphics_color_t c1,
                            Xila_graphics_color_t c2) {
  Xila_graphics_call(Xila_graphics_call_color_eq, *(size_t *)&c1,
                     *(size_t *)&c2, 0, 0, 0, 0, 0, 2, NULL);
}
bool Xila_graphics_color32_eq(Xila_graphics_color32_t c1,
                              Xila_graphics_color32_t c2) {
  Xila_graphics_call(Xila_graphics_call_color32_eq, *(size_t *)&c1,
                     *(size_t *)&c2, 0, 0, 0, 0, 0, 2, NULL);
}
Xila_graphics_color_t Xila_graphics_color_hex(uint32_t c) {
  Xila_graphics_call(Xila_graphics_call_color_hex, c, 0, 0, 0, 0, 0, 0, 1,
                     NULL);
}
Xila_graphics_color_t Xila_graphics_color_make(uint8_t r, uint8_t g,
                                               uint8_t b) {
  Xila_graphics_call(Xila_graphics_call_color_make, r, g, b, 0, 0, 0, 0, 3,
                     NULL);
}
Xila_graphics_color32_t Xila_graphics_color32_make(uint8_t r, uint8_t g,
                                                   uint8_t b, uint8_t a) {
  Xila_graphics_call(Xila_graphics_call_color32_make, r, g, b, a, 0, 0, 0, 4,
                     NULL);
}
Xila_graphics_color_t Xila_graphics_color_hex3(uint32_t c) {
  Xila_graphics_call(Xila_graphics_call_color_hex3, c, 0, 0, 0, 0, 0, 0, 1,
                     NULL);
}
uint16_t Xila_graphics_color_to_u16(Xila_graphics_color_t color) {
  Xila_graphics_call(Xila_graphics_call_color_to_u16, *(size_t *)&color, 0, 0,
                     0, 0, 0, 0, 1, NULL);
}
uint32_t Xila_graphics_color_to_u32(Xila_graphics_color_t color) {
  Xila_graphics_call(Xila_graphics_call_color_to_u32, *(size_t *)&color, 0, 0,
                     0, 0, 0, 0, 1, NULL);
}
uint16_t Xila_graphics_color_16_16_mix(uint16_t c1, uint16_t c2, uint8_t mix) {
  Xila_graphics_call(Xila_graphics_call_color_16_16_mix, c1, c2, mix, 0, 0, 0,
                     0, 3, NULL);
}
Xila_graphics_color_t Xila_graphics_color_lighten(Xila_graphics_color_t c,
                                                  Xila_graphics_opa_t lvl) {
  Xila_graphics_call(Xila_graphics_call_color_lighten, *(size_t *)&c, lvl, 0, 0,
                     0, 0, 0, 2, NULL);
}
Xila_graphics_color_t Xila_graphics_color_darken(Xila_graphics_color_t c,
                                                 Xila_graphics_opa_t lvl) {
  Xila_graphics_call(Xila_graphics_call_color_darken, *(size_t *)&c, lvl, 0, 0,
                     0, 0, 0, 2, NULL);
}
Xila_graphics_color_t Xila_graphics_color_hsv_to_rgb(uint16_t h, uint8_t s,
                                                     uint8_t v) {
  Xila_graphics_call(Xila_graphics_call_color_hsv_to_rgb, h, s, v, 0, 0, 0, 0,
                     3, NULL);
}
Xila_graphics_color_hsv_t Xila_graphics_color_rgb_to_hsv(uint8_t r8, uint8_t g8,
                                                         uint8_t b8) {
  Xila_graphics_call(Xila_graphics_call_color_rgb_to_hsv, r8, g8, b8, 0, 0, 0,
                     0, 3, NULL);
}
Xila_graphics_color_hsv_t
Xila_graphics_color_to_hsv(Xila_graphics_color_t color) {
  Xila_graphics_call(Xila_graphics_call_color_to_hsv, *(size_t *)&color, 0, 0,
                     0, 0, 0, 0, 1, NULL);
}
Xila_graphics_color_t Xila_graphics_color_white() {
  Xila_graphics_call(Xila_graphics_call_color_white, 0, 0, 0, 0, 0, 0, 0, 0,
                     NULL);
}
Xila_graphics_color_t Xila_graphics_color_black() {
  Xila_graphics_call(Xila_graphics_call_color_black, 0, 0, 0, 0, 0, 0, 0, 0,
                     NULL);
}
void Xila_graphics_color_premultiply(Xila_graphics_color32_t *c) {
  Xila_graphics_call(Xila_graphics_call_color_premultiply, c, 0, 0, 0, 0, 0, 0,
                     1, NULL);
}
void Xila_graphics_color16_premultiply(Xila_graphics_color16_t *c,
                                       Xila_graphics_opa_t a) {
  Xila_graphics_call(Xila_graphics_call_color16_premultiply, c, a, 0, 0, 0, 0,
                     0, 2, NULL);
}
uint8_t Xila_graphics_color_luminance(Xila_graphics_color_t c) {
  Xila_graphics_call(Xila_graphics_call_color_luminance, *(size_t *)&c, 0, 0, 0,
                     0, 0, 0, 1, NULL);
}
uint8_t Xila_graphics_color16_luminance(Xila_graphics_color16_t c) {
  Xila_graphics_call(Xila_graphics_call_color16_luminance, *(size_t *)&c, 0, 0,
                     0, 0, 0, 0, 1, NULL);
}
uint8_t Xila_graphics_color24_luminance(const uint8_t *c) {
  Xila_graphics_call(Xila_graphics_call_color24_luminance, c, 0, 0, 0, 0, 0, 0,
                     1, NULL);
}
uint8_t Xila_graphics_color32_luminance(Xila_graphics_color32_t c) {
  Xila_graphics_call(Xila_graphics_call_color32_luminance, *(size_t *)&c, 0, 0,
                     0, 0, 0, 0, 1, NULL);
}
Xila_graphics_color_t Xila_graphics_color_mix(Xila_graphics_color_t c1,
                                              Xila_graphics_color_t c2,
                                              uint8_t mix) {
  Xila_graphics_call(Xila_graphics_call_color_mix, *(size_t *)&c1,
                     *(size_t *)&c2, mix, 0, 0, 0, 0, 3, NULL);
}
Xila_graphics_color32_t Xila_graphics_color_mix32(Xila_graphics_color32_t fg,
                                                  Xila_graphics_color32_t bg) {
  Xila_graphics_call(Xila_graphics_call_color_mix32, *(size_t *)&fg,
                     *(size_t *)&bg, 0, 0, 0, 0, 0, 2, NULL);
}
uint8_t Xila_graphics_color_brightness(Xila_graphics_color_t c) {
  Xila_graphics_call(Xila_graphics_call_color_brightness, *(size_t *)&c, 0, 0,
                     0, 0, 0, 0, 1, NULL);
}
void Xila_graphics_color_filter_dsc_init(Xila_graphics_color_filter_dsc_t *dsc,
                                         Xila_graphics_color_filter_cb_t cb) {
  Xila_graphics_call(Xila_graphics_call_color_filter_dsc_init, dsc, cb, 0, 0, 0,
                     0, 0, 2, NULL);
}
void Xila_graphics_obj_set_flex_flow(Xila_graphics_obj_t *obj,
                                     Xila_graphics_flex_flow_t flow) {
  Xila_graphics_call(Xila_graphics_call_obj_set_flex_flow, obj, flow, 0, 0, 0,
                     0, 0, 2, NULL);
}
void Xila_graphics_obj_set_flex_align(
    Xila_graphics_obj_t *obj, Xila_graphics_flex_align_t main_place,
    Xila_graphics_flex_align_t cross_place,
    Xila_graphics_flex_align_t track_cross_place) {
  Xila_graphics_call(Xila_graphics_call_obj_set_flex_align, obj, main_place,
                     cross_place, track_cross_place, 0, 0, 0, 4, NULL);
}
void Xila_graphics_obj_set_flex_grow(Xila_graphics_obj_t *obj, uint8_t grow) {
  Xila_graphics_call(Xila_graphics_call_obj_set_flex_grow, obj, grow, 0, 0, 0,
                     0, 0, 2, NULL);
}
void Xila_graphics_obj_set_grid_dsc_array(Xila_graphics_obj_t *obj,
                                          const int32_t *col_dsc,
                                          const int32_t *row_dsc) {
  Xila_graphics_call(Xila_graphics_call_obj_set_grid_dsc_array, obj, col_dsc,
                     row_dsc, 0, 0, 0, 0, 3, NULL);
}
void Xila_graphics_obj_set_grid_align(Xila_graphics_obj_t *obj,
                                      Xila_graphics_grid_align_t column_align,
                                      Xila_graphics_grid_align_t row_align) {
  Xila_graphics_call(Xila_graphics_call_obj_set_grid_align, obj, column_align,
                     row_align, 0, 0, 0, 0, 3, NULL);
}
void Xila_graphics_obj_set_grid_cell(Xila_graphics_obj_t *obj,
                                     Xila_graphics_grid_align_t column_align,
                                     int32_t col_pos, int32_t col_span,
                                     Xila_graphics_grid_align_t row_align,
                                     int32_t row_pos, int32_t row_span) {
  Xila_graphics_call(Xila_graphics_call_obj_set_grid_cell, obj, column_align,
                     col_pos, col_span, row_align, row_pos, row_span, 7, NULL);
}
void Xila_graphics_style_init(Xila_graphics_style_t *style) {
  Xila_graphics_call(Xila_graphics_call_style_init, style, 0, 0, 0, 0, 0, 0, 1,
                     NULL);
}
void Xila_graphics_style_reset(Xila_graphics_style_t *style) {
  Xila_graphics_call(Xila_graphics_call_style_reset, style, 0, 0, 0, 0, 0, 0, 1,
                     NULL);
}
Xila_graphics_style_prop_t Xila_graphics_style_register_prop(uint8_t flag) {
  Xila_graphics_call(Xila_graphics_call_style_register_prop, flag, 0, 0, 0, 0,
                     0, 0, 1, NULL);
}
Xila_graphics_style_prop_t Xila_graphics_style_get_num_custom_props() {
  Xila_graphics_call(Xila_graphics_call_style_get_num_custom_props, 0, 0, 0, 0,
                     0, 0, 0, 0, NULL);
}
bool Xila_graphics_style_remove_prop(Xila_graphics_style_t *style,
                                     Xila_graphics_style_prop_t prop) {
  Xila_graphics_call(Xila_graphics_call_style_remove_prop, style, prop, 0, 0, 0,
                     0, 0, 2, NULL);
}
void Xila_graphics_style_set_prop(Xila_graphics_style_t *style,
                                  Xila_graphics_style_prop_t prop,
                                  Xila_graphics_style_value_t value) {
  Xila_graphics_call(Xila_graphics_call_style_set_prop, style, prop,
                     *(size_t *)&value, 0, 0, 0, 0, 3, NULL);
}
Xila_graphics_style_res_t
Xila_graphics_style_get_prop(const Xila_graphics_style_t *style,
                             Xila_graphics_style_prop_t prop,
                             Xila_graphics_style_value_t *value) {
  Xila_graphics_call(Xila_graphics_call_style_get_prop, style, prop, value, 0,
                     0, 0, 0, 3, NULL);
}
void Xila_graphics_style_transition_dsc_init(
    Xila_graphics_style_transition_dsc_t *tr,
    const Xila_graphics_style_prop_t *props,
    Xila_graphics_anim_path_cb_t path_cb, uint32_t time, uint32_t delay,
    char *user_data) {
  Xila_graphics_call(Xila_graphics_call_style_transition_dsc_init, tr, props,
                     path_cb, time, delay, user_data, 0, 6, NULL);
}
Xila_graphics_style_value_t
Xila_graphics_style_prop_get_default(Xila_graphics_style_prop_t prop) {
  Xila_graphics_call(Xila_graphics_call_style_prop_get_default, prop, 0, 0, 0,
                     0, 0, 0, 1, NULL);
}
bool Xila_graphics_style_is_empty(const Xila_graphics_style_t *style) {
  Xila_graphics_call(Xila_graphics_call_style_is_empty, style, 0, 0, 0, 0, 0, 0,
                     1, NULL);
}
uint8_t Xila_graphics_style_prop_lookup_flags(Xila_graphics_style_prop_t prop) {
  Xila_graphics_call(Xila_graphics_call_style_prop_lookup_flags, prop, 0, 0, 0,
                     0, 0, 0, 1, NULL);
}
void Xila_graphics_style_set_width(Xila_graphics_style_t *style,
                                   int32_t value) {
  Xila_graphics_call(Xila_graphics_call_style_set_width, style, value, 0, 0, 0,
                     0, 0, 2, NULL);
}
void Xila_graphics_style_set_min_width(Xila_graphics_style_t *style,
                                       int32_t value) {
  Xila_graphics_call(Xila_graphics_call_style_set_min_width, style, value, 0, 0,
                     0, 0, 0, 2, NULL);
}
void Xila_graphics_style_set_max_width(Xila_graphics_style_t *style,
                                       int32_t value) {
  Xila_graphics_call(Xila_graphics_call_style_set_max_width, style, value, 0, 0,
                     0, 0, 0, 2, NULL);
}
void Xila_graphics_style_set_height(Xila_graphics_style_t *style,
                                    int32_t value) {
  Xila_graphics_call(Xila_graphics_call_style_set_height, style, value, 0, 0, 0,
                     0, 0, 2, NULL);
}
void Xila_graphics_style_set_min_height(Xila_graphics_style_t *style,
                                        int32_t value) {
  Xila_graphics_call(Xila_graphics_call_style_set_min_height, style, value, 0,
                     0, 0, 0, 0, 2, NULL);
}
void Xila_graphics_style_set_max_height(Xila_graphics_style_t *style,
                                        int32_t value) {
  Xila_graphics_call(Xila_graphics_call_style_set_max_height, style, value, 0,
                     0, 0, 0, 0, 2, NULL);
}
void Xila_graphics_style_set_length(Xila_graphics_style_t *style,
                                    int32_t value) {
  Xila_graphics_call(Xila_graphics_call_style_set_length, style, value, 0, 0, 0,
                     0, 0, 2, NULL);
}
void Xila_graphics_style_set_x(Xila_graphics_style_t *style, int32_t value) {
  Xila_graphics_call(Xila_graphics_call_style_set_x, style, value, 0, 0, 0, 0,
                     0, 2, NULL);
}
void Xila_graphics_style_set_y(Xila_graphics_style_t *style, int32_t value) {
  Xila_graphics_call(Xila_graphics_call_style_set_y, style, value, 0, 0, 0, 0,
                     0, 2, NULL);
}
void Xila_graphics_style_set_align(Xila_graphics_style_t *style,
                                   Xila_graphics_align_t value) {
  Xila_graphics_call(Xila_graphics_call_style_set_align, style, value, 0, 0, 0,
                     0, 0, 2, NULL);
}
void Xila_graphics_style_set_transform_width(Xila_graphics_style_t *style,
                                             int32_t value) {
  Xila_graphics_call(Xila_graphics_call_style_set_transform_width, style, value,
                     0, 0, 0, 0, 0, 2, NULL);
}
void Xila_graphics_style_set_transform_height(Xila_graphics_style_t *style,
                                              int32_t value) {
  Xila_graphics_call(Xila_graphics_call_style_set_transform_height, style,
                     value, 0, 0, 0, 0, 0, 2, NULL);
}
void Xila_graphics_style_set_translate_x(Xila_graphics_style_t *style,
                                         int32_t value) {
  Xila_graphics_call(Xila_graphics_call_style_set_translate_x, style, value, 0,
                     0, 0, 0, 0, 2, NULL);
}
void Xila_graphics_style_set_translate_y(Xila_graphics_style_t *style,
                                         int32_t value) {
  Xila_graphics_call(Xila_graphics_call_style_set_translate_y, style, value, 0,
                     0, 0, 0, 0, 2, NULL);
}
void Xila_graphics_style_set_transform_scale_x(Xila_graphics_style_t *style,
                                               int32_t value) {
  Xila_graphics_call(Xila_graphics_call_style_set_transform_scale_x, style,
                     value, 0, 0, 0, 0, 0, 2, NULL);
}
void Xila_graphics_style_set_transform_scale_y(Xila_graphics_style_t *style,
                                               int32_t value) {
  Xila_graphics_call(Xila_graphics_call_style_set_transform_scale_y, style,
                     value, 0, 0, 0, 0, 0, 2, NULL);
}
void Xila_graphics_style_set_transform_rotation(Xila_graphics_style_t *style,
                                                int32_t value) {
  Xila_graphics_call(Xila_graphics_call_style_set_transform_rotation, style,
                     value, 0, 0, 0, 0, 0, 2, NULL);
}
void Xila_graphics_style_set_transform_pivot_x(Xila_graphics_style_t *style,
                                               int32_t value) {
  Xila_graphics_call(Xila_graphics_call_style_set_transform_pivot_x, style,
                     value, 0, 0, 0, 0, 0, 2, NULL);
}
void Xila_graphics_style_set_transform_pivot_y(Xila_graphics_style_t *style,
                                               int32_t value) {
  Xila_graphics_call(Xila_graphics_call_style_set_transform_pivot_y, style,
                     value, 0, 0, 0, 0, 0, 2, NULL);
}
void Xila_graphics_style_set_transform_skew_x(Xila_graphics_style_t *style,
                                              int32_t value) {
  Xila_graphics_call(Xila_graphics_call_style_set_transform_skew_x, style,
                     value, 0, 0, 0, 0, 0, 2, NULL);
}
void Xila_graphics_style_set_transform_skew_y(Xila_graphics_style_t *style,
                                              int32_t value) {
  Xila_graphics_call(Xila_graphics_call_style_set_transform_skew_y, style,
                     value, 0, 0, 0, 0, 0, 2, NULL);
}
void Xila_graphics_style_set_pad_top(Xila_graphics_style_t *style,
                                     int32_t value) {
  Xila_graphics_call(Xila_graphics_call_style_set_pad_top, style, value, 0, 0,
                     0, 0, 0, 2, NULL);
}
void Xila_graphics_style_set_pad_bottom(Xila_graphics_style_t *style,
                                        int32_t value) {
  Xila_graphics_call(Xila_graphics_call_style_set_pad_bottom, style, value, 0,
                     0, 0, 0, 0, 2, NULL);
}
void Xila_graphics_style_set_pad_left(Xila_graphics_style_t *style,
                                      int32_t value) {
  Xila_graphics_call(Xila_graphics_call_style_set_pad_left, style, value, 0, 0,
                     0, 0, 0, 2, NULL);
}
void Xila_graphics_style_set_pad_right(Xila_graphics_style_t *style,
                                       int32_t value) {
  Xila_graphics_call(Xila_graphics_call_style_set_pad_right, style, value, 0, 0,
                     0, 0, 0, 2, NULL);
}
void Xila_graphics_style_set_pad_row(Xila_graphics_style_t *style,
                                     int32_t value) {
  Xila_graphics_call(Xila_graphics_call_style_set_pad_row, style, value, 0, 0,
                     0, 0, 0, 2, NULL);
}
void Xila_graphics_style_set_pad_column(Xila_graphics_style_t *style,
                                        int32_t value) {
  Xila_graphics_call(Xila_graphics_call_style_set_pad_column, style, value, 0,
                     0, 0, 0, 0, 2, NULL);
}
void Xila_graphics_style_set_margin_top(Xila_graphics_style_t *style,
                                        int32_t value) {
  Xila_graphics_call(Xila_graphics_call_style_set_margin_top, style, value, 0,
                     0, 0, 0, 0, 2, NULL);
}
void Xila_graphics_style_set_margin_bottom(Xila_graphics_style_t *style,
                                           int32_t value) {
  Xila_graphics_call(Xila_graphics_call_style_set_margin_bottom, style, value,
                     0, 0, 0, 0, 0, 2, NULL);
}
void Xila_graphics_style_set_margin_left(Xila_graphics_style_t *style,
                                         int32_t value) {
  Xila_graphics_call(Xila_graphics_call_style_set_margin_left, style, value, 0,
                     0, 0, 0, 0, 2, NULL);
}
void Xila_graphics_style_set_margin_right(Xila_graphics_style_t *style,
                                          int32_t value) {
  Xila_graphics_call(Xila_graphics_call_style_set_margin_right, style, value, 0,
                     0, 0, 0, 0, 2, NULL);
}
void Xila_graphics_style_set_bg_color(Xila_graphics_style_t *style,
                                      Xila_graphics_color_t value) {
  Xila_graphics_call(Xila_graphics_call_style_set_bg_color, style,
                     *(size_t *)&value, 0, 0, 0, 0, 0, 2, NULL);
}
void Xila_graphics_style_set_bg_opa(Xila_graphics_style_t *style,
                                    Xila_graphics_opa_t value) {
  Xila_graphics_call(Xila_graphics_call_style_set_bg_opa, style, value, 0, 0, 0,
                     0, 0, 2, NULL);
}
void Xila_graphics_style_set_bg_grad_color(Xila_graphics_style_t *style,
                                           Xila_graphics_color_t value) {
  Xila_graphics_call(Xila_graphics_call_style_set_bg_grad_color, style,
                     *(size_t *)&value, 0, 0, 0, 0, 0, 2, NULL);
}
void Xila_graphics_style_set_bg_grad_dir(Xila_graphics_style_t *style,
                                         Xila_graphics_grad_dir_t value) {
  Xila_graphics_call(Xila_graphics_call_style_set_bg_grad_dir, style, value, 0,
                     0, 0, 0, 0, 2, NULL);
}
void Xila_graphics_style_set_bg_main_stop(Xila_graphics_style_t *style,
                                          int32_t value) {
  Xila_graphics_call(Xila_graphics_call_style_set_bg_main_stop, style, value, 0,
                     0, 0, 0, 0, 2, NULL);
}
void Xila_graphics_style_set_bg_grad_stop(Xila_graphics_style_t *style,
                                          int32_t value) {
  Xila_graphics_call(Xila_graphics_call_style_set_bg_grad_stop, style, value, 0,
                     0, 0, 0, 0, 2, NULL);
}
void Xila_graphics_style_set_bg_main_opa(Xila_graphics_style_t *style,
                                         Xila_graphics_opa_t value) {
  Xila_graphics_call(Xila_graphics_call_style_set_bg_main_opa, style, value, 0,
                     0, 0, 0, 0, 2, NULL);
}
void Xila_graphics_style_set_bg_grad_opa(Xila_graphics_style_t *style,
                                         Xila_graphics_opa_t value) {
  Xila_graphics_call(Xila_graphics_call_style_set_bg_grad_opa, style, value, 0,
                     0, 0, 0, 0, 2, NULL);
}
void Xila_graphics_style_set_bg_grad(Xila_graphics_style_t *style,
                                     const Xila_graphics_grad_dsc_t *value) {
  Xila_graphics_call(Xila_graphics_call_style_set_bg_grad, style, value, 0, 0,
                     0, 0, 0, 2, NULL);
}
void Xila_graphics_style_set_bg_image_src(Xila_graphics_style_t *style,
                                          const char *value) {
  Xila_graphics_call(Xila_graphics_call_style_set_bg_image_src, style, value, 0,
                     0, 0, 0, 0, 2, NULL);
}
void Xila_graphics_style_set_bg_image_opa(Xila_graphics_style_t *style,
                                          Xila_graphics_opa_t value) {
  Xila_graphics_call(Xila_graphics_call_style_set_bg_image_opa, style, value, 0,
                     0, 0, 0, 0, 2, NULL);
}
void Xila_graphics_style_set_bg_image_recolor(Xila_graphics_style_t *style,
                                              Xila_graphics_color_t value) {
  Xila_graphics_call(Xila_graphics_call_style_set_bg_image_recolor, style,
                     *(size_t *)&value, 0, 0, 0, 0, 0, 2, NULL);
}
void Xila_graphics_style_set_bg_image_recolor_opa(Xila_graphics_style_t *style,
                                                  Xila_graphics_opa_t value) {
  Xila_graphics_call(Xila_graphics_call_style_set_bg_image_recolor_opa, style,
                     value, 0, 0, 0, 0, 0, 2, NULL);
}
void Xila_graphics_style_set_bg_image_tiled(Xila_graphics_style_t *style,
                                            bool value) {
  Xila_graphics_call(Xila_graphics_call_style_set_bg_image_tiled, style, value,
                     0, 0, 0, 0, 0, 2, NULL);
}
void Xila_graphics_style_set_border_color(Xila_graphics_style_t *style,
                                          Xila_graphics_color_t value) {
  Xila_graphics_call(Xila_graphics_call_style_set_border_color, style,
                     *(size_t *)&value, 0, 0, 0, 0, 0, 2, NULL);
}
void Xila_graphics_style_set_border_opa(Xila_graphics_style_t *style,
                                        Xila_graphics_opa_t value) {
  Xila_graphics_call(Xila_graphics_call_style_set_border_opa, style, value, 0,
                     0, 0, 0, 0, 2, NULL);
}
void Xila_graphics_style_set_border_width(Xila_graphics_style_t *style,
                                          int32_t value) {
  Xila_graphics_call(Xila_graphics_call_style_set_border_width, style, value, 0,
                     0, 0, 0, 0, 2, NULL);
}
void Xila_graphics_style_set_border_side(Xila_graphics_style_t *style,
                                         Xila_graphics_border_side_t value) {
  Xila_graphics_call(Xila_graphics_call_style_set_border_side, style, value, 0,
                     0, 0, 0, 0, 2, NULL);
}
void Xila_graphics_style_set_border_post(Xila_graphics_style_t *style,
                                         bool value) {
  Xila_graphics_call(Xila_graphics_call_style_set_border_post, style, value, 0,
                     0, 0, 0, 0, 2, NULL);
}
void Xila_graphics_style_set_outline_width(Xila_graphics_style_t *style,
                                           int32_t value) {
  Xila_graphics_call(Xila_graphics_call_style_set_outline_width, style, value,
                     0, 0, 0, 0, 0, 2, NULL);
}
void Xila_graphics_style_set_outline_color(Xila_graphics_style_t *style,
                                           Xila_graphics_color_t value) {
  Xila_graphics_call(Xila_graphics_call_style_set_outline_color, style,
                     *(size_t *)&value, 0, 0, 0, 0, 0, 2, NULL);
}
void Xila_graphics_style_set_outline_opa(Xila_graphics_style_t *style,
                                         Xila_graphics_opa_t value) {
  Xila_graphics_call(Xila_graphics_call_style_set_outline_opa, style, value, 0,
                     0, 0, 0, 0, 2, NULL);
}
void Xila_graphics_style_set_outline_pad(Xila_graphics_style_t *style,
                                         int32_t value) {
  Xila_graphics_call(Xila_graphics_call_style_set_outline_pad, style, value, 0,
                     0, 0, 0, 0, 2, NULL);
}
void Xila_graphics_style_set_shadow_width(Xila_graphics_style_t *style,
                                          int32_t value) {
  Xila_graphics_call(Xila_graphics_call_style_set_shadow_width, style, value, 0,
                     0, 0, 0, 0, 2, NULL);
}
void Xila_graphics_style_set_shadow_offset_x(Xila_graphics_style_t *style,
                                             int32_t value) {
  Xila_graphics_call(Xila_graphics_call_style_set_shadow_offset_x, style, value,
                     0, 0, 0, 0, 0, 2, NULL);
}
void Xila_graphics_style_set_shadow_offset_y(Xila_graphics_style_t *style,
                                             int32_t value) {
  Xila_graphics_call(Xila_graphics_call_style_set_shadow_offset_y, style, value,
                     0, 0, 0, 0, 0, 2, NULL);
}
void Xila_graphics_style_set_shadow_spread(Xila_graphics_style_t *style,
                                           int32_t value) {
  Xila_graphics_call(Xila_graphics_call_style_set_shadow_spread, style, value,
                     0, 0, 0, 0, 0, 2, NULL);
}
void Xila_graphics_style_set_shadow_color(Xila_graphics_style_t *style,
                                          Xila_graphics_color_t value) {
  Xila_graphics_call(Xila_graphics_call_style_set_shadow_color, style,
                     *(size_t *)&value, 0, 0, 0, 0, 0, 2, NULL);
}
void Xila_graphics_style_set_shadow_opa(Xila_graphics_style_t *style,
                                        Xila_graphics_opa_t value) {
  Xila_graphics_call(Xila_graphics_call_style_set_shadow_opa, style, value, 0,
                     0, 0, 0, 0, 2, NULL);
}
void Xila_graphics_style_set_image_opa(Xila_graphics_style_t *style,
                                       Xila_graphics_opa_t value) {
  Xila_graphics_call(Xila_graphics_call_style_set_image_opa, style, value, 0, 0,
                     0, 0, 0, 2, NULL);
}
void Xila_graphics_style_set_image_recolor(Xila_graphics_style_t *style,
                                           Xila_graphics_color_t value) {
  Xila_graphics_call(Xila_graphics_call_style_set_image_recolor, style,
                     *(size_t *)&value, 0, 0, 0, 0, 0, 2, NULL);
}
void Xila_graphics_style_set_image_recolor_opa(Xila_graphics_style_t *style,
                                               Xila_graphics_opa_t value) {
  Xila_graphics_call(Xila_graphics_call_style_set_image_recolor_opa, style,
                     value, 0, 0, 0, 0, 0, 2, NULL);
}
void Xila_graphics_style_set_line_width(Xila_graphics_style_t *style,
                                        int32_t value) {
  Xila_graphics_call(Xila_graphics_call_style_set_line_width, style, value, 0,
                     0, 0, 0, 0, 2, NULL);
}
void Xila_graphics_style_set_line_dash_width(Xila_graphics_style_t *style,
                                             int32_t value) {
  Xila_graphics_call(Xila_graphics_call_style_set_line_dash_width, style, value,
                     0, 0, 0, 0, 0, 2, NULL);
}
void Xila_graphics_style_set_line_dash_gap(Xila_graphics_style_t *style,
                                           int32_t value) {
  Xila_graphics_call(Xila_graphics_call_style_set_line_dash_gap, style, value,
                     0, 0, 0, 0, 0, 2, NULL);
}
void Xila_graphics_style_set_line_rounded(Xila_graphics_style_t *style,
                                          bool value) {
  Xila_graphics_call(Xila_graphics_call_style_set_line_rounded, style, value, 0,
                     0, 0, 0, 0, 2, NULL);
}
void Xila_graphics_style_set_line_color(Xila_graphics_style_t *style,
                                        Xila_graphics_color_t value) {
  Xila_graphics_call(Xila_graphics_call_style_set_line_color, style,
                     *(size_t *)&value, 0, 0, 0, 0, 0, 2, NULL);
}
void Xila_graphics_style_set_line_opa(Xila_graphics_style_t *style,
                                      Xila_graphics_opa_t value) {
  Xila_graphics_call(Xila_graphics_call_style_set_line_opa, style, value, 0, 0,
                     0, 0, 0, 2, NULL);
}
void Xila_graphics_style_set_arc_width(Xila_graphics_style_t *style,
                                       int32_t value) {
  Xila_graphics_call(Xila_graphics_call_style_set_arc_width, style, value, 0, 0,
                     0, 0, 0, 2, NULL);
}
void Xila_graphics_style_set_arc_rounded(Xila_graphics_style_t *style,
                                         bool value) {
  Xila_graphics_call(Xila_graphics_call_style_set_arc_rounded, style, value, 0,
                     0, 0, 0, 0, 2, NULL);
}
void Xila_graphics_style_set_arc_color(Xila_graphics_style_t *style,
                                       Xila_graphics_color_t value) {
  Xila_graphics_call(Xila_graphics_call_style_set_arc_color, style,
                     *(size_t *)&value, 0, 0, 0, 0, 0, 2, NULL);
}
void Xila_graphics_style_set_arc_opa(Xila_graphics_style_t *style,
                                     Xila_graphics_opa_t value) {
  Xila_graphics_call(Xila_graphics_call_style_set_arc_opa, style, value, 0, 0,
                     0, 0, 0, 2, NULL);
}
void Xila_graphics_style_set_arc_image_src(Xila_graphics_style_t *style,
                                           const char *value) {
  Xila_graphics_call(Xila_graphics_call_style_set_arc_image_src, style, value,
                     0, 0, 0, 0, 0, 2, NULL);
}
void Xila_graphics_style_set_text_color(Xila_graphics_style_t *style,
                                        Xila_graphics_color_t value) {
  Xila_graphics_call(Xila_graphics_call_style_set_text_color, style,
                     *(size_t *)&value, 0, 0, 0, 0, 0, 2, NULL);
}
void Xila_graphics_style_set_text_opa(Xila_graphics_style_t *style,
                                      Xila_graphics_opa_t value) {
  Xila_graphics_call(Xila_graphics_call_style_set_text_opa, style, value, 0, 0,
                     0, 0, 0, 2, NULL);
}
void Xila_graphics_style_set_text_font(Xila_graphics_style_t *style,
                                       const Xila_graphics_font_t *value) {
  Xila_graphics_call(Xila_graphics_call_style_set_text_font, style, value, 0, 0,
                     0, 0, 0, 2, NULL);
}
void Xila_graphics_style_set_text_letter_space(Xila_graphics_style_t *style,
                                               int32_t value) {
  Xila_graphics_call(Xila_graphics_call_style_set_text_letter_space, style,
                     value, 0, 0, 0, 0, 0, 2, NULL);
}
void Xila_graphics_style_set_text_line_space(Xila_graphics_style_t *style,
                                             int32_t value) {
  Xila_graphics_call(Xila_graphics_call_style_set_text_line_space, style, value,
                     0, 0, 0, 0, 0, 2, NULL);
}
void Xila_graphics_style_set_text_decor(Xila_graphics_style_t *style,
                                        Xila_graphics_text_decor_t value) {
  Xila_graphics_call(Xila_graphics_call_style_set_text_decor, style, value, 0,
                     0, 0, 0, 0, 2, NULL);
}
void Xila_graphics_style_set_text_align(Xila_graphics_style_t *style,
                                        Xila_graphics_text_align_t value) {
  Xila_graphics_call(Xila_graphics_call_style_set_text_align, style, value, 0,
                     0, 0, 0, 0, 2, NULL);
}
void Xila_graphics_style_set_radius(Xila_graphics_style_t *style,
                                    int32_t value) {
  Xila_graphics_call(Xila_graphics_call_style_set_radius, style, value, 0, 0, 0,
                     0, 0, 2, NULL);
}
void Xila_graphics_style_set_clip_corner(Xila_graphics_style_t *style,
                                         bool value) {
  Xila_graphics_call(Xila_graphics_call_style_set_clip_corner, style, value, 0,
                     0, 0, 0, 0, 2, NULL);
}
void Xila_graphics_style_set_opa(Xila_graphics_style_t *style,
                                 Xila_graphics_opa_t value) {
  Xila_graphics_call(Xila_graphics_call_style_set_opa, style, value, 0, 0, 0, 0,
                     0, 2, NULL);
}
void Xila_graphics_style_set_opa_layered(Xila_graphics_style_t *style,
                                         Xila_graphics_opa_t value) {
  Xila_graphics_call(Xila_graphics_call_style_set_opa_layered, style, value, 0,
                     0, 0, 0, 0, 2, NULL);
}
void Xila_graphics_style_set_color_filter_dsc(
    Xila_graphics_style_t *style,
    const Xila_graphics_color_filter_dsc_t *value) {
  Xila_graphics_call(Xila_graphics_call_style_set_color_filter_dsc, style,
                     value, 0, 0, 0, 0, 0, 2, NULL);
}
void Xila_graphics_style_set_color_filter_opa(Xila_graphics_style_t *style,
                                              Xila_graphics_opa_t value) {
  Xila_graphics_call(Xila_graphics_call_style_set_color_filter_opa, style,
                     value, 0, 0, 0, 0, 0, 2, NULL);
}
void Xila_graphics_style_set_anim(Xila_graphics_style_t *style,
                                  const Xila_graphics_anim_t *value) {
  Xila_graphics_call(Xila_graphics_call_style_set_anim, style, value, 0, 0, 0,
                     0, 0, 2, NULL);
}
void Xila_graphics_style_set_anim_duration(Xila_graphics_style_t *style,
                                           uint32_t value) {
  Xila_graphics_call(Xila_graphics_call_style_set_anim_duration, style, value,
                     0, 0, 0, 0, 0, 2, NULL);
}
void Xila_graphics_style_set_transition(
    Xila_graphics_style_t *style,
    const Xila_graphics_style_transition_dsc_t *value) {
  Xila_graphics_call(Xila_graphics_call_style_set_transition, style, value, 0,
                     0, 0, 0, 0, 2, NULL);
}
void Xila_graphics_style_set_blend_mode(Xila_graphics_style_t *style,
                                        Xila_graphics_blend_mode_t value) {
  Xila_graphics_call(Xila_graphics_call_style_set_blend_mode, style, value, 0,
                     0, 0, 0, 0, 2, NULL);
}
void Xila_graphics_style_set_layout(Xila_graphics_style_t *style,
                                    uint16_t value) {
  Xila_graphics_call(Xila_graphics_call_style_set_layout, style, value, 0, 0, 0,
                     0, 0, 2, NULL);
}
void Xila_graphics_style_set_base_dir(Xila_graphics_style_t *style,
                                      Xila_graphics_base_dir_t value) {
  Xila_graphics_call(Xila_graphics_call_style_set_base_dir, style, value, 0, 0,
                     0, 0, 0, 2, NULL);
}
void Xila_graphics_style_set_bitmap_mask_src(Xila_graphics_style_t *style,
                                             const char *value) {
  Xila_graphics_call(Xila_graphics_call_style_set_bitmap_mask_src, style, value,
                     0, 0, 0, 0, 0, 2, NULL);
}
void Xila_graphics_style_set_rotary_sensitivity(Xila_graphics_style_t *style,
                                                uint32_t value) {
  Xila_graphics_call(Xila_graphics_call_style_set_rotary_sensitivity, style,
                     value, 0, 0, 0, 0, 0, 2, NULL);
}
void Xila_graphics_style_set_flex_flow(Xila_graphics_style_t *style,
                                       Xila_graphics_flex_flow_t value) {
  Xila_graphics_call(Xila_graphics_call_style_set_flex_flow, style, value, 0, 0,
                     0, 0, 0, 2, NULL);
}
void Xila_graphics_style_set_flex_main_place(Xila_graphics_style_t *style,
                                             Xila_graphics_flex_align_t value) {
  Xila_graphics_call(Xila_graphics_call_style_set_flex_main_place, style, value,
                     0, 0, 0, 0, 0, 2, NULL);
}
void Xila_graphics_style_set_flex_cross_place(
    Xila_graphics_style_t *style, Xila_graphics_flex_align_t value) {
  Xila_graphics_call(Xila_graphics_call_style_set_flex_cross_place, style,
                     value, 0, 0, 0, 0, 0, 2, NULL);
}
void Xila_graphics_style_set_flex_track_place(
    Xila_graphics_style_t *style, Xila_graphics_flex_align_t value) {
  Xila_graphics_call(Xila_graphics_call_style_set_flex_track_place, style,
                     value, 0, 0, 0, 0, 0, 2, NULL);
}
void Xila_graphics_style_set_flex_grow(Xila_graphics_style_t *style,
                                       uint8_t value) {
  Xila_graphics_call(Xila_graphics_call_style_set_flex_grow, style, value, 0, 0,
                     0, 0, 0, 2, NULL);
}
void Xila_graphics_style_set_grid_column_dsc_array(Xila_graphics_style_t *style,
                                                   const int32_t *value) {
  Xila_graphics_call(Xila_graphics_call_style_set_grid_column_dsc_array, style,
                     value, 0, 0, 0, 0, 0, 2, NULL);
}
void Xila_graphics_style_set_grid_column_align(
    Xila_graphics_style_t *style, Xila_graphics_grid_align_t value) {
  Xila_graphics_call(Xila_graphics_call_style_set_grid_column_align, style,
                     value, 0, 0, 0, 0, 0, 2, NULL);
}
void Xila_graphics_style_set_grid_row_dsc_array(Xila_graphics_style_t *style,
                                                const int32_t *value) {
  Xila_graphics_call(Xila_graphics_call_style_set_grid_row_dsc_array, style,
                     value, 0, 0, 0, 0, 0, 2, NULL);
}
void Xila_graphics_style_set_grid_row_align(Xila_graphics_style_t *style,
                                            Xila_graphics_grid_align_t value) {
  Xila_graphics_call(Xila_graphics_call_style_set_grid_row_align, style, value,
                     0, 0, 0, 0, 0, 2, NULL);
}
void Xila_graphics_style_set_grid_cell_column_pos(Xila_graphics_style_t *style,
                                                  int32_t value) {
  Xila_graphics_call(Xila_graphics_call_style_set_grid_cell_column_pos, style,
                     value, 0, 0, 0, 0, 0, 2, NULL);
}
void Xila_graphics_style_set_grid_cell_x_align(
    Xila_graphics_style_t *style, Xila_graphics_grid_align_t value) {
  Xila_graphics_call(Xila_graphics_call_style_set_grid_cell_x_align, style,
                     value, 0, 0, 0, 0, 0, 2, NULL);
}
void Xila_graphics_style_set_grid_cell_column_span(Xila_graphics_style_t *style,
                                                   int32_t value) {
  Xila_graphics_call(Xila_graphics_call_style_set_grid_cell_column_span, style,
                     value, 0, 0, 0, 0, 0, 2, NULL);
}
void Xila_graphics_style_set_grid_cell_row_pos(Xila_graphics_style_t *style,
                                               int32_t value) {
  Xila_graphics_call(Xila_graphics_call_style_set_grid_cell_row_pos, style,
                     value, 0, 0, 0, 0, 0, 2, NULL);
}
void Xila_graphics_style_set_grid_cell_y_align(
    Xila_graphics_style_t *style, Xila_graphics_grid_align_t value) {
  Xila_graphics_call(Xila_graphics_call_style_set_grid_cell_y_align, style,
                     value, 0, 0, 0, 0, 0, 2, NULL);
}
void Xila_graphics_style_set_grid_cell_row_span(Xila_graphics_style_t *style,
                                                int32_t value) {
  Xila_graphics_call(Xila_graphics_call_style_set_grid_cell_row_span, style,
                     value, 0, 0, 0, 0, 0, 2, NULL);
}
void Xila_graphics_obj_delete(Xila_graphics_obj_t *obj) {
  Xila_graphics_call(Xila_graphics_call_obj_delete, obj, 0, 0, 0, 0, 0, 0, 1,
                     NULL);
}
void Xila_graphics_obj_clean(Xila_graphics_obj_t *obj) {
  Xila_graphics_call(Xila_graphics_call_obj_clean, obj, 0, 0, 0, 0, 0, 0, 1,
                     NULL);
}
void Xila_graphics_obj_delete_delayed(Xila_graphics_obj_t *obj,
                                      uint32_t delay_ms) {
  Xila_graphics_call(Xila_graphics_call_obj_delete_delayed, obj, delay_ms, 0, 0,
                     0, 0, 0, 2, NULL);
}
void Xila_graphics_obj_delete_anim_completed_cb(Xila_graphics_anim_t *a) {
  Xila_graphics_call(Xila_graphics_call_obj_delete_anim_completed_cb, a, 0, 0,
                     0, 0, 0, 0, 1, NULL);
}
void Xila_graphics_obj_delete_async(Xila_graphics_obj_t *obj) {
  Xila_graphics_call(Xila_graphics_call_obj_delete_async, obj, 0, 0, 0, 0, 0, 0,
                     1, NULL);
}
void Xila_graphics_obj_set_parent(Xila_graphics_obj_t *obj,
                                  Xila_graphics_obj_t *parent) {
  Xila_graphics_call(Xila_graphics_call_obj_set_parent, obj, parent, 0, 0, 0, 0,
                     0, 2, NULL);
}
void Xila_graphics_obj_swap(Xila_graphics_obj_t *obj1,
                            Xila_graphics_obj_t *obj2) {
  Xila_graphics_call(Xila_graphics_call_obj_swap, obj1, obj2, 0, 0, 0, 0, 0, 2,
                     NULL);
}
void Xila_graphics_obj_move_to_index(Xila_graphics_obj_t *obj, int32_t index) {
  Xila_graphics_call(Xila_graphics_call_obj_move_to_index, obj, index, 0, 0, 0,
                     0, 0, 2, NULL);
}
Xila_graphics_obj_t *
Xila_graphics_obj_get_screen(const Xila_graphics_obj_t *obj) {
  Xila_graphics_call(Xila_graphics_call_obj_get_screen, obj, 0, 0, 0, 0, 0, 0,
                     1, NULL);
}
Xila_graphics_obj_t *
Xila_graphics_obj_get_parent(const Xila_graphics_obj_t *obj) {
  Xila_graphics_call(Xila_graphics_call_obj_get_parent, obj, 0, 0, 0, 0, 0, 0,
                     1, NULL);
}
Xila_graphics_obj_t *Xila_graphics_obj_get_child(const Xila_graphics_obj_t *obj,
                                                 int32_t idx) {
  Xila_graphics_call(Xila_graphics_call_obj_get_child, obj, idx, 0, 0, 0, 0, 0,
                     2, NULL);
}
Xila_graphics_obj_t *
Xila_graphics_obj_get_child_by_type(const Xila_graphics_obj_t *obj, int32_t idx,
                                    const Xila_graphics_obj_class_t *class_p) {
  Xila_graphics_call(Xila_graphics_call_obj_get_child_by_type, obj, idx,
                     class_p, 0, 0, 0, 0, 3, NULL);
}
Xila_graphics_obj_t *
Xila_graphics_obj_get_sibling(const Xila_graphics_obj_t *obj, int32_t idx) {
  Xila_graphics_call(Xila_graphics_call_obj_get_sibling, obj, idx, 0, 0, 0, 0,
                     0, 2, NULL);
}
Xila_graphics_obj_t *Xila_graphics_obj_get_sibling_by_type(
    const Xila_graphics_obj_t *obj, int32_t idx,
    const Xila_graphics_obj_class_t *class_p) {
  Xila_graphics_call(Xila_graphics_call_obj_get_sibling_by_type, obj, idx,
                     class_p, 0, 0, 0, 0, 3, NULL);
}
uint32_t Xila_graphics_obj_get_child_count(const Xila_graphics_obj_t *obj) {
  Xila_graphics_call(Xila_graphics_call_obj_get_child_count, obj, 0, 0, 0, 0, 0,
                     0, 1, NULL);
}
uint32_t Xila_graphics_obj_get_child_count_by_type(
    const Xila_graphics_obj_t *obj, const Xila_graphics_obj_class_t *class_p) {
  Xila_graphics_call(Xila_graphics_call_obj_get_child_count_by_type, obj,
                     class_p, 0, 0, 0, 0, 0, 2, NULL);
}
int32_t Xila_graphics_obj_get_index(const Xila_graphics_obj_t *obj) {
  Xila_graphics_call(Xila_graphics_call_obj_get_index, obj, 0, 0, 0, 0, 0, 0, 1,
                     NULL);
}
int32_t
Xila_graphics_obj_get_index_by_type(const Xila_graphics_obj_t *obj,
                                    const Xila_graphics_obj_class_t *class_p) {
  Xila_graphics_call(Xila_graphics_call_obj_get_index_by_type, obj, class_p, 0,
                     0, 0, 0, 0, 2, NULL);
}
void Xila_graphics_obj_tree_walk(Xila_graphics_obj_t *start_obj,
                                 Xila_graphics_obj_tree_walk_cb_t cb,
                                 char *user_data) {
  Xila_graphics_call(Xila_graphics_call_obj_tree_walk, start_obj, cb, user_data,
                     0, 0, 0, 0, 3, NULL);
}
void Xila_graphics_obj_dump_tree(Xila_graphics_obj_t *start_obj) {
  Xila_graphics_call(Xila_graphics_call_obj_dump_tree, start_obj, 0, 0, 0, 0, 0,
                     0, 1, NULL);
}
void Xila_graphics_obj_set_pos(Xila_graphics_obj_t *obj, int32_t x, int32_t y) {
  Xila_graphics_call(Xila_graphics_call_obj_set_pos, obj, x, y, 0, 0, 0, 0, 3,
                     NULL);
}
void Xila_graphics_obj_set_x(Xila_graphics_obj_t *obj, int32_t x) {
  Xila_graphics_call(Xila_graphics_call_obj_set_x, obj, x, 0, 0, 0, 0, 0, 2,
                     NULL);
}
void Xila_graphics_obj_set_y(Xila_graphics_obj_t *obj, int32_t y) {
  Xila_graphics_call(Xila_graphics_call_obj_set_y, obj, y, 0, 0, 0, 0, 0, 2,
                     NULL);
}
void Xila_graphics_obj_set_size(Xila_graphics_obj_t *obj, int32_t w,
                                int32_t h) {
  Xila_graphics_call(Xila_graphics_call_obj_set_size, obj, w, h, 0, 0, 0, 0, 3,
                     NULL);
}
bool Xila_graphics_obj_refr_size(Xila_graphics_obj_t *obj) {
  Xila_graphics_call(Xila_graphics_call_obj_refr_size, obj, 0, 0, 0, 0, 0, 0, 1,
                     NULL);
}
void Xila_graphics_obj_set_width(Xila_graphics_obj_t *obj, int32_t w) {
  Xila_graphics_call(Xila_graphics_call_obj_set_width, obj, w, 0, 0, 0, 0, 0, 2,
                     NULL);
}
void Xila_graphics_obj_set_height(Xila_graphics_obj_t *obj, int32_t h) {
  Xila_graphics_call(Xila_graphics_call_obj_set_height, obj, h, 0, 0, 0, 0, 0,
                     2, NULL);
}
void Xila_graphics_obj_set_content_width(Xila_graphics_obj_t *obj, int32_t w) {
  Xila_graphics_call(Xila_graphics_call_obj_set_content_width, obj, w, 0, 0, 0,
                     0, 0, 2, NULL);
}
void Xila_graphics_obj_set_content_height(Xila_graphics_obj_t *obj, int32_t h) {
  Xila_graphics_call(Xila_graphics_call_obj_set_content_height, obj, h, 0, 0, 0,
                     0, 0, 2, NULL);
}
void Xila_graphics_obj_set_layout(Xila_graphics_obj_t *obj, uint32_t layout) {
  Xila_graphics_call(Xila_graphics_call_obj_set_layout, obj, layout, 0, 0, 0, 0,
                     0, 2, NULL);
}
bool Xila_graphics_obj_is_layout_positioned(const Xila_graphics_obj_t *obj) {
  Xila_graphics_call(Xila_graphics_call_obj_is_layout_positioned, obj, 0, 0, 0,
                     0, 0, 0, 1, NULL);
}
void Xila_graphics_obj_mark_layout_as_dirty(Xila_graphics_obj_t *obj) {
  Xila_graphics_call(Xila_graphics_call_obj_mark_layout_as_dirty, obj, 0, 0, 0,
                     0, 0, 0, 1, NULL);
}
void Xila_graphics_obj_update_layout(const Xila_graphics_obj_t *obj) {
  Xila_graphics_call(Xila_graphics_call_obj_update_layout, obj, 0, 0, 0, 0, 0,
                     0, 1, NULL);
}
void Xila_graphics_obj_set_align(Xila_graphics_obj_t *obj,
                                 Xila_graphics_align_t align) {
  Xila_graphics_call(Xila_graphics_call_obj_set_align, obj, align, 0, 0, 0, 0,
                     0, 2, NULL);
}
void Xila_graphics_obj_align(Xila_graphics_obj_t *obj,
                             Xila_graphics_align_t align, int32_t x_ofs,
                             int32_t y_ofs) {
  Xila_graphics_call(Xila_graphics_call_obj_align, obj, align, x_ofs, y_ofs, 0,
                     0, 0, 4, NULL);
}
void Xila_graphics_obj_align_to(Xila_graphics_obj_t *obj,
                                const Xila_graphics_obj_t *base,
                                Xila_graphics_align_t align, int32_t x_ofs,
                                int32_t y_ofs) {
  Xila_graphics_call(Xila_graphics_call_obj_align_to, obj, base, align, x_ofs,
                     y_ofs, 0, 0, 5, NULL);
}
void Xila_graphics_obj_center(Xila_graphics_obj_t *obj) {
  Xila_graphics_call(Xila_graphics_call_obj_center, obj, 0, 0, 0, 0, 0, 0, 1,
                     NULL);
}
void Xila_graphics_obj_get_coords(const Xila_graphics_obj_t *obj,
                                  Xila_graphics_area_t *coords) {
  Xila_graphics_call(Xila_graphics_call_obj_get_coords, obj, coords, 0, 0, 0, 0,
                     0, 2, NULL);
}
int32_t Xila_graphics_obj_get_x(const Xila_graphics_obj_t *obj) {
  Xila_graphics_call(Xila_graphics_call_obj_get_x, obj, 0, 0, 0, 0, 0, 0, 1,
                     NULL);
}
int32_t Xila_graphics_obj_get_x2(const Xila_graphics_obj_t *obj) {
  Xila_graphics_call(Xila_graphics_call_obj_get_x2, obj, 0, 0, 0, 0, 0, 0, 1,
                     NULL);
}
int32_t Xila_graphics_obj_get_y(const Xila_graphics_obj_t *obj) {
  Xila_graphics_call(Xila_graphics_call_obj_get_y, obj, 0, 0, 0, 0, 0, 0, 1,
                     NULL);
}
int32_t Xila_graphics_obj_get_y2(const Xila_graphics_obj_t *obj) {
  Xila_graphics_call(Xila_graphics_call_obj_get_y2, obj, 0, 0, 0, 0, 0, 0, 1,
                     NULL);
}
int32_t Xila_graphics_obj_get_x_aligned(const Xila_graphics_obj_t *obj) {
  Xila_graphics_call(Xila_graphics_call_obj_get_x_aligned, obj, 0, 0, 0, 0, 0,
                     0, 1, NULL);
}
int32_t Xila_graphics_obj_get_y_aligned(const Xila_graphics_obj_t *obj) {
  Xila_graphics_call(Xila_graphics_call_obj_get_y_aligned, obj, 0, 0, 0, 0, 0,
                     0, 1, NULL);
}
int32_t Xila_graphics_obj_get_width(const Xila_graphics_obj_t *obj) {
  Xila_graphics_call(Xila_graphics_call_obj_get_width, obj, 0, 0, 0, 0, 0, 0, 1,
                     NULL);
}
int32_t Xila_graphics_obj_get_height(const Xila_graphics_obj_t *obj) {
  Xila_graphics_call(Xila_graphics_call_obj_get_height, obj, 0, 0, 0, 0, 0, 0,
                     1, NULL);
}
int32_t Xila_graphics_obj_get_content_width(const Xila_graphics_obj_t *obj) {
  Xila_graphics_call(Xila_graphics_call_obj_get_content_width, obj, 0, 0, 0, 0,
                     0, 0, 1, NULL);
}
int32_t Xila_graphics_obj_get_content_height(const Xila_graphics_obj_t *obj) {
  Xila_graphics_call(Xila_graphics_call_obj_get_content_height, obj, 0, 0, 0, 0,
                     0, 0, 1, NULL);
}
void Xila_graphics_obj_get_content_coords(const Xila_graphics_obj_t *obj,
                                          Xila_graphics_area_t *area) {
  Xila_graphics_call(Xila_graphics_call_obj_get_content_coords, obj, area, 0, 0,
                     0, 0, 0, 2, NULL);
}
int32_t Xila_graphics_obj_get_self_width(const Xila_graphics_obj_t *obj) {
  Xila_graphics_call(Xila_graphics_call_obj_get_self_width, obj, 0, 0, 0, 0, 0,
                     0, 1, NULL);
}
int32_t Xila_graphics_obj_get_self_height(const Xila_graphics_obj_t *obj) {
  Xila_graphics_call(Xila_graphics_call_obj_get_self_height, obj, 0, 0, 0, 0, 0,
                     0, 1, NULL);
}
bool Xila_graphics_obj_refresh_self_size(Xila_graphics_obj_t *obj) {
  Xila_graphics_call(Xila_graphics_call_obj_refresh_self_size, obj, 0, 0, 0, 0,
                     0, 0, 1, NULL);
}
void Xila_graphics_obj_refr_pos(Xila_graphics_obj_t *obj) {
  Xila_graphics_call(Xila_graphics_call_obj_refr_pos, obj, 0, 0, 0, 0, 0, 0, 1,
                     NULL);
}
void Xila_graphics_obj_move_to(Xila_graphics_obj_t *obj, int32_t x, int32_t y) {
  Xila_graphics_call(Xila_graphics_call_obj_move_to, obj, x, y, 0, 0, 0, 0, 3,
                     NULL);
}
void Xila_graphics_obj_move_children_by(Xila_graphics_obj_t *obj,
                                        int32_t x_diff, int32_t y_diff,
                                        bool ignore_floating) {
  Xila_graphics_call(Xila_graphics_call_obj_move_children_by, obj, x_diff,
                     y_diff, ignore_floating, 0, 0, 0, 4, NULL);
}
void Xila_graphics_obj_transform_point(
    const Xila_graphics_obj_t *obj, Xila_graphics_point_t *p,
    Xila_graphics_obj_point_transform_flag_t flags) {
  Xila_graphics_call(Xila_graphics_call_obj_transform_point, obj, p, flags, 0,
                     0, 0, 0, 3, NULL);
}
void Xila_graphics_obj_transform_point_array(
    const Xila_graphics_obj_t *obj, Xila_graphics_point_t *points, size_t count,
    Xila_graphics_obj_point_transform_flag_t flags) {
  Xila_graphics_call(Xila_graphics_call_obj_transform_point_array, obj, points,
                     count, flags, 0, 0, 0, 4, NULL);
}
void Xila_graphics_obj_get_transformed_area(
    const Xila_graphics_obj_t *obj, Xila_graphics_area_t *area,
    Xila_graphics_obj_point_transform_flag_t flags) {
  Xila_graphics_call(Xila_graphics_call_obj_get_transformed_area, obj, area,
                     flags, 0, 0, 0, 0, 3, NULL);
}
void Xila_graphics_obj_invalidate_area(const Xila_graphics_obj_t *obj,
                                       const Xila_graphics_area_t *area) {
  Xila_graphics_call(Xila_graphics_call_obj_invalidate_area, obj, area, 0, 0, 0,
                     0, 0, 2, NULL);
}
void Xila_graphics_obj_invalidate(const Xila_graphics_obj_t *obj) {
  Xila_graphics_call(Xila_graphics_call_obj_invalidate, obj, 0, 0, 0, 0, 0, 0,
                     1, NULL);
}
bool Xila_graphics_obj_area_is_visible(const Xila_graphics_obj_t *obj,
                                       Xila_graphics_area_t *area) {
  Xila_graphics_call(Xila_graphics_call_obj_area_is_visible, obj, area, 0, 0, 0,
                     0, 0, 2, NULL);
}
bool Xila_graphics_obj_is_visible(const Xila_graphics_obj_t *obj) {
  Xila_graphics_call(Xila_graphics_call_obj_is_visible, obj, 0, 0, 0, 0, 0, 0,
                     1, NULL);
}
void Xila_graphics_obj_set_ext_click_area(Xila_graphics_obj_t *obj,
                                          int32_t size) {
  Xila_graphics_call(Xila_graphics_call_obj_set_ext_click_area, obj, size, 0, 0,
                     0, 0, 0, 2, NULL);
}
void Xila_graphics_obj_get_click_area(const Xila_graphics_obj_t *obj,
                                      Xila_graphics_area_t *area) {
  Xila_graphics_call(Xila_graphics_call_obj_get_click_area, obj, area, 0, 0, 0,
                     0, 0, 2, NULL);
}
bool Xila_graphics_obj_hit_test(Xila_graphics_obj_t *obj,
                                const Xila_graphics_point_t *point) {
  Xila_graphics_call(Xila_graphics_call_obj_hit_test, obj, point, 0, 0, 0, 0, 0,
                     2, NULL);
}
void Xila_graphics_obj_set_scrollbar_mode(Xila_graphics_obj_t *obj,
                                          Xila_graphics_scrollbar_mode_t mode) {
  Xila_graphics_call(Xila_graphics_call_obj_set_scrollbar_mode, obj, mode, 0, 0,
                     0, 0, 0, 2, NULL);
}
void Xila_graphics_obj_set_scroll_dir(Xila_graphics_obj_t *obj,
                                      Xila_graphics_dir_t dir) {
  Xila_graphics_call(Xila_graphics_call_obj_set_scroll_dir, obj, dir, 0, 0, 0,
                     0, 0, 2, NULL);
}
void Xila_graphics_obj_set_scroll_snap_x(Xila_graphics_obj_t *obj,
                                         Xila_graphics_scroll_snap_t align) {
  Xila_graphics_call(Xila_graphics_call_obj_set_scroll_snap_x, obj, align, 0, 0,
                     0, 0, 0, 2, NULL);
}
void Xila_graphics_obj_set_scroll_snap_y(Xila_graphics_obj_t *obj,
                                         Xila_graphics_scroll_snap_t align) {
  Xila_graphics_call(Xila_graphics_call_obj_set_scroll_snap_y, obj, align, 0, 0,
                     0, 0, 0, 2, NULL);
}
Xila_graphics_scrollbar_mode_t
Xila_graphics_obj_get_scrollbar_mode(const Xila_graphics_obj_t *obj) {
  Xila_graphics_call(Xila_graphics_call_obj_get_scrollbar_mode, obj, 0, 0, 0, 0,
                     0, 0, 1, NULL);
}
Xila_graphics_dir_t
Xila_graphics_obj_get_scroll_dir(const Xila_graphics_obj_t *obj) {
  Xila_graphics_call(Xila_graphics_call_obj_get_scroll_dir, obj, 0, 0, 0, 0, 0,
                     0, 1, NULL);
}
Xila_graphics_scroll_snap_t
Xila_graphics_obj_get_scroll_snap_x(const Xila_graphics_obj_t *obj) {
  Xila_graphics_call(Xila_graphics_call_obj_get_scroll_snap_x, obj, 0, 0, 0, 0,
                     0, 0, 1, NULL);
}
Xila_graphics_scroll_snap_t
Xila_graphics_obj_get_scroll_snap_y(const Xila_graphics_obj_t *obj) {
  Xila_graphics_call(Xila_graphics_call_obj_get_scroll_snap_y, obj, 0, 0, 0, 0,
                     0, 0, 1, NULL);
}
int32_t Xila_graphics_obj_get_scroll_x(const Xila_graphics_obj_t *obj) {
  Xila_graphics_call(Xila_graphics_call_obj_get_scroll_x, obj, 0, 0, 0, 0, 0, 0,
                     1, NULL);
}
int32_t Xila_graphics_obj_get_scroll_y(const Xila_graphics_obj_t *obj) {
  Xila_graphics_call(Xila_graphics_call_obj_get_scroll_y, obj, 0, 0, 0, 0, 0, 0,
                     1, NULL);
}
int32_t Xila_graphics_obj_get_scroll_top(Xila_graphics_obj_t *obj) {
  Xila_graphics_call(Xila_graphics_call_obj_get_scroll_top, obj, 0, 0, 0, 0, 0,
                     0, 1, NULL);
}
int32_t Xila_graphics_obj_get_scroll_bottom(Xila_graphics_obj_t *obj) {
  Xila_graphics_call(Xila_graphics_call_obj_get_scroll_bottom, obj, 0, 0, 0, 0,
                     0, 0, 1, NULL);
}
int32_t Xila_graphics_obj_get_scroll_left(Xila_graphics_obj_t *obj) {
  Xila_graphics_call(Xila_graphics_call_obj_get_scroll_left, obj, 0, 0, 0, 0, 0,
                     0, 1, NULL);
}
int32_t Xila_graphics_obj_get_scroll_right(Xila_graphics_obj_t *obj) {
  Xila_graphics_call(Xila_graphics_call_obj_get_scroll_right, obj, 0, 0, 0, 0,
                     0, 0, 1, NULL);
}
void Xila_graphics_obj_get_scroll_end(Xila_graphics_obj_t *obj,
                                      Xila_graphics_point_t *end) {
  Xila_graphics_call(Xila_graphics_call_obj_get_scroll_end, obj, end, 0, 0, 0,
                     0, 0, 2, NULL);
}
void Xila_graphics_obj_scroll_by(Xila_graphics_obj_t *obj, int32_t x, int32_t y,
                                 Xila_graphics_anim_enable_t anim_en) {
  Xila_graphics_call(Xila_graphics_call_obj_scroll_by, obj, x, y, anim_en, 0, 0,
                     0, 4, NULL);
}
void Xila_graphics_obj_scroll_by_bounded(Xila_graphics_obj_t *obj, int32_t dx,
                                         int32_t dy,
                                         Xila_graphics_anim_enable_t anim_en) {
  Xila_graphics_call(Xila_graphics_call_obj_scroll_by_bounded, obj, dx, dy,
                     anim_en, 0, 0, 0, 4, NULL);
}
void Xila_graphics_obj_scroll_to(Xila_graphics_obj_t *obj, int32_t x, int32_t y,
                                 Xila_graphics_anim_enable_t anim_en) {
  Xila_graphics_call(Xila_graphics_call_obj_scroll_to, obj, x, y, anim_en, 0, 0,
                     0, 4, NULL);
}
void Xila_graphics_obj_scroll_to_x(Xila_graphics_obj_t *obj, int32_t x,
                                   Xila_graphics_anim_enable_t anim_en) {
  Xila_graphics_call(Xila_graphics_call_obj_scroll_to_x, obj, x, anim_en, 0, 0,
                     0, 0, 3, NULL);
}
void Xila_graphics_obj_scroll_to_y(Xila_graphics_obj_t *obj, int32_t y,
                                   Xila_graphics_anim_enable_t anim_en) {
  Xila_graphics_call(Xila_graphics_call_obj_scroll_to_y, obj, y, anim_en, 0, 0,
                     0, 0, 3, NULL);
}
void Xila_graphics_obj_scroll_to_view(Xila_graphics_obj_t *obj,
                                      Xila_graphics_anim_enable_t anim_en) {
  Xila_graphics_call(Xila_graphics_call_obj_scroll_to_view, obj, anim_en, 0, 0,
                     0, 0, 0, 2, NULL);
}
void Xila_graphics_obj_scroll_to_view_recursive(
    Xila_graphics_obj_t *obj, Xila_graphics_anim_enable_t anim_en) {
  Xila_graphics_call(Xila_graphics_call_obj_scroll_to_view_recursive, obj,
                     anim_en, 0, 0, 0, 0, 0, 2, NULL);
}
bool Xila_graphics_obj_is_scrolling(const Xila_graphics_obj_t *obj) {
  Xila_graphics_call(Xila_graphics_call_obj_is_scrolling, obj, 0, 0, 0, 0, 0, 0,
                     1, NULL);
}
void Xila_graphics_obj_update_snap(Xila_graphics_obj_t *obj,
                                   Xila_graphics_anim_enable_t anim_en) {
  Xila_graphics_call(Xila_graphics_call_obj_update_snap, obj, anim_en, 0, 0, 0,
                     0, 0, 2, NULL);
}
void Xila_graphics_obj_get_scrollbar_area(Xila_graphics_obj_t *obj,
                                          Xila_graphics_area_t *hor,
                                          Xila_graphics_area_t *ver) {
  Xila_graphics_call(Xila_graphics_call_obj_get_scrollbar_area, obj, hor, ver,
                     0, 0, 0, 0, 3, NULL);
}
void Xila_graphics_obj_scrollbar_invalidate(Xila_graphics_obj_t *obj) {
  Xila_graphics_call(Xila_graphics_call_obj_scrollbar_invalidate, obj, 0, 0, 0,
                     0, 0, 0, 1, NULL);
}
void Xila_graphics_obj_readjust_scroll(Xila_graphics_obj_t *obj,
                                       Xila_graphics_anim_enable_t anim_en) {
  Xila_graphics_call(Xila_graphics_call_obj_readjust_scroll, obj, anim_en, 0, 0,
                     0, 0, 0, 2, NULL);
}
void Xila_graphics_obj_add_style(Xila_graphics_obj_t *obj,
                                 const Xila_graphics_style_t *style,
                                 Xila_graphics_style_selector_t selector) {
  Xila_graphics_call(Xila_graphics_call_obj_add_style, obj, style, selector, 0,
                     0, 0, 0, 3, NULL);
}
bool Xila_graphics_obj_replace_style(Xila_graphics_obj_t *obj,
                                     const Xila_graphics_style_t *old_style,
                                     const Xila_graphics_style_t *new_style,
                                     Xila_graphics_style_selector_t selector) {
  Xila_graphics_call(Xila_graphics_call_obj_replace_style, obj, old_style,
                     new_style, selector, 0, 0, 0, 4, NULL);
}
void Xila_graphics_obj_remove_style(Xila_graphics_obj_t *obj,
                                    const Xila_graphics_style_t *style,
                                    Xila_graphics_style_selector_t selector) {
  Xila_graphics_call(Xila_graphics_call_obj_remove_style, obj, style, selector,
                     0, 0, 0, 0, 3, NULL);
}
void Xila_graphics_obj_remove_style_all(Xila_graphics_obj_t *obj) {
  Xila_graphics_call(Xila_graphics_call_obj_remove_style_all, obj, 0, 0, 0, 0,
                     0, 0, 1, NULL);
}
void Xila_graphics_obj_report_style_change(Xila_graphics_style_t *style) {
  Xila_graphics_call(Xila_graphics_call_obj_report_style_change, style, 0, 0, 0,
                     0, 0, 0, 1, NULL);
}
void Xila_graphics_obj_refresh_style(Xila_graphics_obj_t *obj,
                                     Xila_graphics_part_t part,
                                     Xila_graphics_style_prop_t prop) {
  Xila_graphics_call(Xila_graphics_call_obj_refresh_style, obj, part, prop, 0,
                     0, 0, 0, 3, NULL);
}
void Xila_graphics_obj_enable_style_refresh(bool en) {
  Xila_graphics_call(Xila_graphics_call_obj_enable_style_refresh, en, 0, 0, 0,
                     0, 0, 0, 1, NULL);
}
Xila_graphics_style_value_t
Xila_graphics_obj_get_style_prop(const Xila_graphics_obj_t *obj,
                                 Xila_graphics_part_t part,
                                 Xila_graphics_style_prop_t prop) {
  Xila_graphics_call(Xila_graphics_call_obj_get_style_prop, obj, part, prop, 0,
                     0, 0, 0, 3, NULL);
}
bool Xila_graphics_obj_has_style_prop(const Xila_graphics_obj_t *obj,
                                      Xila_graphics_style_selector_t selector,
                                      Xila_graphics_style_prop_t prop) {
  Xila_graphics_call(Xila_graphics_call_obj_has_style_prop, obj, selector, prop,
                     0, 0, 0, 0, 3, NULL);
}
void Xila_graphics_obj_set_local_style_prop(
    Xila_graphics_obj_t *obj, Xila_graphics_style_prop_t prop,
    Xila_graphics_style_value_t value,
    Xila_graphics_style_selector_t selector) {
  Xila_graphics_call(Xila_graphics_call_obj_set_local_style_prop, obj, prop,
                     *(size_t *)&value, selector, 0, 0, 0, 4, NULL);
}
Xila_graphics_style_res_t Xila_graphics_obj_get_local_style_prop(
    Xila_graphics_obj_t *obj, Xila_graphics_style_prop_t prop,
    Xila_graphics_style_value_t *value,
    Xila_graphics_style_selector_t selector) {
  Xila_graphics_call(Xila_graphics_call_obj_get_local_style_prop, obj, prop,
                     value, selector, 0, 0, 0, 4, NULL);
}
bool Xila_graphics_obj_remove_local_style_prop(
    Xila_graphics_obj_t *obj, Xila_graphics_style_prop_t prop,
    Xila_graphics_style_selector_t selector) {
  Xila_graphics_call(Xila_graphics_call_obj_remove_local_style_prop, obj, prop,
                     selector, 0, 0, 0, 0, 3, NULL);
}
Xila_graphics_style_value_t
Xila_graphics_obj_style_apply_color_filter(const Xila_graphics_obj_t *obj,
                                           Xila_graphics_part_t part,
                                           Xila_graphics_style_value_t v) {
  Xila_graphics_call(Xila_graphics_call_obj_style_apply_color_filter, obj, part,
                     *(size_t *)&v, 0, 0, 0, 0, 3, NULL);
}
void Xila_graphics_obj_fade_in(Xila_graphics_obj_t *obj, uint32_t time,
                               uint32_t delay) {
  Xila_graphics_call(Xila_graphics_call_obj_fade_in, obj, time, delay, 0, 0, 0,
                     0, 3, NULL);
}
void Xila_graphics_obj_fade_out(Xila_graphics_obj_t *obj, uint32_t time,
                                uint32_t delay) {
  Xila_graphics_call(Xila_graphics_call_obj_fade_out, obj, time, delay, 0, 0, 0,
                     0, 3, NULL);
}
void Xila_graphics_obj_set_style_width(
    Xila_graphics_obj_t *obj, int32_t value,
    Xila_graphics_style_selector_t selector) {
  Xila_graphics_call(Xila_graphics_call_obj_set_style_width, obj, value,
                     selector, 0, 0, 0, 0, 3, NULL);
}
void Xila_graphics_obj_set_style_min_width(
    Xila_graphics_obj_t *obj, int32_t value,
    Xila_graphics_style_selector_t selector) {
  Xila_graphics_call(Xila_graphics_call_obj_set_style_min_width, obj, value,
                     selector, 0, 0, 0, 0, 3, NULL);
}
void Xila_graphics_obj_set_style_max_width(
    Xila_graphics_obj_t *obj, int32_t value,
    Xila_graphics_style_selector_t selector) {
  Xila_graphics_call(Xila_graphics_call_obj_set_style_max_width, obj, value,
                     selector, 0, 0, 0, 0, 3, NULL);
}
void Xila_graphics_obj_set_style_height(
    Xila_graphics_obj_t *obj, int32_t value,
    Xila_graphics_style_selector_t selector) {
  Xila_graphics_call(Xila_graphics_call_obj_set_style_height, obj, value,
                     selector, 0, 0, 0, 0, 3, NULL);
}
void Xila_graphics_obj_set_style_min_height(
    Xila_graphics_obj_t *obj, int32_t value,
    Xila_graphics_style_selector_t selector) {
  Xila_graphics_call(Xila_graphics_call_obj_set_style_min_height, obj, value,
                     selector, 0, 0, 0, 0, 3, NULL);
}
void Xila_graphics_obj_set_style_max_height(
    Xila_graphics_obj_t *obj, int32_t value,
    Xila_graphics_style_selector_t selector) {
  Xila_graphics_call(Xila_graphics_call_obj_set_style_max_height, obj, value,
                     selector, 0, 0, 0, 0, 3, NULL);
}
void Xila_graphics_obj_set_style_length(
    Xila_graphics_obj_t *obj, int32_t value,
    Xila_graphics_style_selector_t selector) {
  Xila_graphics_call(Xila_graphics_call_obj_set_style_length, obj, value,
                     selector, 0, 0, 0, 0, 3, NULL);
}
void Xila_graphics_obj_set_style_x(Xila_graphics_obj_t *obj, int32_t value,
                                   Xila_graphics_style_selector_t selector) {
  Xila_graphics_call(Xila_graphics_call_obj_set_style_x, obj, value, selector,
                     0, 0, 0, 0, 3, NULL);
}
void Xila_graphics_obj_set_style_y(Xila_graphics_obj_t *obj, int32_t value,
                                   Xila_graphics_style_selector_t selector) {
  Xila_graphics_call(Xila_graphics_call_obj_set_style_y, obj, value, selector,
                     0, 0, 0, 0, 3, NULL);
}
void Xila_graphics_obj_set_style_align(
    Xila_graphics_obj_t *obj, Xila_graphics_align_t value,
    Xila_graphics_style_selector_t selector) {
  Xila_graphics_call(Xila_graphics_call_obj_set_style_align, obj, value,
                     selector, 0, 0, 0, 0, 3, NULL);
}
void Xila_graphics_obj_set_style_transform_width(
    Xila_graphics_obj_t *obj, int32_t value,
    Xila_graphics_style_selector_t selector) {
  Xila_graphics_call(Xila_graphics_call_obj_set_style_transform_width, obj,
                     value, selector, 0, 0, 0, 0, 3, NULL);
}
void Xila_graphics_obj_set_style_transform_height(
    Xila_graphics_obj_t *obj, int32_t value,
    Xila_graphics_style_selector_t selector) {
  Xila_graphics_call(Xila_graphics_call_obj_set_style_transform_height, obj,
                     value, selector, 0, 0, 0, 0, 3, NULL);
}
void Xila_graphics_obj_set_style_translate_x(
    Xila_graphics_obj_t *obj, int32_t value,
    Xila_graphics_style_selector_t selector) {
  Xila_graphics_call(Xila_graphics_call_obj_set_style_translate_x, obj, value,
                     selector, 0, 0, 0, 0, 3, NULL);
}
void Xila_graphics_obj_set_style_translate_y(
    Xila_graphics_obj_t *obj, int32_t value,
    Xila_graphics_style_selector_t selector) {
  Xila_graphics_call(Xila_graphics_call_obj_set_style_translate_y, obj, value,
                     selector, 0, 0, 0, 0, 3, NULL);
}
void Xila_graphics_obj_set_style_transform_scale_x(
    Xila_graphics_obj_t *obj, int32_t value,
    Xila_graphics_style_selector_t selector) {
  Xila_graphics_call(Xila_graphics_call_obj_set_style_transform_scale_x, obj,
                     value, selector, 0, 0, 0, 0, 3, NULL);
}
void Xila_graphics_obj_set_style_transform_scale_y(
    Xila_graphics_obj_t *obj, int32_t value,
    Xila_graphics_style_selector_t selector) {
  Xila_graphics_call(Xila_graphics_call_obj_set_style_transform_scale_y, obj,
                     value, selector, 0, 0, 0, 0, 3, NULL);
}
void Xila_graphics_obj_set_style_transform_rotation(
    Xila_graphics_obj_t *obj, int32_t value,
    Xila_graphics_style_selector_t selector) {
  Xila_graphics_call(Xila_graphics_call_obj_set_style_transform_rotation, obj,
                     value, selector, 0, 0, 0, 0, 3, NULL);
}
void Xila_graphics_obj_set_style_transform_pivot_x(
    Xila_graphics_obj_t *obj, int32_t value,
    Xila_graphics_style_selector_t selector) {
  Xila_graphics_call(Xila_graphics_call_obj_set_style_transform_pivot_x, obj,
                     value, selector, 0, 0, 0, 0, 3, NULL);
}
void Xila_graphics_obj_set_style_transform_pivot_y(
    Xila_graphics_obj_t *obj, int32_t value,
    Xila_graphics_style_selector_t selector) {
  Xila_graphics_call(Xila_graphics_call_obj_set_style_transform_pivot_y, obj,
                     value, selector, 0, 0, 0, 0, 3, NULL);
}
void Xila_graphics_obj_set_style_transform_skew_x(
    Xila_graphics_obj_t *obj, int32_t value,
    Xila_graphics_style_selector_t selector) {
  Xila_graphics_call(Xila_graphics_call_obj_set_style_transform_skew_x, obj,
                     value, selector, 0, 0, 0, 0, 3, NULL);
}
void Xila_graphics_obj_set_style_transform_skew_y(
    Xila_graphics_obj_t *obj, int32_t value,
    Xila_graphics_style_selector_t selector) {
  Xila_graphics_call(Xila_graphics_call_obj_set_style_transform_skew_y, obj,
                     value, selector, 0, 0, 0, 0, 3, NULL);
}
void Xila_graphics_obj_set_style_pad_top(
    Xila_graphics_obj_t *obj, int32_t value,
    Xila_graphics_style_selector_t selector) {
  Xila_graphics_call(Xila_graphics_call_obj_set_style_pad_top, obj, value,
                     selector, 0, 0, 0, 0, 3, NULL);
}
void Xila_graphics_obj_set_style_pad_bottom(
    Xila_graphics_obj_t *obj, int32_t value,
    Xila_graphics_style_selector_t selector) {
  Xila_graphics_call(Xila_graphics_call_obj_set_style_pad_bottom, obj, value,
                     selector, 0, 0, 0, 0, 3, NULL);
}
void Xila_graphics_obj_set_style_pad_left(
    Xila_graphics_obj_t *obj, int32_t value,
    Xila_graphics_style_selector_t selector) {
  Xila_graphics_call(Xila_graphics_call_obj_set_style_pad_left, obj, value,
                     selector, 0, 0, 0, 0, 3, NULL);
}
void Xila_graphics_obj_set_style_pad_right(
    Xila_graphics_obj_t *obj, int32_t value,
    Xila_graphics_style_selector_t selector) {
  Xila_graphics_call(Xila_graphics_call_obj_set_style_pad_right, obj, value,
                     selector, 0, 0, 0, 0, 3, NULL);
}
void Xila_graphics_obj_set_style_pad_row(
    Xila_graphics_obj_t *obj, int32_t value,
    Xila_graphics_style_selector_t selector) {
  Xila_graphics_call(Xila_graphics_call_obj_set_style_pad_row, obj, value,
                     selector, 0, 0, 0, 0, 3, NULL);
}
void Xila_graphics_obj_set_style_pad_column(
    Xila_graphics_obj_t *obj, int32_t value,
    Xila_graphics_style_selector_t selector) {
  Xila_graphics_call(Xila_graphics_call_obj_set_style_pad_column, obj, value,
                     selector, 0, 0, 0, 0, 3, NULL);
}
void Xila_graphics_obj_set_style_margin_top(
    Xila_graphics_obj_t *obj, int32_t value,
    Xila_graphics_style_selector_t selector) {
  Xila_graphics_call(Xila_graphics_call_obj_set_style_margin_top, obj, value,
                     selector, 0, 0, 0, 0, 3, NULL);
}
void Xila_graphics_obj_set_style_margin_bottom(
    Xila_graphics_obj_t *obj, int32_t value,
    Xila_graphics_style_selector_t selector) {
  Xila_graphics_call(Xila_graphics_call_obj_set_style_margin_bottom, obj, value,
                     selector, 0, 0, 0, 0, 3, NULL);
}
void Xila_graphics_obj_set_style_margin_left(
    Xila_graphics_obj_t *obj, int32_t value,
    Xila_graphics_style_selector_t selector) {
  Xila_graphics_call(Xila_graphics_call_obj_set_style_margin_left, obj, value,
                     selector, 0, 0, 0, 0, 3, NULL);
}
void Xila_graphics_obj_set_style_margin_right(
    Xila_graphics_obj_t *obj, int32_t value,
    Xila_graphics_style_selector_t selector) {
  Xila_graphics_call(Xila_graphics_call_obj_set_style_margin_right, obj, value,
                     selector, 0, 0, 0, 0, 3, NULL);
}
void Xila_graphics_obj_set_style_bg_color(
    Xila_graphics_obj_t *obj, Xila_graphics_color_t value,
    Xila_graphics_style_selector_t selector) {
  Xila_graphics_call(Xila_graphics_call_obj_set_style_bg_color, obj,
                     *(size_t *)&value, selector, 0, 0, 0, 0, 3, NULL);
}
void Xila_graphics_obj_set_style_bg_opa(
    Xila_graphics_obj_t *obj, Xila_graphics_opa_t value,
    Xila_graphics_style_selector_t selector) {
  Xila_graphics_call(Xila_graphics_call_obj_set_style_bg_opa, obj, value,
                     selector, 0, 0, 0, 0, 3, NULL);
}
void Xila_graphics_obj_set_style_bg_grad_color(
    Xila_graphics_obj_t *obj, Xila_graphics_color_t value,
    Xila_graphics_style_selector_t selector) {
  Xila_graphics_call(Xila_graphics_call_obj_set_style_bg_grad_color, obj,
                     *(size_t *)&value, selector, 0, 0, 0, 0, 3, NULL);
}
void Xila_graphics_obj_set_style_bg_grad_dir(
    Xila_graphics_obj_t *obj, Xila_graphics_grad_dir_t value,
    Xila_graphics_style_selector_t selector) {
  Xila_graphics_call(Xila_graphics_call_obj_set_style_bg_grad_dir, obj, value,
                     selector, 0, 0, 0, 0, 3, NULL);
}
void Xila_graphics_obj_set_style_bg_main_stop(
    Xila_graphics_obj_t *obj, int32_t value,
    Xila_graphics_style_selector_t selector) {
  Xila_graphics_call(Xila_graphics_call_obj_set_style_bg_main_stop, obj, value,
                     selector, 0, 0, 0, 0, 3, NULL);
}
void Xila_graphics_obj_set_style_bg_grad_stop(
    Xila_graphics_obj_t *obj, int32_t value,
    Xila_graphics_style_selector_t selector) {
  Xila_graphics_call(Xila_graphics_call_obj_set_style_bg_grad_stop, obj, value,
                     selector, 0, 0, 0, 0, 3, NULL);
}
void Xila_graphics_obj_set_style_bg_main_opa(
    Xila_graphics_obj_t *obj, Xila_graphics_opa_t value,
    Xila_graphics_style_selector_t selector) {
  Xila_graphics_call(Xila_graphics_call_obj_set_style_bg_main_opa, obj, value,
                     selector, 0, 0, 0, 0, 3, NULL);
}
void Xila_graphics_obj_set_style_bg_grad_opa(
    Xila_graphics_obj_t *obj, Xila_graphics_opa_t value,
    Xila_graphics_style_selector_t selector) {
  Xila_graphics_call(Xila_graphics_call_obj_set_style_bg_grad_opa, obj, value,
                     selector, 0, 0, 0, 0, 3, NULL);
}
void Xila_graphics_obj_set_style_bg_grad(
    Xila_graphics_obj_t *obj, const Xila_graphics_grad_dsc_t *value,
    Xila_graphics_style_selector_t selector) {
  Xila_graphics_call(Xila_graphics_call_obj_set_style_bg_grad, obj, value,
                     selector, 0, 0, 0, 0, 3, NULL);
}
void Xila_graphics_obj_set_style_bg_image_src(
    Xila_graphics_obj_t *obj, const char *value,
    Xila_graphics_style_selector_t selector) {
  Xila_graphics_call(Xila_graphics_call_obj_set_style_bg_image_src, obj, value,
                     selector, 0, 0, 0, 0, 3, NULL);
}
void Xila_graphics_obj_set_style_bg_image_opa(
    Xila_graphics_obj_t *obj, Xila_graphics_opa_t value,
    Xila_graphics_style_selector_t selector) {
  Xila_graphics_call(Xila_graphics_call_obj_set_style_bg_image_opa, obj, value,
                     selector, 0, 0, 0, 0, 3, NULL);
}
void Xila_graphics_obj_set_style_bg_image_recolor(
    Xila_graphics_obj_t *obj, Xila_graphics_color_t value,
    Xila_graphics_style_selector_t selector) {
  Xila_graphics_call(Xila_graphics_call_obj_set_style_bg_image_recolor, obj,
                     *(size_t *)&value, selector, 0, 0, 0, 0, 3, NULL);
}
void Xila_graphics_obj_set_style_bg_image_recolor_opa(
    Xila_graphics_obj_t *obj, Xila_graphics_opa_t value,
    Xila_graphics_style_selector_t selector) {
  Xila_graphics_call(Xila_graphics_call_obj_set_style_bg_image_recolor_opa, obj,
                     value, selector, 0, 0, 0, 0, 3, NULL);
}
void Xila_graphics_obj_set_style_bg_image_tiled(
    Xila_graphics_obj_t *obj, bool value,
    Xila_graphics_style_selector_t selector) {
  Xila_graphics_call(Xila_graphics_call_obj_set_style_bg_image_tiled, obj,
                     value, selector, 0, 0, 0, 0, 3, NULL);
}
void Xila_graphics_obj_set_style_border_color(
    Xila_graphics_obj_t *obj, Xila_graphics_color_t value,
    Xila_graphics_style_selector_t selector) {
  Xila_graphics_call(Xila_graphics_call_obj_set_style_border_color, obj,
                     *(size_t *)&value, selector, 0, 0, 0, 0, 3, NULL);
}
void Xila_graphics_obj_set_style_border_opa(
    Xila_graphics_obj_t *obj, Xila_graphics_opa_t value,
    Xila_graphics_style_selector_t selector) {
  Xila_graphics_call(Xila_graphics_call_obj_set_style_border_opa, obj, value,
                     selector, 0, 0, 0, 0, 3, NULL);
}
void Xila_graphics_obj_set_style_border_width(
    Xila_graphics_obj_t *obj, int32_t value,
    Xila_graphics_style_selector_t selector) {
  Xila_graphics_call(Xila_graphics_call_obj_set_style_border_width, obj, value,
                     selector, 0, 0, 0, 0, 3, NULL);
}
void Xila_graphics_obj_set_style_border_side(
    Xila_graphics_obj_t *obj, Xila_graphics_border_side_t value,
    Xila_graphics_style_selector_t selector) {
  Xila_graphics_call(Xila_graphics_call_obj_set_style_border_side, obj, value,
                     selector, 0, 0, 0, 0, 3, NULL);
}
void Xila_graphics_obj_set_style_border_post(
    Xila_graphics_obj_t *obj, bool value,
    Xila_graphics_style_selector_t selector) {
  Xila_graphics_call(Xila_graphics_call_obj_set_style_border_post, obj, value,
                     selector, 0, 0, 0, 0, 3, NULL);
}
void Xila_graphics_obj_set_style_outline_width(
    Xila_graphics_obj_t *obj, int32_t value,
    Xila_graphics_style_selector_t selector) {
  Xila_graphics_call(Xila_graphics_call_obj_set_style_outline_width, obj, value,
                     selector, 0, 0, 0, 0, 3, NULL);
}
void Xila_graphics_obj_set_style_outline_color(
    Xila_graphics_obj_t *obj, Xila_graphics_color_t value,
    Xila_graphics_style_selector_t selector) {
  Xila_graphics_call(Xila_graphics_call_obj_set_style_outline_color, obj,
                     *(size_t *)&value, selector, 0, 0, 0, 0, 3, NULL);
}
void Xila_graphics_obj_set_style_outline_opa(
    Xila_graphics_obj_t *obj, Xila_graphics_opa_t value,
    Xila_graphics_style_selector_t selector) {
  Xila_graphics_call(Xila_graphics_call_obj_set_style_outline_opa, obj, value,
                     selector, 0, 0, 0, 0, 3, NULL);
}
void Xila_graphics_obj_set_style_outline_pad(
    Xila_graphics_obj_t *obj, int32_t value,
    Xila_graphics_style_selector_t selector) {
  Xila_graphics_call(Xila_graphics_call_obj_set_style_outline_pad, obj, value,
                     selector, 0, 0, 0, 0, 3, NULL);
}
void Xila_graphics_obj_set_style_shadow_width(
    Xila_graphics_obj_t *obj, int32_t value,
    Xila_graphics_style_selector_t selector) {
  Xila_graphics_call(Xila_graphics_call_obj_set_style_shadow_width, obj, value,
                     selector, 0, 0, 0, 0, 3, NULL);
}
void Xila_graphics_obj_set_style_shadow_offset_x(
    Xila_graphics_obj_t *obj, int32_t value,
    Xila_graphics_style_selector_t selector) {
  Xila_graphics_call(Xila_graphics_call_obj_set_style_shadow_offset_x, obj,
                     value, selector, 0, 0, 0, 0, 3, NULL);
}
void Xila_graphics_obj_set_style_shadow_offset_y(
    Xila_graphics_obj_t *obj, int32_t value,
    Xila_graphics_style_selector_t selector) {
  Xila_graphics_call(Xila_graphics_call_obj_set_style_shadow_offset_y, obj,
                     value, selector, 0, 0, 0, 0, 3, NULL);
}
void Xila_graphics_obj_set_style_shadow_spread(
    Xila_graphics_obj_t *obj, int32_t value,
    Xila_graphics_style_selector_t selector) {
  Xila_graphics_call(Xila_graphics_call_obj_set_style_shadow_spread, obj, value,
                     selector, 0, 0, 0, 0, 3, NULL);
}
void Xila_graphics_obj_set_style_shadow_color(
    Xila_graphics_obj_t *obj, Xila_graphics_color_t value,
    Xila_graphics_style_selector_t selector) {
  Xila_graphics_call(Xila_graphics_call_obj_set_style_shadow_color, obj,
                     *(size_t *)&value, selector, 0, 0, 0, 0, 3, NULL);
}
void Xila_graphics_obj_set_style_shadow_opa(
    Xila_graphics_obj_t *obj, Xila_graphics_opa_t value,
    Xila_graphics_style_selector_t selector) {
  Xila_graphics_call(Xila_graphics_call_obj_set_style_shadow_opa, obj, value,
                     selector, 0, 0, 0, 0, 3, NULL);
}
void Xila_graphics_obj_set_style_image_opa(
    Xila_graphics_obj_t *obj, Xila_graphics_opa_t value,
    Xila_graphics_style_selector_t selector) {
  Xila_graphics_call(Xila_graphics_call_obj_set_style_image_opa, obj, value,
                     selector, 0, 0, 0, 0, 3, NULL);
}
void Xila_graphics_obj_set_style_image_recolor(
    Xila_graphics_obj_t *obj, Xila_graphics_color_t value,
    Xila_graphics_style_selector_t selector) {
  Xila_graphics_call(Xila_graphics_call_obj_set_style_image_recolor, obj,
                     *(size_t *)&value, selector, 0, 0, 0, 0, 3, NULL);
}
void Xila_graphics_obj_set_style_image_recolor_opa(
    Xila_graphics_obj_t *obj, Xila_graphics_opa_t value,
    Xila_graphics_style_selector_t selector) {
  Xila_graphics_call(Xila_graphics_call_obj_set_style_image_recolor_opa, obj,
                     value, selector, 0, 0, 0, 0, 3, NULL);
}
void Xila_graphics_obj_set_style_line_width(
    Xila_graphics_obj_t *obj, int32_t value,
    Xila_graphics_style_selector_t selector) {
  Xila_graphics_call(Xila_graphics_call_obj_set_style_line_width, obj, value,
                     selector, 0, 0, 0, 0, 3, NULL);
}
void Xila_graphics_obj_set_style_line_dash_width(
    Xila_graphics_obj_t *obj, int32_t value,
    Xila_graphics_style_selector_t selector) {
  Xila_graphics_call(Xila_graphics_call_obj_set_style_line_dash_width, obj,
                     value, selector, 0, 0, 0, 0, 3, NULL);
}
void Xila_graphics_obj_set_style_line_dash_gap(
    Xila_graphics_obj_t *obj, int32_t value,
    Xila_graphics_style_selector_t selector) {
  Xila_graphics_call(Xila_graphics_call_obj_set_style_line_dash_gap, obj, value,
                     selector, 0, 0, 0, 0, 3, NULL);
}
void Xila_graphics_obj_set_style_line_rounded(
    Xila_graphics_obj_t *obj, bool value,
    Xila_graphics_style_selector_t selector) {
  Xila_graphics_call(Xila_graphics_call_obj_set_style_line_rounded, obj, value,
                     selector, 0, 0, 0, 0, 3, NULL);
}
void Xila_graphics_obj_set_style_line_color(
    Xila_graphics_obj_t *obj, Xila_graphics_color_t value,
    Xila_graphics_style_selector_t selector) {
  Xila_graphics_call(Xila_graphics_call_obj_set_style_line_color, obj,
                     *(size_t *)&value, selector, 0, 0, 0, 0, 3, NULL);
}
void Xila_graphics_obj_set_style_line_opa(
    Xila_graphics_obj_t *obj, Xila_graphics_opa_t value,
    Xila_graphics_style_selector_t selector) {
  Xila_graphics_call(Xila_graphics_call_obj_set_style_line_opa, obj, value,
                     selector, 0, 0, 0, 0, 3, NULL);
}
void Xila_graphics_obj_set_style_arc_width(
    Xila_graphics_obj_t *obj, int32_t value,
    Xila_graphics_style_selector_t selector) {
  Xila_graphics_call(Xila_graphics_call_obj_set_style_arc_width, obj, value,
                     selector, 0, 0, 0, 0, 3, NULL);
}
void Xila_graphics_obj_set_style_arc_rounded(
    Xila_graphics_obj_t *obj, bool value,
    Xila_graphics_style_selector_t selector) {
  Xila_graphics_call(Xila_graphics_call_obj_set_style_arc_rounded, obj, value,
                     selector, 0, 0, 0, 0, 3, NULL);
}
void Xila_graphics_obj_set_style_arc_color(
    Xila_graphics_obj_t *obj, Xila_graphics_color_t value,
    Xila_graphics_style_selector_t selector) {
  Xila_graphics_call(Xila_graphics_call_obj_set_style_arc_color, obj,
                     *(size_t *)&value, selector, 0, 0, 0, 0, 3, NULL);
}
void Xila_graphics_obj_set_style_arc_opa(
    Xila_graphics_obj_t *obj, Xila_graphics_opa_t value,
    Xila_graphics_style_selector_t selector) {
  Xila_graphics_call(Xila_graphics_call_obj_set_style_arc_opa, obj, value,
                     selector, 0, 0, 0, 0, 3, NULL);
}
void Xila_graphics_obj_set_style_arc_image_src(
    Xila_graphics_obj_t *obj, const char *value,
    Xila_graphics_style_selector_t selector) {
  Xila_graphics_call(Xila_graphics_call_obj_set_style_arc_image_src, obj, value,
                     selector, 0, 0, 0, 0, 3, NULL);
}
void Xila_graphics_obj_set_style_text_color(
    Xila_graphics_obj_t *obj, Xila_graphics_color_t value,
    Xila_graphics_style_selector_t selector) {
  Xila_graphics_call(Xila_graphics_call_obj_set_style_text_color, obj,
                     *(size_t *)&value, selector, 0, 0, 0, 0, 3, NULL);
}
void Xila_graphics_obj_set_style_text_opa(
    Xila_graphics_obj_t *obj, Xila_graphics_opa_t value,
    Xila_graphics_style_selector_t selector) {
  Xila_graphics_call(Xila_graphics_call_obj_set_style_text_opa, obj, value,
                     selector, 0, 0, 0, 0, 3, NULL);
}
void Xila_graphics_obj_set_style_text_font(
    Xila_graphics_obj_t *obj, const Xila_graphics_font_t *value,
    Xila_graphics_style_selector_t selector) {
  Xila_graphics_call(Xila_graphics_call_obj_set_style_text_font, obj, value,
                     selector, 0, 0, 0, 0, 3, NULL);
}
void Xila_graphics_obj_set_style_text_letter_space(
    Xila_graphics_obj_t *obj, int32_t value,
    Xila_graphics_style_selector_t selector) {
  Xila_graphics_call(Xila_graphics_call_obj_set_style_text_letter_space, obj,
                     value, selector, 0, 0, 0, 0, 3, NULL);
}
void Xila_graphics_obj_set_style_text_line_space(
    Xila_graphics_obj_t *obj, int32_t value,
    Xila_graphics_style_selector_t selector) {
  Xila_graphics_call(Xila_graphics_call_obj_set_style_text_line_space, obj,
                     value, selector, 0, 0, 0, 0, 3, NULL);
}
void Xila_graphics_obj_set_style_text_decor(
    Xila_graphics_obj_t *obj, Xila_graphics_text_decor_t value,
    Xila_graphics_style_selector_t selector) {
  Xila_graphics_call(Xila_graphics_call_obj_set_style_text_decor, obj, value,
                     selector, 0, 0, 0, 0, 3, NULL);
}
void Xila_graphics_obj_set_style_text_align(
    Xila_graphics_obj_t *obj, Xila_graphics_text_align_t value,
    Xila_graphics_style_selector_t selector) {
  Xila_graphics_call(Xila_graphics_call_obj_set_style_text_align, obj, value,
                     selector, 0, 0, 0, 0, 3, NULL);
}
void Xila_graphics_obj_set_style_radius(
    Xila_graphics_obj_t *obj, int32_t value,
    Xila_graphics_style_selector_t selector) {
  Xila_graphics_call(Xila_graphics_call_obj_set_style_radius, obj, value,
                     selector, 0, 0, 0, 0, 3, NULL);
}
void Xila_graphics_obj_set_style_clip_corner(
    Xila_graphics_obj_t *obj, bool value,
    Xila_graphics_style_selector_t selector) {
  Xila_graphics_call(Xila_graphics_call_obj_set_style_clip_corner, obj, value,
                     selector, 0, 0, 0, 0, 3, NULL);
}
void Xila_graphics_obj_set_style_opa(Xila_graphics_obj_t *obj,
                                     Xila_graphics_opa_t value,
                                     Xila_graphics_style_selector_t selector) {
  Xila_graphics_call(Xila_graphics_call_obj_set_style_opa, obj, value, selector,
                     0, 0, 0, 0, 3, NULL);
}
void Xila_graphics_obj_set_style_opa_layered(
    Xila_graphics_obj_t *obj, Xila_graphics_opa_t value,
    Xila_graphics_style_selector_t selector) {
  Xila_graphics_call(Xila_graphics_call_obj_set_style_opa_layered, obj, value,
                     selector, 0, 0, 0, 0, 3, NULL);
}
void Xila_graphics_obj_set_style_color_filter_dsc(
    Xila_graphics_obj_t *obj, const Xila_graphics_color_filter_dsc_t *value,
    Xila_graphics_style_selector_t selector) {
  Xila_graphics_call(Xila_graphics_call_obj_set_style_color_filter_dsc, obj,
                     value, selector, 0, 0, 0, 0, 3, NULL);
}
void Xila_graphics_obj_set_style_color_filter_opa(
    Xila_graphics_obj_t *obj, Xila_graphics_opa_t value,
    Xila_graphics_style_selector_t selector) {
  Xila_graphics_call(Xila_graphics_call_obj_set_style_color_filter_opa, obj,
                     value, selector, 0, 0, 0, 0, 3, NULL);
}
void Xila_graphics_obj_set_style_anim(Xila_graphics_obj_t *obj,
                                      const Xila_graphics_anim_t *value,
                                      Xila_graphics_style_selector_t selector) {
  Xila_graphics_call(Xila_graphics_call_obj_set_style_anim, obj, value,
                     selector, 0, 0, 0, 0, 3, NULL);
}
void Xila_graphics_obj_set_style_anim_duration(
    Xila_graphics_obj_t *obj, uint32_t value,
    Xila_graphics_style_selector_t selector) {
  Xila_graphics_call(Xila_graphics_call_obj_set_style_anim_duration, obj, value,
                     selector, 0, 0, 0, 0, 3, NULL);
}
void Xila_graphics_obj_set_style_transition(
    Xila_graphics_obj_t *obj, const Xila_graphics_style_transition_dsc_t *value,
    Xila_graphics_style_selector_t selector) {
  Xila_graphics_call(Xila_graphics_call_obj_set_style_transition, obj, value,
                     selector, 0, 0, 0, 0, 3, NULL);
}
void Xila_graphics_obj_set_style_blend_mode(
    Xila_graphics_obj_t *obj, Xila_graphics_blend_mode_t value,
    Xila_graphics_style_selector_t selector) {
  Xila_graphics_call(Xila_graphics_call_obj_set_style_blend_mode, obj, value,
                     selector, 0, 0, 0, 0, 3, NULL);
}
void Xila_graphics_obj_set_style_layout(
    Xila_graphics_obj_t *obj, uint16_t value,
    Xila_graphics_style_selector_t selector) {
  Xila_graphics_call(Xila_graphics_call_obj_set_style_layout, obj, value,
                     selector, 0, 0, 0, 0, 3, NULL);
}
void Xila_graphics_obj_set_style_base_dir(
    Xila_graphics_obj_t *obj, Xila_graphics_base_dir_t value,
    Xila_graphics_style_selector_t selector) {
  Xila_graphics_call(Xila_graphics_call_obj_set_style_base_dir, obj, value,
                     selector, 0, 0, 0, 0, 3, NULL);
}
void Xila_graphics_obj_set_style_bitmap_mask_src(
    Xila_graphics_obj_t *obj, const char *value,
    Xila_graphics_style_selector_t selector) {
  Xila_graphics_call(Xila_graphics_call_obj_set_style_bitmap_mask_src, obj,
                     value, selector, 0, 0, 0, 0, 3, NULL);
}
void Xila_graphics_obj_set_style_rotary_sensitivity(
    Xila_graphics_obj_t *obj, uint32_t value,
    Xila_graphics_style_selector_t selector) {
  Xila_graphics_call(Xila_graphics_call_obj_set_style_rotary_sensitivity, obj,
                     value, selector, 0, 0, 0, 0, 3, NULL);
}
void Xila_graphics_obj_set_style_flex_flow(
    Xila_graphics_obj_t *obj, Xila_graphics_flex_flow_t value,
    Xila_graphics_style_selector_t selector) {
  Xila_graphics_call(Xila_graphics_call_obj_set_style_flex_flow, obj, value,
                     selector, 0, 0, 0, 0, 3, NULL);
}
void Xila_graphics_obj_set_style_flex_main_place(
    Xila_graphics_obj_t *obj, Xila_graphics_flex_align_t value,
    Xila_graphics_style_selector_t selector) {
  Xila_graphics_call(Xila_graphics_call_obj_set_style_flex_main_place, obj,
                     value, selector, 0, 0, 0, 0, 3, NULL);
}
void Xila_graphics_obj_set_style_flex_cross_place(
    Xila_graphics_obj_t *obj, Xila_graphics_flex_align_t value,
    Xila_graphics_style_selector_t selector) {
  Xila_graphics_call(Xila_graphics_call_obj_set_style_flex_cross_place, obj,
                     value, selector, 0, 0, 0, 0, 3, NULL);
}
void Xila_graphics_obj_set_style_flex_track_place(
    Xila_graphics_obj_t *obj, Xila_graphics_flex_align_t value,
    Xila_graphics_style_selector_t selector) {
  Xila_graphics_call(Xila_graphics_call_obj_set_style_flex_track_place, obj,
                     value, selector, 0, 0, 0, 0, 3, NULL);
}
void Xila_graphics_obj_set_style_flex_grow(
    Xila_graphics_obj_t *obj, uint8_t value,
    Xila_graphics_style_selector_t selector) {
  Xila_graphics_call(Xila_graphics_call_obj_set_style_flex_grow, obj, value,
                     selector, 0, 0, 0, 0, 3, NULL);
}
void Xila_graphics_obj_set_style_grid_column_dsc_array(
    Xila_graphics_obj_t *obj, const int32_t *value,
    Xila_graphics_style_selector_t selector) {
  Xila_graphics_call(Xila_graphics_call_obj_set_style_grid_column_dsc_array,
                     obj, value, selector, 0, 0, 0, 0, 3, NULL);
}
void Xila_graphics_obj_set_style_grid_column_align(
    Xila_graphics_obj_t *obj, Xila_graphics_grid_align_t value,
    Xila_graphics_style_selector_t selector) {
  Xila_graphics_call(Xila_graphics_call_obj_set_style_grid_column_align, obj,
                     value, selector, 0, 0, 0, 0, 3, NULL);
}
void Xila_graphics_obj_set_style_grid_row_dsc_array(
    Xila_graphics_obj_t *obj, const int32_t *value,
    Xila_graphics_style_selector_t selector) {
  Xila_graphics_call(Xila_graphics_call_obj_set_style_grid_row_dsc_array, obj,
                     value, selector, 0, 0, 0, 0, 3, NULL);
}
void Xila_graphics_obj_set_style_grid_row_align(
    Xila_graphics_obj_t *obj, Xila_graphics_grid_align_t value,
    Xila_graphics_style_selector_t selector) {
  Xila_graphics_call(Xila_graphics_call_obj_set_style_grid_row_align, obj,
                     value, selector, 0, 0, 0, 0, 3, NULL);
}
void Xila_graphics_obj_set_style_grid_cell_column_pos(
    Xila_graphics_obj_t *obj, int32_t value,
    Xila_graphics_style_selector_t selector) {
  Xila_graphics_call(Xila_graphics_call_obj_set_style_grid_cell_column_pos, obj,
                     value, selector, 0, 0, 0, 0, 3, NULL);
}
void Xila_graphics_obj_set_style_grid_cell_x_align(
    Xila_graphics_obj_t *obj, Xila_graphics_grid_align_t value,
    Xila_graphics_style_selector_t selector) {
  Xila_graphics_call(Xila_graphics_call_obj_set_style_grid_cell_x_align, obj,
                     value, selector, 0, 0, 0, 0, 3, NULL);
}
void Xila_graphics_obj_set_style_grid_cell_column_span(
    Xila_graphics_obj_t *obj, int32_t value,
    Xila_graphics_style_selector_t selector) {
  Xila_graphics_call(Xila_graphics_call_obj_set_style_grid_cell_column_span,
                     obj, value, selector, 0, 0, 0, 0, 3, NULL);
}
void Xila_graphics_obj_set_style_grid_cell_row_pos(
    Xila_graphics_obj_t *obj, int32_t value,
    Xila_graphics_style_selector_t selector) {
  Xila_graphics_call(Xila_graphics_call_obj_set_style_grid_cell_row_pos, obj,
                     value, selector, 0, 0, 0, 0, 3, NULL);
}
void Xila_graphics_obj_set_style_grid_cell_y_align(
    Xila_graphics_obj_t *obj, Xila_graphics_grid_align_t value,
    Xila_graphics_style_selector_t selector) {
  Xila_graphics_call(Xila_graphics_call_obj_set_style_grid_cell_y_align, obj,
                     value, selector, 0, 0, 0, 0, 3, NULL);
}
void Xila_graphics_obj_set_style_grid_cell_row_span(
    Xila_graphics_obj_t *obj, int32_t value,
    Xila_graphics_style_selector_t selector) {
  Xila_graphics_call(Xila_graphics_call_obj_set_style_grid_cell_row_span, obj,
                     value, selector, 0, 0, 0, 0, 3, NULL);
}
Xila_graphics_text_align_t
Xila_graphics_obj_calculate_style_text_align(const Xila_graphics_obj_t *obj,
                                             Xila_graphics_part_t part,
                                             const char *txt) {
  Xila_graphics_call(Xila_graphics_call_obj_calculate_style_text_align, obj,
                     part, txt, 0, 0, 0, 0, 3, NULL);
}
Xila_graphics_opa_t
Xila_graphics_obj_get_style_opa_recursive(const Xila_graphics_obj_t *obj,
                                          Xila_graphics_part_t part) {
  Xila_graphics_call(Xila_graphics_call_obj_get_style_opa_recursive, obj, part,
                     0, 0, 0, 0, 0, 2, NULL);
}
void Xila_graphics_obj_init_draw_rect_dsc(
    Xila_graphics_obj_t *obj, Xila_graphics_part_t part,
    Xila_graphics_draw_rect_dsc_t *draw_dsc) {
  Xila_graphics_call(Xila_graphics_call_obj_init_draw_rect_dsc, obj, part,
                     draw_dsc, 0, 0, 0, 0, 3, NULL);
}
void Xila_graphics_obj_init_draw_label_dsc(
    Xila_graphics_obj_t *obj, Xila_graphics_part_t part,
    Xila_graphics_draw_label_dsc_t *draw_dsc) {
  Xila_graphics_call(Xila_graphics_call_obj_init_draw_label_dsc, obj, part,
                     draw_dsc, 0, 0, 0, 0, 3, NULL);
}
void Xila_graphics_obj_init_draw_image_dsc(
    Xila_graphics_obj_t *obj, Xila_graphics_part_t part,
    Xila_graphics_draw_image_dsc_t *draw_dsc) {
  Xila_graphics_call(Xila_graphics_call_obj_init_draw_image_dsc, obj, part,
                     draw_dsc, 0, 0, 0, 0, 3, NULL);
}
void Xila_graphics_obj_init_draw_line_dsc(
    Xila_graphics_obj_t *obj, Xila_graphics_part_t part,
    Xila_graphics_draw_line_dsc_t *draw_dsc) {
  Xila_graphics_call(Xila_graphics_call_obj_init_draw_line_dsc, obj, part,
                     draw_dsc, 0, 0, 0, 0, 3, NULL);
}
void Xila_graphics_obj_init_draw_arc_dsc(
    Xila_graphics_obj_t *obj, Xila_graphics_part_t part,
    Xila_graphics_draw_arc_dsc_t *draw_dsc) {
  Xila_graphics_call(Xila_graphics_call_obj_init_draw_arc_dsc, obj, part,
                     draw_dsc, 0, 0, 0, 0, 3, NULL);
}
int32_t Xila_graphics_obj_calculate_ext_draw_size(Xila_graphics_obj_t *obj,
                                                  Xila_graphics_part_t part) {
  Xila_graphics_call(Xila_graphics_call_obj_calculate_ext_draw_size, obj, part,
                     0, 0, 0, 0, 0, 2, NULL);
}
void Xila_graphics_obj_refresh_ext_draw_size(Xila_graphics_obj_t *obj) {
  Xila_graphics_call(Xila_graphics_call_obj_refresh_ext_draw_size, obj, 0, 0, 0,
                     0, 0, 0, 1, NULL);
}
Xila_graphics_obj_t *
Xila_graphics_obj_class_create_obj(const Xila_graphics_obj_class_t *class_p,
                                   Xila_graphics_obj_t *parent) {
  Xila_graphics_call(Xila_graphics_call_obj_class_create_obj, class_p, parent,
                     0, 0, 0, 0, 0, 2, NULL);
}
void Xila_graphics_obj_class_init_obj(Xila_graphics_obj_t *obj) {
  Xila_graphics_call(Xila_graphics_call_obj_class_init_obj, obj, 0, 0, 0, 0, 0,
                     0, 1, NULL);
}
bool Xila_graphics_obj_is_editable(Xila_graphics_obj_t *obj) {
  Xila_graphics_call(Xila_graphics_call_obj_is_editable, obj, 0, 0, 0, 0, 0, 0,
                     1, NULL);
}
bool Xila_graphics_obj_is_group_def(Xila_graphics_obj_t *obj) {
  Xila_graphics_call(Xila_graphics_call_obj_is_group_def, obj, 0, 0, 0, 0, 0, 0,
                     1, NULL);
}
Xila_graphics_result_t
Xila_graphics_obj_send_event(Xila_graphics_obj_t *obj,
                             Xila_graphics_event_code_t event_code,
                             char *param) {
  Xila_graphics_call(Xila_graphics_call_obj_send_event, obj, event_code, param,
                     0, 0, 0, 0, 3, NULL);
}
Xila_graphics_result_t
Xila_graphics_obj_event_base(const Xila_graphics_obj_class_t *class_p,
                             Xila_graphics_event_t *e) {
  Xila_graphics_call(Xila_graphics_call_obj_event_base, class_p, e, 0, 0, 0, 0,
                     0, 2, NULL);
}
Xila_graphics_event_dsc_t *Xila_graphics_obj_add_event_cb(
    Xila_graphics_obj_t *obj, Xila_graphics_event_cb_t event_cb,
    Xila_graphics_event_code_t filter, char *user_data) {
  Xila_graphics_call(Xila_graphics_call_obj_add_event_cb, obj, event_cb, filter,
                     user_data, 0, 0, 0, 4, NULL);
}
uint32_t Xila_graphics_obj_get_event_count(Xila_graphics_obj_t *obj) {
  Xila_graphics_call(Xila_graphics_call_obj_get_event_count, obj, 0, 0, 0, 0, 0,
                     0, 1, NULL);
}
Xila_graphics_event_dsc_t *
Xila_graphics_obj_get_event_dsc(Xila_graphics_obj_t *obj, uint32_t index) {
  Xila_graphics_call(Xila_graphics_call_obj_get_event_dsc, obj, index, 0, 0, 0,
                     0, 0, 2, NULL);
}
bool Xila_graphics_obj_remove_event(Xila_graphics_obj_t *obj, uint32_t index) {
  Xila_graphics_call(Xila_graphics_call_obj_remove_event, obj, index, 0, 0, 0,
                     0, 0, 2, NULL);
}
bool Xila_graphics_obj_remove_event_cb(Xila_graphics_obj_t *obj,
                                       Xila_graphics_event_cb_t event_cb) {
  Xila_graphics_call(Xila_graphics_call_obj_remove_event_cb, obj, event_cb, 0,
                     0, 0, 0, 0, 2, NULL);
}
bool Xila_graphics_obj_remove_event_dsc(Xila_graphics_obj_t *obj,
                                        Xila_graphics_event_dsc_t *dsc) {
  Xila_graphics_call(Xila_graphics_call_obj_remove_event_dsc, obj, dsc, 0, 0, 0,
                     0, 0, 2, NULL);
}
uint32_t Xila_graphics_obj_remove_event_cb_with_user_data(
    Xila_graphics_obj_t *obj, Xila_graphics_event_cb_t event_cb,
    char *user_data) {
  Xila_graphics_call(Xila_graphics_call_obj_remove_event_cb_with_user_data, obj,
                     event_cb, user_data, 0, 0, 0, 0, 3, NULL);
}
Xila_graphics_obj_t *Xila_graphics_obj_create(Xila_graphics_obj_t *parent) {
  Xila_graphics_call(Xila_graphics_call_obj_create, parent, 0, 0, 0, 0, 0, 0, 1,
                     NULL);
}
void Xila_graphics_obj_add_flag(Xila_graphics_obj_t *obj,
                                Xila_graphics_obj_flag_t f) {
  Xila_graphics_call(Xila_graphics_call_obj_add_flag, obj, f, 0, 0, 0, 0, 0, 2,
                     NULL);
}
void Xila_graphics_obj_remove_flag(Xila_graphics_obj_t *obj,
                                   Xila_graphics_obj_flag_t f) {
  Xila_graphics_call(Xila_graphics_call_obj_remove_flag, obj, f, 0, 0, 0, 0, 0,
                     2, NULL);
}
void Xila_graphics_obj_update_flag(Xila_graphics_obj_t *obj,
                                   Xila_graphics_obj_flag_t f, bool v) {
  Xila_graphics_call(Xila_graphics_call_obj_update_flag, obj, f, v, 0, 0, 0, 0,
                     3, NULL);
}
void Xila_graphics_obj_add_state(Xila_graphics_obj_t *obj,
                                 Xila_graphics_state_t state) {
  Xila_graphics_call(Xila_graphics_call_obj_add_state, obj, state, 0, 0, 0, 0,
                     0, 2, NULL);
}
void Xila_graphics_obj_remove_state(Xila_graphics_obj_t *obj,
                                    Xila_graphics_state_t state) {
  Xila_graphics_call(Xila_graphics_call_obj_remove_state, obj, state, 0, 0, 0,
                     0, 0, 2, NULL);
}
void Xila_graphics_obj_set_state(Xila_graphics_obj_t *obj,
                                 Xila_graphics_state_t state, bool v) {
  Xila_graphics_call(Xila_graphics_call_obj_set_state, obj, state, v, 0, 0, 0,
                     0, 3, NULL);
}
void Xila_graphics_obj_set_user_data(Xila_graphics_obj_t *obj,
                                     char *user_data) {
  Xila_graphics_call(Xila_graphics_call_obj_set_user_data, obj, user_data, 0, 0,
                     0, 0, 0, 2, NULL);
}
bool Xila_graphics_obj_has_flag(const Xila_graphics_obj_t *obj,
                                Xila_graphics_obj_flag_t f) {
  Xila_graphics_call(Xila_graphics_call_obj_has_flag, obj, f, 0, 0, 0, 0, 0, 2,
                     NULL);
}
bool Xila_graphics_obj_has_flag_any(const Xila_graphics_obj_t *obj,
                                    Xila_graphics_obj_flag_t f) {
  Xila_graphics_call(Xila_graphics_call_obj_has_flag_any, obj, f, 0, 0, 0, 0, 0,
                     2, NULL);
}
Xila_graphics_state_t
Xila_graphics_obj_get_state(const Xila_graphics_obj_t *obj) {
  Xila_graphics_call(Xila_graphics_call_obj_get_state, obj, 0, 0, 0, 0, 0, 0, 1,
                     NULL);
}
bool Xila_graphics_obj_has_state(const Xila_graphics_obj_t *obj,
                                 Xila_graphics_state_t state) {
  Xila_graphics_call(Xila_graphics_call_obj_has_state, obj, state, 0, 0, 0, 0,
                     0, 2, NULL);
}
Xila_graphics_group_t *
Xila_graphics_obj_get_group(const Xila_graphics_obj_t *obj) {
  Xila_graphics_call(Xila_graphics_call_obj_get_group, obj, 0, 0, 0, 0, 0, 0, 1,
                     NULL);
}
char *Xila_graphics_obj_get_user_data(Xila_graphics_obj_t *obj) {
  Xila_graphics_call(Xila_graphics_call_obj_get_user_data, obj, 0, 0, 0, 0, 0,
                     0, 1, NULL);
}
void Xila_graphics_obj_allocate_spec_attr(Xila_graphics_obj_t *obj) {
  Xila_graphics_call(Xila_graphics_call_obj_allocate_spec_attr, obj, 0, 0, 0, 0,
                     0, 0, 1, NULL);
}
bool Xila_graphics_obj_check_type(const Xila_graphics_obj_t *obj,
                                  const Xila_graphics_obj_class_t *class_p) {
  Xila_graphics_call(Xila_graphics_call_obj_check_type, obj, class_p, 0, 0, 0,
                     0, 0, 2, NULL);
}
bool Xila_graphics_obj_has_class(const Xila_graphics_obj_t *obj,
                                 const Xila_graphics_obj_class_t *class_p) {
  Xila_graphics_call(Xila_graphics_call_obj_has_class, obj, class_p, 0, 0, 0, 0,
                     0, 2, NULL);
}
const Xila_graphics_obj_class_t *
Xila_graphics_obj_get_class(const Xila_graphics_obj_t *obj) {
  Xila_graphics_call(Xila_graphics_call_obj_get_class, obj, 0, 0, 0, 0, 0, 0, 1,
                     NULL);
}
bool Xila_graphics_obj_is_valid(const Xila_graphics_obj_t *obj) {
  Xila_graphics_call(Xila_graphics_call_obj_is_valid, obj, 0, 0, 0, 0, 0, 0, 1,
                     NULL);
}
void Xila_graphics_obj_null_on_delete(Xila_graphics_obj_t **obj_ptr) {
  Xila_graphics_call(Xila_graphics_call_obj_null_on_delete, obj_ptr, 0, 0, 0, 0,
                     0, 0, 1, NULL);
}
void Xila_graphics_obj_redraw(Xila_graphics_layer_t *layer,
                              Xila_graphics_obj_t *obj) {
  Xila_graphics_call(Xila_graphics_call_obj_redraw, layer, obj, 0, 0, 0, 0, 0,
                     2, NULL);
}
Xila_graphics_obj_t *Xila_graphics_arc_create(Xila_graphics_obj_t *parent) {
  Xila_graphics_call(Xila_graphics_call_arc_create, parent, 0, 0, 0, 0, 0, 0, 1,
                     NULL);
}
void Xila_graphics_arc_set_start_angle(Xila_graphics_obj_t *obj,
                                       Xila_graphics_value_precise_t start) {
  Xila_graphics_call(Xila_graphics_call_arc_set_start_angle, obj, start, 0, 0,
                     0, 0, 0, 2, NULL);
}
void Xila_graphics_arc_set_end_angle(Xila_graphics_obj_t *obj,
                                     Xila_graphics_value_precise_t end) {
  Xila_graphics_call(Xila_graphics_call_arc_set_end_angle, obj, end, 0, 0, 0, 0,
                     0, 2, NULL);
}
void Xila_graphics_arc_set_angles(Xila_graphics_obj_t *obj,
                                  Xila_graphics_value_precise_t start,
                                  Xila_graphics_value_precise_t end) {
  Xila_graphics_call(Xila_graphics_call_arc_set_angles, obj, start, end, 0, 0,
                     0, 0, 3, NULL);
}
void Xila_graphics_arc_set_bg_start_angle(Xila_graphics_obj_t *obj,
                                          Xila_graphics_value_precise_t start) {
  Xila_graphics_call(Xila_graphics_call_arc_set_bg_start_angle, obj, start, 0,
                     0, 0, 0, 0, 2, NULL);
}
void Xila_graphics_arc_set_bg_end_angle(Xila_graphics_obj_t *obj,
                                        Xila_graphics_value_precise_t end) {
  Xila_graphics_call(Xila_graphics_call_arc_set_bg_end_angle, obj, end, 0, 0, 0,
                     0, 0, 2, NULL);
}
void Xila_graphics_arc_set_bg_angles(Xila_graphics_obj_t *obj,
                                     Xila_graphics_value_precise_t start,
                                     Xila_graphics_value_precise_t end) {
  Xila_graphics_call(Xila_graphics_call_arc_set_bg_angles, obj, start, end, 0,
                     0, 0, 0, 3, NULL);
}
void Xila_graphics_arc_set_rotation(Xila_graphics_obj_t *obj,
                                    int32_t rotation) {
  Xila_graphics_call(Xila_graphics_call_arc_set_rotation, obj, rotation, 0, 0,
                     0, 0, 0, 2, NULL);
}
void Xila_graphics_arc_set_mode(Xila_graphics_obj_t *obj,
                                Xila_graphics_arc_mode_t type_) {
  Xila_graphics_call(Xila_graphics_call_arc_set_mode, obj, type_, 0, 0, 0, 0, 0,
                     2, NULL);
}
void Xila_graphics_arc_set_value(Xila_graphics_obj_t *obj, int32_t value) {
  Xila_graphics_call(Xila_graphics_call_arc_set_value, obj, value, 0, 0, 0, 0,
                     0, 2, NULL);
}
void Xila_graphics_arc_set_range(Xila_graphics_obj_t *obj, int32_t min,
                                 int32_t max) {
  Xila_graphics_call(Xila_graphics_call_arc_set_range, obj, min, max, 0, 0, 0,
                     0, 3, NULL);
}
void Xila_graphics_arc_set_change_rate(Xila_graphics_obj_t *obj,
                                       uint32_t rate) {
  Xila_graphics_call(Xila_graphics_call_arc_set_change_rate, obj, rate, 0, 0, 0,
                     0, 0, 2, NULL);
}
void Xila_graphics_arc_set_knob_offset(Xila_graphics_obj_t *obj,
                                       int32_t offset) {
  Xila_graphics_call(Xila_graphics_call_arc_set_knob_offset, obj, offset, 0, 0,
                     0, 0, 0, 2, NULL);
}
Xila_graphics_value_precise_t
Xila_graphics_arc_get_angle_start(Xila_graphics_obj_t *obj) {
  Xila_graphics_call(Xila_graphics_call_arc_get_angle_start, obj, 0, 0, 0, 0, 0,
                     0, 1, NULL);
}
Xila_graphics_value_precise_t
Xila_graphics_arc_get_angle_end(Xila_graphics_obj_t *obj) {
  Xila_graphics_call(Xila_graphics_call_arc_get_angle_end, obj, 0, 0, 0, 0, 0,
                     0, 1, NULL);
}
Xila_graphics_value_precise_t
Xila_graphics_arc_get_bg_angle_start(Xila_graphics_obj_t *obj) {
  Xila_graphics_call(Xila_graphics_call_arc_get_bg_angle_start, obj, 0, 0, 0, 0,
                     0, 0, 1, NULL);
}
Xila_graphics_value_precise_t
Xila_graphics_arc_get_bg_angle_end(Xila_graphics_obj_t *obj) {
  Xila_graphics_call(Xila_graphics_call_arc_get_bg_angle_end, obj, 0, 0, 0, 0,
                     0, 0, 1, NULL);
}
int32_t Xila_graphics_arc_get_value(const Xila_graphics_obj_t *obj) {
  Xila_graphics_call(Xila_graphics_call_arc_get_value, obj, 0, 0, 0, 0, 0, 0, 1,
                     NULL);
}
int32_t Xila_graphics_arc_get_min_value(const Xila_graphics_obj_t *obj) {
  Xila_graphics_call(Xila_graphics_call_arc_get_min_value, obj, 0, 0, 0, 0, 0,
                     0, 1, NULL);
}
int32_t Xila_graphics_arc_get_max_value(const Xila_graphics_obj_t *obj) {
  Xila_graphics_call(Xila_graphics_call_arc_get_max_value, obj, 0, 0, 0, 0, 0,
                     0, 1, NULL);
}
Xila_graphics_arc_mode_t
Xila_graphics_arc_get_mode(const Xila_graphics_obj_t *obj) {
  Xila_graphics_call(Xila_graphics_call_arc_get_mode, obj, 0, 0, 0, 0, 0, 0, 1,
                     NULL);
}
int32_t Xila_graphics_arc_get_rotation(const Xila_graphics_obj_t *obj) {
  Xila_graphics_call(Xila_graphics_call_arc_get_rotation, obj, 0, 0, 0, 0, 0, 0,
                     1, NULL);
}
int32_t Xila_graphics_arc_get_knob_offset(const Xila_graphics_obj_t *obj) {
  Xila_graphics_call(Xila_graphics_call_arc_get_knob_offset, obj, 0, 0, 0, 0, 0,
                     0, 1, NULL);
}
void Xila_graphics_arc_align_obj_to_angle(const Xila_graphics_obj_t *obj,
                                          Xila_graphics_obj_t *obj_to_align,
                                          int32_t r_offset) {
  Xila_graphics_call(Xila_graphics_call_arc_align_obj_to_angle, obj,
                     obj_to_align, r_offset, 0, 0, 0, 0, 3, NULL);
}
void Xila_graphics_arc_rotate_obj_to_angle(const Xila_graphics_obj_t *obj,
                                           Xila_graphics_obj_t *obj_to_rotate,
                                           int32_t r_offset) {
  Xila_graphics_call(Xila_graphics_call_arc_rotate_obj_to_angle, obj,
                     obj_to_rotate, r_offset, 0, 0, 0, 0, 3, NULL);
}
Xila_graphics_obj_t *
Xila_graphics_buttonmatrix_create(Xila_graphics_obj_t *parent) {
  Xila_graphics_call(Xila_graphics_call_buttonmatrix_create, parent, 0, 0, 0, 0,
                     0, 0, 1, NULL);
}
void Xila_graphics_buttonmatrix_set_map(Xila_graphics_obj_t *obj,
                                        const char **map) {
  Xila_graphics_call(Xila_graphics_call_buttonmatrix_set_map, obj, map, 0, 0, 0,
                     0, 0, 2, NULL);
}
void Xila_graphics_buttonmatrix_set_ctrl_map(
    Xila_graphics_obj_t *obj,
    const Xila_graphics_buttonmatrix_ctrl_t *ctrl_map) {
  Xila_graphics_call(Xila_graphics_call_buttonmatrix_set_ctrl_map, obj,
                     ctrl_map, 0, 0, 0, 0, 0, 2, NULL);
}
void Xila_graphics_buttonmatrix_set_selected_button(Xila_graphics_obj_t *obj,
                                                    uint32_t btn_id) {
  Xila_graphics_call(Xila_graphics_call_buttonmatrix_set_selected_button, obj,
                     btn_id, 0, 0, 0, 0, 0, 2, NULL);
}
void Xila_graphics_buttonmatrix_set_button_ctrl(
    Xila_graphics_obj_t *obj, uint32_t btn_id,
    Xila_graphics_buttonmatrix_ctrl_t ctrl) {
  Xila_graphics_call(Xila_graphics_call_buttonmatrix_set_button_ctrl, obj,
                     btn_id, ctrl, 0, 0, 0, 0, 3, NULL);
}
void Xila_graphics_buttonmatrix_clear_button_ctrl(
    Xila_graphics_obj_t *obj, uint32_t btn_id,
    Xila_graphics_buttonmatrix_ctrl_t ctrl) {
  Xila_graphics_call(Xila_graphics_call_buttonmatrix_clear_button_ctrl, obj,
                     btn_id, ctrl, 0, 0, 0, 0, 3, NULL);
}
void Xila_graphics_buttonmatrix_set_button_ctrl_all(
    Xila_graphics_obj_t *obj, Xila_graphics_buttonmatrix_ctrl_t ctrl) {
  Xila_graphics_call(Xila_graphics_call_buttonmatrix_set_button_ctrl_all, obj,
                     ctrl, 0, 0, 0, 0, 0, 2, NULL);
}
void Xila_graphics_buttonmatrix_clear_button_ctrl_all(
    Xila_graphics_obj_t *obj, Xila_graphics_buttonmatrix_ctrl_t ctrl) {
  Xila_graphics_call(Xila_graphics_call_buttonmatrix_clear_button_ctrl_all, obj,
                     ctrl, 0, 0, 0, 0, 0, 2, NULL);
}
void Xila_graphics_buttonmatrix_set_button_width(Xila_graphics_obj_t *obj,
                                                 uint32_t btn_id,
                                                 uint32_t width) {
  Xila_graphics_call(Xila_graphics_call_buttonmatrix_set_button_width, obj,
                     btn_id, width, 0, 0, 0, 0, 3, NULL);
}
void Xila_graphics_buttonmatrix_set_one_checked(Xila_graphics_obj_t *obj,
                                                bool en) {
  Xila_graphics_call(Xila_graphics_call_buttonmatrix_set_one_checked, obj, en,
                     0, 0, 0, 0, 0, 2, NULL);
}
const char **
Xila_graphics_buttonmatrix_get_map(const Xila_graphics_obj_t *obj) {
  Xila_graphics_call(Xila_graphics_call_buttonmatrix_get_map, obj, 0, 0, 0, 0,
                     0, 0, 1, NULL);
}
uint32_t
Xila_graphics_buttonmatrix_get_selected_button(const Xila_graphics_obj_t *obj) {
  Xila_graphics_call(Xila_graphics_call_buttonmatrix_get_selected_button, obj,
                     0, 0, 0, 0, 0, 0, 1, NULL);
}
const char *
Xila_graphics_buttonmatrix_get_button_text(const Xila_graphics_obj_t *obj,
                                           uint32_t btn_id) {
  Xila_graphics_call(Xila_graphics_call_buttonmatrix_get_button_text, obj,
                     btn_id, 0, 0, 0, 0, 0, 2, NULL);
}
bool Xila_graphics_buttonmatrix_has_button_ctrl(
    Xila_graphics_obj_t *obj, uint32_t btn_id,
    Xila_graphics_buttonmatrix_ctrl_t ctrl) {
  Xila_graphics_call(Xila_graphics_call_buttonmatrix_has_button_ctrl, obj,
                     btn_id, ctrl, 0, 0, 0, 0, 3, NULL);
}
bool Xila_graphics_buttonmatrix_get_one_checked(
    const Xila_graphics_obj_t *obj) {
  Xila_graphics_call(Xila_graphics_call_buttonmatrix_get_one_checked, obj, 0, 0,
                     0, 0, 0, 0, 1, NULL);
}
Xila_graphics_obj_t *
Xila_graphics_calendar_create(Xila_graphics_obj_t *parent) {
  Xila_graphics_call(Xila_graphics_call_calendar_create, parent, 0, 0, 0, 0, 0,
                     0, 1, NULL);
}
void Xila_graphics_calendar_set_today_date(Xila_graphics_obj_t *obj,
                                           uint32_t year, uint32_t month,
                                           uint32_t day) {
  Xila_graphics_call(Xila_graphics_call_calendar_set_today_date, obj, year,
                     month, day, 0, 0, 0, 4, NULL);
}
void Xila_graphics_calendar_set_showed_date(Xila_graphics_obj_t *obj,
                                            uint32_t year, uint32_t month) {
  Xila_graphics_call(Xila_graphics_call_calendar_set_showed_date, obj, year,
                     month, 0, 0, 0, 0, 3, NULL);
}
void Xila_graphics_calendar_set_highlighted_dates(
    Xila_graphics_obj_t *obj, Xila_graphics_calendar_date_t *highlighted,
    size_t date_num) {
  Xila_graphics_call(Xila_graphics_call_calendar_set_highlighted_dates, obj,
                     highlighted, date_num, 0, 0, 0, 0, 3, NULL);
}
void Xila_graphics_calendar_set_day_names(Xila_graphics_obj_t *obj,
                                          const char **day_names) {
  Xila_graphics_call(Xila_graphics_call_calendar_set_day_names, obj, day_names,
                     0, 0, 0, 0, 0, 2, NULL);
}
Xila_graphics_obj_t *
Xila_graphics_calendar_get_btnmatrix(const Xila_graphics_obj_t *obj) {
  Xila_graphics_call(Xila_graphics_call_calendar_get_btnmatrix, obj, 0, 0, 0, 0,
                     0, 0, 1, NULL);
}
const Xila_graphics_calendar_date_t *
Xila_graphics_calendar_get_today_date(const Xila_graphics_obj_t *calendar) {
  Xila_graphics_call(Xila_graphics_call_calendar_get_today_date, calendar, 0, 0,
                     0, 0, 0, 0, 1, NULL);
}
const Xila_graphics_calendar_date_t *
Xila_graphics_calendar_get_showed_date(const Xila_graphics_obj_t *calendar) {
  Xila_graphics_call(Xila_graphics_call_calendar_get_showed_date, calendar, 0,
                     0, 0, 0, 0, 0, 1, NULL);
}
Xila_graphics_calendar_date_t *Xila_graphics_calendar_get_highlighted_dates(
    const Xila_graphics_obj_t *calendar) {
  Xila_graphics_call(Xila_graphics_call_calendar_get_highlighted_dates,
                     calendar, 0, 0, 0, 0, 0, 0, 1, NULL);
}
size_t Xila_graphics_calendar_get_highlighted_dates_num(
    const Xila_graphics_obj_t *calendar) {
  Xila_graphics_call(Xila_graphics_call_calendar_get_highlighted_dates_num,
                     calendar, 0, 0, 0, 0, 0, 0, 1, NULL);
}
Xila_graphics_result_t
Xila_graphics_calendar_get_pressed_date(const Xila_graphics_obj_t *calendar,
                                        Xila_graphics_calendar_date_t *date) {
  Xila_graphics_call(Xila_graphics_call_calendar_get_pressed_date, calendar,
                     date, 0, 0, 0, 0, 0, 2, NULL);
}
Xila_graphics_obj_t *
Xila_graphics_calendar_header_arrow_create(Xila_graphics_obj_t *parent) {
  Xila_graphics_call(Xila_graphics_call_calendar_header_arrow_create, parent, 0,
                     0, 0, 0, 0, 0, 1, NULL);
}
Xila_graphics_obj_t *
Xila_graphics_calendar_header_dropdown_create(Xila_graphics_obj_t *parent) {
  Xila_graphics_call(Xila_graphics_call_calendar_header_dropdown_create, parent,
                     0, 0, 0, 0, 0, 0, 1, NULL);
}
void Xila_graphics_calendar_header_dropdown_set_year_list(
    Xila_graphics_obj_t *parent, const char *years_list) {
  Xila_graphics_call(Xila_graphics_call_calendar_header_dropdown_set_year_list,
                     parent, years_list, 0, 0, 0, 0, 0, 2, NULL);
}
Xila_graphics_obj_t *Xila_graphics_chart_create(Xila_graphics_obj_t *parent) {
  Xila_graphics_call(Xila_graphics_call_chart_create, parent, 0, 0, 0, 0, 0, 0,
                     1, NULL);
}
void Xila_graphics_chart_set_type(Xila_graphics_obj_t *obj,
                                  Xila_graphics_chart_type_t type_) {
  Xila_graphics_call(Xila_graphics_call_chart_set_type, obj, type_, 0, 0, 0, 0,
                     0, 2, NULL);
}
void Xila_graphics_chart_set_point_count(Xila_graphics_obj_t *obj,
                                         uint32_t cnt) {
  Xila_graphics_call(Xila_graphics_call_chart_set_point_count, obj, cnt, 0, 0,
                     0, 0, 0, 2, NULL);
}
void Xila_graphics_chart_set_range(Xila_graphics_obj_t *obj,
                                   Xila_graphics_chart_axis_t axis, int32_t min,
                                   int32_t max) {
  Xila_graphics_call(Xila_graphics_call_chart_set_range, obj, axis, min, max, 0,
                     0, 0, 4, NULL);
}
void Xila_graphics_chart_set_update_mode(
    Xila_graphics_obj_t *obj, Xila_graphics_chart_update_mode_t update_mode) {
  Xila_graphics_call(Xila_graphics_call_chart_set_update_mode, obj, update_mode,
                     0, 0, 0, 0, 0, 2, NULL);
}
void Xila_graphics_chart_set_div_line_count(Xila_graphics_obj_t *obj,
                                            uint8_t hdiv, uint8_t vdiv) {
  Xila_graphics_call(Xila_graphics_call_chart_set_div_line_count, obj, hdiv,
                     vdiv, 0, 0, 0, 0, 3, NULL);
}
Xila_graphics_chart_type_t
Xila_graphics_chart_get_type(const Xila_graphics_obj_t *obj) {
  Xila_graphics_call(Xila_graphics_call_chart_get_type, obj, 0, 0, 0, 0, 0, 0,
                     1, NULL);
}
uint32_t Xila_graphics_chart_get_point_count(const Xila_graphics_obj_t *obj) {
  Xila_graphics_call(Xila_graphics_call_chart_get_point_count, obj, 0, 0, 0, 0,
                     0, 0, 1, NULL);
}
uint32_t
Xila_graphics_chart_get_x_start_point(const Xila_graphics_obj_t *obj,
                                      Xila_graphics_chart_series_t *ser) {
  Xila_graphics_call(Xila_graphics_call_chart_get_x_start_point, obj, ser, 0, 0,
                     0, 0, 0, 2, NULL);
}
void Xila_graphics_chart_get_point_pos_by_id(Xila_graphics_obj_t *obj,
                                             Xila_graphics_chart_series_t *ser,
                                             uint32_t id,
                                             Xila_graphics_point_t *p_out) {
  Xila_graphics_call(Xila_graphics_call_chart_get_point_pos_by_id, obj, ser, id,
                     p_out, 0, 0, 0, 4, NULL);
}
void Xila_graphics_chart_refresh(Xila_graphics_obj_t *obj) {
  Xila_graphics_call(Xila_graphics_call_chart_refresh, obj, 0, 0, 0, 0, 0, 0, 1,
                     NULL);
}
Xila_graphics_chart_series_t *
Xila_graphics_chart_add_series(Xila_graphics_obj_t *obj,
                               Xila_graphics_color_t color,
                               Xila_graphics_chart_axis_t axis) {
  Xila_graphics_call(Xila_graphics_call_chart_add_series, obj,
                     *(size_t *)&color, axis, 0, 0, 0, 0, 3, NULL);
}
void Xila_graphics_chart_remove_series(Xila_graphics_obj_t *obj,
                                       Xila_graphics_chart_series_t *series) {
  Xila_graphics_call(Xila_graphics_call_chart_remove_series, obj, series, 0, 0,
                     0, 0, 0, 2, NULL);
}
void Xila_graphics_chart_hide_series(Xila_graphics_obj_t *chart,
                                     Xila_graphics_chart_series_t *series,
                                     bool hide) {
  Xila_graphics_call(Xila_graphics_call_chart_hide_series, chart, series, hide,
                     0, 0, 0, 0, 3, NULL);
}
void Xila_graphics_chart_set_series_color(Xila_graphics_obj_t *chart,
                                          Xila_graphics_chart_series_t *series,
                                          Xila_graphics_color_t color) {
  Xila_graphics_call(Xila_graphics_call_chart_set_series_color, chart, series,
                     *(size_t *)&color, 0, 0, 0, 0, 3, NULL);
}
Xila_graphics_color_t Xila_graphics_chart_get_series_color(
    Xila_graphics_obj_t *chart, const Xila_graphics_chart_series_t *series) {
  Xila_graphics_call(Xila_graphics_call_chart_get_series_color, chart, series,
                     0, 0, 0, 0, 0, 2, NULL);
}
void Xila_graphics_chart_set_x_start_point(Xila_graphics_obj_t *obj,
                                           Xila_graphics_chart_series_t *ser,
                                           uint32_t id) {
  Xila_graphics_call(Xila_graphics_call_chart_set_x_start_point, obj, ser, id,
                     0, 0, 0, 0, 3, NULL);
}
Xila_graphics_chart_series_t *
Xila_graphics_chart_get_series_next(const Xila_graphics_obj_t *chart,
                                    const Xila_graphics_chart_series_t *ser) {
  Xila_graphics_call(Xila_graphics_call_chart_get_series_next, chart, ser, 0, 0,
                     0, 0, 0, 2, NULL);
}
Xila_graphics_chart_cursor_t *
Xila_graphics_chart_add_cursor(Xila_graphics_obj_t *obj,
                               Xila_graphics_color_t color,
                               Xila_graphics_dir_t dir) {
  Xila_graphics_call(Xila_graphics_call_chart_add_cursor, obj,
                     *(size_t *)&color, dir, 0, 0, 0, 0, 3, NULL);
}
void Xila_graphics_chart_set_cursor_pos(Xila_graphics_obj_t *chart,
                                        Xila_graphics_chart_cursor_t *cursor,
                                        Xila_graphics_point_t *pos) {
  Xila_graphics_call(Xila_graphics_call_chart_set_cursor_pos, chart, cursor,
                     pos, 0, 0, 0, 0, 3, NULL);
}
void Xila_graphics_chart_set_cursor_point(Xila_graphics_obj_t *chart,
                                          Xila_graphics_chart_cursor_t *cursor,
                                          Xila_graphics_chart_series_t *ser,
                                          uint32_t point_id) {
  Xila_graphics_call(Xila_graphics_call_chart_set_cursor_point, chart, cursor,
                     ser, point_id, 0, 0, 0, 4, NULL);
}
Xila_graphics_point_t
Xila_graphics_chart_get_cursor_point(Xila_graphics_obj_t *chart,
                                     Xila_graphics_chart_cursor_t *cursor) {
  Xila_graphics_call(Xila_graphics_call_chart_get_cursor_point, chart, cursor,
                     0, 0, 0, 0, 0, 2, NULL);
}
void Xila_graphics_chart_set_all_value(Xila_graphics_obj_t *obj,
                                       Xila_graphics_chart_series_t *ser,
                                       int32_t value) {
  Xila_graphics_call(Xila_graphics_call_chart_set_all_value, obj, ser, value, 0,
                     0, 0, 0, 3, NULL);
}
void Xila_graphics_chart_set_next_value(Xila_graphics_obj_t *obj,
                                        Xila_graphics_chart_series_t *ser,
                                        int32_t value) {
  Xila_graphics_call(Xila_graphics_call_chart_set_next_value, obj, ser, value,
                     0, 0, 0, 0, 3, NULL);
}
void Xila_graphics_chart_set_next_value2(Xila_graphics_obj_t *obj,
                                         Xila_graphics_chart_series_t *ser,
                                         int32_t x_value, int32_t y_value) {
  Xila_graphics_call(Xila_graphics_call_chart_set_next_value2, obj, ser,
                     x_value, y_value, 0, 0, 0, 4, NULL);
}
void Xila_graphics_chart_set_value_by_id(Xila_graphics_obj_t *obj,
                                         Xila_graphics_chart_series_t *ser,
                                         uint32_t id, int32_t value) {
  Xila_graphics_call(Xila_graphics_call_chart_set_value_by_id, obj, ser, id,
                     value, 0, 0, 0, 4, NULL);
}
void Xila_graphics_chart_set_value_by_id2(Xila_graphics_obj_t *obj,
                                          Xila_graphics_chart_series_t *ser,
                                          uint32_t id, int32_t x_value,
                                          int32_t y_value) {
  Xila_graphics_call(Xila_graphics_call_chart_set_value_by_id2, obj, ser, id,
                     x_value, y_value, 0, 0, 5, NULL);
}
void Xila_graphics_chart_set_ext_y_array(Xila_graphics_obj_t *obj,
                                         Xila_graphics_chart_series_t *ser,
                                         int32_t *array) {
  Xila_graphics_call(Xila_graphics_call_chart_set_ext_y_array, obj, ser, array,
                     0, 0, 0, 0, 3, NULL);
}
void Xila_graphics_chart_set_ext_x_array(Xila_graphics_obj_t *obj,
                                         Xila_graphics_chart_series_t *ser,
                                         int32_t *array) {
  Xila_graphics_call(Xila_graphics_call_chart_set_ext_x_array, obj, ser, array,
                     0, 0, 0, 0, 3, NULL);
}
int32_t *Xila_graphics_chart_get_y_array(const Xila_graphics_obj_t *obj,
                                         Xila_graphics_chart_series_t *ser) {
  Xila_graphics_call(Xila_graphics_call_chart_get_y_array, obj, ser, 0, 0, 0, 0,
                     0, 2, NULL);
}
int32_t *Xila_graphics_chart_get_x_array(const Xila_graphics_obj_t *obj,
                                         Xila_graphics_chart_series_t *ser) {
  Xila_graphics_call(Xila_graphics_call_chart_get_x_array, obj, ser, 0, 0, 0, 0,
                     0, 2, NULL);
}
uint32_t Xila_graphics_chart_get_pressed_point(const Xila_graphics_obj_t *obj) {
  Xila_graphics_call(Xila_graphics_call_chart_get_pressed_point, obj, 0, 0, 0,
                     0, 0, 0, 1, NULL);
}
int32_t
Xila_graphics_chart_get_first_point_center_offset(Xila_graphics_obj_t *obj) {
  Xila_graphics_call(Xila_graphics_call_chart_get_first_point_center_offset,
                     obj, 0, 0, 0, 0, 0, 0, 1, NULL);
}
Xila_graphics_obj_t *
Xila_graphics_checkbox_create(Xila_graphics_obj_t *parent) {
  Xila_graphics_call(Xila_graphics_call_checkbox_create, parent, 0, 0, 0, 0, 0,
                     0, 1, NULL);
}
void Xila_graphics_checkbox_set_text(Xila_graphics_obj_t *obj,
                                     const char *txt) {
  Xila_graphics_call(Xila_graphics_call_checkbox_set_text, obj, txt, 0, 0, 0, 0,
                     0, 2, NULL);
}
void Xila_graphics_checkbox_set_text_static(Xila_graphics_obj_t *obj,
                                            const char *txt) {
  Xila_graphics_call(Xila_graphics_call_checkbox_set_text_static, obj, txt, 0,
                     0, 0, 0, 0, 2, NULL);
}
const char *Xila_graphics_checkbox_get_text(const Xila_graphics_obj_t *obj) {
  Xila_graphics_call(Xila_graphics_call_checkbox_get_text, obj, 0, 0, 0, 0, 0,
                     0, 1, NULL);
}
Xila_graphics_obj_t *
Xila_graphics_dropdown_create(Xila_graphics_obj_t *parent) {
  Xila_graphics_call(Xila_graphics_call_dropdown_create, parent, 0, 0, 0, 0, 0,
                     0, 1, NULL);
}
void Xila_graphics_dropdown_set_text(Xila_graphics_obj_t *obj,
                                     const char *txt) {
  Xila_graphics_call(Xila_graphics_call_dropdown_set_text, obj, txt, 0, 0, 0, 0,
                     0, 2, NULL);
}
void Xila_graphics_dropdown_set_options(Xila_graphics_obj_t *obj,
                                        const char *options) {
  Xila_graphics_call(Xila_graphics_call_dropdown_set_options, obj, options, 0,
                     0, 0, 0, 0, 2, NULL);
}
void Xila_graphics_dropdown_set_options_static(Xila_graphics_obj_t *obj,
                                               const char *options) {
  Xila_graphics_call(Xila_graphics_call_dropdown_set_options_static, obj,
                     options, 0, 0, 0, 0, 0, 2, NULL);
}
void Xila_graphics_dropdown_add_option(Xila_graphics_obj_t *obj,
                                       const char *option, uint32_t pos) {
  Xila_graphics_call(Xila_graphics_call_dropdown_add_option, obj, option, pos,
                     0, 0, 0, 0, 3, NULL);
}
void Xila_graphics_dropdown_clear_options(Xila_graphics_obj_t *obj) {
  Xila_graphics_call(Xila_graphics_call_dropdown_clear_options, obj, 0, 0, 0, 0,
                     0, 0, 1, NULL);
}
void Xila_graphics_dropdown_set_selected(Xila_graphics_obj_t *obj,
                                         uint32_t sel_opt) {
  Xila_graphics_call(Xila_graphics_call_dropdown_set_selected, obj, sel_opt, 0,
                     0, 0, 0, 0, 2, NULL);
}
void Xila_graphics_dropdown_set_dir(Xila_graphics_obj_t *obj,
                                    Xila_graphics_dir_t dir) {
  Xila_graphics_call(Xila_graphics_call_dropdown_set_dir, obj, dir, 0, 0, 0, 0,
                     0, 2, NULL);
}
void Xila_graphics_dropdown_set_symbol(Xila_graphics_obj_t *obj,
                                       const char *symbol) {
  Xila_graphics_call(Xila_graphics_call_dropdown_set_symbol, obj, symbol, 0, 0,
                     0, 0, 0, 2, NULL);
}
void Xila_graphics_dropdown_set_selected_highlight(Xila_graphics_obj_t *obj,
                                                   bool en) {
  Xila_graphics_call(Xila_graphics_call_dropdown_set_selected_highlight, obj,
                     en, 0, 0, 0, 0, 0, 2, NULL);
}
Xila_graphics_obj_t *Xila_graphics_dropdown_get_list(Xila_graphics_obj_t *obj) {
  Xila_graphics_call(Xila_graphics_call_dropdown_get_list, obj, 0, 0, 0, 0, 0,
                     0, 1, NULL);
}
const char *Xila_graphics_dropdown_get_text(Xila_graphics_obj_t *obj) {
  Xila_graphics_call(Xila_graphics_call_dropdown_get_text, obj, 0, 0, 0, 0, 0,
                     0, 1, NULL);
}
const char *Xila_graphics_dropdown_get_options(const Xila_graphics_obj_t *obj) {
  Xila_graphics_call(Xila_graphics_call_dropdown_get_options, obj, 0, 0, 0, 0,
                     0, 0, 1, NULL);
}
uint32_t Xila_graphics_dropdown_get_selected(const Xila_graphics_obj_t *obj) {
  Xila_graphics_call(Xila_graphics_call_dropdown_get_selected, obj, 0, 0, 0, 0,
                     0, 0, 1, NULL);
}
uint32_t
Xila_graphics_dropdown_get_option_count(const Xila_graphics_obj_t *obj) {
  Xila_graphics_call(Xila_graphics_call_dropdown_get_option_count, obj, 0, 0, 0,
                     0, 0, 0, 1, NULL);
}
void Xila_graphics_dropdown_get_selected_str(const Xila_graphics_obj_t *obj,
                                             char *buf, uint32_t buf_size) {
  Xila_graphics_call(Xila_graphics_call_dropdown_get_selected_str, obj, buf,
                     buf_size, 0, 0, 0, 0, 3, NULL);
}
int32_t Xila_graphics_dropdown_get_option_index(Xila_graphics_obj_t *obj,
                                                const char *option) {
  Xila_graphics_call(Xila_graphics_call_dropdown_get_option_index, obj, option,
                     0, 0, 0, 0, 0, 2, NULL);
}
const char *Xila_graphics_dropdown_get_symbol(Xila_graphics_obj_t *obj) {
  Xila_graphics_call(Xila_graphics_call_dropdown_get_symbol, obj, 0, 0, 0, 0, 0,
                     0, 1, NULL);
}
bool Xila_graphics_dropdown_get_selected_highlight(Xila_graphics_obj_t *obj) {
  Xila_graphics_call(Xila_graphics_call_dropdown_get_selected_highlight, obj, 0,
                     0, 0, 0, 0, 0, 1, NULL);
}
Xila_graphics_dir_t
Xila_graphics_dropdown_get_dir(const Xila_graphics_obj_t *obj) {
  Xila_graphics_call(Xila_graphics_call_dropdown_get_dir, obj, 0, 0, 0, 0, 0, 0,
                     1, NULL);
}
void Xila_graphics_dropdown_open(Xila_graphics_obj_t *dropdown_obj) {
  Xila_graphics_call(Xila_graphics_call_dropdown_open, dropdown_obj, 0, 0, 0, 0,
                     0, 0, 1, NULL);
}
void Xila_graphics_dropdown_close(Xila_graphics_obj_t *obj) {
  Xila_graphics_call(Xila_graphics_call_dropdown_close, obj, 0, 0, 0, 0, 0, 0,
                     1, NULL);
}
bool Xila_graphics_dropdown_is_open(Xila_graphics_obj_t *obj) {
  Xila_graphics_call(Xila_graphics_call_dropdown_is_open, obj, 0, 0, 0, 0, 0, 0,
                     1, NULL);
}
Xila_graphics_obj_t *Xila_graphics_led_create(Xila_graphics_obj_t *parent) {
  Xila_graphics_call(Xila_graphics_call_led_create, parent, 0, 0, 0, 0, 0, 0, 1,
                     NULL);
}
void Xila_graphics_led_set_color(Xila_graphics_obj_t *led,
                                 Xila_graphics_color_t color) {
  Xila_graphics_call(Xila_graphics_call_led_set_color, led, *(size_t *)&color,
                     0, 0, 0, 0, 0, 2, NULL);
}
void Xila_graphics_led_set_brightness(Xila_graphics_obj_t *led,
                                      uint8_t bright) {
  Xila_graphics_call(Xila_graphics_call_led_set_brightness, led, bright, 0, 0,
                     0, 0, 0, 2, NULL);
}
void Xila_graphics_led_on(Xila_graphics_obj_t *led) {
  Xila_graphics_call(Xila_graphics_call_led_on, led, 0, 0, 0, 0, 0, 0, 1, NULL);
}
void Xila_graphics_led_off(Xila_graphics_obj_t *led) {
  Xila_graphics_call(Xila_graphics_call_led_off, led, 0, 0, 0, 0, 0, 0, 1,
                     NULL);
}
void Xila_graphics_led_toggle(Xila_graphics_obj_t *led) {
  Xila_graphics_call(Xila_graphics_call_led_toggle, led, 0, 0, 0, 0, 0, 0, 1,
                     NULL);
}
uint8_t Xila_graphics_led_get_brightness(const Xila_graphics_obj_t *obj) {
  Xila_graphics_call(Xila_graphics_call_led_get_brightness, obj, 0, 0, 0, 0, 0,
                     0, 1, NULL);
}
Xila_graphics_obj_t *Xila_graphics_line_create(Xila_graphics_obj_t *parent) {
  Xila_graphics_call(Xila_graphics_call_line_create, parent, 0, 0, 0, 0, 0, 0,
                     1, NULL);
}
void Xila_graphics_line_set_points(Xila_graphics_obj_t *obj,
                                   const Xila_graphics_point_precise_t *points,
                                   uint32_t point_num) {
  Xila_graphics_call(Xila_graphics_call_line_set_points, obj, points, point_num,
                     0, 0, 0, 0, 3, NULL);
}
void Xila_graphics_line_set_points_mutable(
    Xila_graphics_obj_t *obj, Xila_graphics_point_precise_t *points,
    uint32_t point_num) {
  Xila_graphics_call(Xila_graphics_call_line_set_points_mutable, obj, points,
                     point_num, 0, 0, 0, 0, 3, NULL);
}
void Xila_graphics_line_set_y_invert(Xila_graphics_obj_t *obj, bool en) {
  Xila_graphics_call(Xila_graphics_call_line_set_y_invert, obj, en, 0, 0, 0, 0,
                     0, 2, NULL);
}
const Xila_graphics_point_precise_t *
Xila_graphics_line_get_points(Xila_graphics_obj_t *obj) {
  Xila_graphics_call(Xila_graphics_call_line_get_points, obj, 0, 0, 0, 0, 0, 0,
                     1, NULL);
}
uint32_t Xila_graphics_line_get_point_count(Xila_graphics_obj_t *obj) {
  Xila_graphics_call(Xila_graphics_call_line_get_point_count, obj, 0, 0, 0, 0,
                     0, 0, 1, NULL);
}
bool Xila_graphics_line_is_point_array_mutable(Xila_graphics_obj_t *obj) {
  Xila_graphics_call(Xila_graphics_call_line_is_point_array_mutable, obj, 0, 0,
                     0, 0, 0, 0, 1, NULL);
}
Xila_graphics_point_precise_t *
Xila_graphics_line_get_points_mutable(Xila_graphics_obj_t *obj) {
  Xila_graphics_call(Xila_graphics_call_line_get_points_mutable, obj, 0, 0, 0,
                     0, 0, 0, 1, NULL);
}
bool Xila_graphics_line_get_y_invert(const Xila_graphics_obj_t *obj) {
  Xila_graphics_call(Xila_graphics_call_line_get_y_invert, obj, 0, 0, 0, 0, 0,
                     0, 1, NULL);
}
Xila_graphics_obj_t *Xila_graphics_menu_create(Xila_graphics_obj_t *parent) {
  Xila_graphics_call(Xila_graphics_call_menu_create, parent, 0, 0, 0, 0, 0, 0,
                     1, NULL);
}
Xila_graphics_obj_t *Xila_graphics_menu_page_create(Xila_graphics_obj_t *parent,
                                                    const char *title) {
  Xila_graphics_call(Xila_graphics_call_menu_page_create, parent, title, 0, 0,
                     0, 0, 0, 2, NULL);
}
Xila_graphics_obj_t *
Xila_graphics_menu_cont_create(Xila_graphics_obj_t *parent) {
  Xila_graphics_call(Xila_graphics_call_menu_cont_create, parent, 0, 0, 0, 0, 0,
                     0, 1, NULL);
}
Xila_graphics_obj_t *
Xila_graphics_menu_section_create(Xila_graphics_obj_t *parent) {
  Xila_graphics_call(Xila_graphics_call_menu_section_create, parent, 0, 0, 0, 0,
                     0, 0, 1, NULL);
}
Xila_graphics_obj_t *
Xila_graphics_menu_separator_create(Xila_graphics_obj_t *parent) {
  Xila_graphics_call(Xila_graphics_call_menu_separator_create, parent, 0, 0, 0,
                     0, 0, 0, 1, NULL);
}
void Xila_graphics_menu_set_page(Xila_graphics_obj_t *obj,
                                 Xila_graphics_obj_t *page) {
  Xila_graphics_call(Xila_graphics_call_menu_set_page, obj, page, 0, 0, 0, 0, 0,
                     2, NULL);
}
void Xila_graphics_menu_set_page_title(Xila_graphics_obj_t *page,
                                       const char *title) {
  Xila_graphics_call(Xila_graphics_call_menu_set_page_title, page, title, 0, 0,
                     0, 0, 0, 2, NULL);
}
void Xila_graphics_menu_set_page_title_static(Xila_graphics_obj_t *page,
                                              const char *title) {
  Xila_graphics_call(Xila_graphics_call_menu_set_page_title_static, page, title,
                     0, 0, 0, 0, 0, 2, NULL);
}
void Xila_graphics_menu_set_sidebar_page(Xila_graphics_obj_t *obj,
                                         Xila_graphics_obj_t *page) {
  Xila_graphics_call(Xila_graphics_call_menu_set_sidebar_page, obj, page, 0, 0,
                     0, 0, 0, 2, NULL);
}
void Xila_graphics_menu_set_mode_header(Xila_graphics_obj_t *obj,
                                        Xila_graphics_menu_mode_header_t mode) {
  Xila_graphics_call(Xila_graphics_call_menu_set_mode_header, obj, mode, 0, 0,
                     0, 0, 0, 2, NULL);
}
void Xila_graphics_menu_set_mode_root_back_button(
    Xila_graphics_obj_t *obj, Xila_graphics_menu_mode_root_back_button_t mode) {
  Xila_graphics_call(Xila_graphics_call_menu_set_mode_root_back_button, obj,
                     mode, 0, 0, 0, 0, 0, 2, NULL);
}
void Xila_graphics_menu_set_load_page_event(Xila_graphics_obj_t *menu,
                                            Xila_graphics_obj_t *obj,
                                            Xila_graphics_obj_t *page) {
  Xila_graphics_call(Xila_graphics_call_menu_set_load_page_event, menu, obj,
                     page, 0, 0, 0, 0, 3, NULL);
}
Xila_graphics_obj_t *
Xila_graphics_menu_get_cur_main_page(Xila_graphics_obj_t *obj) {
  Xila_graphics_call(Xila_graphics_call_menu_get_cur_main_page, obj, 0, 0, 0, 0,
                     0, 0, 1, NULL);
}
Xila_graphics_obj_t *
Xila_graphics_menu_get_cur_sidebar_page(Xila_graphics_obj_t *obj) {
  Xila_graphics_call(Xila_graphics_call_menu_get_cur_sidebar_page, obj, 0, 0, 0,
                     0, 0, 0, 1, NULL);
}
Xila_graphics_obj_t *
Xila_graphics_menu_get_main_header(Xila_graphics_obj_t *obj) {
  Xila_graphics_call(Xila_graphics_call_menu_get_main_header, obj, 0, 0, 0, 0,
                     0, 0, 1, NULL);
}
Xila_graphics_obj_t *
Xila_graphics_menu_get_main_header_back_button(Xila_graphics_obj_t *obj) {
  Xila_graphics_call(Xila_graphics_call_menu_get_main_header_back_button, obj,
                     0, 0, 0, 0, 0, 0, 1, NULL);
}
Xila_graphics_obj_t *
Xila_graphics_menu_get_sidebar_header(Xila_graphics_obj_t *obj) {
  Xila_graphics_call(Xila_graphics_call_menu_get_sidebar_header, obj, 0, 0, 0,
                     0, 0, 0, 1, NULL);
}
Xila_graphics_obj_t *
Xila_graphics_menu_get_sidebar_header_back_button(Xila_graphics_obj_t *obj) {
  Xila_graphics_call(Xila_graphics_call_menu_get_sidebar_header_back_button,
                     obj, 0, 0, 0, 0, 0, 0, 1, NULL);
}
bool Xila_graphics_menu_back_button_is_root(Xila_graphics_obj_t *menu,
                                            Xila_graphics_obj_t *obj) {
  Xila_graphics_call(Xila_graphics_call_menu_back_button_is_root, menu, obj, 0,
                     0, 0, 0, 0, 2, NULL);
}
void Xila_graphics_menu_clear_history(Xila_graphics_obj_t *obj) {
  Xila_graphics_call(Xila_graphics_call_menu_clear_history, obj, 0, 0, 0, 0, 0,
                     0, 1, NULL);
}
Xila_graphics_obj_t *Xila_graphics_msgbox_create(Xila_graphics_obj_t *parent) {
  Xila_graphics_call(Xila_graphics_call_msgbox_create, parent, 0, 0, 0, 0, 0, 0,
                     1, NULL);
}
Xila_graphics_obj_t *Xila_graphics_msgbox_add_title(Xila_graphics_obj_t *obj,
                                                    const char *title) {
  Xila_graphics_call(Xila_graphics_call_msgbox_add_title, obj, title, 0, 0, 0,
                     0, 0, 2, NULL);
}
Xila_graphics_obj_t *
Xila_graphics_msgbox_add_header_button(Xila_graphics_obj_t *obj,
                                       const char *icon) {
  Xila_graphics_call(Xila_graphics_call_msgbox_add_header_button, obj, icon, 0,
                     0, 0, 0, 0, 2, NULL);
}
Xila_graphics_obj_t *Xila_graphics_msgbox_add_text(Xila_graphics_obj_t *obj,
                                                   const char *text) {
  Xila_graphics_call(Xila_graphics_call_msgbox_add_text, obj, text, 0, 0, 0, 0,
                     0, 2, NULL);
}
Xila_graphics_obj_t *
Xila_graphics_msgbox_add_footer_button(Xila_graphics_obj_t *obj,
                                       const char *text) {
  Xila_graphics_call(Xila_graphics_call_msgbox_add_footer_button, obj, text, 0,
                     0, 0, 0, 0, 2, NULL);
}
Xila_graphics_obj_t *
Xila_graphics_msgbox_add_close_button(Xila_graphics_obj_t *obj) {
  Xila_graphics_call(Xila_graphics_call_msgbox_add_close_button, obj, 0, 0, 0,
                     0, 0, 0, 1, NULL);
}
Xila_graphics_obj_t *Xila_graphics_msgbox_get_header(Xila_graphics_obj_t *obj) {
  Xila_graphics_call(Xila_graphics_call_msgbox_get_header, obj, 0, 0, 0, 0, 0,
                     0, 1, NULL);
}
Xila_graphics_obj_t *Xila_graphics_msgbox_get_footer(Xila_graphics_obj_t *obj) {
  Xila_graphics_call(Xila_graphics_call_msgbox_get_footer, obj, 0, 0, 0, 0, 0,
                     0, 1, NULL);
}
Xila_graphics_obj_t *
Xila_graphics_msgbox_get_content(Xila_graphics_obj_t *obj) {
  Xila_graphics_call(Xila_graphics_call_msgbox_get_content, obj, 0, 0, 0, 0, 0,
                     0, 1, NULL);
}
Xila_graphics_obj_t *Xila_graphics_msgbox_get_title(Xila_graphics_obj_t *obj) {
  Xila_graphics_call(Xila_graphics_call_msgbox_get_title, obj, 0, 0, 0, 0, 0, 0,
                     1, NULL);
}
void Xila_graphics_msgbox_close(Xila_graphics_obj_t *mbox) {
  Xila_graphics_call(Xila_graphics_call_msgbox_close, mbox, 0, 0, 0, 0, 0, 0, 1,
                     NULL);
}
void Xila_graphics_msgbox_close_async(Xila_graphics_obj_t *mbox) {
  Xila_graphics_call(Xila_graphics_call_msgbox_close_async, mbox, 0, 0, 0, 0, 0,
                     0, 1, NULL);
}
Xila_graphics_obj_t *Xila_graphics_roller_create(Xila_graphics_obj_t *parent) {
  Xila_graphics_call(Xila_graphics_call_roller_create, parent, 0, 0, 0, 0, 0, 0,
                     1, NULL);
}
void Xila_graphics_roller_set_options(Xila_graphics_obj_t *obj,
                                      const char *options,
                                      Xila_graphics_roller_mode_t mode) {
  Xila_graphics_call(Xila_graphics_call_roller_set_options, obj, options, mode,
                     0, 0, 0, 0, 3, NULL);
}
void Xila_graphics_roller_set_selected(Xila_graphics_obj_t *obj,
                                       uint32_t sel_opt,
                                       Xila_graphics_anim_enable_t anim) {
  Xila_graphics_call(Xila_graphics_call_roller_set_selected, obj, sel_opt, anim,
                     0, 0, 0, 0, 3, NULL);
}
void Xila_graphics_roller_set_visible_row_count(Xila_graphics_obj_t *obj,
                                                uint32_t row_cnt) {
  Xila_graphics_call(Xila_graphics_call_roller_set_visible_row_count, obj,
                     row_cnt, 0, 0, 0, 0, 0, 2, NULL);
}
uint32_t Xila_graphics_roller_get_selected(const Xila_graphics_obj_t *obj) {
  Xila_graphics_call(Xila_graphics_call_roller_get_selected, obj, 0, 0, 0, 0, 0,
                     0, 1, NULL);
}
void Xila_graphics_roller_get_selected_str(const Xila_graphics_obj_t *obj,
                                           char *buf, uint32_t buf_size) {
  Xila_graphics_call(Xila_graphics_call_roller_get_selected_str, obj, buf,
                     buf_size, 0, 0, 0, 0, 3, NULL);
}
const char *Xila_graphics_roller_get_options(const Xila_graphics_obj_t *obj) {
  Xila_graphics_call(Xila_graphics_call_roller_get_options, obj, 0, 0, 0, 0, 0,
                     0, 1, NULL);
}
uint32_t Xila_graphics_roller_get_option_count(const Xila_graphics_obj_t *obj) {
  Xila_graphics_call(Xila_graphics_call_roller_get_option_count, obj, 0, 0, 0,
                     0, 0, 0, 1, NULL);
}
Xila_graphics_obj_t *Xila_graphics_scale_create(Xila_graphics_obj_t *parent) {
  Xila_graphics_call(Xila_graphics_call_scale_create, parent, 0, 0, 0, 0, 0, 0,
                     1, NULL);
}
void Xila_graphics_scale_set_mode(Xila_graphics_obj_t *obj,
                                  Xila_graphics_scale_mode_t mode) {
  Xila_graphics_call(Xila_graphics_call_scale_set_mode, obj, mode, 0, 0, 0, 0,
                     0, 2, NULL);
}
void Xila_graphics_scale_set_total_tick_count(Xila_graphics_obj_t *obj,
                                              uint32_t total_tick_count) {
  Xila_graphics_call(Xila_graphics_call_scale_set_total_tick_count, obj,
                     total_tick_count, 0, 0, 0, 0, 0, 2, NULL);
}
void Xila_graphics_scale_set_major_tick_every(Xila_graphics_obj_t *obj,
                                              uint32_t major_tick_every) {
  Xila_graphics_call(Xila_graphics_call_scale_set_major_tick_every, obj,
                     major_tick_every, 0, 0, 0, 0, 0, 2, NULL);
}
void Xila_graphics_scale_set_label_show(Xila_graphics_obj_t *obj,
                                        bool show_label) {
  Xila_graphics_call(Xila_graphics_call_scale_set_label_show, obj, show_label,
                     0, 0, 0, 0, 0, 2, NULL);
}
void Xila_graphics_scale_set_range(Xila_graphics_obj_t *obj, int32_t min,
                                   int32_t max) {
  Xila_graphics_call(Xila_graphics_call_scale_set_range, obj, min, max, 0, 0, 0,
                     0, 3, NULL);
}
void Xila_graphics_scale_set_angle_range(Xila_graphics_obj_t *obj,
                                         uint32_t angle_range) {
  Xila_graphics_call(Xila_graphics_call_scale_set_angle_range, obj, angle_range,
                     0, 0, 0, 0, 0, 2, NULL);
}
void Xila_graphics_scale_set_rotation(Xila_graphics_obj_t *obj,
                                      int32_t rotation) {
  Xila_graphics_call(Xila_graphics_call_scale_set_rotation, obj, rotation, 0, 0,
                     0, 0, 0, 2, NULL);
}
void Xila_graphics_scale_set_line_needle_value(Xila_graphics_obj_t *obj,
                                               Xila_graphics_obj_t *needle_line,
                                               int32_t needle_length,
                                               int32_t value) {
  Xila_graphics_call(Xila_graphics_call_scale_set_line_needle_value, obj,
                     needle_line, needle_length, value, 0, 0, 0, 4, NULL);
}
void Xila_graphics_scale_set_image_needle_value(Xila_graphics_obj_t *obj,
                                                Xila_graphics_obj_t *needle_img,
                                                int32_t value) {
  Xila_graphics_call(Xila_graphics_call_scale_set_image_needle_value, obj,
                     needle_img, value, 0, 0, 0, 0, 3, NULL);
}
void Xila_graphics_scale_set_text_src(Xila_graphics_obj_t *obj,
                                      const char **txt_src) {
  Xila_graphics_call(Xila_graphics_call_scale_set_text_src, obj, txt_src, 0, 0,
                     0, 0, 0, 2, NULL);
}
void Xila_graphics_scale_set_post_draw(Xila_graphics_obj_t *obj, bool en) {
  Xila_graphics_call(Xila_graphics_call_scale_set_post_draw, obj, en, 0, 0, 0,
                     0, 0, 2, NULL);
}
void Xila_graphics_scale_set_draw_ticks_on_top(Xila_graphics_obj_t *obj,
                                               bool en) {
  Xila_graphics_call(Xila_graphics_call_scale_set_draw_ticks_on_top, obj, en, 0,
                     0, 0, 0, 0, 2, NULL);
}
Xila_graphics_scale_section_t *
Xila_graphics_scale_add_section(Xila_graphics_obj_t *obj) {
  Xila_graphics_call(Xila_graphics_call_scale_add_section, obj, 0, 0, 0, 0, 0,
                     0, 1, NULL);
}
void Xila_graphics_scale_section_set_range(
    Xila_graphics_scale_section_t *section, int32_t minor_range,
    int32_t major_range) {
  Xila_graphics_call(Xila_graphics_call_scale_section_set_range, section,
                     minor_range, major_range, 0, 0, 0, 0, 3, NULL);
}
void Xila_graphics_scale_section_set_style(
    Xila_graphics_scale_section_t *section, Xila_graphics_part_t part,
    Xila_graphics_style_t *section_part_style) {
  Xila_graphics_call(Xila_graphics_call_scale_section_set_style, section, part,
                     section_part_style, 0, 0, 0, 0, 3, NULL);
}
Xila_graphics_scale_mode_t
Xila_graphics_scale_get_mode(Xila_graphics_obj_t *obj) {
  Xila_graphics_call(Xila_graphics_call_scale_get_mode, obj, 0, 0, 0, 0, 0, 0,
                     1, NULL);
}
int32_t Xila_graphics_scale_get_total_tick_count(Xila_graphics_obj_t *obj) {
  Xila_graphics_call(Xila_graphics_call_scale_get_total_tick_count, obj, 0, 0,
                     0, 0, 0, 0, 1, NULL);
}
int32_t Xila_graphics_scale_get_major_tick_every(Xila_graphics_obj_t *obj) {
  Xila_graphics_call(Xila_graphics_call_scale_get_major_tick_every, obj, 0, 0,
                     0, 0, 0, 0, 1, NULL);
}
bool Xila_graphics_scale_get_label_show(Xila_graphics_obj_t *obj) {
  Xila_graphics_call(Xila_graphics_call_scale_get_label_show, obj, 0, 0, 0, 0,
                     0, 0, 1, NULL);
}
uint32_t Xila_graphics_scale_get_angle_range(Xila_graphics_obj_t *obj) {
  Xila_graphics_call(Xila_graphics_call_scale_get_angle_range, obj, 0, 0, 0, 0,
                     0, 0, 1, NULL);
}
int32_t Xila_graphics_scale_get_range_min_value(Xila_graphics_obj_t *obj) {
  Xila_graphics_call(Xila_graphics_call_scale_get_range_min_value, obj, 0, 0, 0,
                     0, 0, 0, 1, NULL);
}
int32_t Xila_graphics_scale_get_range_max_value(Xila_graphics_obj_t *obj) {
  Xila_graphics_call(Xila_graphics_call_scale_get_range_max_value, obj, 0, 0, 0,
                     0, 0, 0, 1, NULL);
}
Xila_graphics_obj_t *Xila_graphics_slider_create(Xila_graphics_obj_t *parent) {
  Xila_graphics_call(Xila_graphics_call_slider_create, parent, 0, 0, 0, 0, 0, 0,
                     1, NULL);
}
void Xila_graphics_slider_set_value(Xila_graphics_obj_t *obj, int32_t value,
                                    Xila_graphics_anim_enable_t anim) {
  Xila_graphics_call(Xila_graphics_call_slider_set_value, obj, value, anim, 0,
                     0, 0, 0, 3, NULL);
}
void Xila_graphics_slider_set_left_value(Xila_graphics_obj_t *obj,
                                         int32_t value,
                                         Xila_graphics_anim_enable_t anim) {
  Xila_graphics_call(Xila_graphics_call_slider_set_left_value, obj, value, anim,
                     0, 0, 0, 0, 3, NULL);
}
void Xila_graphics_slider_set_range(Xila_graphics_obj_t *obj, int32_t min,
                                    int32_t max) {
  Xila_graphics_call(Xila_graphics_call_slider_set_range, obj, min, max, 0, 0,
                     0, 0, 3, NULL);
}
void Xila_graphics_slider_set_mode(Xila_graphics_obj_t *obj,
                                   Xila_graphics_slider_mode_t mode) {
  Xila_graphics_call(Xila_graphics_call_slider_set_mode, obj, mode, 0, 0, 0, 0,
                     0, 2, NULL);
}
int32_t Xila_graphics_slider_get_value(const Xila_graphics_obj_t *obj) {
  Xila_graphics_call(Xila_graphics_call_slider_get_value, obj, 0, 0, 0, 0, 0, 0,
                     1, NULL);
}
int32_t Xila_graphics_slider_get_left_value(const Xila_graphics_obj_t *obj) {
  Xila_graphics_call(Xila_graphics_call_slider_get_left_value, obj, 0, 0, 0, 0,
                     0, 0, 1, NULL);
}
int32_t Xila_graphics_slider_get_min_value(const Xila_graphics_obj_t *obj) {
  Xila_graphics_call(Xila_graphics_call_slider_get_min_value, obj, 0, 0, 0, 0,
                     0, 0, 1, NULL);
}
int32_t Xila_graphics_slider_get_max_value(const Xila_graphics_obj_t *obj) {
  Xila_graphics_call(Xila_graphics_call_slider_get_max_value, obj, 0, 0, 0, 0,
                     0, 0, 1, NULL);
}
bool Xila_graphics_slider_is_dragged(const Xila_graphics_obj_t *obj) {
  Xila_graphics_call(Xila_graphics_call_slider_is_dragged, obj, 0, 0, 0, 0, 0,
                     0, 1, NULL);
}
Xila_graphics_slider_mode_t
Xila_graphics_slider_get_mode(Xila_graphics_obj_t *slider) {
  Xila_graphics_call(Xila_graphics_call_slider_get_mode, slider, 0, 0, 0, 0, 0,
                     0, 1, NULL);
}
bool Xila_graphics_slider_is_symmetrical(Xila_graphics_obj_t *obj) {
  Xila_graphics_call(Xila_graphics_call_slider_is_symmetrical, obj, 0, 0, 0, 0,
                     0, 0, 1, NULL);
}
void Xila_graphics_span_stack_init() {
  Xila_graphics_call(Xila_graphics_call_span_stack_init, 0, 0, 0, 0, 0, 0, 0, 0,
                     NULL);
}
void Xila_graphics_span_stack_deinit() {
  Xila_graphics_call(Xila_graphics_call_span_stack_deinit, 0, 0, 0, 0, 0, 0, 0,
                     0, NULL);
}
Xila_graphics_obj_t *
Xila_graphics_spangroup_create(Xila_graphics_obj_t *parent) {
  Xila_graphics_call(Xila_graphics_call_spangroup_create, parent, 0, 0, 0, 0, 0,
                     0, 1, NULL);
}
Xila_graphics_span_t *
Xila_graphics_spangroup_new_span(Xila_graphics_obj_t *obj) {
  Xila_graphics_call(Xila_graphics_call_spangroup_new_span, obj, 0, 0, 0, 0, 0,
                     0, 1, NULL);
}
void Xila_graphics_spangroup_delete_span(Xila_graphics_obj_t *obj,
                                         Xila_graphics_span_t *span) {
  Xila_graphics_call(Xila_graphics_call_spangroup_delete_span, obj, span, 0, 0,
                     0, 0, 0, 2, NULL);
}
void Xila_graphics_span_set_text(Xila_graphics_span_t *span, const char *text) {
  Xila_graphics_call(Xila_graphics_call_span_set_text, span, text, 0, 0, 0, 0,
                     0, 2, NULL);
}
void Xila_graphics_span_set_text_static(Xila_graphics_span_t *span,
                                        const char *text) {
  Xila_graphics_call(Xila_graphics_call_span_set_text_static, span, text, 0, 0,
                     0, 0, 0, 2, NULL);
}
void Xila_graphics_spangroup_set_align(Xila_graphics_obj_t *obj,
                                       Xila_graphics_text_align_t align) {
  Xila_graphics_call(Xila_graphics_call_spangroup_set_align, obj, align, 0, 0,
                     0, 0, 0, 2, NULL);
}
void Xila_graphics_spangroup_set_overflow(
    Xila_graphics_obj_t *obj, Xila_graphics_span_overflow_t overflow) {
  Xila_graphics_call(Xila_graphics_call_spangroup_set_overflow, obj, overflow,
                     0, 0, 0, 0, 0, 2, NULL);
}
void Xila_graphics_spangroup_set_indent(Xila_graphics_obj_t *obj,
                                        int32_t indent) {
  Xila_graphics_call(Xila_graphics_call_spangroup_set_indent, obj, indent, 0, 0,
                     0, 0, 0, 2, NULL);
}
void Xila_graphics_spangroup_set_mode(Xila_graphics_obj_t *obj,
                                      Xila_graphics_span_mode_t mode) {
  Xila_graphics_call(Xila_graphics_call_spangroup_set_mode, obj, mode, 0, 0, 0,
                     0, 0, 2, NULL);
}
void Xila_graphics_spangroup_set_max_lines(Xila_graphics_obj_t *obj,
                                           int32_t lines) {
  Xila_graphics_call(Xila_graphics_call_spangroup_set_max_lines, obj, lines, 0,
                     0, 0, 0, 0, 2, NULL);
}
Xila_graphics_style_t *
Xila_graphics_span_get_style(Xila_graphics_span_t *span) {
  Xila_graphics_call(Xila_graphics_call_span_get_style, span, 0, 0, 0, 0, 0, 0,
                     1, NULL);
}
Xila_graphics_span_t *
Xila_graphics_spangroup_get_child(const Xila_graphics_obj_t *obj, int32_t id) {
  Xila_graphics_call(Xila_graphics_call_spangroup_get_child, obj, id, 0, 0, 0,
                     0, 0, 2, NULL);
}
uint32_t
Xila_graphics_spangroup_get_span_count(const Xila_graphics_obj_t *obj) {
  Xila_graphics_call(Xila_graphics_call_spangroup_get_span_count, obj, 0, 0, 0,
                     0, 0, 0, 1, NULL);
}
Xila_graphics_text_align_t
Xila_graphics_spangroup_get_align(Xila_graphics_obj_t *obj) {
  Xila_graphics_call(Xila_graphics_call_spangroup_get_align, obj, 0, 0, 0, 0, 0,
                     0, 1, NULL);
}
Xila_graphics_span_overflow_t
Xila_graphics_spangroup_get_overflow(Xila_graphics_obj_t *obj) {
  Xila_graphics_call(Xila_graphics_call_spangroup_get_overflow, obj, 0, 0, 0, 0,
                     0, 0, 1, NULL);
}
int32_t Xila_graphics_spangroup_get_indent(Xila_graphics_obj_t *obj) {
  Xila_graphics_call(Xila_graphics_call_spangroup_get_indent, obj, 0, 0, 0, 0,
                     0, 0, 1, NULL);
}
Xila_graphics_span_mode_t
Xila_graphics_spangroup_get_mode(Xila_graphics_obj_t *obj) {
  Xila_graphics_call(Xila_graphics_call_spangroup_get_mode, obj, 0, 0, 0, 0, 0,
                     0, 1, NULL);
}
int32_t Xila_graphics_spangroup_get_max_lines(Xila_graphics_obj_t *obj) {
  Xila_graphics_call(Xila_graphics_call_spangroup_get_max_lines, obj, 0, 0, 0,
                     0, 0, 0, 1, NULL);
}
int32_t Xila_graphics_spangroup_get_max_line_height(Xila_graphics_obj_t *obj) {
  Xila_graphics_call(Xila_graphics_call_spangroup_get_max_line_height, obj, 0,
                     0, 0, 0, 0, 0, 1, NULL);
}
uint32_t Xila_graphics_spangroup_get_expand_width(Xila_graphics_obj_t *obj,
                                                  uint32_t max_width) {
  Xila_graphics_call(Xila_graphics_call_spangroup_get_expand_width, obj,
                     max_width, 0, 0, 0, 0, 0, 2, NULL);
}
int32_t Xila_graphics_spangroup_get_expand_height(Xila_graphics_obj_t *obj,
                                                  int32_t width) {
  Xila_graphics_call(Xila_graphics_call_spangroup_get_expand_height, obj, width,
                     0, 0, 0, 0, 0, 2, NULL);
}
void Xila_graphics_spangroup_refr_mode(Xila_graphics_obj_t *obj) {
  Xila_graphics_call(Xila_graphics_call_spangroup_refr_mode, obj, 0, 0, 0, 0, 0,
                     0, 1, NULL);
}
Xila_graphics_obj_t *
Xila_graphics_textarea_create(Xila_graphics_obj_t *parent) {
  Xila_graphics_call(Xila_graphics_call_textarea_create, parent, 0, 0, 0, 0, 0,
                     0, 1, NULL);
}
void Xila_graphics_textarea_add_char(Xila_graphics_obj_t *obj, uint32_t c) {
  Xila_graphics_call(Xila_graphics_call_textarea_add_char, obj, c, 0, 0, 0, 0,
                     0, 2, NULL);
}
void Xila_graphics_textarea_add_text(Xila_graphics_obj_t *obj,
                                     const char *txt) {
  Xila_graphics_call(Xila_graphics_call_textarea_add_text, obj, txt, 0, 0, 0, 0,
                     0, 2, NULL);
}
void Xila_graphics_textarea_delete_char(Xila_graphics_obj_t *obj) {
  Xila_graphics_call(Xila_graphics_call_textarea_delete_char, obj, 0, 0, 0, 0,
                     0, 0, 1, NULL);
}
void Xila_graphics_textarea_delete_char_forward(Xila_graphics_obj_t *obj) {
  Xila_graphics_call(Xila_graphics_call_textarea_delete_char_forward, obj, 0, 0,
                     0, 0, 0, 0, 1, NULL);
}
void Xila_graphics_textarea_set_text(Xila_graphics_obj_t *obj,
                                     const char *txt) {
  Xila_graphics_call(Xila_graphics_call_textarea_set_text, obj, txt, 0, 0, 0, 0,
                     0, 2, NULL);
}
void Xila_graphics_textarea_set_placeholder_text(Xila_graphics_obj_t *obj,
                                                 const char *txt) {
  Xila_graphics_call(Xila_graphics_call_textarea_set_placeholder_text, obj, txt,
                     0, 0, 0, 0, 0, 2, NULL);
}
void Xila_graphics_textarea_set_cursor_pos(Xila_graphics_obj_t *obj,
                                           int32_t pos) {
  Xila_graphics_call(Xila_graphics_call_textarea_set_cursor_pos, obj, pos, 0, 0,
                     0, 0, 0, 2, NULL);
}
void Xila_graphics_textarea_set_cursor_click_pos(Xila_graphics_obj_t *obj,
                                                 bool en) {
  Xila_graphics_call(Xila_graphics_call_textarea_set_cursor_click_pos, obj, en,
                     0, 0, 0, 0, 0, 2, NULL);
}
void Xila_graphics_textarea_set_password_mode(Xila_graphics_obj_t *obj,
                                              bool en) {
  Xila_graphics_call(Xila_graphics_call_textarea_set_password_mode, obj, en, 0,
                     0, 0, 0, 0, 2, NULL);
}
void Xila_graphics_textarea_set_password_bullet(Xila_graphics_obj_t *obj,
                                                const char *bullet) {
  Xila_graphics_call(Xila_graphics_call_textarea_set_password_bullet, obj,
                     bullet, 0, 0, 0, 0, 0, 2, NULL);
}
void Xila_graphics_textarea_set_one_line(Xila_graphics_obj_t *obj, bool en) {
  Xila_graphics_call(Xila_graphics_call_textarea_set_one_line, obj, en, 0, 0, 0,
                     0, 0, 2, NULL);
}
void Xila_graphics_textarea_set_accepted_chars(Xila_graphics_obj_t *obj,
                                               const char *list) {
  Xila_graphics_call(Xila_graphics_call_textarea_set_accepted_chars, obj, list,
                     0, 0, 0, 0, 0, 2, NULL);
}
void Xila_graphics_textarea_set_max_length(Xila_graphics_obj_t *obj,
                                           uint32_t num) {
  Xila_graphics_call(Xila_graphics_call_textarea_set_max_length, obj, num, 0, 0,
                     0, 0, 0, 2, NULL);
}
void Xila_graphics_textarea_set_insert_replace(Xila_graphics_obj_t *obj,
                                               const char *txt) {
  Xila_graphics_call(Xila_graphics_call_textarea_set_insert_replace, obj, txt,
                     0, 0, 0, 0, 0, 2, NULL);
}
void Xila_graphics_textarea_set_text_selection(Xila_graphics_obj_t *obj,
                                               bool en) {
  Xila_graphics_call(Xila_graphics_call_textarea_set_text_selection, obj, en, 0,
                     0, 0, 0, 0, 2, NULL);
}
void Xila_graphics_textarea_set_password_show_time(Xila_graphics_obj_t *obj,
                                                   uint32_t time) {
  Xila_graphics_call(Xila_graphics_call_textarea_set_password_show_time, obj,
                     time, 0, 0, 0, 0, 0, 2, NULL);
}
void Xila_graphics_textarea_set_align(Xila_graphics_obj_t *obj,
                                      Xila_graphics_text_align_t align) {
  Xila_graphics_call(Xila_graphics_call_textarea_set_align, obj, align, 0, 0, 0,
                     0, 0, 2, NULL);
}
const char *Xila_graphics_textarea_get_text(const Xila_graphics_obj_t *obj) {
  Xila_graphics_call(Xila_graphics_call_textarea_get_text, obj, 0, 0, 0, 0, 0,
                     0, 1, NULL);
}
const char *
Xila_graphics_textarea_get_placeholder_text(Xila_graphics_obj_t *obj) {
  Xila_graphics_call(Xila_graphics_call_textarea_get_placeholder_text, obj, 0,
                     0, 0, 0, 0, 0, 1, NULL);
}
Xila_graphics_obj_t *
Xila_graphics_textarea_get_label(const Xila_graphics_obj_t *obj) {
  Xila_graphics_call(Xila_graphics_call_textarea_get_label, obj, 0, 0, 0, 0, 0,
                     0, 1, NULL);
}
uint32_t Xila_graphics_textarea_get_cursor_pos(const Xila_graphics_obj_t *obj) {
  Xila_graphics_call(Xila_graphics_call_textarea_get_cursor_pos, obj, 0, 0, 0,
                     0, 0, 0, 1, NULL);
}
bool Xila_graphics_textarea_get_cursor_click_pos(Xila_graphics_obj_t *obj) {
  Xila_graphics_call(Xila_graphics_call_textarea_get_cursor_click_pos, obj, 0,
                     0, 0, 0, 0, 0, 1, NULL);
}
bool Xila_graphics_textarea_get_password_mode(const Xila_graphics_obj_t *obj) {
  Xila_graphics_call(Xila_graphics_call_textarea_get_password_mode, obj, 0, 0,
                     0, 0, 0, 0, 1, NULL);
}
const char *
Xila_graphics_textarea_get_password_bullet(Xila_graphics_obj_t *obj) {
  Xila_graphics_call(Xila_graphics_call_textarea_get_password_bullet, obj, 0, 0,
                     0, 0, 0, 0, 1, NULL);
}
bool Xila_graphics_textarea_get_one_line(const Xila_graphics_obj_t *obj) {
  Xila_graphics_call(Xila_graphics_call_textarea_get_one_line, obj, 0, 0, 0, 0,
                     0, 0, 1, NULL);
}
const char *
Xila_graphics_textarea_get_accepted_chars(Xila_graphics_obj_t *obj) {
  Xila_graphics_call(Xila_graphics_call_textarea_get_accepted_chars, obj, 0, 0,
                     0, 0, 0, 0, 1, NULL);
}
uint32_t Xila_graphics_textarea_get_max_length(Xila_graphics_obj_t *obj) {
  Xila_graphics_call(Xila_graphics_call_textarea_get_max_length, obj, 0, 0, 0,
                     0, 0, 0, 1, NULL);
}
bool Xila_graphics_textarea_text_is_selected(const Xila_graphics_obj_t *obj) {
  Xila_graphics_call(Xila_graphics_call_textarea_text_is_selected, obj, 0, 0, 0,
                     0, 0, 0, 1, NULL);
}
bool Xila_graphics_textarea_get_text_selection(Xila_graphics_obj_t *obj) {
  Xila_graphics_call(Xila_graphics_call_textarea_get_text_selection, obj, 0, 0,
                     0, 0, 0, 0, 1, NULL);
}
uint32_t
Xila_graphics_textarea_get_password_show_time(Xila_graphics_obj_t *obj) {
  Xila_graphics_call(Xila_graphics_call_textarea_get_password_show_time, obj, 0,
                     0, 0, 0, 0, 0, 1, NULL);
}
uint32_t Xila_graphics_textarea_get_current_char(Xila_graphics_obj_t *obj) {
  Xila_graphics_call(Xila_graphics_call_textarea_get_current_char, obj, 0, 0, 0,
                     0, 0, 0, 1, NULL);
}
void Xila_graphics_textarea_clear_selection(Xila_graphics_obj_t *obj) {
  Xila_graphics_call(Xila_graphics_call_textarea_clear_selection, obj, 0, 0, 0,
                     0, 0, 0, 1, NULL);
}
void Xila_graphics_textarea_cursor_right(Xila_graphics_obj_t *obj) {
  Xila_graphics_call(Xila_graphics_call_textarea_cursor_right, obj, 0, 0, 0, 0,
                     0, 0, 1, NULL);
}
void Xila_graphics_textarea_cursor_left(Xila_graphics_obj_t *obj) {
  Xila_graphics_call(Xila_graphics_call_textarea_cursor_left, obj, 0, 0, 0, 0,
                     0, 0, 1, NULL);
}
void Xila_graphics_textarea_cursor_down(Xila_graphics_obj_t *obj) {
  Xila_graphics_call(Xila_graphics_call_textarea_cursor_down, obj, 0, 0, 0, 0,
                     0, 0, 1, NULL);
}
void Xila_graphics_textarea_cursor_up(Xila_graphics_obj_t *obj) {
  Xila_graphics_call(Xila_graphics_call_textarea_cursor_up, obj, 0, 0, 0, 0, 0,
                     0, 1, NULL);
}
Xila_graphics_obj_t *Xila_graphics_spinbox_create(Xila_graphics_obj_t *parent) {
  Xila_graphics_call(Xila_graphics_call_spinbox_create, parent, 0, 0, 0, 0, 0,
                     0, 1, NULL);
}
void Xila_graphics_spinbox_set_value(Xila_graphics_obj_t *obj, int32_t v) {
  Xila_graphics_call(Xila_graphics_call_spinbox_set_value, obj, v, 0, 0, 0, 0,
                     0, 2, NULL);
}
void Xila_graphics_spinbox_set_rollover(Xila_graphics_obj_t *obj,
                                        bool rollover) {
  Xila_graphics_call(Xila_graphics_call_spinbox_set_rollover, obj, rollover, 0,
                     0, 0, 0, 0, 2, NULL);
}
void Xila_graphics_spinbox_set_digit_format(Xila_graphics_obj_t *obj,
                                            uint32_t digit_count,
                                            uint32_t sep_pos) {
  Xila_graphics_call(Xila_graphics_call_spinbox_set_digit_format, obj,
                     digit_count, sep_pos, 0, 0, 0, 0, 3, NULL);
}
void Xila_graphics_spinbox_set_step(Xila_graphics_obj_t *obj, uint32_t step) {
  Xila_graphics_call(Xila_graphics_call_spinbox_set_step, obj, step, 0, 0, 0, 0,
                     0, 2, NULL);
}
void Xila_graphics_spinbox_set_range(Xila_graphics_obj_t *obj,
                                     int32_t range_min, int32_t range_max) {
  Xila_graphics_call(Xila_graphics_call_spinbox_set_range, obj, range_min,
                     range_max, 0, 0, 0, 0, 3, NULL);
}
void Xila_graphics_spinbox_set_cursor_pos(Xila_graphics_obj_t *obj,
                                          uint32_t pos) {
  Xila_graphics_call(Xila_graphics_call_spinbox_set_cursor_pos, obj, pos, 0, 0,
                     0, 0, 0, 2, NULL);
}
void Xila_graphics_spinbox_set_digit_step_direction(
    Xila_graphics_obj_t *obj, Xila_graphics_dir_t direction) {
  Xila_graphics_call(Xila_graphics_call_spinbox_set_digit_step_direction, obj,
                     direction, 0, 0, 0, 0, 0, 2, NULL);
}
bool Xila_graphics_spinbox_get_rollover(Xila_graphics_obj_t *obj) {
  Xila_graphics_call(Xila_graphics_call_spinbox_get_rollover, obj, 0, 0, 0, 0,
                     0, 0, 1, NULL);
}
int32_t Xila_graphics_spinbox_get_value(Xila_graphics_obj_t *obj) {
  Xila_graphics_call(Xila_graphics_call_spinbox_get_value, obj, 0, 0, 0, 0, 0,
                     0, 1, NULL);
}
int32_t Xila_graphics_spinbox_get_step(Xila_graphics_obj_t *obj) {
  Xila_graphics_call(Xila_graphics_call_spinbox_get_step, obj, 0, 0, 0, 0, 0, 0,
                     1, NULL);
}
void Xila_graphics_spinbox_step_next(Xila_graphics_obj_t *obj) {
  Xila_graphics_call(Xila_graphics_call_spinbox_step_next, obj, 0, 0, 0, 0, 0,
                     0, 1, NULL);
}
void Xila_graphics_spinbox_step_prev(Xila_graphics_obj_t *obj) {
  Xila_graphics_call(Xila_graphics_call_spinbox_step_prev, obj, 0, 0, 0, 0, 0,
                     0, 1, NULL);
}
void Xila_graphics_spinbox_increment(Xila_graphics_obj_t *obj) {
  Xila_graphics_call(Xila_graphics_call_spinbox_increment, obj, 0, 0, 0, 0, 0,
                     0, 1, NULL);
}
void Xila_graphics_spinbox_decrement(Xila_graphics_obj_t *obj) {
  Xila_graphics_call(Xila_graphics_call_spinbox_decrement, obj, 0, 0, 0, 0, 0,
                     0, 1, NULL);
}
Xila_graphics_obj_t *Xila_graphics_table_create(Xila_graphics_obj_t *parent) {
  Xila_graphics_call(Xila_graphics_call_table_create, parent, 0, 0, 0, 0, 0, 0,
                     1, NULL);
}
void Xila_graphics_table_set_cell_value(Xila_graphics_obj_t *obj, uint32_t row,
                                        uint32_t col, const char *txt) {
  Xila_graphics_call(Xila_graphics_call_table_set_cell_value, obj, row, col,
                     txt, 0, 0, 0, 4, NULL);
}
void Xila_graphics_table_set_cell_value_fmt(Xila_graphics_obj_t *obj,
                                            uint32_t row, uint32_t col,
                                            const char *fmt) {
  Xila_graphics_call(Xila_graphics_call_table_set_cell_value_fmt, obj, row, col,
                     fmt, 0, 0, 0, 4, NULL);
}
void Xila_graphics_table_set_row_count(Xila_graphics_obj_t *obj,
                                       uint32_t row_cnt) {
  Xila_graphics_call(Xila_graphics_call_table_set_row_count, obj, row_cnt, 0, 0,
                     0, 0, 0, 2, NULL);
}
void Xila_graphics_table_set_column_count(Xila_graphics_obj_t *obj,
                                          uint32_t col_cnt) {
  Xila_graphics_call(Xila_graphics_call_table_set_column_count, obj, col_cnt, 0,
                     0, 0, 0, 0, 2, NULL);
}
void Xila_graphics_table_set_column_width(Xila_graphics_obj_t *obj,
                                          uint32_t col_id, int32_t w) {
  Xila_graphics_call(Xila_graphics_call_table_set_column_width, obj, col_id, w,
                     0, 0, 0, 0, 3, NULL);
}
void Xila_graphics_table_add_cell_ctrl(Xila_graphics_obj_t *obj, uint32_t row,
                                       uint32_t col,
                                       Xila_graphics_table_cell_ctrl_t ctrl) {
  Xila_graphics_call(Xila_graphics_call_table_add_cell_ctrl, obj, row, col,
                     ctrl, 0, 0, 0, 4, NULL);
}
void Xila_graphics_table_clear_cell_ctrl(Xila_graphics_obj_t *obj, uint32_t row,
                                         uint32_t col,
                                         Xila_graphics_table_cell_ctrl_t ctrl) {
  Xila_graphics_call(Xila_graphics_call_table_clear_cell_ctrl, obj, row, col,
                     ctrl, 0, 0, 0, 4, NULL);
}
void Xila_graphics_table_set_cell_user_data(Xila_graphics_obj_t *obj,
                                            uint16_t row, uint16_t col,
                                            char *user_data) {
  Xila_graphics_call(Xila_graphics_call_table_set_cell_user_data, obj, row, col,
                     user_data, 0, 0, 0, 4, NULL);
}
void Xila_graphics_table_set_selected_cell(Xila_graphics_obj_t *obj,
                                           uint16_t row, uint16_t col) {
  Xila_graphics_call(Xila_graphics_call_table_set_selected_cell, obj, row, col,
                     0, 0, 0, 0, 3, NULL);
}
const char *Xila_graphics_table_get_cell_value(Xila_graphics_obj_t *obj,
                                               uint32_t row, uint32_t col) {
  Xila_graphics_call(Xila_graphics_call_table_get_cell_value, obj, row, col, 0,
                     0, 0, 0, 3, NULL);
}
uint32_t Xila_graphics_table_get_row_count(Xila_graphics_obj_t *obj) {
  Xila_graphics_call(Xila_graphics_call_table_get_row_count, obj, 0, 0, 0, 0, 0,
                     0, 1, NULL);
}
uint32_t Xila_graphics_table_get_column_count(Xila_graphics_obj_t *obj) {
  Xila_graphics_call(Xila_graphics_call_table_get_column_count, obj, 0, 0, 0, 0,
                     0, 0, 1, NULL);
}
int32_t Xila_graphics_table_get_column_width(Xila_graphics_obj_t *obj,
                                             uint32_t col) {
  Xila_graphics_call(Xila_graphics_call_table_get_column_width, obj, col, 0, 0,
                     0, 0, 0, 2, NULL);
}
bool Xila_graphics_table_has_cell_ctrl(Xila_graphics_obj_t *obj, uint32_t row,
                                       uint32_t col,
                                       Xila_graphics_table_cell_ctrl_t ctrl) {
  Xila_graphics_call(Xila_graphics_call_table_has_cell_ctrl, obj, row, col,
                     ctrl, 0, 0, 0, 4, NULL);
}
void Xila_graphics_table_get_selected_cell(Xila_graphics_obj_t *obj,
                                           uint32_t *row, uint32_t *col) {
  Xila_graphics_call(Xila_graphics_call_table_get_selected_cell, obj, row, col,
                     0, 0, 0, 0, 3, NULL);
}
char *Xila_graphics_table_get_cell_user_data(Xila_graphics_obj_t *obj,
                                             uint16_t row, uint16_t col) {
  Xila_graphics_call(Xila_graphics_call_table_get_cell_user_data, obj, row, col,
                     0, 0, 0, 0, 3, NULL);
}
Xila_graphics_obj_t *Xila_graphics_tabview_create(Xila_graphics_obj_t *parent) {
  Xila_graphics_call(Xila_graphics_call_tabview_create, parent, 0, 0, 0, 0, 0,
                     0, 1, NULL);
}
Xila_graphics_obj_t *Xila_graphics_tabview_add_tab(Xila_graphics_obj_t *obj,
                                                   const char *name) {
  Xila_graphics_call(Xila_graphics_call_tabview_add_tab, obj, name, 0, 0, 0, 0,
                     0, 2, NULL);
}
void Xila_graphics_tabview_rename_tab(Xila_graphics_obj_t *obj, uint32_t idx,
                                      const char *new_name) {
  Xila_graphics_call(Xila_graphics_call_tabview_rename_tab, obj, idx, new_name,
                     0, 0, 0, 0, 3, NULL);
}
void Xila_graphics_tabview_set_active(Xila_graphics_obj_t *obj, uint32_t idx,
                                      Xila_graphics_anim_enable_t anim_en) {
  Xila_graphics_call(Xila_graphics_call_tabview_set_active, obj, idx, anim_en,
                     0, 0, 0, 0, 3, NULL);
}
void Xila_graphics_tabview_set_tab_bar_position(Xila_graphics_obj_t *obj,
                                                Xila_graphics_dir_t dir) {
  Xila_graphics_call(Xila_graphics_call_tabview_set_tab_bar_position, obj, dir,
                     0, 0, 0, 0, 0, 2, NULL);
}
void Xila_graphics_tabview_set_tab_bar_size(Xila_graphics_obj_t *obj,
                                            int32_t size) {
  Xila_graphics_call(Xila_graphics_call_tabview_set_tab_bar_size, obj, size, 0,
                     0, 0, 0, 0, 2, NULL);
}
uint32_t Xila_graphics_tabview_get_tab_count(Xila_graphics_obj_t *obj) {
  Xila_graphics_call(Xila_graphics_call_tabview_get_tab_count, obj, 0, 0, 0, 0,
                     0, 0, 1, NULL);
}
uint32_t Xila_graphics_tabview_get_tab_active(Xila_graphics_obj_t *obj) {
  Xila_graphics_call(Xila_graphics_call_tabview_get_tab_active, obj, 0, 0, 0, 0,
                     0, 0, 1, NULL);
}
Xila_graphics_obj_t *
Xila_graphics_tabview_get_content(Xila_graphics_obj_t *obj) {
  Xila_graphics_call(Xila_graphics_call_tabview_get_content, obj, 0, 0, 0, 0, 0,
                     0, 1, NULL);
}
Xila_graphics_obj_t *
Xila_graphics_tabview_get_tab_bar(Xila_graphics_obj_t *obj) {
  Xila_graphics_call(Xila_graphics_call_tabview_get_tab_bar, obj, 0, 0, 0, 0, 0,
                     0, 1, NULL);
}
Xila_graphics_obj_t *
Xila_graphics_tileview_create(Xila_graphics_obj_t *parent) {
  Xila_graphics_call(Xila_graphics_call_tileview_create, parent, 0, 0, 0, 0, 0,
                     0, 1, NULL);
}
Xila_graphics_obj_t *Xila_graphics_tileview_add_tile(Xila_graphics_obj_t *tv,
                                                     uint8_t col_id,
                                                     uint8_t row_id,
                                                     Xila_graphics_dir_t dir) {
  Xila_graphics_call(Xila_graphics_call_tileview_add_tile, tv, col_id, row_id,
                     dir, 0, 0, 0, 4, NULL);
}
void Xila_graphics_tileview_set_tile(Xila_graphics_obj_t *tv,
                                     Xila_graphics_obj_t *tile_obj,
                                     Xila_graphics_anim_enable_t anim_en) {
  Xila_graphics_call(Xila_graphics_call_tileview_set_tile, tv, tile_obj,
                     anim_en, 0, 0, 0, 0, 3, NULL);
}
void Xila_graphics_tileview_set_tile_by_index(
    Xila_graphics_obj_t *tv, uint32_t col_id, uint32_t row_id,
    Xila_graphics_anim_enable_t anim_en) {
  Xila_graphics_call(Xila_graphics_call_tileview_set_tile_by_index, tv, col_id,
                     row_id, anim_en, 0, 0, 0, 4, NULL);
}
Xila_graphics_obj_t *
Xila_graphics_tileview_get_tile_active(Xila_graphics_obj_t *obj) {
  Xila_graphics_call(Xila_graphics_call_tileview_get_tile_active, obj, 0, 0, 0,
                     0, 0, 0, 1, NULL);
}
void Xila_graphics_subject_init_int(Xila_graphics_subject_t *subject,
                                    int32_t value) {
  Xila_graphics_call(Xila_graphics_call_subject_init_int, subject, value, 0, 0,
                     0, 0, 0, 2, NULL);
}
void Xila_graphics_subject_set_int(Xila_graphics_subject_t *subject,
                                   int32_t value) {
  Xila_graphics_call(Xila_graphics_call_subject_set_int, subject, value, 0, 0,
                     0, 0, 0, 2, NULL);
}
int32_t Xila_graphics_subject_get_int(Xila_graphics_subject_t *subject) {
  Xila_graphics_call(Xila_graphics_call_subject_get_int, subject, 0, 0, 0, 0, 0,
                     0, 1, NULL);
}
int32_t
Xila_graphics_subject_get_previous_int(Xila_graphics_subject_t *subject) {
  Xila_graphics_call(Xila_graphics_call_subject_get_previous_int, subject, 0, 0,
                     0, 0, 0, 0, 1, NULL);
}
void Xila_graphics_subject_init_string(Xila_graphics_subject_t *subject,
                                       char *buf, char *prev_buf, size_t size,
                                       const char *value) {
  Xila_graphics_call(Xila_graphics_call_subject_init_string, subject, buf,
                     prev_buf, size, value, 0, 0, 5, NULL);
}
void Xila_graphics_subject_copy_string(Xila_graphics_subject_t *subject,
                                       const char *buf) {
  Xila_graphics_call(Xila_graphics_call_subject_copy_string, subject, buf, 0, 0,
                     0, 0, 0, 2, NULL);
}
const char *Xila_graphics_subject_get_string(Xila_graphics_subject_t *subject) {
  Xila_graphics_call(Xila_graphics_call_subject_get_string, subject, 0, 0, 0, 0,
                     0, 0, 1, NULL);
}
const char *
Xila_graphics_subject_get_previous_string(Xila_graphics_subject_t *subject) {
  Xila_graphics_call(Xila_graphics_call_subject_get_previous_string, subject, 0,
                     0, 0, 0, 0, 0, 1, NULL);
}
void Xila_graphics_subject_init_pointer(Xila_graphics_subject_t *subject,
                                        char *value) {
  Xila_graphics_call(Xila_graphics_call_subject_init_pointer, subject, value, 0,
                     0, 0, 0, 0, 2, NULL);
}
void Xila_graphics_subject_set_pointer(Xila_graphics_subject_t *subject,
                                       char *ptr) {
  Xila_graphics_call(Xila_graphics_call_subject_set_pointer, subject, ptr, 0, 0,
                     0, 0, 0, 2, NULL);
}
const char *
Xila_graphics_subject_get_pointer(Xila_graphics_subject_t *subject) {
  Xila_graphics_call(Xila_graphics_call_subject_get_pointer, subject, 0, 0, 0,
                     0, 0, 0, 1, NULL);
}
const char *
Xila_graphics_subject_get_previous_pointer(Xila_graphics_subject_t *subject) {
  Xila_graphics_call(Xila_graphics_call_subject_get_previous_pointer, subject,
                     0, 0, 0, 0, 0, 0, 1, NULL);
}
void Xila_graphics_subject_init_color(Xila_graphics_subject_t *subject,
                                      Xila_graphics_color_t color) {
  Xila_graphics_call(Xila_graphics_call_subject_init_color, subject,
                     *(size_t *)&color, 0, 0, 0, 0, 0, 2, NULL);
}
void Xila_graphics_subject_set_color(Xila_graphics_subject_t *subject,
                                     Xila_graphics_color_t color) {
  Xila_graphics_call(Xila_graphics_call_subject_set_color, subject,
                     *(size_t *)&color, 0, 0, 0, 0, 0, 2, NULL);
}
Xila_graphics_color_t
Xila_graphics_subject_get_color(Xila_graphics_subject_t *subject) {
  Xila_graphics_call(Xila_graphics_call_subject_get_color, subject, 0, 0, 0, 0,
                     0, 0, 1, NULL);
}
Xila_graphics_color_t
Xila_graphics_subject_get_previous_color(Xila_graphics_subject_t *subject) {
  Xila_graphics_call(Xila_graphics_call_subject_get_previous_color, subject, 0,
                     0, 0, 0, 0, 0, 1, NULL);
}
void Xila_graphics_subject_init_group(Xila_graphics_subject_t *subject,
                                      Xila_graphics_subject_t **list,
                                      uint32_t list_len) {
  Xila_graphics_call(Xila_graphics_call_subject_init_group, subject, list,
                     list_len, 0, 0, 0, 0, 3, NULL);
}
void Xila_graphics_subject_deinit(Xila_graphics_subject_t *subject) {
  Xila_graphics_call(Xila_graphics_call_subject_deinit, subject, 0, 0, 0, 0, 0,
                     0, 1, NULL);
}
Xila_graphics_subject_t *
Xila_graphics_subject_get_group_element(Xila_graphics_subject_t *subject,
                                        int32_t index) {
  Xila_graphics_call(Xila_graphics_call_subject_get_group_element, subject,
                     index, 0, 0, 0, 0, 0, 2, NULL);
}
Xila_graphics_observer_t *
Xila_graphics_subject_add_observer(Xila_graphics_subject_t *subject,
                                   Xila_graphics_observer_cb_t observer_cb,
                                   char *user_data) {
  Xila_graphics_call(Xila_graphics_call_subject_add_observer, subject,
                     observer_cb, user_data, 0, 0, 0, 0, 3, NULL);
}
Xila_graphics_observer_t *Xila_graphics_subject_add_observer_obj(
    Xila_graphics_subject_t *subject, Xila_graphics_observer_cb_t observer_cb,
    Xila_graphics_obj_t *obj, char *user_data) {
  Xila_graphics_call(Xila_graphics_call_subject_add_observer_obj, subject,
                     observer_cb, obj, user_data, 0, 0, 0, 4, NULL);
}
Xila_graphics_observer_t *Xila_graphics_subject_add_observer_with_target(
    Xila_graphics_subject_t *subject, Xila_graphics_observer_cb_t observer_cb,
    char *target, char *user_data) {
  Xila_graphics_call(Xila_graphics_call_subject_add_observer_with_target,
                     subject, observer_cb, target, user_data, 0, 0, 0, 4, NULL);
}
void Xila_graphics_obj_remove_from_subject(Xila_graphics_obj_t *obj,
                                           Xila_graphics_subject_t *subject) {
  Xila_graphics_call(Xila_graphics_call_obj_remove_from_subject, obj, subject,
                     0, 0, 0, 0, 0, 2, NULL);
}
void Xila_graphics_subject_notify(Xila_graphics_subject_t *subject) {
  Xila_graphics_call(Xila_graphics_call_subject_notify, subject, 0, 0, 0, 0, 0,
                     0, 1, NULL);
}
Xila_graphics_observer_t *Xila_graphics_obj_bind_flag_if_eq(
    Xila_graphics_obj_t *obj, Xila_graphics_subject_t *subject,
    Xila_graphics_obj_flag_t flag, int32_t ref_value) {
  Xila_graphics_call(Xila_graphics_call_obj_bind_flag_if_eq, obj, subject, flag,
                     ref_value, 0, 0, 0, 4, NULL);
}
Xila_graphics_observer_t *Xila_graphics_obj_bind_flag_if_not_eq(
    Xila_graphics_obj_t *obj, Xila_graphics_subject_t *subject,
    Xila_graphics_obj_flag_t flag, int32_t ref_value) {
  Xila_graphics_call(Xila_graphics_call_obj_bind_flag_if_not_eq, obj, subject,
                     flag, ref_value, 0, 0, 0, 4, NULL);
}
Xila_graphics_observer_t *Xila_graphics_obj_bind_state_if_eq(
    Xila_graphics_obj_t *obj, Xila_graphics_subject_t *subject,
    Xila_graphics_state_t state, int32_t ref_value) {
  Xila_graphics_call(Xila_graphics_call_obj_bind_state_if_eq, obj, subject,
                     state, ref_value, 0, 0, 0, 4, NULL);
}
Xila_graphics_observer_t *Xila_graphics_obj_bind_state_if_not_eq(
    Xila_graphics_obj_t *obj, Xila_graphics_subject_t *subject,
    Xila_graphics_state_t state, int32_t ref_value) {
  Xila_graphics_call(Xila_graphics_call_obj_bind_state_if_not_eq, obj, subject,
                     state, ref_value, 0, 0, 0, 4, NULL);
}
Xila_graphics_observer_t *
Xila_graphics_obj_bind_checked(Xila_graphics_obj_t *obj,
                               Xila_graphics_subject_t *subject) {
  Xila_graphics_call(Xila_graphics_call_obj_bind_checked, obj, subject, 0, 0, 0,
                     0, 0, 2, NULL);
}
Xila_graphics_observer_t *
Xila_graphics_arc_bind_value(Xila_graphics_obj_t *obj,
                             Xila_graphics_subject_t *subject) {
  Xila_graphics_call(Xila_graphics_call_arc_bind_value, obj, subject, 0, 0, 0,
                     0, 0, 2, NULL);
}
Xila_graphics_observer_t *
Xila_graphics_slider_bind_value(Xila_graphics_obj_t *obj,
                                Xila_graphics_subject_t *subject) {
  Xila_graphics_call(Xila_graphics_call_slider_bind_value, obj, subject, 0, 0,
                     0, 0, 0, 2, NULL);
}
Xila_graphics_observer_t *
Xila_graphics_roller_bind_value(Xila_graphics_obj_t *obj,
                                Xila_graphics_subject_t *subject) {
  Xila_graphics_call(Xila_graphics_call_roller_bind_value, obj, subject, 0, 0,
                     0, 0, 0, 2, NULL);
}
Xila_graphics_observer_t *
Xila_graphics_dropdown_bind_value(Xila_graphics_obj_t *obj,
                                  Xila_graphics_subject_t *subject) {
  Xila_graphics_call(Xila_graphics_call_dropdown_bind_value, obj, subject, 0, 0,
                     0, 0, 0, 2, NULL);
}