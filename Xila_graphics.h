#pragma once
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
typedef struct {
} Xila_graphics_image_decoder_dsc_t;

typedef struct {
} Xila_graphics_event_dsc_t;

typedef struct {
} Xila_graphics_draw_glyph_dsc_t;

typedef struct {
} Xila_graphics_draw_mask_rect_dsc_t;

typedef struct {
} Xila_graphics_obj_style_transition_dsc_t;

typedef struct {
} Xila_graphics_vector_fill_dsc_t;

typedef struct {
} Xila_graphics_vector_stroke_dsc_t;

typedef struct {
} Xila_graphics_vector_draw_dsc_t;

typedef struct {
} Xila_graphics_draw_vector_task_dsc_t;

typedef struct {
} Xila_graphics_vector_dsc_t;

typedef struct {
} Xila_graphics_draw_sw_mask_common_dsc_t;

typedef struct {
} Xila_graphics_draw_sw_blend_dsc_t;

typedef struct {
} Xila_graphics_draw_sw_blend_fill_dsc_t;

typedef struct {
} Xila_graphics_draw_sw_blend_image_dsc_t;

typedef struct {
} Xila_graphics_color_filter_dsc_t;

typedef struct {
} Xila_graphics_image_dsc_t;

typedef struct {
} Xila_graphics_font_glyph_dsc_t;

typedef struct {
} Xila_graphics_grad_dsc_t;

typedef struct {
} Xila_graphics_style_transition_dsc_t;

typedef struct {
} Xila_graphics_draw_rect_dsc_t;

typedef struct {
} Xila_graphics_draw_fill_dsc_t;

typedef struct {
} Xila_graphics_draw_border_dsc_t;

typedef struct {
} Xila_graphics_draw_box_shadow_dsc_t;

typedef struct {
} Xila_graphics_draw_label_dsc_t;

typedef struct {
} Xila_graphics_draw_image_dsc_t;

typedef struct {
} Xila_graphics_draw_line_dsc_t;

typedef struct {
} Xila_graphics_draw_arc_dsc_t;

typedef struct {
} Xila_graphics_font_fmt_txt_glyph_dsc_t;

typedef struct {
} Xila_graphics_font_fmt_txt_dsc_t;

typedef struct {
} Xila_graphics_draw_triangle_dsc_t;

typedef struct {
  int32_t x;
  int32_t y;
} Xila_graphics_point_t;

typedef struct {
  int32_t x1;
  int32_t y1;
  int32_t x2;
  int32_t y2;
} Xila_graphics_area_t;

typedef struct {
  uint8_t blue;
  uint8_t green;
  uint8_t red;
} Xila_graphics_color_t;

typedef struct {
  uint16_t blue : 5;
  uint16_t green : 6;
  uint16_t red : 5;
} Xila_graphics_color16_t;

typedef struct {
  uint8_t blue;
  uint8_t green;
  uint8_t red;
  uint8_t alpha;
} Xila_graphics_color32_t;

typedef struct {
  uint16_t h;
  uint8_t s;
  uint8_t v;
} Xila_graphics_color_hsv_t;

typedef struct {
  uint8_t lumi;
  uint8_t alpha;
} Xila_graphics_color16a_t;

#define XILA_GRAPHICS_COLOR_MAKE(r8, g8, b8)                                   \
  { b8, g8, r8 }

#define XILA_GRAPHICS_OPA_MIX2(a1, a2) (((int32_t)(a1) * (a2)) >> 8)
#define XILA_GRAPHICS_OPA_MIX3(a1, a2, a3) (((int32_t)(a1) * (a2) * (a3)) >> 16)

typedef int32_t Xila_graphics_value_precise_t;

typedef struct {
  Xila_graphics_value_precise_t x;
  Xila_graphics_value_precise_t y;
} Xila_graphics_point_precise_t;

typedef enum {
  XILA_GRAPHICS_COLOR_FORMAT_UNKNOWN = 0,

  XILA_GRAPHICS_COLOR_FORMAT_RAW = 0x01,
  XILA_GRAPHICS_COLOR_FORMAT_RAW_ALPHA = 0x02,

  /*<=1 byte (+alpha) formats*/
  XILA_GRAPHICS_COLOR_FORMAT_L8 = 0x06,
  XILA_GRAPHICS_COLOR_FORMAT_I1 = 0x07,
  XILA_GRAPHICS_COLOR_FORMAT_I2 = 0x08,
  XILA_GRAPHICS_COLOR_FORMAT_I4 = 0x09,
  XILA_GRAPHICS_COLOR_FORMAT_I8 = 0x0A,
  XILA_GRAPHICS_COLOR_FORMAT_A8 = 0x0E,

  /*2 byte (+alpha) formats*/
  XILA_GRAPHICS_COLOR_FORMAT_RGB565 = 0x12,
  XILA_GRAPHICS_COLOR_FORMAT_ARGB8565 =
      0x13, /**< Not supported by sw renderer yet. */
  XILA_GRAPHICS_COLOR_FORMAT_RGB565A8 =
      0x14, /**< Color array followed by Alpha array*/
  XILA_GRAPHICS_COLOR_FORMAT_AL88 = 0x15, /**< L8 with alpha >*/

  /*3 byte (+alpha) formats*/
  XILA_GRAPHICS_COLOR_FORMAT_RGB888 = 0x0F,
  XILA_GRAPHICS_COLOR_FORMAT_ARGB8888 = 0x10,
  XILA_GRAPHICS_COLOR_FORMAT_XRGB8888 = 0x11,

  /*Formats not supported by software renderer but kept here so GPU can use it*/
  XILA_GRAPHICS_COLOR_FORMAT_A1 = 0x0B,
  XILA_GRAPHICS_COLOR_FORMAT_A2 = 0x0C,
  XILA_GRAPHICS_COLOR_FORMAT_A4 = 0x0D,

  /* reference to https://wiki.videolan.org/YUV/ */
  /*YUV planar formats*/
  XILA_GRAPHICS_COLOR_FORMAT_YUV_START = 0x20,
  XILA_GRAPHICS_COLOR_FORMAT_I420 =
      XILA_GRAPHICS_COLOR_FORMAT_YUV_START, /*YUV420 planar(3 plane)*/
  XILA_GRAPHICS_COLOR_FORMAT_I422 = 0x21,   /*YUV422 planar(3 plane)*/
  XILA_GRAPHICS_COLOR_FORMAT_I444 = 0x22,   /*YUV444 planar(3 plane)*/
  XILA_GRAPHICS_COLOR_FORMAT_I400 = 0x23,   /*YUV400 no chroma channel*/
  XILA_GRAPHICS_COLOR_FORMAT_NV21 =
      0x24, /*YUV420 planar(2 plane), UV plane in 'V, U, V, U'*/
  XILA_GRAPHICS_COLOR_FORMAT_NV12 =
      0x25, /*YUV420 planar(2 plane), UV plane in 'U, V, U, V'*/

  /*YUV packed formats*/
  XILA_GRAPHICS_COLOR_FORMAT_YUY2 = 0x26, /*YUV422 packed like 'Y U Y V'*/
  XILA_GRAPHICS_COLOR_FORMAT_UYVY = 0x27, /*YUV422 packed like 'U Y V Y'*/

  XILA_GRAPHICS_COLOR_FORMAT_YUV_END = XILA_GRAPHICS_COLOR_FORMAT_UYVY,

} Xila_graphics_color_format_t;

typedef enum {
  XILA_GRAPHICS_FLEX_ALIGN_START,
  XILA_GRAPHICS_FLEX_ALIGN_END,
  XILA_GRAPHICS_FLEX_ALIGN_CENTER,
  XILA_GRAPHICS_FLEX_ALIGN_SPACE_EVENLY,
  XILA_GRAPHICS_FLEX_ALIGN_SPACE_AROUND,
  XILA_GRAPHICS_FLEX_ALIGN_SPACE_BETWEEN,
} Xila_graphics_flex_align_t;

#define XILA_GRAPHICS_FLEX_COLUMN (1 << 0)
#define XILA_GRAPHICS_FLEX_WRAP (1 << 2)
#define XILA_GRAPHICS_FLEX_REVERSE (1 << 3)

typedef uint8_t Xila_graphics_style_prop_t;

typedef uint8_t Xila_graphics_opa_t;

typedef enum {
  XILA_GRAPHICS_FLEX_FLOW_ROW = 0x00,
  XILA_GRAPHICS_FLEX_FLOW_COLUMN = XILA_GRAPHICS_FLEX_COLUMN,
  XILA_GRAPHICS_FLEX_FLOW_ROW_WRAP =
      XILA_GRAPHICS_FLEX_FLOW_ROW | XILA_GRAPHICS_FLEX_WRAP,
  XILA_GRAPHICS_FLEX_FLOW_ROW_REVERSE =
      XILA_GRAPHICS_FLEX_FLOW_ROW | XILA_GRAPHICS_FLEX_REVERSE,
  XILA_GRAPHICS_FLEX_FLOW_ROW_WRAP_REVERSE = XILA_GRAPHICS_FLEX_FLOW_ROW |
                                             XILA_GRAPHICS_FLEX_WRAP |
                                             XILA_GRAPHICS_FLEX_REVERSE,
  XILA_GRAPHICS_FLEX_FLOW_COLUMN_WRAP =
      XILA_GRAPHICS_FLEX_FLOW_COLUMN | XILA_GRAPHICS_FLEX_WRAP,
  XILA_GRAPHICS_FLEX_FLOW_COLUMN_REVERSE =
      XILA_GRAPHICS_FLEX_FLOW_COLUMN | XILA_GRAPHICS_FLEX_REVERSE,
  XILA_GRAPHICS_FLEX_FLOW_COLUMN_WRAP_REVERSE = XILA_GRAPHICS_FLEX_FLOW_COLUMN |
                                                XILA_GRAPHICS_FLEX_WRAP |
                                                XILA_GRAPHICS_FLEX_REVERSE,
} Xila_graphics_flex_flow_t;

typedef enum {
  XILA_GRAPHICS_GRAD_DIR_NONE, /**< No gradient (the `grad_color` property is
                                  ignored)*/
  XILA_GRAPHICS_GRAD_DIR_VER,  /**< Simple vertical (top to bottom) gradient*/
  XILA_GRAPHICS_GRAD_DIR_HOR,  /**< Simple horizontal (left to right) gradient*/
  XILA_GRAPHICS_GRAD_DIR_LINEAR,  /**< Linear gradient defined by start and end
                                     points. Can be at any angle.*/
  XILA_GRAPHICS_GRAD_DIR_RADIAL,  /**< Radial gradient defined by start and end
                                     circles*/
  XILA_GRAPHICS_GRAD_DIR_CONICAL, /**< Conical gradient defined by center point,
                                     start and end angles*/
} Xila_graphics_grad_dir_t;

/**
 * Possible options for blending opaque drawings
 */
typedef enum {
  XILA_GRAPHICS_BLEND_MODE_NORMAL,      /**< Simply mix according to the opacity
                                           value*/
  XILA_GRAPHICS_BLEND_MODE_ADDITIVE,    /**< Add the respective color channels*/
  XILA_GRAPHICS_BLEND_MODE_SUBTRACTIVE, /**< Subtract the foreground from the
                                           background*/
  XILA_GRAPHICS_BLEND_MODE_MULTIPLY,    /**< Multiply the foreground and
                                           background*/
} Xila_graphics_blend_mode_t;

/**
 * Some options to apply decorations on texts.
 * 'OR'ed values can be used.
 */
typedef enum {
  XILA_GRAPHICS_TEXT_DECOR_NONE = 0x00,
  XILA_GRAPHICS_TEXT_DECOR_UNDERLINE = 0x01,
  XILA_GRAPHICS_TEXT_DECOR_STRIKETHROUGH = 0x02,
} Xila_graphics_text_decor_t;

/**
 * Selects on which sides border should be drawn
 * 'OR'ed values can be used.
 */
typedef enum {
  XILA_GRAPHICS_BORDER_SIDE_NONE = 0x00,
  XILA_GRAPHICS_BORDER_SIDE_BOTTOM = 0x01,
  XILA_GRAPHICS_BORDER_SIDE_TOP = 0x02,
  XILA_GRAPHICS_BORDER_SIDE_LEFT = 0x04,
  XILA_GRAPHICS_BORDER_SIDE_RIGHT = 0x08,
  XILA_GRAPHICS_BORDER_SIDE_FULL = 0x0F,
  XILA_GRAPHICS_BORDER_SIDE_INTERNAL =
      0x10, /**< FOR matrix-like objects (e.g. Button matrix)*/
} Xila_graphics_border_side_t;

typedef uint8_t Xila_graphics_anim_t;

typedef enum {
  XILA_GRAPHICS_STYLE_STATE_CMP_SAME, /**< The style properties in the 2 states
                                         are identical */
  XILA_GRAPHICS_STYLE_STATE_CMP_DIFF_REDRAW,   /**< The differences can be shown
                                                  with a simple redraw */
  XILA_GRAPHICS_STYLE_STATE_CMP_DIFF_DRAW_PAD, /**< The differences can be shown
                                                  with a simple redraw */
  XILA_GRAPHICS_STYLE_STATE_CMP_DIFF_LAYOUT,   /**< The differences can be shown
                                                  with a simple redraw */
} Xila_graphics_style_state_cmp_t;

typedef uint32_t Xila_graphics_style_selector_t;

typedef struct {
} Xila_graphics_obj_t;

typedef uint32_t Xila_graphics_part_t;

typedef struct {
  int32_t *x_points;
  int32_t *y_points;
  Xila_graphics_color_t color;
  uint32_t start_point;
  uint32_t hidden : 1;
  uint32_t x_ext_buf_assigned : 1;
  uint32_t y_ext_buf_assigned : 1;
  uint32_t x_axis_sec : 1;
  uint32_t y_axis_sec : 1;
} Xila_graphics_chart_series_t;

typedef enum {
  XILA_GRAPHICS_CHART_TYPE_NONE,    /**< Don't draw the series*/
  XILA_GRAPHICS_CHART_TYPE_LINE,    /**< Connect the points with lines*/
  XILA_GRAPHICS_CHART_TYPE_BAR,     /**< Draw columns*/
  XILA_GRAPHICS_CHART_TYPE_SCATTER, /**< Draw points and lines in 2D (x,y
                                       coordinates)*/
} lv_chart_type_t;

typedef void *Xila_graphics_style_t;

typedef Xila_graphics_opa_t (*Xila_graphics_color_filter_cb_t)(
    const struct Xila_graphics_color_filter_dsc_t *, Xila_graphics_color_t,
    Xila_graphics_opa_t);

typedef struct {
} Xila_graphics_font_t;

typedef enum {
  XILA_GRAPHICS_DIR_NONE = 0x00,
  XILA_GRAPHICS_DIR_LEFT = (1 << 0),
  XILA_GRAPHICS_DIR_RIGHT = (1 << 1),
  XILA_GRAPHICS_DIR_TOP = (1 << 2),
  XILA_GRAPHICS_DIR_BOTTOM = (1 << 3),
  XILA_GRAPHICS_DIR_HOR = XILA_GRAPHICS_DIR_LEFT | XILA_GRAPHICS_DIR_RIGHT,
  XILA_GRAPHICS_DIR_VER = XILA_GRAPHICS_DIR_TOP | XILA_GRAPHICS_DIR_BOTTOM,
  XILA_GRAPHICS_DIR_ALL = XILA_GRAPHICS_DIR_HOR | XILA_GRAPHICS_DIR_VER,
} Xila_graphics_dir_t;

typedef void (*Xila_graphics_event_cb_t)(Xila_graphics_event_t *e);

typedef struct {
} Xila_graphics_event_t;

/**
 * Represents a date on the calendar object (platform-agnostic).
 */
typedef struct {
  uint16_t year;
  int8_t month; /**< 1..12 */
  int8_t day;   /**< 1..31 */
} Xila_graphics_calendar_date_t;

typedef enum {
  XILA_GRAPHICS_ALIGN_DEFAULT = 0,
  XILA_GRAPHICS_ALIGN_TOP_LEFT,
  XILA_GRAPHICS_ALIGN_TOP_MID,
  XILA_GRAPHICS_ALIGN_TOP_RIGHT,
  XILA_GRAPHICS_ALIGN_BOTTOM_LEFT,
  XILA_GRAPHICS_ALIGN_BOTTOM_MID,
  XILA_GRAPHICS_ALIGN_BOTTOM_RIGHT,
  XILA_GRAPHICS_ALIGN_LEFT_MID,
  XILA_GRAPHICS_ALIGN_RIGHT_MID,
  XILA_GRAPHICS_ALIGN_CENTER,

  XILA_GRAPHICS_ALIGN_OUT_TOP_LEFT,
  XILA_GRAPHICS_ALIGN_OUT_TOP_MID,
  XILA_GRAPHICS_ALIGN_OUT_TOP_RIGHT,
  XILA_GRAPHICS_ALIGN_OUT_BOTTOM_LEFT,
  XILA_GRAPHICS_ALIGN_OUT_BOTTOM_MID,
  XILA_GRAPHICS_ALIGN_OUT_BOTTOM_RIGHT,
  XILA_GRAPHICS_ALIGN_OUT_LEFT_TOP,
  XILA_GRAPHICS_ALIGN_OUT_LEFT_MID,
  XILA_GRAPHICS_ALIGN_OUT_LEFT_BOTTOM,
  XILA_GRAPHICS_ALIGN_OUT_RIGHT_TOP,
  XILA_GRAPHICS_ALIGN_OUT_RIGHT_MID,
  XILA_GRAPHICS_ALIGN_OUT_RIGHT_BOTTOM,
} Xila_graphics_align_t;

typedef enum {
  XILA_GRAPHICS_GRID_ALIGN_START,
  XILA_GRAPHICS_GRID_ALIGN_CENTER,
  XILA_GRAPHICS_GRID_ALIGN_END,
  XILA_GRAPHICS_GRID_ALIGN_STRETCH,
  XILA_GRAPHICS_GRID_ALIGN_SPACE_EVENLY,
  XILA_GRAPHICS_GRID_ALIGN_SPACE_AROUND,
  XILA_GRAPHICS_GRID_ALIGN_SPACE_BETWEEN,
} Xila_graphics_grid_align_t;

typedef struct {
} Xila_graphics_obj_class_t;

/** Type to store button control bits (disabled, hidden etc.)
 * The first 3 bits are used to store the width*/
typedef enum {
  XILA_GRAPHICS_BUTTONMATRIX_CTRL_HIDDEN = 0x0010, /**< Button hidden*/
  XILA_GRAPHICS_BUTTONMATRIX_CTRL_NO_REPEAT =
      0x0020, /**< Do not repeat press this button.*/
  XILA_GRAPHICS_BUTTONMATRIX_CTRL_DISABLED = 0x0040, /**< Disable this button.*/
  XILA_GRAPHICS_BUTTONMATRIX_CTRL_CHECKABLE =
      0x0080, /**< The button can be toggled.*/
  XILA_GRAPHICS_BUTTONMATRIX_CTRL_CHECKED =
      0x0100, /**< Button is currently toggled (e.g. checked).*/
  XILA_GRAPHICS_BUTTONMATRIX_CTRL_CLICK_TRIG =
      0x0200, /**< 1: Send XILA_GRAPHICS_EVENT_VALUE_CHANGE on CLICK, 0: Send
                 XILA_GRAPHICS_EVENT_VALUE_CHANGE on PRESS*/
  XILA_GRAPHICS_BUTTONMATRIX_CTRL_POPOVER =
      0x0400, /**< Show a popover when pressing this key*/
  XILA_GRAPHICS_BUTTONMATRIX_CTRL_RESERVED_1 =
      0x0800, /**< Reserved for later use*/
  XILA_GRAPHICS_BUTTONMATRIX_CTRL_RESERVED_2 =
      0x1000, /**< Reserved for later use*/
  XILA_GRAPHICS_BUTTONMATRIX_CTRL_RESERVED_3 =
      0x2000, /**< Reserved for later use*/
  XILA_GRAPHICS_BUTTONMATRIX_CTRL_CUSTOM_1 =
      0x4000, /**< Custom free to use flag*/
  XILA_GRAPHICS_BUTTONMATRIX_CTRL_CUSTOM_2 =
      0x8000, /**< Custom free to use flag*/
} Xila_graphics_buttonmatrix_ctrl_t;

typedef enum {
  XILA_GRAPHICS_ARC_MODE_NORMAL,
  XILA_GRAPHICS_ARC_MODE_SYMMETRICAL,
  XILA_GRAPHICS_ARC_MODE_REVERSE
} Xila_graphics_arc_mode_t;

typedef enum {
  XILA_GRAPHICS_MENU_HEADER_TOP_FIXED,   /**< Header is positioned at the top */
  XILA_GRAPHICS_MENU_HEADER_TOP_UNFIXED, /**< Header is positioned at the top
                                            and can be scrolled out of view*/
  XILA_GRAPHICS_MENU_HEADER_BOTTOM_FIXED /**< Header is positioned at the bottom
                                          */
} Xila_graphics_menu_mode_header_t;

typedef enum {
  XILA_GRAPHICS_MENU_ROOT_BACK_BUTTON_DISABLED,
  XILA_GRAPHICS_MENU_ROOT_BACK_BUTTON_ENABLED
} Xila_graphics_menu_mode_root_back_button_t;

/** Roller mode. */
typedef enum {
  XILA_GRAPHICS_ROLLER_MODE_NORMAL, /**< Normal mode (roller ends at the end of
                                       the options). */
  XILA_GRAPHICS_ROLLER_MODE_INFINITE, /**< Infinite mode (roller can be scrolled
                                         forever). */
} Xila_graphics_roller_mode_t;

typedef enum {
  XILA_GRAPHICS_TABLE_CELL_CTRL_MERGE_RIGHT = 1 << 0,
  XILA_GRAPHICS_TABLE_CELL_CTRL_TEXT_CROP = 1 << 1,
  XILA_GRAPHICS_TABLE_CELL_CTRL_CUSTOM_1 = 1 << 4,
  XILA_GRAPHICS_TABLE_CELL_CTRL_CUSTOM_2 = 1 << 5,
  XILA_GRAPHICS_TABLE_CELL_CTRL_CUSTOM_3 = 1 << 6,
  XILA_GRAPHICS_TABLE_CELL_CTRL_CUSTOM_4 = 1 << 7,
} Xila_graphics_table_cell_ctrl_t;

/**
 * On/Off features controlling the object's behavior.
 * OR-ed values are possible
 *
 * Note: update obj flags corresponding properties below
 * whenever add/remove flags or change bit definition of flags.
 */
typedef enum {
  XILA_GRAPHICS_OBJ_FLAG_HIDDEN =
      (1L << 0), /**< Make the object hidden. (Like it wasn't there at all)*/
  XILA_GRAPHICS_OBJ_FLAG_CLICKABLE =
      (1L << 1), /**< Make the object clickable by the input devices*/
  XILA_GRAPHICS_OBJ_FLAG_CLICK_FOCUSABLE =
      (1L << 2), /**< Add focused state to the object when clicked*/
  XILA_GRAPHICS_OBJ_FLAG_CHECKABLE =
      (1L << 3), /**< Toggle checked state when the object is clicked*/
  XILA_GRAPHICS_OBJ_FLAG_SCROLLABLE =
      (1L << 4), /**< Make the object scrollable*/
  XILA_GRAPHICS_OBJ_FLAG_SCROLL_ELASTIC =
      (1L << 5), /**< Allow scrolling inside but with slower speed*/
  XILA_GRAPHICS_OBJ_FLAG_SCROLL_MOMENTUM =
      (1L << 6), /**< Make the object scroll further when "thrown"*/
  XILA_GRAPHICS_OBJ_FLAG_SCROLL_ONE =
      (1L << 7), /**< Allow scrolling only one snappable children*/
  XILA_GRAPHICS_OBJ_FLAG_SCROLL_CHAIN_HOR =
      (1L << 8), /**< Allow propagating the horizontal scroll to a parent*/
  XILA_GRAPHICS_OBJ_FLAG_SCROLL_CHAIN_VER =
      (1L << 9), /**< Allow propagating the vertical scroll to a parent*/
  XILA_GRAPHICS_OBJ_FLAG_SCROLL_CHAIN =
      (XILA_GRAPHICS_OBJ_FLAG_SCROLL_CHAIN_HOR |
       XILA_GRAPHICS_OBJ_FLAG_SCROLL_CHAIN_VER),
  XILA_GRAPHICS_OBJ_FLAG_SCROLL_ON_FOCUS =
      (1L << 10), /**< Automatically scroll object to make it visible when
                     focused*/
  XILA_GRAPHICS_OBJ_FLAG_SCROLL_WITH_ARROW =
      (1L << 11), /**< Allow scrolling the focused object with arrow keys*/
  XILA_GRAPHICS_OBJ_FLAG_SNAPPABLE =
      (1L << 12), /**< If scroll snap is enabled on the parent it can snap to
                     this object*/
  XILA_GRAPHICS_OBJ_FLAG_PRESS_LOCK =
      (1L << 13), /**< Keep the object pressed even if the press slid from the
                     object*/
  XILA_GRAPHICS_OBJ_FLAG_EVENT_BUBBLE =
      (1L << 14), /**< Propagate the events to the parent too*/
  XILA_GRAPHICS_OBJ_FLAG_GESTURE_BUBBLE =
      (1L << 15), /**< Propagate the gestures to the parent*/
  XILA_GRAPHICS_OBJ_FLAG_ADV_HITTEST =
      (1L << 16), /**< Allow performing more accurate hit (click) test. E.g.
                     consider rounded corners.*/
  XILA_GRAPHICS_OBJ_FLAG_IGNORE_LAYOUT =
      (1L << 17), /**< Make the object not positioned by the layouts*/
  XILA_GRAPHICS_OBJ_FLAG_FLOATING =
      (1L << 18), /**< Do not scroll the object when the parent scrolls and
                     ignore layout*/
  XILA_GRAPHICS_OBJ_FLAG_SEND_DRAW_TASK_EVENTS =
      (1L << 19), /**< Send `XILA_GRAPHICS_EVENT_DRAW_TASK_ADDED` events*/
  XILA_GRAPHICS_OBJ_FLAG_OVERFLOW_VISIBLE =
      (1L << 20), /**< Do not clip the children to the parent's ext draw size*/
  XILA_GRAPHICS_OBJ_FLAG_FLEX_IN_NEW_TRACK =
      (1L << 21), /**< Start a new flex track on this item*/

  XILA_GRAPHICS_OBJ_FLAG_LAYOUT_1 =
      (1L << 23), /**< Custom flag, free to use by layouts*/
  XILA_GRAPHICS_OBJ_FLAG_LAYOUT_2 =
      (1L << 24), /**< Custom flag, free to use by layouts*/

  XILA_GRAPHICS_OBJ_FLAG_WIDGET_1 =
      (1L << 25), /**< Custom flag, free to use by widget*/
  XILA_GRAPHICS_OBJ_FLAG_WIDGET_2 =
      (1L << 26), /**< Custom flag, free to use by widget*/
  XILA_GRAPHICS_OBJ_FLAG_USER_1 =
      (1L << 27), /**< Custom flag, free to use by user*/
  XILA_GRAPHICS_OBJ_FLAG_USER_2 =
      (1L << 28), /**< Custom flag, free to use by user*/
  XILA_GRAPHICS_OBJ_FLAG_USER_3 =
      (1L << 29), /**< Custom flag, free to use by user*/
  XILA_GRAPHICS_OBJ_FLAG_USER_4 =
      (1L << 30), /**< Custom flag, free to use by user*/
} Xila_graphics_obj_flag_t;

/**
 * LVGL error codes.
 */
typedef enum {
  XILA_GRAPHICS_RESULT_INVALID =
      0, /*Typically indicates that the object is deleted (become invalid) in
the action function or an operation was failed*/
  XILA_GRAPHICS_RESULT_OK, /*The object is valid (no deleted) after the action*/
} Xila_graphics_result_t;

/**
 * The subject (an observable value)
 */
typedef struct {
} Xila_graphics_subject_t;

/**
 * The observer object: a descriptor returned when subscribing LVGL widgets to
 * subjects
 */
typedef struct {
} Xila_graphics_observer_t;

typedef uint16_t Xila_graphics_state_t;

enum {
  XILA_GRAPHICS_STATE_DEFAULT = 0x0000,
  XILA_GRAPHICS_STATE_CHECKED = 0x0001,
  XILA_GRAPHICS_STATE_FOCUSED = 0x0002,
  XILA_GRAPHICS_STATE_FOCUS_KEY = 0x0004,
  XILA_GRAPHICS_STATE_EDITED = 0x0008,
  XILA_GRAPHICS_STATE_HOVERED = 0x0010,
  XILA_GRAPHICS_STATE_PRESSED = 0x0020,
  XILA_GRAPHICS_STATE_SCROLLED = 0x0040,
  XILA_GRAPHICS_STATE_DISABLED = 0x0080,
  XILA_GRAPHICS_STATE_USER_1 = 0x1000,
  XILA_GRAPHICS_STATE_USER_2 = 0x2000,
  XILA_GRAPHICS_STATE_USER_3 = 0x4000,
  XILA_GRAPHICS_STATE_USER_4 = 0x8000,

  XILA_GRAPHICS_STATE_ANY = 0xFFFF, /**< Special value can be used in some
                                       functions to target all states*/
};

enum {
  XILA_GRAPHICS_PART_MAIN = 0x000000,      /**< A background like rectangle*/
  XILA_GRAPHICS_PART_SCROLLBAR = 0x010000, /**< The scrollbar(s)*/
  XILA_GRAPHICS_PART_INDICATOR =
      0x020000, /**< Indicator, e.g. for slider, bar, switch, or the tick box of
                   the checkbox*/
  XILA_GRAPHICS_PART_KNOB =
      0x030000, /**< Like handle to grab to adjust the value*/
  XILA_GRAPHICS_PART_SELECTED =
      0x040000, /**< Indicate the currently selected option or section*/
  XILA_GRAPHICS_PART_ITEMS = 0x050000,  /**< Used if the widget has multiple
                                           similar elements (e.g. table cells)*/
  XILA_GRAPHICS_PART_CURSOR = 0x060000, /**< Mark a specific place e.g. for text
                                           area's cursor or on a chart*/

  XILA_GRAPHICS_PART_CUSTOM_FIRST =
      0x080000, /**< Extension point for custom widgets*/

  XILA_GRAPHICS_PART_ANY = 0x0F0000, /**< Special value can be used in some
                                        functions to target all parts*/
};

/**
 * Options for text rendering.
 */

typedef enum {
  XILA_GRAPHICS_TEXT_FLAG_NONE = 0x00,
  XILA_GRAPHICS_TEXT_FLAG_EXPAND =
      0x01, /**< Ignore max-width to avoid automatic word wrapping*/
  XILA_GRAPHICS_TEXT_FLAG_FIT =
      0x02, /**< Max-width is already equal to the longest line. (Used to skip
               some calculation)*/
  XILA_GRAPHICS_TEXT_FLAG_BREAK_ALL =
      0x04, /**< To prevent overflow, insert breaks between any two characters.
      Otherwise breaks are inserted at word boundaries, as configured via
      XILA_GRAPHICS_TXT_BREAK_CHARS or according to
      XILA_GRAPHICS_TXT_LINE_BREAK_LONG_LEN,
      XILA_GRAPHICS_TXT_LINE_BREAK_LONG_PRE_MIN_LEN, and
      XILA_GRAPHICS_TXT_LINE_BREAK_LONG_POST_MIN_LEN.*/
} Xila_graphics_text_flag_t;

/** Label align policy*/
typedef enum {
  XILA_GRAPHICS_TEXT_ALIGN_AUTO,   /**< Align text auto*/
  XILA_GRAPHICS_TEXT_ALIGN_LEFT,   /**< Align text to left*/
  XILA_GRAPHICS_TEXT_ALIGN_CENTER, /**< Align text to center*/
  XILA_GRAPHICS_TEXT_ALIGN_RIGHT,  /**< Align text to right*/
} Xila_graphics_text_align_t;

typedef enum {
  /** No flags */
  XILA_GRAPHICS_OBJ_POINT_TRANSFORM_FLAG_NONE = 0x00,

  /** Consider the transformation properties of the parents too */
  XILA_GRAPHICS_OBJ_POINT_TRANSFORM_FLAG_RECURSIVE = 0x01,

  /** Execute the inverse of the transformation (-angle and 1/zoom) */
  XILA_GRAPHICS_OBJ_POINT_TRANSFORM_FLAG_INVERSE = 0x02,

  /** Both inverse and recursive*/
  XILA_GRAPHICS_OBJ_POINT_TRANSFORM_FLAG_INVERSE_RECURSIVE = 0x03,
} Xila_graphics_obj_point_transform_flag_t;

typedef struct {
} Xila_graphics_group_t;

typedef void (*Xila_graphics_observer_cb_t)(Xila_graphics_observer_t *observer,
                                            Xila_graphics_subject_t *subject);

typedef struct lv_span_t {
} Xila_graphics_span_t;

/** Data of label*/
struct lv_spangroup_t {
} Xila_graphics_spangroup_t;

/** Can be used to indicate if animations are enabled or disabled in a case*/
typedef enum {
  XILA_GRAPHICS_ANIM_OFF,
  XILA_GRAPHICS_ANIM_ON,
} Xila_graphics_anim_enable_t;

typedef enum {
  XILA_GRAPHICS_BASE_DIR_LTR = 0x00,
  XILA_GRAPHICS_BASE_DIR_RTL = 0x01,
  XILA_GRAPHICS_BASE_DIR_AUTO = 0x02,

  XILA_GRAPHICS_BASE_DIR_NEUTRAL = 0x20,
  XILA_GRAPHICS_BASE_DIR_WEAK = 0x21,
} Xila_graphics_base_dir_t;

typedef enum Xila_graphics_display_t {};

/** Scrollbar modes: shows when should the scrollbars be visible*/
typedef enum {
  XILA_GRAPHICS_SCROLLBAR_MODE_OFF,    /**< Never show scrollbars*/
  XILA_GRAPHICS_SCROLLBAR_MODE_ON,     /**< Always show scrollbars*/
  XILA_GRAPHICS_SCROLLBAR_MODE_ACTIVE, /**< Show scroll bars when object is
                                          being scrolled*/
  XILA_GRAPHICS_SCROLLBAR_MODE_AUTO,   /**< Show scroll bars when the content is
                                          large enough to be scrolled*/
} Xila_graphics_scrollbar_mode_t;

/** Scroll span align options. Tells where to align the snappable children when
 * scroll stops.*/
typedef enum {
  XILA_GRAPHICS_SCROLL_SNAP_NONE,  /**< Do not align, leave where it is*/
  XILA_GRAPHICS_SCROLL_SNAP_START, /**< Align to the left/top*/
  XILA_GRAPHICS_SCROLL_SNAP_END,   /**< Align to the right/bottom*/
  XILA_GRAPHICS_SCROLL_SNAP_CENTER /**< Align to the center*/
} Xila_graphics_scroll_snap_t;

/**
 * Scale mode
 */
typedef enum {
  XILA_GRAPHICS_SCALE_MODE_HORIZONTAL_TOP = 0x00U,
  XILA_GRAPHICS_SCALE_MODE_HORIZONTAL_BOTTOM = 0x01U,
  XILA_GRAPHICS_SCALE_MODE_VERTICAL_LEFT = 0x02U,
  XILA_GRAPHICS_SCALE_MODE_VERTICAL_RIGHT = 0x04U,
  XILA_GRAPHICS_SCALE_MODE_ROUND_INNER = 0x08U,
  XILA_GRAPHICS_SCALE_MODE_ROUND_OUTER = 0x10U,
  XILA_GRAPHICS_SCALE_MODE_LAST
} Xila_graphics_scale_mode_t;

typedef struct {
} Xila_graphics_scale_section_t;

typedef enum {
  XILA_GRAPHICS_SLIDER_MODE_NORMAL = XILA_GRAPHICS_BAR_MODE_NORMAL,
  XILA_GRAPHICS_SLIDER_MODE_SYMMETRICAL = XILA_GRAPHICS_BAR_MODE_SYMMETRICAL,
  XILA_GRAPHICS_SLIDER_MODE_RANGE = XILA_GRAPHICS_BAR_MODE_RANGE
} Xila_graphics_slider_mode_t;

typedef enum {
  XILA_GRAPHICS_BAR_MODE_NORMAL,
  XILA_GRAPHICS_BAR_MODE_SYMMETRICAL,
  XILA_GRAPHICS_BAR_MODE_RANGE
} Xila_graphics_bar_mode_t;

typedef enum {
  XILA_GRAPHICS_BAR_ORIENTATION_AUTO,
  XILA_GRAPHICS_BAR_ORIENTATION_HORIZONTAL,
  XILA_GRAPHICS_BAR_ORIENTATION_VERTICAL
} Xila_graphics_bar_orientation_t;

typedef enum {
  XILA_GRAPHICS_SPAN_OVERFLOW_CLIP,
  XILA_GRAPHICS_SPAN_OVERFLOW_ELLIPSIS,
  XILA_GRAPHICS_SPAN_OVERFLOW_LAST, /**< Fence member*/
} Xila_graphics_span_overflow_t;

typedef enum {
  XILA_GRAPHICS_SPAN_MODE_FIXED,  /**< fixed the obj size */
  XILA_GRAPHICS_SPAN_MODE_EXPAND, /**< Expand the object size to the text size
                                   */
  XILA_GRAPHICS_SPAN_MODE_BREAK,  /**< Keep width, break the too long lines and
                                     expand height */
  XILA_GRAPHICS_SPAN_MODE_LAST    /**< Fence member */
} Xila_graphics_span_mode_t;

typedef struct {
} Xila_graphics_chart_cursor_t;

typedef Xila_graphics_obj_tree_walk_res_t (*Xila_graphics_obj_tree_walk_cb_t)(
    Xila_graphics_obj_t *, void *);

typedef enum {
  LV_OBJ_TREE_WALK_NEXT,
  LV_OBJ_TREE_WALK_SKIP_CHILDREN,
  LV_OBJ_TREE_WALK_END,
} Xila_graphics_obj_tree_walk_res_t;

/**
 * A common type to handle all the property types in the same way.
 */
typedef union {
  int32_t num; /**< Number integer number (opacity, enums, booleans or "normal"
                  numbers)*/
  const void *ptr;             /**< Constant pointers  (font, cone text, etc)*/
  Xila_graphics_color_t color; /**< Colors*/
} Xila_graphics_style_value_t;

typedef struct {
} Xila_graphics_layer_t;

/**
 * Chart types
 */
typedef enum {
  LV_CHART_TYPE_NONE,    /**< Don't draw the series*/
  LV_CHART_TYPE_LINE,    /**< Connect the points with lines*/
  LV_CHART_TYPE_BAR,     /**< Draw columns*/
  LV_CHART_TYPE_SCATTER, /**< Draw points and lines in 2D (x,y coordinates)*/
} Xila_graphics_chart_type_t;

/**
 * Chart update mode for `lv_chart_set_next`
 */
typedef enum {
  LV_CHART_UPDATE_MODE_SHIFT,    /**< Shift old data to the left and add the new
                                    one the right*/
  LV_CHART_UPDATE_MODE_CIRCULAR, /**< Add the new data in a circular way*/
} Xila_graphics_chart_update_mode_t;

/**
 * Enumeration of the axis'
 */
typedef enum {
  LV_CHART_AXIS_PRIMARY_Y = 0x00,
  LV_CHART_AXIS_SECONDARY_Y = 0x01,
  LV_CHART_AXIS_PRIMARY_X = 0x02,
  LV_CHART_AXIS_SECONDARY_X = 0x04,
  LV_CHART_AXIS_LAST
} Xila_graphics_chart_axis_t;

typedef enum {
  LV_STYLE_RES_NOT_FOUND,
  LV_STYLE_RES_FOUND,
} Xila_graphics_style_res_t;

typedef enum {
  LV_EVENT_ALL = 0,

  /** Input device events*/
  LV_EVENT_PRESSED,  /**< The object has been pressed*/
  LV_EVENT_PRESSING, /**< The object is being pressed (called continuously while
                        pressing)*/
  LV_EVENT_PRESS_LOST,    /**< The object is still being pressed but slid
                             cursor/finger off of the object */
  LV_EVENT_SHORT_CLICKED, /**< The object was pressed for a short period of
                             time, then released it. Not called if scrolled.*/
  LV_EVENT_LONG_PRESSED,  /**< Object has been pressed for at least
                             `long_press_time`.  Not called if scrolled.*/
  LV_EVENT_LONG_PRESSED_REPEAT, /**< Called after `long_press_time` in every
                                   `long_press_repeat_time` ms.  Not called if
                                   scrolled.*/
  LV_EVENT_CLICKED,  /**< Called on release if not scrolled (regardless to long
                        press)*/
  LV_EVENT_RELEASED, /**< Called in every cases when the object has been
                        released*/
  LV_EVENT_SCROLL_BEGIN, /**< Scrolling begins. The event parameter is a pointer
                            to the animation of the scroll. Can be modified*/
  LV_EVENT_SCROLL_THROW_BEGIN,
  LV_EVENT_SCROLL_END, /**< Scrolling ends*/
  LV_EVENT_SCROLL,     /**< Scrolling*/
  LV_EVENT_GESTURE,    /**< A gesture is detected. Get the gesture with
                          `lv_indev_get_gesture_dir(lv_indev_active());` */
  LV_EVENT_KEY,        /**< A key is sent to the object. Get the key with
                          `lv_indev_get_key(lv_indev_active());`*/
  LV_EVENT_ROTARY,  /**< An encoder or wheel was rotated. Get the rotation count
                       with `lv_event_get_rotary_diff(e);`*/
  LV_EVENT_FOCUSED, /**< The object is focused*/
  LV_EVENT_DEFOCUSED,   /**< The object is defocused*/
  LV_EVENT_LEAVE,       /**< The object is defocused but still selected*/
  LV_EVENT_HIT_TEST,    /**< Perform advanced hit-testing*/
  LV_EVENT_INDEV_RESET, /**< Indev has been reset*/
  LV_EVENT_HOVER_OVER,  /**< Indev hover over object*/
  LV_EVENT_HOVER_LEAVE, /**< Indev hover leave object*/

  /** Drawing events*/
  LV_EVENT_COVER_CHECK, /**< Check if the object fully covers an area. The event
                           parameter is `lv_cover_check_info_t *`.*/
  LV_EVENT_REFR_EXT_DRAW_SIZE, /**< Get the required extra draw area around the
                                  object (e.g. for shadow). The event parameter
                                  is `int32_t *` to store the size.*/
  LV_EVENT_DRAW_MAIN_BEGIN,    /**< Starting the main drawing phase*/
  LV_EVENT_DRAW_MAIN,          /**< Perform the main drawing*/
  LV_EVENT_DRAW_MAIN_END,      /**< Finishing the main drawing phase*/
  LV_EVENT_DRAW_POST_BEGIN, /**< Starting the post draw phase (when all children
                               are drawn)*/
  LV_EVENT_DRAW_POST, /**< Perform the post draw phase (when all children are
                         drawn)*/
  LV_EVENT_DRAW_POST_END, /**< Finishing the post draw phase (when all children
                             are drawn)*/
  LV_EVENT_DRAW_TASK_ADDED, /**< Adding a draw task */

  /** Special events*/
  LV_EVENT_VALUE_CHANGED, /**< The object's value has changed (i.e. slider
                             moved)*/
  LV_EVENT_INSERT,  /**< A text is inserted to the object. The event data is
                       `char *` being inserted.*/
  LV_EVENT_REFRESH, /**< Notify the object to refresh something on it (for the
                       user)*/
  LV_EVENT_READY,   /**< A process has finished*/
  LV_EVENT_CANCEL,  /**< A process has been cancelled */

  /** Other events*/
  LV_EVENT_CREATE,        /**< Object is being created*/
  LV_EVENT_DELETE,        /**< Object is being deleted*/
  LV_EVENT_CHILD_CHANGED, /**< Child was removed, added, or its size, position
                             were changed */
  LV_EVENT_CHILD_CREATED, /**< Child was created, always bubbles up to all
                             parents*/
  LV_EVENT_CHILD_DELETED, /**< Child was deleted, always bubbles up to all
                             parents*/
  LV_EVENT_SCREEN_UNLOAD_START, /**< A screen unload started, fired immediately
                                   when scr_load is called*/
  LV_EVENT_SCREEN_LOAD_START, /**< A screen load started, fired when the screen
                                 change delay is expired*/
  LV_EVENT_SCREEN_LOADED,     /**< A screen was loaded*/
  LV_EVENT_SCREEN_UNLOADED,   /**< A screen was unloaded*/
  LV_EVENT_SIZE_CHANGED,      /**< Object coordinates/size have changed*/
  LV_EVENT_STYLE_CHANGED,     /**< Object's style has changed*/
  LV_EVENT_LAYOUT_CHANGED,    /**< The children position has changed due to a
                                 layout recalculation*/
  LV_EVENT_GET_SELF_SIZE,     /**< Get the internal size of a widget*/

  /** Events of optional LVGL components*/
  LV_EVENT_INVALIDATE_AREA,
  LV_EVENT_RESOLUTION_CHANGED,
  LV_EVENT_COLOR_FORMAT_CHANGED,
  LV_EVENT_REFR_REQUEST,
  LV_EVENT_REFR_START,
  LV_EVENT_REFR_READY,
  LV_EVENT_RENDER_START,
  LV_EVENT_RENDER_READY,
  LV_EVENT_FLUSH_START,
  LV_EVENT_FLUSH_FINISH,
  LV_EVENT_FLUSH_WAIT_START,
  LV_EVENT_FLUSH_WAIT_FINISH,

  LV_EVENT_VSYNC,

  LV_EVENT_LAST, /** Number of default events*/

  LV_EVENT_PREPROCESS =
      0x8000, /** This is a flag that can be set with an event so it's processed
                before the class default event processing */
} Xila_graphics_event_code_t;

typedef Xila_graphics_obj_tree_walk_res_t (*Xila_graphics_obj_tree_walk_cb_t)(
    Xila_graphics_obj_t *, void *);

/** Get the current value during an animation*/
typedef int32_t (*Xila_graphics_anim_path_cb_t)(const Xila_graphics_anim_t *);
void Xila_graphics_point_transform(Xila_graphics_point_t *point, int32_t angle,
                                   int32_t scale_x, int32_t scale_y,
                                   const Xila_graphics_point_t *pivot,
                                   bool zoom_first);
void Xila_graphics_point_array_transform(Xila_graphics_point_t *points,
                                         size_t count, int32_t angle,
                                         int32_t scale_x, int32_t scale_y,
                                         const Xila_graphics_point_t *pivot,
                                         bool zoom_first);
Xila_graphics_point_t
Xila_graphics_point_from_precise(const Xila_graphics_point_precise_t *p);
Xila_graphics_point_precise_t
Xila_graphics_point_to_precise(const Xila_graphics_point_t *p);
void Xila_graphics_point_set(Xila_graphics_point_t *p, int32_t x, int32_t y);
void Xila_graphics_point_precise_set(Xila_graphics_point_precise_t *p,
                                     Xila_graphics_value_precise_t x,
                                     Xila_graphics_value_precise_t y);
void Xila_graphics_point_swap(Xila_graphics_point_t *p1,
                              Xila_graphics_point_t *p2);
void Xila_graphics_point_precise_swap(Xila_graphics_point_precise_t *p1,
                                      Xila_graphics_point_precise_t *p2);
uint8_t Xila_graphics_color_format_get_bpp(Xila_graphics_color_format_t cf);
uint8_t Xila_graphics_color_format_get_size(Xila_graphics_color_format_t cf);
bool Xila_graphics_color_format_has_alpha(Xila_graphics_color_format_t src_cf);
Xila_graphics_color32_t Xila_graphics_color_to_32(Xila_graphics_color_t color,
                                                  Xila_graphics_opa_t opa);
uint32_t Xila_graphics_color_to_int(Xila_graphics_color_t c);
bool Xila_graphics_color_eq(Xila_graphics_color_t c1, Xila_graphics_color_t c2);
bool Xila_graphics_color32_eq(Xila_graphics_color32_t c1,
                              Xila_graphics_color32_t c2);
Xila_graphics_color_t Xila_graphics_color_hex(uint32_t c);
Xila_graphics_color_t Xila_graphics_color_make(uint8_t r, uint8_t g, uint8_t b);
Xila_graphics_color32_t Xila_graphics_color32_make(uint8_t r, uint8_t g,
                                                   uint8_t b, uint8_t a);
Xila_graphics_color_t Xila_graphics_color_hex3(uint32_t c);
uint16_t Xila_graphics_color_to_u16(Xila_graphics_color_t color);
uint32_t Xila_graphics_color_to_u32(Xila_graphics_color_t color);
uint16_t Xila_graphics_color_16_16_mix(uint16_t c1, uint16_t c2, uint8_t mix);
Xila_graphics_color_t Xila_graphics_color_lighten(Xila_graphics_color_t c,
                                                  Xila_graphics_opa_t lvl);
Xila_graphics_color_t Xila_graphics_color_darken(Xila_graphics_color_t c,
                                                 Xila_graphics_opa_t lvl);
Xila_graphics_color_t Xila_graphics_color_hsv_to_rgb(uint16_t h, uint8_t s,
                                                     uint8_t v);
Xila_graphics_color_hsv_t Xila_graphics_color_rgb_to_hsv(uint8_t r8, uint8_t g8,
                                                         uint8_t b8);
Xila_graphics_color_hsv_t
Xila_graphics_color_to_hsv(Xila_graphics_color_t color);
Xila_graphics_color_t Xila_graphics_color_white();
Xila_graphics_color_t Xila_graphics_color_black();
void Xila_graphics_color_premultiply(Xila_graphics_color32_t *c);
void Xila_graphics_color16_premultiply(Xila_graphics_color16_t *c,
                                       Xila_graphics_opa_t a);
uint8_t Xila_graphics_color_luminance(Xila_graphics_color_t c);
uint8_t Xila_graphics_color16_luminance(Xila_graphics_color16_t c);
uint8_t Xila_graphics_color24_luminance(const uint8_t *c);
uint8_t Xila_graphics_color32_luminance(Xila_graphics_color32_t c);
Xila_graphics_color_t Xila_graphics_color_mix(Xila_graphics_color_t c1,
                                              Xila_graphics_color_t c2,
                                              uint8_t mix);
Xila_graphics_color32_t Xila_graphics_color_mix32(Xila_graphics_color32_t fg,
                                                  Xila_graphics_color32_t bg);
uint8_t Xila_graphics_color_brightness(Xila_graphics_color_t c);
void Xila_graphics_color_filter_dsc_init(Xila_graphics_color_filter_dsc_t *dsc,
                                         Xila_graphics_color_filter_cb_t cb);
void Xila_graphics_obj_set_flex_flow(Xila_graphics_obj_t *obj,
                                     Xila_graphics_flex_flow_t flow);
void Xila_graphics_obj_set_flex_align(
    Xila_graphics_obj_t *obj, Xila_graphics_flex_align_t main_place,
    Xila_graphics_flex_align_t cross_place,
    Xila_graphics_flex_align_t track_cross_place);
void Xila_graphics_obj_set_flex_grow(Xila_graphics_obj_t *obj, uint8_t grow);
void Xila_graphics_obj_set_grid_dsc_array(Xila_graphics_obj_t *obj,
                                          const int32_t *col_dsc,
                                          const int32_t *row_dsc);
void Xila_graphics_obj_set_grid_align(Xila_graphics_obj_t *obj,
                                      Xila_graphics_grid_align_t column_align,
                                      Xila_graphics_grid_align_t row_align);
void Xila_graphics_obj_set_grid_cell(Xila_graphics_obj_t *obj,
                                     Xila_graphics_grid_align_t column_align,
                                     int32_t col_pos, int32_t col_span,
                                     Xila_graphics_grid_align_t row_align,
                                     int32_t row_pos, int32_t row_span);
void Xila_graphics_style_init(Xila_graphics_style_t *style);
void Xila_graphics_style_reset(Xila_graphics_style_t *style);
Xila_graphics_style_prop_t Xila_graphics_style_register_prop(uint8_t flag);
Xila_graphics_style_prop_t Xila_graphics_style_get_num_custom_props();
bool Xila_graphics_style_remove_prop(Xila_graphics_style_t *style,
                                     Xila_graphics_style_prop_t prop);
void Xila_graphics_style_set_prop(Xila_graphics_style_t *style,
                                  Xila_graphics_style_prop_t prop,
                                  Xila_graphics_style_value_t value);
Xila_graphics_style_res_t
Xila_graphics_style_get_prop(const Xila_graphics_style_t *style,
                             Xila_graphics_style_prop_t prop,
                             Xila_graphics_style_value_t *value);
void Xila_graphics_style_transition_dsc_init(
    Xila_graphics_style_transition_dsc_t *tr,
    const Xila_graphics_style_prop_t *props,
    Xila_graphics_anim_path_cb_t path_cb, uint32_t time, uint32_t delay,
    char *user_data);
Xila_graphics_style_value_t
Xila_graphics_style_prop_get_default(Xila_graphics_style_prop_t prop);
bool Xila_graphics_style_is_empty(const Xila_graphics_style_t *style);
uint8_t Xila_graphics_style_prop_lookup_flags(Xila_graphics_style_prop_t prop);
void Xila_graphics_style_set_width(Xila_graphics_style_t *style, int32_t value);
void Xila_graphics_style_set_min_width(Xila_graphics_style_t *style,
                                       int32_t value);
void Xila_graphics_style_set_max_width(Xila_graphics_style_t *style,
                                       int32_t value);
void Xila_graphics_style_set_height(Xila_graphics_style_t *style,
                                    int32_t value);
void Xila_graphics_style_set_min_height(Xila_graphics_style_t *style,
                                        int32_t value);
void Xila_graphics_style_set_max_height(Xila_graphics_style_t *style,
                                        int32_t value);
void Xila_graphics_style_set_length(Xila_graphics_style_t *style,
                                    int32_t value);
void Xila_graphics_style_set_x(Xila_graphics_style_t *style, int32_t value);
void Xila_graphics_style_set_y(Xila_graphics_style_t *style, int32_t value);
void Xila_graphics_style_set_align(Xila_graphics_style_t *style,
                                   Xila_graphics_align_t value);
void Xila_graphics_style_set_transform_width(Xila_graphics_style_t *style,
                                             int32_t value);
void Xila_graphics_style_set_transform_height(Xila_graphics_style_t *style,
                                              int32_t value);
void Xila_graphics_style_set_translate_x(Xila_graphics_style_t *style,
                                         int32_t value);
void Xila_graphics_style_set_translate_y(Xila_graphics_style_t *style,
                                         int32_t value);
void Xila_graphics_style_set_transform_scale_x(Xila_graphics_style_t *style,
                                               int32_t value);
void Xila_graphics_style_set_transform_scale_y(Xila_graphics_style_t *style,
                                               int32_t value);
void Xila_graphics_style_set_transform_rotation(Xila_graphics_style_t *style,
                                                int32_t value);
void Xila_graphics_style_set_transform_pivot_x(Xila_graphics_style_t *style,
                                               int32_t value);
void Xila_graphics_style_set_transform_pivot_y(Xila_graphics_style_t *style,
                                               int32_t value);
void Xila_graphics_style_set_transform_skew_x(Xila_graphics_style_t *style,
                                              int32_t value);
void Xila_graphics_style_set_transform_skew_y(Xila_graphics_style_t *style,
                                              int32_t value);
void Xila_graphics_style_set_pad_top(Xila_graphics_style_t *style,
                                     int32_t value);
void Xila_graphics_style_set_pad_bottom(Xila_graphics_style_t *style,
                                        int32_t value);
void Xila_graphics_style_set_pad_left(Xila_graphics_style_t *style,
                                      int32_t value);
void Xila_graphics_style_set_pad_right(Xila_graphics_style_t *style,
                                       int32_t value);
void Xila_graphics_style_set_pad_row(Xila_graphics_style_t *style,
                                     int32_t value);
void Xila_graphics_style_set_pad_column(Xila_graphics_style_t *style,
                                        int32_t value);
void Xila_graphics_style_set_margin_top(Xila_graphics_style_t *style,
                                        int32_t value);
void Xila_graphics_style_set_margin_bottom(Xila_graphics_style_t *style,
                                           int32_t value);
void Xila_graphics_style_set_margin_left(Xila_graphics_style_t *style,
                                         int32_t value);
void Xila_graphics_style_set_margin_right(Xila_graphics_style_t *style,
                                          int32_t value);
void Xila_graphics_style_set_bg_color(Xila_graphics_style_t *style,
                                      Xila_graphics_color_t value);
void Xila_graphics_style_set_bg_opa(Xila_graphics_style_t *style,
                                    Xila_graphics_opa_t value);
void Xila_graphics_style_set_bg_grad_color(Xila_graphics_style_t *style,
                                           Xila_graphics_color_t value);
void Xila_graphics_style_set_bg_grad_dir(Xila_graphics_style_t *style,
                                         Xila_graphics_grad_dir_t value);
void Xila_graphics_style_set_bg_main_stop(Xila_graphics_style_t *style,
                                          int32_t value);
void Xila_graphics_style_set_bg_grad_stop(Xila_graphics_style_t *style,
                                          int32_t value);
void Xila_graphics_style_set_bg_main_opa(Xila_graphics_style_t *style,
                                         Xila_graphics_opa_t value);
void Xila_graphics_style_set_bg_grad_opa(Xila_graphics_style_t *style,
                                         Xila_graphics_opa_t value);
void Xila_graphics_style_set_bg_grad(Xila_graphics_style_t *style,
                                     const Xila_graphics_grad_dsc_t *value);
void Xila_graphics_style_set_bg_image_src(Xila_graphics_style_t *style,
                                          const char *value);
void Xila_graphics_style_set_bg_image_opa(Xila_graphics_style_t *style,
                                          Xila_graphics_opa_t value);
void Xila_graphics_style_set_bg_image_recolor(Xila_graphics_style_t *style,
                                              Xila_graphics_color_t value);
void Xila_graphics_style_set_bg_image_recolor_opa(Xila_graphics_style_t *style,
                                                  Xila_graphics_opa_t value);
void Xila_graphics_style_set_bg_image_tiled(Xila_graphics_style_t *style,
                                            bool value);
void Xila_graphics_style_set_border_color(Xila_graphics_style_t *style,
                                          Xila_graphics_color_t value);
void Xila_graphics_style_set_border_opa(Xila_graphics_style_t *style,
                                        Xila_graphics_opa_t value);
void Xila_graphics_style_set_border_width(Xila_graphics_style_t *style,
                                          int32_t value);
void Xila_graphics_style_set_border_side(Xila_graphics_style_t *style,
                                         Xila_graphics_border_side_t value);
void Xila_graphics_style_set_border_post(Xila_graphics_style_t *style,
                                         bool value);
void Xila_graphics_style_set_outline_width(Xila_graphics_style_t *style,
                                           int32_t value);
void Xila_graphics_style_set_outline_color(Xila_graphics_style_t *style,
                                           Xila_graphics_color_t value);
void Xila_graphics_style_set_outline_opa(Xila_graphics_style_t *style,
                                         Xila_graphics_opa_t value);
void Xila_graphics_style_set_outline_pad(Xila_graphics_style_t *style,
                                         int32_t value);
void Xila_graphics_style_set_shadow_width(Xila_graphics_style_t *style,
                                          int32_t value);
void Xila_graphics_style_set_shadow_offset_x(Xila_graphics_style_t *style,
                                             int32_t value);
void Xila_graphics_style_set_shadow_offset_y(Xila_graphics_style_t *style,
                                             int32_t value);
void Xila_graphics_style_set_shadow_spread(Xila_graphics_style_t *style,
                                           int32_t value);
void Xila_graphics_style_set_shadow_color(Xila_graphics_style_t *style,
                                          Xila_graphics_color_t value);
void Xila_graphics_style_set_shadow_opa(Xila_graphics_style_t *style,
                                        Xila_graphics_opa_t value);
void Xila_graphics_style_set_image_opa(Xila_graphics_style_t *style,
                                       Xila_graphics_opa_t value);
void Xila_graphics_style_set_image_recolor(Xila_graphics_style_t *style,
                                           Xila_graphics_color_t value);
void Xila_graphics_style_set_image_recolor_opa(Xila_graphics_style_t *style,
                                               Xila_graphics_opa_t value);
void Xila_graphics_style_set_line_width(Xila_graphics_style_t *style,
                                        int32_t value);
void Xila_graphics_style_set_line_dash_width(Xila_graphics_style_t *style,
                                             int32_t value);
void Xila_graphics_style_set_line_dash_gap(Xila_graphics_style_t *style,
                                           int32_t value);
void Xila_graphics_style_set_line_rounded(Xila_graphics_style_t *style,
                                          bool value);
void Xila_graphics_style_set_line_color(Xila_graphics_style_t *style,
                                        Xila_graphics_color_t value);
void Xila_graphics_style_set_line_opa(Xila_graphics_style_t *style,
                                      Xila_graphics_opa_t value);
void Xila_graphics_style_set_arc_width(Xila_graphics_style_t *style,
                                       int32_t value);
void Xila_graphics_style_set_arc_rounded(Xila_graphics_style_t *style,
                                         bool value);
void Xila_graphics_style_set_arc_color(Xila_graphics_style_t *style,
                                       Xila_graphics_color_t value);
void Xila_graphics_style_set_arc_opa(Xila_graphics_style_t *style,
                                     Xila_graphics_opa_t value);
void Xila_graphics_style_set_arc_image_src(Xila_graphics_style_t *style,
                                           const char *value);
void Xila_graphics_style_set_text_color(Xila_graphics_style_t *style,
                                        Xila_graphics_color_t value);
void Xila_graphics_style_set_text_opa(Xila_graphics_style_t *style,
                                      Xila_graphics_opa_t value);
void Xila_graphics_style_set_text_font(Xila_graphics_style_t *style,
                                       const Xila_graphics_font_t *value);
void Xila_graphics_style_set_text_letter_space(Xila_graphics_style_t *style,
                                               int32_t value);
void Xila_graphics_style_set_text_line_space(Xila_graphics_style_t *style,
                                             int32_t value);
void Xila_graphics_style_set_text_decor(Xila_graphics_style_t *style,
                                        Xila_graphics_text_decor_t value);
void Xila_graphics_style_set_text_align(Xila_graphics_style_t *style,
                                        Xila_graphics_text_align_t value);
void Xila_graphics_style_set_radius(Xila_graphics_style_t *style,
                                    int32_t value);
void Xila_graphics_style_set_clip_corner(Xila_graphics_style_t *style,
                                         bool value);
void Xila_graphics_style_set_opa(Xila_graphics_style_t *style,
                                 Xila_graphics_opa_t value);
void Xila_graphics_style_set_opa_layered(Xila_graphics_style_t *style,
                                         Xila_graphics_opa_t value);
void Xila_graphics_style_set_color_filter_dsc(
    Xila_graphics_style_t *style,
    const Xila_graphics_color_filter_dsc_t *value);
void Xila_graphics_style_set_color_filter_opa(Xila_graphics_style_t *style,
                                              Xila_graphics_opa_t value);
void Xila_graphics_style_set_anim(Xila_graphics_style_t *style,
                                  const Xila_graphics_anim_t *value);
void Xila_graphics_style_set_anim_duration(Xila_graphics_style_t *style,
                                           uint32_t value);
void Xila_graphics_style_set_transition(
    Xila_graphics_style_t *style,
    const Xila_graphics_style_transition_dsc_t *value);
void Xila_graphics_style_set_blend_mode(Xila_graphics_style_t *style,
                                        Xila_graphics_blend_mode_t value);
void Xila_graphics_style_set_layout(Xila_graphics_style_t *style,
                                    uint16_t value);
void Xila_graphics_style_set_base_dir(Xila_graphics_style_t *style,
                                      Xila_graphics_base_dir_t value);
void Xila_graphics_style_set_bitmap_mask_src(Xila_graphics_style_t *style,
                                             const char *value);
void Xila_graphics_style_set_rotary_sensitivity(Xila_graphics_style_t *style,
                                                uint32_t value);
void Xila_graphics_style_set_flex_flow(Xila_graphics_style_t *style,
                                       Xila_graphics_flex_flow_t value);
void Xila_graphics_style_set_flex_main_place(Xila_graphics_style_t *style,
                                             Xila_graphics_flex_align_t value);
void Xila_graphics_style_set_flex_cross_place(Xila_graphics_style_t *style,
                                              Xila_graphics_flex_align_t value);
void Xila_graphics_style_set_flex_track_place(Xila_graphics_style_t *style,
                                              Xila_graphics_flex_align_t value);
void Xila_graphics_style_set_flex_grow(Xila_graphics_style_t *style,
                                       uint8_t value);
void Xila_graphics_style_set_grid_column_dsc_array(Xila_graphics_style_t *style,
                                                   const int32_t *value);
void Xila_graphics_style_set_grid_column_align(
    Xila_graphics_style_t *style, Xila_graphics_grid_align_t value);
void Xila_graphics_style_set_grid_row_dsc_array(Xila_graphics_style_t *style,
                                                const int32_t *value);
void Xila_graphics_style_set_grid_row_align(Xila_graphics_style_t *style,
                                            Xila_graphics_grid_align_t value);
void Xila_graphics_style_set_grid_cell_column_pos(Xila_graphics_style_t *style,
                                                  int32_t value);
void Xila_graphics_style_set_grid_cell_x_align(
    Xila_graphics_style_t *style, Xila_graphics_grid_align_t value);
void Xila_graphics_style_set_grid_cell_column_span(Xila_graphics_style_t *style,
                                                   int32_t value);
void Xila_graphics_style_set_grid_cell_row_pos(Xila_graphics_style_t *style,
                                               int32_t value);
void Xila_graphics_style_set_grid_cell_y_align(
    Xila_graphics_style_t *style, Xila_graphics_grid_align_t value);
void Xila_graphics_style_set_grid_cell_row_span(Xila_graphics_style_t *style,
                                                int32_t value);
void Xila_graphics_obj_delete(Xila_graphics_obj_t *obj);
void Xila_graphics_obj_clean(Xila_graphics_obj_t *obj);
void Xila_graphics_obj_delete_delayed(Xila_graphics_obj_t *obj,
                                      uint32_t delay_ms);
void Xila_graphics_obj_delete_anim_completed_cb(Xila_graphics_anim_t *a);
void Xila_graphics_obj_delete_async(Xila_graphics_obj_t *obj);
void Xila_graphics_obj_set_parent(Xila_graphics_obj_t *obj,
                                  Xila_graphics_obj_t *parent);
void Xila_graphics_obj_swap(Xila_graphics_obj_t *obj1,
                            Xila_graphics_obj_t *obj2);
void Xila_graphics_obj_move_to_index(Xila_graphics_obj_t *obj, int32_t index);
Xila_graphics_obj_t *
Xila_graphics_obj_get_screen(const Xila_graphics_obj_t *obj);
Xila_graphics_obj_t *
Xila_graphics_obj_get_parent(const Xila_graphics_obj_t *obj);
Xila_graphics_obj_t *Xila_graphics_obj_get_child(const Xila_graphics_obj_t *obj,
                                                 int32_t idx);
Xila_graphics_obj_t *
Xila_graphics_obj_get_child_by_type(const Xila_graphics_obj_t *obj, int32_t idx,
                                    const Xila_graphics_obj_class_t *class_p);
Xila_graphics_obj_t *
Xila_graphics_obj_get_sibling(const Xila_graphics_obj_t *obj, int32_t idx);
Xila_graphics_obj_t *
Xila_graphics_obj_get_sibling_by_type(const Xila_graphics_obj_t *obj,
                                      int32_t idx,
                                      const Xila_graphics_obj_class_t *class_p);
uint32_t Xila_graphics_obj_get_child_count(const Xila_graphics_obj_t *obj);
uint32_t Xila_graphics_obj_get_child_count_by_type(
    const Xila_graphics_obj_t *obj, const Xila_graphics_obj_class_t *class_p);
int32_t Xila_graphics_obj_get_index(const Xila_graphics_obj_t *obj);
int32_t
Xila_graphics_obj_get_index_by_type(const Xila_graphics_obj_t *obj,
                                    const Xila_graphics_obj_class_t *class_p);
void Xila_graphics_obj_tree_walk(Xila_graphics_obj_t *start_obj,
                                 Xila_graphics_obj_tree_walk_cb_t cb,
                                 char *user_data);
void Xila_graphics_obj_dump_tree(Xila_graphics_obj_t *start_obj);
void Xila_graphics_obj_set_pos(Xila_graphics_obj_t *obj, int32_t x, int32_t y);
void Xila_graphics_obj_set_x(Xila_graphics_obj_t *obj, int32_t x);
void Xila_graphics_obj_set_y(Xila_graphics_obj_t *obj, int32_t y);
void Xila_graphics_obj_set_size(Xila_graphics_obj_t *obj, int32_t w, int32_t h);
bool Xila_graphics_obj_refr_size(Xila_graphics_obj_t *obj);
void Xila_graphics_obj_set_width(Xila_graphics_obj_t *obj, int32_t w);
void Xila_graphics_obj_set_height(Xila_graphics_obj_t *obj, int32_t h);
void Xila_graphics_obj_set_content_width(Xila_graphics_obj_t *obj, int32_t w);
void Xila_graphics_obj_set_content_height(Xila_graphics_obj_t *obj, int32_t h);
void Xila_graphics_obj_set_layout(Xila_graphics_obj_t *obj, uint32_t layout);
bool Xila_graphics_obj_is_layout_positioned(const Xila_graphics_obj_t *obj);
void Xila_graphics_obj_mark_layout_as_dirty(Xila_graphics_obj_t *obj);
void Xila_graphics_obj_update_layout(const Xila_graphics_obj_t *obj);
void Xila_graphics_obj_set_align(Xila_graphics_obj_t *obj,
                                 Xila_graphics_align_t align);
void Xila_graphics_obj_align(Xila_graphics_obj_t *obj,
                             Xila_graphics_align_t align, int32_t x_ofs,
                             int32_t y_ofs);
void Xila_graphics_obj_align_to(Xila_graphics_obj_t *obj,
                                const Xila_graphics_obj_t *base,
                                Xila_graphics_align_t align, int32_t x_ofs,
                                int32_t y_ofs);
void Xila_graphics_obj_center(Xila_graphics_obj_t *obj);
void Xila_graphics_obj_get_coords(const Xila_graphics_obj_t *obj,
                                  Xila_graphics_area_t *coords);
int32_t Xila_graphics_obj_get_x(const Xila_graphics_obj_t *obj);
int32_t Xila_graphics_obj_get_x2(const Xila_graphics_obj_t *obj);
int32_t Xila_graphics_obj_get_y(const Xila_graphics_obj_t *obj);
int32_t Xila_graphics_obj_get_y2(const Xila_graphics_obj_t *obj);
int32_t Xila_graphics_obj_get_x_aligned(const Xila_graphics_obj_t *obj);
int32_t Xila_graphics_obj_get_y_aligned(const Xila_graphics_obj_t *obj);
int32_t Xila_graphics_obj_get_width(const Xila_graphics_obj_t *obj);
int32_t Xila_graphics_obj_get_height(const Xila_graphics_obj_t *obj);
int32_t Xila_graphics_obj_get_content_width(const Xila_graphics_obj_t *obj);
int32_t Xila_graphics_obj_get_content_height(const Xila_graphics_obj_t *obj);
void Xila_graphics_obj_get_content_coords(const Xila_graphics_obj_t *obj,
                                          Xila_graphics_area_t *area);
int32_t Xila_graphics_obj_get_self_width(const Xila_graphics_obj_t *obj);
int32_t Xila_graphics_obj_get_self_height(const Xila_graphics_obj_t *obj);
bool Xila_graphics_obj_refresh_self_size(Xila_graphics_obj_t *obj);
void Xila_graphics_obj_refr_pos(Xila_graphics_obj_t *obj);
void Xila_graphics_obj_move_to(Xila_graphics_obj_t *obj, int32_t x, int32_t y);
void Xila_graphics_obj_move_children_by(Xila_graphics_obj_t *obj,
                                        int32_t x_diff, int32_t y_diff,
                                        bool ignore_floating);
void Xila_graphics_obj_transform_point(
    const Xila_graphics_obj_t *obj, Xila_graphics_point_t *p,
    Xila_graphics_obj_point_transform_flag_t flags);
void Xila_graphics_obj_transform_point_array(
    const Xila_graphics_obj_t *obj, Xila_graphics_point_t *points, size_t count,
    Xila_graphics_obj_point_transform_flag_t flags);
void Xila_graphics_obj_get_transformed_area(
    const Xila_graphics_obj_t *obj, Xila_graphics_area_t *area,
    Xila_graphics_obj_point_transform_flag_t flags);
void Xila_graphics_obj_invalidate_area(const Xila_graphics_obj_t *obj,
                                       const Xila_graphics_area_t *area);
void Xila_graphics_obj_invalidate(const Xila_graphics_obj_t *obj);
bool Xila_graphics_obj_area_is_visible(const Xila_graphics_obj_t *obj,
                                       Xila_graphics_area_t *area);
bool Xila_graphics_obj_is_visible(const Xila_graphics_obj_t *obj);
void Xila_graphics_obj_set_ext_click_area(Xila_graphics_obj_t *obj,
                                          int32_t size);
void Xila_graphics_obj_get_click_area(const Xila_graphics_obj_t *obj,
                                      Xila_graphics_area_t *area);
bool Xila_graphics_obj_hit_test(Xila_graphics_obj_t *obj,
                                const Xila_graphics_point_t *point);
void Xila_graphics_obj_set_scrollbar_mode(Xila_graphics_obj_t *obj,
                                          Xila_graphics_scrollbar_mode_t mode);
void Xila_graphics_obj_set_scroll_dir(Xila_graphics_obj_t *obj,
                                      Xila_graphics_dir_t dir);
void Xila_graphics_obj_set_scroll_snap_x(Xila_graphics_obj_t *obj,
                                         Xila_graphics_scroll_snap_t align);
void Xila_graphics_obj_set_scroll_snap_y(Xila_graphics_obj_t *obj,
                                         Xila_graphics_scroll_snap_t align);
Xila_graphics_scrollbar_mode_t
Xila_graphics_obj_get_scrollbar_mode(const Xila_graphics_obj_t *obj);
Xila_graphics_dir_t
Xila_graphics_obj_get_scroll_dir(const Xila_graphics_obj_t *obj);
Xila_graphics_scroll_snap_t
Xila_graphics_obj_get_scroll_snap_x(const Xila_graphics_obj_t *obj);
Xila_graphics_scroll_snap_t
Xila_graphics_obj_get_scroll_snap_y(const Xila_graphics_obj_t *obj);
int32_t Xila_graphics_obj_get_scroll_x(const Xila_graphics_obj_t *obj);
int32_t Xila_graphics_obj_get_scroll_y(const Xila_graphics_obj_t *obj);
int32_t Xila_graphics_obj_get_scroll_top(Xila_graphics_obj_t *obj);
int32_t Xila_graphics_obj_get_scroll_bottom(Xila_graphics_obj_t *obj);
int32_t Xila_graphics_obj_get_scroll_left(Xila_graphics_obj_t *obj);
int32_t Xila_graphics_obj_get_scroll_right(Xila_graphics_obj_t *obj);
void Xila_graphics_obj_get_scroll_end(Xila_graphics_obj_t *obj,
                                      Xila_graphics_point_t *end);
void Xila_graphics_obj_scroll_by(Xila_graphics_obj_t *obj, int32_t x, int32_t y,
                                 Xila_graphics_anim_enable_t anim_en);
void Xila_graphics_obj_scroll_by_bounded(Xila_graphics_obj_t *obj, int32_t dx,
                                         int32_t dy,
                                         Xila_graphics_anim_enable_t anim_en);
void Xila_graphics_obj_scroll_to(Xila_graphics_obj_t *obj, int32_t x, int32_t y,
                                 Xila_graphics_anim_enable_t anim_en);
void Xila_graphics_obj_scroll_to_x(Xila_graphics_obj_t *obj, int32_t x,
                                   Xila_graphics_anim_enable_t anim_en);
void Xila_graphics_obj_scroll_to_y(Xila_graphics_obj_t *obj, int32_t y,
                                   Xila_graphics_anim_enable_t anim_en);
void Xila_graphics_obj_scroll_to_view(Xila_graphics_obj_t *obj,
                                      Xila_graphics_anim_enable_t anim_en);
void Xila_graphics_obj_scroll_to_view_recursive(
    Xila_graphics_obj_t *obj, Xila_graphics_anim_enable_t anim_en);
bool Xila_graphics_obj_is_scrolling(const Xila_graphics_obj_t *obj);
void Xila_graphics_obj_update_snap(Xila_graphics_obj_t *obj,
                                   Xila_graphics_anim_enable_t anim_en);
void Xila_graphics_obj_get_scrollbar_area(Xila_graphics_obj_t *obj,
                                          Xila_graphics_area_t *hor,
                                          Xila_graphics_area_t *ver);
void Xila_graphics_obj_scrollbar_invalidate(Xila_graphics_obj_t *obj);
void Xila_graphics_obj_readjust_scroll(Xila_graphics_obj_t *obj,
                                       Xila_graphics_anim_enable_t anim_en);
void Xila_graphics_obj_add_style(Xila_graphics_obj_t *obj,
                                 const Xila_graphics_style_t *style,
                                 Xila_graphics_style_selector_t selector);
bool Xila_graphics_obj_replace_style(Xila_graphics_obj_t *obj,
                                     const Xila_graphics_style_t *old_style,
                                     const Xila_graphics_style_t *new_style,
                                     Xila_graphics_style_selector_t selector);
void Xila_graphics_obj_remove_style(Xila_graphics_obj_t *obj,
                                    const Xila_graphics_style_t *style,
                                    Xila_graphics_style_selector_t selector);
void Xila_graphics_obj_remove_style_all(Xila_graphics_obj_t *obj);
void Xila_graphics_obj_report_style_change(Xila_graphics_style_t *style);
void Xila_graphics_obj_refresh_style(Xila_graphics_obj_t *obj,
                                     Xila_graphics_part_t part,
                                     Xila_graphics_style_prop_t prop);
void Xila_graphics_obj_enable_style_refresh(bool en);
Xila_graphics_style_value_t
Xila_graphics_obj_get_style_prop(const Xila_graphics_obj_t *obj,
                                 Xila_graphics_part_t part,
                                 Xila_graphics_style_prop_t prop);
bool Xila_graphics_obj_has_style_prop(const Xila_graphics_obj_t *obj,
                                      Xila_graphics_style_selector_t selector,
                                      Xila_graphics_style_prop_t prop);
void Xila_graphics_obj_set_local_style_prop(
    Xila_graphics_obj_t *obj, Xila_graphics_style_prop_t prop,
    Xila_graphics_style_value_t value, Xila_graphics_style_selector_t selector);
Xila_graphics_style_res_t
Xila_graphics_obj_get_local_style_prop(Xila_graphics_obj_t *obj,
                                       Xila_graphics_style_prop_t prop,
                                       Xila_graphics_style_value_t *value,
                                       Xila_graphics_style_selector_t selector);
bool Xila_graphics_obj_remove_local_style_prop(
    Xila_graphics_obj_t *obj, Xila_graphics_style_prop_t prop,
    Xila_graphics_style_selector_t selector);
Xila_graphics_style_value_t
Xila_graphics_obj_style_apply_color_filter(const Xila_graphics_obj_t *obj,
                                           Xila_graphics_part_t part,
                                           Xila_graphics_style_value_t v);
void Xila_graphics_obj_fade_in(Xila_graphics_obj_t *obj, uint32_t time,
                               uint32_t delay);
void Xila_graphics_obj_fade_out(Xila_graphics_obj_t *obj, uint32_t time,
                                uint32_t delay);
void Xila_graphics_obj_set_style_width(Xila_graphics_obj_t *obj, int32_t value,
                                       Xila_graphics_style_selector_t selector);
void Xila_graphics_obj_set_style_min_width(
    Xila_graphics_obj_t *obj, int32_t value,
    Xila_graphics_style_selector_t selector);
void Xila_graphics_obj_set_style_max_width(
    Xila_graphics_obj_t *obj, int32_t value,
    Xila_graphics_style_selector_t selector);
void Xila_graphics_obj_set_style_height(
    Xila_graphics_obj_t *obj, int32_t value,
    Xila_graphics_style_selector_t selector);
void Xila_graphics_obj_set_style_min_height(
    Xila_graphics_obj_t *obj, int32_t value,
    Xila_graphics_style_selector_t selector);
void Xila_graphics_obj_set_style_max_height(
    Xila_graphics_obj_t *obj, int32_t value,
    Xila_graphics_style_selector_t selector);
void Xila_graphics_obj_set_style_length(
    Xila_graphics_obj_t *obj, int32_t value,
    Xila_graphics_style_selector_t selector);
void Xila_graphics_obj_set_style_x(Xila_graphics_obj_t *obj, int32_t value,
                                   Xila_graphics_style_selector_t selector);
void Xila_graphics_obj_set_style_y(Xila_graphics_obj_t *obj, int32_t value,
                                   Xila_graphics_style_selector_t selector);
void Xila_graphics_obj_set_style_align(Xila_graphics_obj_t *obj,
                                       Xila_graphics_align_t value,
                                       Xila_graphics_style_selector_t selector);
void Xila_graphics_obj_set_style_transform_width(
    Xila_graphics_obj_t *obj, int32_t value,
    Xila_graphics_style_selector_t selector);
void Xila_graphics_obj_set_style_transform_height(
    Xila_graphics_obj_t *obj, int32_t value,
    Xila_graphics_style_selector_t selector);
void Xila_graphics_obj_set_style_translate_x(
    Xila_graphics_obj_t *obj, int32_t value,
    Xila_graphics_style_selector_t selector);
void Xila_graphics_obj_set_style_translate_y(
    Xila_graphics_obj_t *obj, int32_t value,
    Xila_graphics_style_selector_t selector);
void Xila_graphics_obj_set_style_transform_scale_x(
    Xila_graphics_obj_t *obj, int32_t value,
    Xila_graphics_style_selector_t selector);
void Xila_graphics_obj_set_style_transform_scale_y(
    Xila_graphics_obj_t *obj, int32_t value,
    Xila_graphics_style_selector_t selector);
void Xila_graphics_obj_set_style_transform_rotation(
    Xila_graphics_obj_t *obj, int32_t value,
    Xila_graphics_style_selector_t selector);
void Xila_graphics_obj_set_style_transform_pivot_x(
    Xila_graphics_obj_t *obj, int32_t value,
    Xila_graphics_style_selector_t selector);
void Xila_graphics_obj_set_style_transform_pivot_y(
    Xila_graphics_obj_t *obj, int32_t value,
    Xila_graphics_style_selector_t selector);
void Xila_graphics_obj_set_style_transform_skew_x(
    Xila_graphics_obj_t *obj, int32_t value,
    Xila_graphics_style_selector_t selector);
void Xila_graphics_obj_set_style_transform_skew_y(
    Xila_graphics_obj_t *obj, int32_t value,
    Xila_graphics_style_selector_t selector);
void Xila_graphics_obj_set_style_pad_top(
    Xila_graphics_obj_t *obj, int32_t value,
    Xila_graphics_style_selector_t selector);
void Xila_graphics_obj_set_style_pad_bottom(
    Xila_graphics_obj_t *obj, int32_t value,
    Xila_graphics_style_selector_t selector);
void Xila_graphics_obj_set_style_pad_left(
    Xila_graphics_obj_t *obj, int32_t value,
    Xila_graphics_style_selector_t selector);
void Xila_graphics_obj_set_style_pad_right(
    Xila_graphics_obj_t *obj, int32_t value,
    Xila_graphics_style_selector_t selector);
void Xila_graphics_obj_set_style_pad_row(
    Xila_graphics_obj_t *obj, int32_t value,
    Xila_graphics_style_selector_t selector);
void Xila_graphics_obj_set_style_pad_column(
    Xila_graphics_obj_t *obj, int32_t value,
    Xila_graphics_style_selector_t selector);
void Xila_graphics_obj_set_style_margin_top(
    Xila_graphics_obj_t *obj, int32_t value,
    Xila_graphics_style_selector_t selector);
void Xila_graphics_obj_set_style_margin_bottom(
    Xila_graphics_obj_t *obj, int32_t value,
    Xila_graphics_style_selector_t selector);
void Xila_graphics_obj_set_style_margin_left(
    Xila_graphics_obj_t *obj, int32_t value,
    Xila_graphics_style_selector_t selector);
void Xila_graphics_obj_set_style_margin_right(
    Xila_graphics_obj_t *obj, int32_t value,
    Xila_graphics_style_selector_t selector);
void Xila_graphics_obj_set_style_bg_color(
    Xila_graphics_obj_t *obj, Xila_graphics_color_t value,
    Xila_graphics_style_selector_t selector);
void Xila_graphics_obj_set_style_bg_opa(
    Xila_graphics_obj_t *obj, Xila_graphics_opa_t value,
    Xila_graphics_style_selector_t selector);
void Xila_graphics_obj_set_style_bg_grad_color(
    Xila_graphics_obj_t *obj, Xila_graphics_color_t value,
    Xila_graphics_style_selector_t selector);
void Xila_graphics_obj_set_style_bg_grad_dir(
    Xila_graphics_obj_t *obj, Xila_graphics_grad_dir_t value,
    Xila_graphics_style_selector_t selector);
void Xila_graphics_obj_set_style_bg_main_stop(
    Xila_graphics_obj_t *obj, int32_t value,
    Xila_graphics_style_selector_t selector);
void Xila_graphics_obj_set_style_bg_grad_stop(
    Xila_graphics_obj_t *obj, int32_t value,
    Xila_graphics_style_selector_t selector);
void Xila_graphics_obj_set_style_bg_main_opa(
    Xila_graphics_obj_t *obj, Xila_graphics_opa_t value,
    Xila_graphics_style_selector_t selector);
void Xila_graphics_obj_set_style_bg_grad_opa(
    Xila_graphics_obj_t *obj, Xila_graphics_opa_t value,
    Xila_graphics_style_selector_t selector);
void Xila_graphics_obj_set_style_bg_grad(
    Xila_graphics_obj_t *obj, const Xila_graphics_grad_dsc_t *value,
    Xila_graphics_style_selector_t selector);
void Xila_graphics_obj_set_style_bg_image_src(
    Xila_graphics_obj_t *obj, const char *value,
    Xila_graphics_style_selector_t selector);
void Xila_graphics_obj_set_style_bg_image_opa(
    Xila_graphics_obj_t *obj, Xila_graphics_opa_t value,
    Xila_graphics_style_selector_t selector);
void Xila_graphics_obj_set_style_bg_image_recolor(
    Xila_graphics_obj_t *obj, Xila_graphics_color_t value,
    Xila_graphics_style_selector_t selector);
void Xila_graphics_obj_set_style_bg_image_recolor_opa(
    Xila_graphics_obj_t *obj, Xila_graphics_opa_t value,
    Xila_graphics_style_selector_t selector);
void Xila_graphics_obj_set_style_bg_image_tiled(
    Xila_graphics_obj_t *obj, bool value,
    Xila_graphics_style_selector_t selector);
void Xila_graphics_obj_set_style_border_color(
    Xila_graphics_obj_t *obj, Xila_graphics_color_t value,
    Xila_graphics_style_selector_t selector);
void Xila_graphics_obj_set_style_border_opa(
    Xila_graphics_obj_t *obj, Xila_graphics_opa_t value,
    Xila_graphics_style_selector_t selector);
void Xila_graphics_obj_set_style_border_width(
    Xila_graphics_obj_t *obj, int32_t value,
    Xila_graphics_style_selector_t selector);
void Xila_graphics_obj_set_style_border_side(
    Xila_graphics_obj_t *obj, Xila_graphics_border_side_t value,
    Xila_graphics_style_selector_t selector);
void Xila_graphics_obj_set_style_border_post(
    Xila_graphics_obj_t *obj, bool value,
    Xila_graphics_style_selector_t selector);
void Xila_graphics_obj_set_style_outline_width(
    Xila_graphics_obj_t *obj, int32_t value,
    Xila_graphics_style_selector_t selector);
void Xila_graphics_obj_set_style_outline_color(
    Xila_graphics_obj_t *obj, Xila_graphics_color_t value,
    Xila_graphics_style_selector_t selector);
void Xila_graphics_obj_set_style_outline_opa(
    Xila_graphics_obj_t *obj, Xila_graphics_opa_t value,
    Xila_graphics_style_selector_t selector);
void Xila_graphics_obj_set_style_outline_pad(
    Xila_graphics_obj_t *obj, int32_t value,
    Xila_graphics_style_selector_t selector);
void Xila_graphics_obj_set_style_shadow_width(
    Xila_graphics_obj_t *obj, int32_t value,
    Xila_graphics_style_selector_t selector);
void Xila_graphics_obj_set_style_shadow_offset_x(
    Xila_graphics_obj_t *obj, int32_t value,
    Xila_graphics_style_selector_t selector);
void Xila_graphics_obj_set_style_shadow_offset_y(
    Xila_graphics_obj_t *obj, int32_t value,
    Xila_graphics_style_selector_t selector);
void Xila_graphics_obj_set_style_shadow_spread(
    Xila_graphics_obj_t *obj, int32_t value,
    Xila_graphics_style_selector_t selector);
void Xila_graphics_obj_set_style_shadow_color(
    Xila_graphics_obj_t *obj, Xila_graphics_color_t value,
    Xila_graphics_style_selector_t selector);
void Xila_graphics_obj_set_style_shadow_opa(
    Xila_graphics_obj_t *obj, Xila_graphics_opa_t value,
    Xila_graphics_style_selector_t selector);
void Xila_graphics_obj_set_style_image_opa(
    Xila_graphics_obj_t *obj, Xila_graphics_opa_t value,
    Xila_graphics_style_selector_t selector);
void Xila_graphics_obj_set_style_image_recolor(
    Xila_graphics_obj_t *obj, Xila_graphics_color_t value,
    Xila_graphics_style_selector_t selector);
void Xila_graphics_obj_set_style_image_recolor_opa(
    Xila_graphics_obj_t *obj, Xila_graphics_opa_t value,
    Xila_graphics_style_selector_t selector);
void Xila_graphics_obj_set_style_line_width(
    Xila_graphics_obj_t *obj, int32_t value,
    Xila_graphics_style_selector_t selector);
void Xila_graphics_obj_set_style_line_dash_width(
    Xila_graphics_obj_t *obj, int32_t value,
    Xila_graphics_style_selector_t selector);
void Xila_graphics_obj_set_style_line_dash_gap(
    Xila_graphics_obj_t *obj, int32_t value,
    Xila_graphics_style_selector_t selector);
void Xila_graphics_obj_set_style_line_rounded(
    Xila_graphics_obj_t *obj, bool value,
    Xila_graphics_style_selector_t selector);
void Xila_graphics_obj_set_style_line_color(
    Xila_graphics_obj_t *obj, Xila_graphics_color_t value,
    Xila_graphics_style_selector_t selector);
void Xila_graphics_obj_set_style_line_opa(
    Xila_graphics_obj_t *obj, Xila_graphics_opa_t value,
    Xila_graphics_style_selector_t selector);
void Xila_graphics_obj_set_style_arc_width(
    Xila_graphics_obj_t *obj, int32_t value,
    Xila_graphics_style_selector_t selector);
void Xila_graphics_obj_set_style_arc_rounded(
    Xila_graphics_obj_t *obj, bool value,
    Xila_graphics_style_selector_t selector);
void Xila_graphics_obj_set_style_arc_color(
    Xila_graphics_obj_t *obj, Xila_graphics_color_t value,
    Xila_graphics_style_selector_t selector);
void Xila_graphics_obj_set_style_arc_opa(
    Xila_graphics_obj_t *obj, Xila_graphics_opa_t value,
    Xila_graphics_style_selector_t selector);
void Xila_graphics_obj_set_style_arc_image_src(
    Xila_graphics_obj_t *obj, const char *value,
    Xila_graphics_style_selector_t selector);
void Xila_graphics_obj_set_style_text_color(
    Xila_graphics_obj_t *obj, Xila_graphics_color_t value,
    Xila_graphics_style_selector_t selector);
void Xila_graphics_obj_set_style_text_opa(
    Xila_graphics_obj_t *obj, Xila_graphics_opa_t value,
    Xila_graphics_style_selector_t selector);
void Xila_graphics_obj_set_style_text_font(
    Xila_graphics_obj_t *obj, const Xila_graphics_font_t *value,
    Xila_graphics_style_selector_t selector);
void Xila_graphics_obj_set_style_text_letter_space(
    Xila_graphics_obj_t *obj, int32_t value,
    Xila_graphics_style_selector_t selector);
void Xila_graphics_obj_set_style_text_line_space(
    Xila_graphics_obj_t *obj, int32_t value,
    Xila_graphics_style_selector_t selector);
void Xila_graphics_obj_set_style_text_decor(
    Xila_graphics_obj_t *obj, Xila_graphics_text_decor_t value,
    Xila_graphics_style_selector_t selector);
void Xila_graphics_obj_set_style_text_align(
    Xila_graphics_obj_t *obj, Xila_graphics_text_align_t value,
    Xila_graphics_style_selector_t selector);
void Xila_graphics_obj_set_style_radius(
    Xila_graphics_obj_t *obj, int32_t value,
    Xila_graphics_style_selector_t selector);
void Xila_graphics_obj_set_style_clip_corner(
    Xila_graphics_obj_t *obj, bool value,
    Xila_graphics_style_selector_t selector);
void Xila_graphics_obj_set_style_opa(Xila_graphics_obj_t *obj,
                                     Xila_graphics_opa_t value,
                                     Xila_graphics_style_selector_t selector);
void Xila_graphics_obj_set_style_opa_layered(
    Xila_graphics_obj_t *obj, Xila_graphics_opa_t value,
    Xila_graphics_style_selector_t selector);
void Xila_graphics_obj_set_style_color_filter_dsc(
    Xila_graphics_obj_t *obj, const Xila_graphics_color_filter_dsc_t *value,
    Xila_graphics_style_selector_t selector);
void Xila_graphics_obj_set_style_color_filter_opa(
    Xila_graphics_obj_t *obj, Xila_graphics_opa_t value,
    Xila_graphics_style_selector_t selector);
void Xila_graphics_obj_set_style_anim(Xila_graphics_obj_t *obj,
                                      const Xila_graphics_anim_t *value,
                                      Xila_graphics_style_selector_t selector);
void Xila_graphics_obj_set_style_anim_duration(
    Xila_graphics_obj_t *obj, uint32_t value,
    Xila_graphics_style_selector_t selector);
void Xila_graphics_obj_set_style_transition(
    Xila_graphics_obj_t *obj, const Xila_graphics_style_transition_dsc_t *value,
    Xila_graphics_style_selector_t selector);
void Xila_graphics_obj_set_style_blend_mode(
    Xila_graphics_obj_t *obj, Xila_graphics_blend_mode_t value,
    Xila_graphics_style_selector_t selector);
void Xila_graphics_obj_set_style_layout(
    Xila_graphics_obj_t *obj, uint16_t value,
    Xila_graphics_style_selector_t selector);
void Xila_graphics_obj_set_style_base_dir(
    Xila_graphics_obj_t *obj, Xila_graphics_base_dir_t value,
    Xila_graphics_style_selector_t selector);
void Xila_graphics_obj_set_style_bitmap_mask_src(
    Xila_graphics_obj_t *obj, const char *value,
    Xila_graphics_style_selector_t selector);
void Xila_graphics_obj_set_style_rotary_sensitivity(
    Xila_graphics_obj_t *obj, uint32_t value,
    Xila_graphics_style_selector_t selector);
void Xila_graphics_obj_set_style_flex_flow(
    Xila_graphics_obj_t *obj, Xila_graphics_flex_flow_t value,
    Xila_graphics_style_selector_t selector);
void Xila_graphics_obj_set_style_flex_main_place(
    Xila_graphics_obj_t *obj, Xila_graphics_flex_align_t value,
    Xila_graphics_style_selector_t selector);
void Xila_graphics_obj_set_style_flex_cross_place(
    Xila_graphics_obj_t *obj, Xila_graphics_flex_align_t value,
    Xila_graphics_style_selector_t selector);
void Xila_graphics_obj_set_style_flex_track_place(
    Xila_graphics_obj_t *obj, Xila_graphics_flex_align_t value,
    Xila_graphics_style_selector_t selector);
void Xila_graphics_obj_set_style_flex_grow(
    Xila_graphics_obj_t *obj, uint8_t value,
    Xila_graphics_style_selector_t selector);
void Xila_graphics_obj_set_style_grid_column_dsc_array(
    Xila_graphics_obj_t *obj, const int32_t *value,
    Xila_graphics_style_selector_t selector);
void Xila_graphics_obj_set_style_grid_column_align(
    Xila_graphics_obj_t *obj, Xila_graphics_grid_align_t value,
    Xila_graphics_style_selector_t selector);
void Xila_graphics_obj_set_style_grid_row_dsc_array(
    Xila_graphics_obj_t *obj, const int32_t *value,
    Xila_graphics_style_selector_t selector);
void Xila_graphics_obj_set_style_grid_row_align(
    Xila_graphics_obj_t *obj, Xila_graphics_grid_align_t value,
    Xila_graphics_style_selector_t selector);
void Xila_graphics_obj_set_style_grid_cell_column_pos(
    Xila_graphics_obj_t *obj, int32_t value,
    Xila_graphics_style_selector_t selector);
void Xila_graphics_obj_set_style_grid_cell_x_align(
    Xila_graphics_obj_t *obj, Xila_graphics_grid_align_t value,
    Xila_graphics_style_selector_t selector);
void Xila_graphics_obj_set_style_grid_cell_column_span(
    Xila_graphics_obj_t *obj, int32_t value,
    Xila_graphics_style_selector_t selector);
void Xila_graphics_obj_set_style_grid_cell_row_pos(
    Xila_graphics_obj_t *obj, int32_t value,
    Xila_graphics_style_selector_t selector);
void Xila_graphics_obj_set_style_grid_cell_y_align(
    Xila_graphics_obj_t *obj, Xila_graphics_grid_align_t value,
    Xila_graphics_style_selector_t selector);
void Xila_graphics_obj_set_style_grid_cell_row_span(
    Xila_graphics_obj_t *obj, int32_t value,
    Xila_graphics_style_selector_t selector);
Xila_graphics_text_align_t Xila_graphics_obj_calculate_style_text_align(
    const Xila_graphics_obj_t *obj, Xila_graphics_part_t part, const char *txt);
Xila_graphics_opa_t
Xila_graphics_obj_get_style_opa_recursive(const Xila_graphics_obj_t *obj,
                                          Xila_graphics_part_t part);
void Xila_graphics_obj_init_draw_rect_dsc(
    Xila_graphics_obj_t *obj, Xila_graphics_part_t part,
    Xila_graphics_draw_rect_dsc_t *draw_dsc);
void Xila_graphics_obj_init_draw_label_dsc(
    Xila_graphics_obj_t *obj, Xila_graphics_part_t part,
    Xila_graphics_draw_label_dsc_t *draw_dsc);
void Xila_graphics_obj_init_draw_image_dsc(
    Xila_graphics_obj_t *obj, Xila_graphics_part_t part,
    Xila_graphics_draw_image_dsc_t *draw_dsc);
void Xila_graphics_obj_init_draw_line_dsc(
    Xila_graphics_obj_t *obj, Xila_graphics_part_t part,
    Xila_graphics_draw_line_dsc_t *draw_dsc);
void Xila_graphics_obj_init_draw_arc_dsc(
    Xila_graphics_obj_t *obj, Xila_graphics_part_t part,
    Xila_graphics_draw_arc_dsc_t *draw_dsc);
int32_t Xila_graphics_obj_calculate_ext_draw_size(Xila_graphics_obj_t *obj,
                                                  Xila_graphics_part_t part);
void Xila_graphics_obj_refresh_ext_draw_size(Xila_graphics_obj_t *obj);
Xila_graphics_obj_t *
Xila_graphics_obj_class_create_obj(const Xila_graphics_obj_class_t *class_p,
                                   Xila_graphics_obj_t *parent);
void Xila_graphics_obj_class_init_obj(Xila_graphics_obj_t *obj);
bool Xila_graphics_obj_is_editable(Xila_graphics_obj_t *obj);
bool Xila_graphics_obj_is_group_def(Xila_graphics_obj_t *obj);
Xila_graphics_result_t
Xila_graphics_obj_send_event(Xila_graphics_obj_t *obj,
                             Xila_graphics_event_code_t event_code,
                             char *param);
Xila_graphics_result_t
Xila_graphics_obj_event_base(const Xila_graphics_obj_class_t *class_p,
                             Xila_graphics_event_t *e);
Xila_graphics_event_dsc_t *Xila_graphics_obj_add_event_cb(
    Xila_graphics_obj_t *obj, Xila_graphics_event_cb_t event_cb,
    Xila_graphics_event_code_t filter, char *user_data);
uint32_t Xila_graphics_obj_get_event_count(Xila_graphics_obj_t *obj);
Xila_graphics_event_dsc_t *
Xila_graphics_obj_get_event_dsc(Xila_graphics_obj_t *obj, uint32_t index);
bool Xila_graphics_obj_remove_event(Xila_graphics_obj_t *obj, uint32_t index);
bool Xila_graphics_obj_remove_event_cb(Xila_graphics_obj_t *obj,
                                       Xila_graphics_event_cb_t event_cb);
bool Xila_graphics_obj_remove_event_dsc(Xila_graphics_obj_t *obj,
                                        Xila_graphics_event_dsc_t *dsc);
uint32_t Xila_graphics_obj_remove_event_cb_with_user_data(
    Xila_graphics_obj_t *obj, Xila_graphics_event_cb_t event_cb,
    char *user_data);
Xila_graphics_obj_t *Xila_graphics_obj_create(Xila_graphics_obj_t *parent);
void Xila_graphics_obj_add_flag(Xila_graphics_obj_t *obj,
                                Xila_graphics_obj_flag_t f);
void Xila_graphics_obj_remove_flag(Xila_graphics_obj_t *obj,
                                   Xila_graphics_obj_flag_t f);
void Xila_graphics_obj_update_flag(Xila_graphics_obj_t *obj,
                                   Xila_graphics_obj_flag_t f, bool v);
void Xila_graphics_obj_add_state(Xila_graphics_obj_t *obj,
                                 Xila_graphics_state_t state);
void Xila_graphics_obj_remove_state(Xila_graphics_obj_t *obj,
                                    Xila_graphics_state_t state);
void Xila_graphics_obj_set_state(Xila_graphics_obj_t *obj,
                                 Xila_graphics_state_t state, bool v);
void Xila_graphics_obj_set_user_data(Xila_graphics_obj_t *obj, char *user_data);
bool Xila_graphics_obj_has_flag(const Xila_graphics_obj_t *obj,
                                Xila_graphics_obj_flag_t f);
bool Xila_graphics_obj_has_flag_any(const Xila_graphics_obj_t *obj,
                                    Xila_graphics_obj_flag_t f);
Xila_graphics_state_t
Xila_graphics_obj_get_state(const Xila_graphics_obj_t *obj);
bool Xila_graphics_obj_has_state(const Xila_graphics_obj_t *obj,
                                 Xila_graphics_state_t state);
Xila_graphics_group_t *
Xila_graphics_obj_get_group(const Xila_graphics_obj_t *obj);
char *Xila_graphics_obj_get_user_data(Xila_graphics_obj_t *obj);
void Xila_graphics_obj_allocate_spec_attr(Xila_graphics_obj_t *obj);
bool Xila_graphics_obj_check_type(const Xila_graphics_obj_t *obj,
                                  const Xila_graphics_obj_class_t *class_p);
bool Xila_graphics_obj_has_class(const Xila_graphics_obj_t *obj,
                                 const Xila_graphics_obj_class_t *class_p);
const Xila_graphics_obj_class_t *
Xila_graphics_obj_get_class(const Xila_graphics_obj_t *obj);
bool Xila_graphics_obj_is_valid(const Xila_graphics_obj_t *obj);
void Xila_graphics_obj_null_on_delete(Xila_graphics_obj_t **obj_ptr);
void Xila_graphics_obj_redraw(Xila_graphics_layer_t *layer,
                              Xila_graphics_obj_t *obj);
Xila_graphics_obj_t *Xila_graphics_arc_create(Xila_graphics_obj_t *parent);
void Xila_graphics_arc_set_start_angle(Xila_graphics_obj_t *obj,
                                       Xila_graphics_value_precise_t start);
void Xila_graphics_arc_set_end_angle(Xila_graphics_obj_t *obj,
                                     Xila_graphics_value_precise_t end);
void Xila_graphics_arc_set_angles(Xila_graphics_obj_t *obj,
                                  Xila_graphics_value_precise_t start,
                                  Xila_graphics_value_precise_t end);
void Xila_graphics_arc_set_bg_start_angle(Xila_graphics_obj_t *obj,
                                          Xila_graphics_value_precise_t start);
void Xila_graphics_arc_set_bg_end_angle(Xila_graphics_obj_t *obj,
                                        Xila_graphics_value_precise_t end);
void Xila_graphics_arc_set_bg_angles(Xila_graphics_obj_t *obj,
                                     Xila_graphics_value_precise_t start,
                                     Xila_graphics_value_precise_t end);
void Xila_graphics_arc_set_rotation(Xila_graphics_obj_t *obj, int32_t rotation);
void Xila_graphics_arc_set_mode(Xila_graphics_obj_t *obj,
                                Xila_graphics_arc_mode_t type_);
void Xila_graphics_arc_set_value(Xila_graphics_obj_t *obj, int32_t value);
void Xila_graphics_arc_set_range(Xila_graphics_obj_t *obj, int32_t min,
                                 int32_t max);
void Xila_graphics_arc_set_change_rate(Xila_graphics_obj_t *obj, uint32_t rate);
void Xila_graphics_arc_set_knob_offset(Xila_graphics_obj_t *obj,
                                       int32_t offset);
Xila_graphics_value_precise_t
Xila_graphics_arc_get_angle_start(Xila_graphics_obj_t *obj);
Xila_graphics_value_precise_t
Xila_graphics_arc_get_angle_end(Xila_graphics_obj_t *obj);
Xila_graphics_value_precise_t
Xila_graphics_arc_get_bg_angle_start(Xila_graphics_obj_t *obj);
Xila_graphics_value_precise_t
Xila_graphics_arc_get_bg_angle_end(Xila_graphics_obj_t *obj);
int32_t Xila_graphics_arc_get_value(const Xila_graphics_obj_t *obj);
int32_t Xila_graphics_arc_get_min_value(const Xila_graphics_obj_t *obj);
int32_t Xila_graphics_arc_get_max_value(const Xila_graphics_obj_t *obj);
Xila_graphics_arc_mode_t
Xila_graphics_arc_get_mode(const Xila_graphics_obj_t *obj);
int32_t Xila_graphics_arc_get_rotation(const Xila_graphics_obj_t *obj);
int32_t Xila_graphics_arc_get_knob_offset(const Xila_graphics_obj_t *obj);
void Xila_graphics_arc_align_obj_to_angle(const Xila_graphics_obj_t *obj,
                                          Xila_graphics_obj_t *obj_to_align,
                                          int32_t r_offset);
void Xila_graphics_arc_rotate_obj_to_angle(const Xila_graphics_obj_t *obj,
                                           Xila_graphics_obj_t *obj_to_rotate,
                                           int32_t r_offset);
Xila_graphics_obj_t *
Xila_graphics_buttonmatrix_create(Xila_graphics_obj_t *parent);
void Xila_graphics_buttonmatrix_set_map(Xila_graphics_obj_t *obj,
                                        const char **map);
void Xila_graphics_buttonmatrix_set_ctrl_map(
    Xila_graphics_obj_t *obj,
    const Xila_graphics_buttonmatrix_ctrl_t *ctrl_map);
void Xila_graphics_buttonmatrix_set_selected_button(Xila_graphics_obj_t *obj,
                                                    uint32_t btn_id);
void Xila_graphics_buttonmatrix_set_button_ctrl(
    Xila_graphics_obj_t *obj, uint32_t btn_id,
    Xila_graphics_buttonmatrix_ctrl_t ctrl);
void Xila_graphics_buttonmatrix_clear_button_ctrl(
    Xila_graphics_obj_t *obj, uint32_t btn_id,
    Xila_graphics_buttonmatrix_ctrl_t ctrl);
void Xila_graphics_buttonmatrix_set_button_ctrl_all(
    Xila_graphics_obj_t *obj, Xila_graphics_buttonmatrix_ctrl_t ctrl);
void Xila_graphics_buttonmatrix_clear_button_ctrl_all(
    Xila_graphics_obj_t *obj, Xila_graphics_buttonmatrix_ctrl_t ctrl);
void Xila_graphics_buttonmatrix_set_button_width(Xila_graphics_obj_t *obj,
                                                 uint32_t btn_id,
                                                 uint32_t width);
void Xila_graphics_buttonmatrix_set_one_checked(Xila_graphics_obj_t *obj,
                                                bool en);
const char **Xila_graphics_buttonmatrix_get_map(const Xila_graphics_obj_t *obj);
uint32_t
Xila_graphics_buttonmatrix_get_selected_button(const Xila_graphics_obj_t *obj);
const char *
Xila_graphics_buttonmatrix_get_button_text(const Xila_graphics_obj_t *obj,
                                           uint32_t btn_id);
bool Xila_graphics_buttonmatrix_has_button_ctrl(
    Xila_graphics_obj_t *obj, uint32_t btn_id,
    Xila_graphics_buttonmatrix_ctrl_t ctrl);
bool Xila_graphics_buttonmatrix_get_one_checked(const Xila_graphics_obj_t *obj);
Xila_graphics_obj_t *Xila_graphics_calendar_create(Xila_graphics_obj_t *parent);
void Xila_graphics_calendar_set_today_date(Xila_graphics_obj_t *obj,
                                           uint32_t year, uint32_t month,
                                           uint32_t day);
void Xila_graphics_calendar_set_showed_date(Xila_graphics_obj_t *obj,
                                            uint32_t year, uint32_t month);
void Xila_graphics_calendar_set_highlighted_dates(
    Xila_graphics_obj_t *obj, Xila_graphics_calendar_date_t *highlighted,
    size_t date_num);
void Xila_graphics_calendar_set_day_names(Xila_graphics_obj_t *obj,
                                          const char **day_names);
Xila_graphics_obj_t *
Xila_graphics_calendar_get_btnmatrix(const Xila_graphics_obj_t *obj);
const Xila_graphics_calendar_date_t *
Xila_graphics_calendar_get_today_date(const Xila_graphics_obj_t *calendar);
const Xila_graphics_calendar_date_t *
Xila_graphics_calendar_get_showed_date(const Xila_graphics_obj_t *calendar);
Xila_graphics_calendar_date_t *Xila_graphics_calendar_get_highlighted_dates(
    const Xila_graphics_obj_t *calendar);
size_t Xila_graphics_calendar_get_highlighted_dates_num(
    const Xila_graphics_obj_t *calendar);
Xila_graphics_result_t
Xila_graphics_calendar_get_pressed_date(const Xila_graphics_obj_t *calendar,
                                        Xila_graphics_calendar_date_t *date);
Xila_graphics_obj_t *
Xila_graphics_calendar_header_arrow_create(Xila_graphics_obj_t *parent);
Xila_graphics_obj_t *
Xila_graphics_calendar_header_dropdown_create(Xila_graphics_obj_t *parent);
void Xila_graphics_calendar_header_dropdown_set_year_list(
    Xila_graphics_obj_t *parent, const char *years_list);
Xila_graphics_obj_t *Xila_graphics_chart_create(Xila_graphics_obj_t *parent);
void Xila_graphics_chart_set_type(Xila_graphics_obj_t *obj,
                                  Xila_graphics_chart_type_t type_);
void Xila_graphics_chart_set_point_count(Xila_graphics_obj_t *obj,
                                         uint32_t cnt);
void Xila_graphics_chart_set_range(Xila_graphics_obj_t *obj,
                                   Xila_graphics_chart_axis_t axis, int32_t min,
                                   int32_t max);
void Xila_graphics_chart_set_update_mode(
    Xila_graphics_obj_t *obj, Xila_graphics_chart_update_mode_t update_mode);
void Xila_graphics_chart_set_div_line_count(Xila_graphics_obj_t *obj,
                                            uint8_t hdiv, uint8_t vdiv);
Xila_graphics_chart_type_t
Xila_graphics_chart_get_type(const Xila_graphics_obj_t *obj);
uint32_t Xila_graphics_chart_get_point_count(const Xila_graphics_obj_t *obj);
uint32_t
Xila_graphics_chart_get_x_start_point(const Xila_graphics_obj_t *obj,
                                      Xila_graphics_chart_series_t *ser);
void Xila_graphics_chart_get_point_pos_by_id(Xila_graphics_obj_t *obj,
                                             Xila_graphics_chart_series_t *ser,
                                             uint32_t id,
                                             Xila_graphics_point_t *p_out);
void Xila_graphics_chart_refresh(Xila_graphics_obj_t *obj);
Xila_graphics_chart_series_t *
Xila_graphics_chart_add_series(Xila_graphics_obj_t *obj,
                               Xila_graphics_color_t color,
                               Xila_graphics_chart_axis_t axis);
void Xila_graphics_chart_remove_series(Xila_graphics_obj_t *obj,
                                       Xila_graphics_chart_series_t *series);
void Xila_graphics_chart_hide_series(Xila_graphics_obj_t *chart,
                                     Xila_graphics_chart_series_t *series,
                                     bool hide);
void Xila_graphics_chart_set_series_color(Xila_graphics_obj_t *chart,
                                          Xila_graphics_chart_series_t *series,
                                          Xila_graphics_color_t color);
Xila_graphics_color_t Xila_graphics_chart_get_series_color(
    Xila_graphics_obj_t *chart, const Xila_graphics_chart_series_t *series);
void Xila_graphics_chart_set_x_start_point(Xila_graphics_obj_t *obj,
                                           Xila_graphics_chart_series_t *ser,
                                           uint32_t id);
Xila_graphics_chart_series_t *
Xila_graphics_chart_get_series_next(const Xila_graphics_obj_t *chart,
                                    const Xila_graphics_chart_series_t *ser);
Xila_graphics_chart_cursor_t *
Xila_graphics_chart_add_cursor(Xila_graphics_obj_t *obj,
                               Xila_graphics_color_t color,
                               Xila_graphics_dir_t dir);
void Xila_graphics_chart_set_cursor_pos(Xila_graphics_obj_t *chart,
                                        Xila_graphics_chart_cursor_t *cursor,
                                        Xila_graphics_point_t *pos);
void Xila_graphics_chart_set_cursor_point(Xila_graphics_obj_t *chart,
                                          Xila_graphics_chart_cursor_t *cursor,
                                          Xila_graphics_chart_series_t *ser,
                                          uint32_t point_id);
Xila_graphics_point_t
Xila_graphics_chart_get_cursor_point(Xila_graphics_obj_t *chart,
                                     Xila_graphics_chart_cursor_t *cursor);
void Xila_graphics_chart_set_all_value(Xila_graphics_obj_t *obj,
                                       Xila_graphics_chart_series_t *ser,
                                       int32_t value);
void Xila_graphics_chart_set_next_value(Xila_graphics_obj_t *obj,
                                        Xila_graphics_chart_series_t *ser,
                                        int32_t value);
void Xila_graphics_chart_set_next_value2(Xila_graphics_obj_t *obj,
                                         Xila_graphics_chart_series_t *ser,
                                         int32_t x_value, int32_t y_value);
void Xila_graphics_chart_set_value_by_id(Xila_graphics_obj_t *obj,
                                         Xila_graphics_chart_series_t *ser,
                                         uint32_t id, int32_t value);
void Xila_graphics_chart_set_value_by_id2(Xila_graphics_obj_t *obj,
                                          Xila_graphics_chart_series_t *ser,
                                          uint32_t id, int32_t x_value,
                                          int32_t y_value);
void Xila_graphics_chart_set_ext_y_array(Xila_graphics_obj_t *obj,
                                         Xila_graphics_chart_series_t *ser,
                                         int32_t *array);
void Xila_graphics_chart_set_ext_x_array(Xila_graphics_obj_t *obj,
                                         Xila_graphics_chart_series_t *ser,
                                         int32_t *array);
int32_t *Xila_graphics_chart_get_y_array(const Xila_graphics_obj_t *obj,
                                         Xila_graphics_chart_series_t *ser);
int32_t *Xila_graphics_chart_get_x_array(const Xila_graphics_obj_t *obj,
                                         Xila_graphics_chart_series_t *ser);
uint32_t Xila_graphics_chart_get_pressed_point(const Xila_graphics_obj_t *obj);
int32_t
Xila_graphics_chart_get_first_point_center_offset(Xila_graphics_obj_t *obj);
Xila_graphics_obj_t *Xila_graphics_checkbox_create(Xila_graphics_obj_t *parent);
void Xila_graphics_checkbox_set_text(Xila_graphics_obj_t *obj, const char *txt);
void Xila_graphics_checkbox_set_text_static(Xila_graphics_obj_t *obj,
                                            const char *txt);
const char *Xila_graphics_checkbox_get_text(const Xila_graphics_obj_t *obj);
Xila_graphics_obj_t *Xila_graphics_dropdown_create(Xila_graphics_obj_t *parent);
void Xila_graphics_dropdown_set_text(Xila_graphics_obj_t *obj, const char *txt);
void Xila_graphics_dropdown_set_options(Xila_graphics_obj_t *obj,
                                        const char *options);
void Xila_graphics_dropdown_set_options_static(Xila_graphics_obj_t *obj,
                                               const char *options);
void Xila_graphics_dropdown_add_option(Xila_graphics_obj_t *obj,
                                       const char *option, uint32_t pos);
void Xila_graphics_dropdown_clear_options(Xila_graphics_obj_t *obj);
void Xila_graphics_dropdown_set_selected(Xila_graphics_obj_t *obj,
                                         uint32_t sel_opt);
void Xila_graphics_dropdown_set_dir(Xila_graphics_obj_t *obj,
                                    Xila_graphics_dir_t dir);
void Xila_graphics_dropdown_set_symbol(Xila_graphics_obj_t *obj,
                                       const char *symbol);
void Xila_graphics_dropdown_set_selected_highlight(Xila_graphics_obj_t *obj,
                                                   bool en);
Xila_graphics_obj_t *Xila_graphics_dropdown_get_list(Xila_graphics_obj_t *obj);
const char *Xila_graphics_dropdown_get_text(Xila_graphics_obj_t *obj);
const char *Xila_graphics_dropdown_get_options(const Xila_graphics_obj_t *obj);
uint32_t Xila_graphics_dropdown_get_selected(const Xila_graphics_obj_t *obj);
uint32_t
Xila_graphics_dropdown_get_option_count(const Xila_graphics_obj_t *obj);
void Xila_graphics_dropdown_get_selected_str(const Xila_graphics_obj_t *obj,
                                             char *buf, uint32_t buf_size);
int32_t Xila_graphics_dropdown_get_option_index(Xila_graphics_obj_t *obj,
                                                const char *option);
const char *Xila_graphics_dropdown_get_symbol(Xila_graphics_obj_t *obj);
bool Xila_graphics_dropdown_get_selected_highlight(Xila_graphics_obj_t *obj);
Xila_graphics_dir_t
Xila_graphics_dropdown_get_dir(const Xila_graphics_obj_t *obj);
void Xila_graphics_dropdown_open(Xila_graphics_obj_t *dropdown_obj);
void Xila_graphics_dropdown_close(Xila_graphics_obj_t *obj);
bool Xila_graphics_dropdown_is_open(Xila_graphics_obj_t *obj);
Xila_graphics_obj_t *Xila_graphics_led_create(Xila_graphics_obj_t *parent);
void Xila_graphics_led_set_color(Xila_graphics_obj_t *led,
                                 Xila_graphics_color_t color);
void Xila_graphics_led_set_brightness(Xila_graphics_obj_t *led, uint8_t bright);
void Xila_graphics_led_on(Xila_graphics_obj_t *led);
void Xila_graphics_led_off(Xila_graphics_obj_t *led);
void Xila_graphics_led_toggle(Xila_graphics_obj_t *led);
uint8_t Xila_graphics_led_get_brightness(const Xila_graphics_obj_t *obj);
Xila_graphics_obj_t *Xila_graphics_line_create(Xila_graphics_obj_t *parent);
void Xila_graphics_line_set_points(Xila_graphics_obj_t *obj,
                                   const Xila_graphics_point_precise_t *points,
                                   uint32_t point_num);
void Xila_graphics_line_set_points_mutable(
    Xila_graphics_obj_t *obj, Xila_graphics_point_precise_t *points,
    uint32_t point_num);
void Xila_graphics_line_set_y_invert(Xila_graphics_obj_t *obj, bool en);
const Xila_graphics_point_precise_t *
Xila_graphics_line_get_points(Xila_graphics_obj_t *obj);
uint32_t Xila_graphics_line_get_point_count(Xila_graphics_obj_t *obj);
bool Xila_graphics_line_is_point_array_mutable(Xila_graphics_obj_t *obj);
Xila_graphics_point_precise_t *
Xila_graphics_line_get_points_mutable(Xila_graphics_obj_t *obj);
bool Xila_graphics_line_get_y_invert(const Xila_graphics_obj_t *obj);
Xila_graphics_obj_t *Xila_graphics_menu_create(Xila_graphics_obj_t *parent);
Xila_graphics_obj_t *Xila_graphics_menu_page_create(Xila_graphics_obj_t *parent,
                                                    const char *title);
Xila_graphics_obj_t *
Xila_graphics_menu_cont_create(Xila_graphics_obj_t *parent);
Xila_graphics_obj_t *
Xila_graphics_menu_section_create(Xila_graphics_obj_t *parent);
Xila_graphics_obj_t *
Xila_graphics_menu_separator_create(Xila_graphics_obj_t *parent);
void Xila_graphics_menu_set_page(Xila_graphics_obj_t *obj,
                                 Xila_graphics_obj_t *page);
void Xila_graphics_menu_set_page_title(Xila_graphics_obj_t *page,
                                       const char *title);
void Xila_graphics_menu_set_page_title_static(Xila_graphics_obj_t *page,
                                              const char *title);
void Xila_graphics_menu_set_sidebar_page(Xila_graphics_obj_t *obj,
                                         Xila_graphics_obj_t *page);
void Xila_graphics_menu_set_mode_header(Xila_graphics_obj_t *obj,
                                        Xila_graphics_menu_mode_header_t mode);
void Xila_graphics_menu_set_mode_root_back_button(
    Xila_graphics_obj_t *obj, Xila_graphics_menu_mode_root_back_button_t mode);
void Xila_graphics_menu_set_load_page_event(Xila_graphics_obj_t *menu,
                                            Xila_graphics_obj_t *obj,
                                            Xila_graphics_obj_t *page);
Xila_graphics_obj_t *
Xila_graphics_menu_get_cur_main_page(Xila_graphics_obj_t *obj);
Xila_graphics_obj_t *
Xila_graphics_menu_get_cur_sidebar_page(Xila_graphics_obj_t *obj);
Xila_graphics_obj_t *
Xila_graphics_menu_get_main_header(Xila_graphics_obj_t *obj);
Xila_graphics_obj_t *
Xila_graphics_menu_get_main_header_back_button(Xila_graphics_obj_t *obj);
Xila_graphics_obj_t *
Xila_graphics_menu_get_sidebar_header(Xila_graphics_obj_t *obj);
Xila_graphics_obj_t *
Xila_graphics_menu_get_sidebar_header_back_button(Xila_graphics_obj_t *obj);
bool Xila_graphics_menu_back_button_is_root(Xila_graphics_obj_t *menu,
                                            Xila_graphics_obj_t *obj);
void Xila_graphics_menu_clear_history(Xila_graphics_obj_t *obj);
Xila_graphics_obj_t *Xila_graphics_msgbox_create(Xila_graphics_obj_t *parent);
Xila_graphics_obj_t *Xila_graphics_msgbox_add_title(Xila_graphics_obj_t *obj,
                                                    const char *title);
Xila_graphics_obj_t *
Xila_graphics_msgbox_add_header_button(Xila_graphics_obj_t *obj,
                                       const char *icon);
Xila_graphics_obj_t *Xila_graphics_msgbox_add_text(Xila_graphics_obj_t *obj,
                                                   const char *text);
Xila_graphics_obj_t *
Xila_graphics_msgbox_add_footer_button(Xila_graphics_obj_t *obj,
                                       const char *text);
Xila_graphics_obj_t *
Xila_graphics_msgbox_add_close_button(Xila_graphics_obj_t *obj);
Xila_graphics_obj_t *Xila_graphics_msgbox_get_header(Xila_graphics_obj_t *obj);
Xila_graphics_obj_t *Xila_graphics_msgbox_get_footer(Xila_graphics_obj_t *obj);
Xila_graphics_obj_t *Xila_graphics_msgbox_get_content(Xila_graphics_obj_t *obj);
Xila_graphics_obj_t *Xila_graphics_msgbox_get_title(Xila_graphics_obj_t *obj);
void Xila_graphics_msgbox_close(Xila_graphics_obj_t *mbox);
void Xila_graphics_msgbox_close_async(Xila_graphics_obj_t *mbox);
Xila_graphics_obj_t *Xila_graphics_roller_create(Xila_graphics_obj_t *parent);
void Xila_graphics_roller_set_options(Xila_graphics_obj_t *obj,
                                      const char *options,
                                      Xila_graphics_roller_mode_t mode);
void Xila_graphics_roller_set_selected(Xila_graphics_obj_t *obj,
                                       uint32_t sel_opt,
                                       Xila_graphics_anim_enable_t anim);
void Xila_graphics_roller_set_visible_row_count(Xila_graphics_obj_t *obj,
                                                uint32_t row_cnt);
uint32_t Xila_graphics_roller_get_selected(const Xila_graphics_obj_t *obj);
void Xila_graphics_roller_get_selected_str(const Xila_graphics_obj_t *obj,
                                           char *buf, uint32_t buf_size);
const char *Xila_graphics_roller_get_options(const Xila_graphics_obj_t *obj);
uint32_t Xila_graphics_roller_get_option_count(const Xila_graphics_obj_t *obj);
Xila_graphics_obj_t *Xila_graphics_scale_create(Xila_graphics_obj_t *parent);
void Xila_graphics_scale_set_mode(Xila_graphics_obj_t *obj,
                                  Xila_graphics_scale_mode_t mode);
void Xila_graphics_scale_set_total_tick_count(Xila_graphics_obj_t *obj,
                                              uint32_t total_tick_count);
void Xila_graphics_scale_set_major_tick_every(Xila_graphics_obj_t *obj,
                                              uint32_t major_tick_every);
void Xila_graphics_scale_set_label_show(Xila_graphics_obj_t *obj,
                                        bool show_label);
void Xila_graphics_scale_set_range(Xila_graphics_obj_t *obj, int32_t min,
                                   int32_t max);
void Xila_graphics_scale_set_angle_range(Xila_graphics_obj_t *obj,
                                         uint32_t angle_range);
void Xila_graphics_scale_set_rotation(Xila_graphics_obj_t *obj,
                                      int32_t rotation);
void Xila_graphics_scale_set_line_needle_value(Xila_graphics_obj_t *obj,
                                               Xila_graphics_obj_t *needle_line,
                                               int32_t needle_length,
                                               int32_t value);
void Xila_graphics_scale_set_image_needle_value(Xila_graphics_obj_t *obj,
                                                Xila_graphics_obj_t *needle_img,
                                                int32_t value);
void Xila_graphics_scale_set_text_src(Xila_graphics_obj_t *obj,
                                      const char **txt_src);
void Xila_graphics_scale_set_post_draw(Xila_graphics_obj_t *obj, bool en);
void Xila_graphics_scale_set_draw_ticks_on_top(Xila_graphics_obj_t *obj,
                                               bool en);
Xila_graphics_scale_section_t *
Xila_graphics_scale_add_section(Xila_graphics_obj_t *obj);
void Xila_graphics_scale_section_set_range(
    Xila_graphics_scale_section_t *section, int32_t minor_range,
    int32_t major_range);
void Xila_graphics_scale_section_set_style(
    Xila_graphics_scale_section_t *section, Xila_graphics_part_t part,
    Xila_graphics_style_t *section_part_style);
Xila_graphics_scale_mode_t
Xila_graphics_scale_get_mode(Xila_graphics_obj_t *obj);
int32_t Xila_graphics_scale_get_total_tick_count(Xila_graphics_obj_t *obj);
int32_t Xila_graphics_scale_get_major_tick_every(Xila_graphics_obj_t *obj);
bool Xila_graphics_scale_get_label_show(Xila_graphics_obj_t *obj);
uint32_t Xila_graphics_scale_get_angle_range(Xila_graphics_obj_t *obj);
int32_t Xila_graphics_scale_get_range_min_value(Xila_graphics_obj_t *obj);
int32_t Xila_graphics_scale_get_range_max_value(Xila_graphics_obj_t *obj);
Xila_graphics_obj_t *Xila_graphics_slider_create(Xila_graphics_obj_t *parent);
void Xila_graphics_slider_set_value(Xila_graphics_obj_t *obj, int32_t value,
                                    Xila_graphics_anim_enable_t anim);
void Xila_graphics_slider_set_left_value(Xila_graphics_obj_t *obj,
                                         int32_t value,
                                         Xila_graphics_anim_enable_t anim);
void Xila_graphics_slider_set_range(Xila_graphics_obj_t *obj, int32_t min,
                                    int32_t max);
void Xila_graphics_slider_set_mode(Xila_graphics_obj_t *obj,
                                   Xila_graphics_slider_mode_t mode);
int32_t Xila_graphics_slider_get_value(const Xila_graphics_obj_t *obj);
int32_t Xila_graphics_slider_get_left_value(const Xila_graphics_obj_t *obj);
int32_t Xila_graphics_slider_get_min_value(const Xila_graphics_obj_t *obj);
int32_t Xila_graphics_slider_get_max_value(const Xila_graphics_obj_t *obj);
bool Xila_graphics_slider_is_dragged(const Xila_graphics_obj_t *obj);
Xila_graphics_slider_mode_t
Xila_graphics_slider_get_mode(Xila_graphics_obj_t *slider);
bool Xila_graphics_slider_is_symmetrical(Xila_graphics_obj_t *obj);
void Xila_graphics_span_stack_init();
void Xila_graphics_span_stack_deinit();
Xila_graphics_obj_t *
Xila_graphics_spangroup_create(Xila_graphics_obj_t *parent);
Xila_graphics_span_t *
Xila_graphics_spangroup_new_span(Xila_graphics_obj_t *obj);
void Xila_graphics_spangroup_delete_span(Xila_graphics_obj_t *obj,
                                         Xila_graphics_span_t *span);
void Xila_graphics_span_set_text(Xila_graphics_span_t *span, const char *text);
void Xila_graphics_span_set_text_static(Xila_graphics_span_t *span,
                                        const char *text);
void Xila_graphics_spangroup_set_align(Xila_graphics_obj_t *obj,
                                       Xila_graphics_text_align_t align);
void Xila_graphics_spangroup_set_overflow(
    Xila_graphics_obj_t *obj, Xila_graphics_span_overflow_t overflow);
void Xila_graphics_spangroup_set_indent(Xila_graphics_obj_t *obj,
                                        int32_t indent);
void Xila_graphics_spangroup_set_mode(Xila_graphics_obj_t *obj,
                                      Xila_graphics_span_mode_t mode);
void Xila_graphics_spangroup_set_max_lines(Xila_graphics_obj_t *obj,
                                           int32_t lines);
Xila_graphics_style_t *Xila_graphics_span_get_style(Xila_graphics_span_t *span);
Xila_graphics_span_t *
Xila_graphics_spangroup_get_child(const Xila_graphics_obj_t *obj, int32_t id);
uint32_t Xila_graphics_spangroup_get_span_count(const Xila_graphics_obj_t *obj);
Xila_graphics_text_align_t
Xila_graphics_spangroup_get_align(Xila_graphics_obj_t *obj);
Xila_graphics_span_overflow_t
Xila_graphics_spangroup_get_overflow(Xila_graphics_obj_t *obj);
int32_t Xila_graphics_spangroup_get_indent(Xila_graphics_obj_t *obj);
Xila_graphics_span_mode_t
Xila_graphics_spangroup_get_mode(Xila_graphics_obj_t *obj);
int32_t Xila_graphics_spangroup_get_max_lines(Xila_graphics_obj_t *obj);
int32_t Xila_graphics_spangroup_get_max_line_height(Xila_graphics_obj_t *obj);
uint32_t Xila_graphics_spangroup_get_expand_width(Xila_graphics_obj_t *obj,
                                                  uint32_t max_width);
int32_t Xila_graphics_spangroup_get_expand_height(Xila_graphics_obj_t *obj,
                                                  int32_t width);
void Xila_graphics_spangroup_refr_mode(Xila_graphics_obj_t *obj);
Xila_graphics_obj_t *Xila_graphics_textarea_create(Xila_graphics_obj_t *parent);
void Xila_graphics_textarea_add_char(Xila_graphics_obj_t *obj, uint32_t c);
void Xila_graphics_textarea_add_text(Xila_graphics_obj_t *obj, const char *txt);
void Xila_graphics_textarea_delete_char(Xila_graphics_obj_t *obj);
void Xila_graphics_textarea_delete_char_forward(Xila_graphics_obj_t *obj);
void Xila_graphics_textarea_set_text(Xila_graphics_obj_t *obj, const char *txt);
void Xila_graphics_textarea_set_placeholder_text(Xila_graphics_obj_t *obj,
                                                 const char *txt);
void Xila_graphics_textarea_set_cursor_pos(Xila_graphics_obj_t *obj,
                                           int32_t pos);
void Xila_graphics_textarea_set_cursor_click_pos(Xila_graphics_obj_t *obj,
                                                 bool en);
void Xila_graphics_textarea_set_password_mode(Xila_graphics_obj_t *obj,
                                              bool en);
void Xila_graphics_textarea_set_password_bullet(Xila_graphics_obj_t *obj,
                                                const char *bullet);
void Xila_graphics_textarea_set_one_line(Xila_graphics_obj_t *obj, bool en);
void Xila_graphics_textarea_set_accepted_chars(Xila_graphics_obj_t *obj,
                                               const char *list);
void Xila_graphics_textarea_set_max_length(Xila_graphics_obj_t *obj,
                                           uint32_t num);
void Xila_graphics_textarea_set_insert_replace(Xila_graphics_obj_t *obj,
                                               const char *txt);
void Xila_graphics_textarea_set_text_selection(Xila_graphics_obj_t *obj,
                                               bool en);
void Xila_graphics_textarea_set_password_show_time(Xila_graphics_obj_t *obj,
                                                   uint32_t time);
void Xila_graphics_textarea_set_align(Xila_graphics_obj_t *obj,
                                      Xila_graphics_text_align_t align);
const char *Xila_graphics_textarea_get_text(const Xila_graphics_obj_t *obj);
const char *
Xila_graphics_textarea_get_placeholder_text(Xila_graphics_obj_t *obj);
Xila_graphics_obj_t *
Xila_graphics_textarea_get_label(const Xila_graphics_obj_t *obj);
uint32_t Xila_graphics_textarea_get_cursor_pos(const Xila_graphics_obj_t *obj);
bool Xila_graphics_textarea_get_cursor_click_pos(Xila_graphics_obj_t *obj);
bool Xila_graphics_textarea_get_password_mode(const Xila_graphics_obj_t *obj);
const char *
Xila_graphics_textarea_get_password_bullet(Xila_graphics_obj_t *obj);
bool Xila_graphics_textarea_get_one_line(const Xila_graphics_obj_t *obj);
const char *Xila_graphics_textarea_get_accepted_chars(Xila_graphics_obj_t *obj);
uint32_t Xila_graphics_textarea_get_max_length(Xila_graphics_obj_t *obj);
bool Xila_graphics_textarea_text_is_selected(const Xila_graphics_obj_t *obj);
bool Xila_graphics_textarea_get_text_selection(Xila_graphics_obj_t *obj);
uint32_t
Xila_graphics_textarea_get_password_show_time(Xila_graphics_obj_t *obj);
uint32_t Xila_graphics_textarea_get_current_char(Xila_graphics_obj_t *obj);
void Xila_graphics_textarea_clear_selection(Xila_graphics_obj_t *obj);
void Xila_graphics_textarea_cursor_right(Xila_graphics_obj_t *obj);
void Xila_graphics_textarea_cursor_left(Xila_graphics_obj_t *obj);
void Xila_graphics_textarea_cursor_down(Xila_graphics_obj_t *obj);
void Xila_graphics_textarea_cursor_up(Xila_graphics_obj_t *obj);
Xila_graphics_obj_t *Xila_graphics_spinbox_create(Xila_graphics_obj_t *parent);
void Xila_graphics_spinbox_set_value(Xila_graphics_obj_t *obj, int32_t v);
void Xila_graphics_spinbox_set_rollover(Xila_graphics_obj_t *obj,
                                        bool rollover);
void Xila_graphics_spinbox_set_digit_format(Xila_graphics_obj_t *obj,
                                            uint32_t digit_count,
                                            uint32_t sep_pos);
void Xila_graphics_spinbox_set_step(Xila_graphics_obj_t *obj, uint32_t step);
void Xila_graphics_spinbox_set_range(Xila_graphics_obj_t *obj,
                                     int32_t range_min, int32_t range_max);
void Xila_graphics_spinbox_set_cursor_pos(Xila_graphics_obj_t *obj,
                                          uint32_t pos);
void Xila_graphics_spinbox_set_digit_step_direction(
    Xila_graphics_obj_t *obj, Xila_graphics_dir_t direction);
bool Xila_graphics_spinbox_get_rollover(Xila_graphics_obj_t *obj);
int32_t Xila_graphics_spinbox_get_value(Xila_graphics_obj_t *obj);
int32_t Xila_graphics_spinbox_get_step(Xila_graphics_obj_t *obj);
void Xila_graphics_spinbox_step_next(Xila_graphics_obj_t *obj);
void Xila_graphics_spinbox_step_prev(Xila_graphics_obj_t *obj);
void Xila_graphics_spinbox_increment(Xila_graphics_obj_t *obj);
void Xila_graphics_spinbox_decrement(Xila_graphics_obj_t *obj);
Xila_graphics_obj_t *Xila_graphics_table_create(Xila_graphics_obj_t *parent);
void Xila_graphics_table_set_cell_value(Xila_graphics_obj_t *obj, uint32_t row,
                                        uint32_t col, const char *txt);
void Xila_graphics_table_set_cell_value_fmt(Xila_graphics_obj_t *obj,
                                            uint32_t row, uint32_t col,
                                            const char *fmt);
void Xila_graphics_table_set_row_count(Xila_graphics_obj_t *obj,
                                       uint32_t row_cnt);
void Xila_graphics_table_set_column_count(Xila_graphics_obj_t *obj,
                                          uint32_t col_cnt);
void Xila_graphics_table_set_column_width(Xila_graphics_obj_t *obj,
                                          uint32_t col_id, int32_t w);
void Xila_graphics_table_add_cell_ctrl(Xila_graphics_obj_t *obj, uint32_t row,
                                       uint32_t col,
                                       Xila_graphics_table_cell_ctrl_t ctrl);
void Xila_graphics_table_clear_cell_ctrl(Xila_graphics_obj_t *obj, uint32_t row,
                                         uint32_t col,
                                         Xila_graphics_table_cell_ctrl_t ctrl);
void Xila_graphics_table_set_cell_user_data(Xila_graphics_obj_t *obj,
                                            uint16_t row, uint16_t col,
                                            char *user_data);
void Xila_graphics_table_set_selected_cell(Xila_graphics_obj_t *obj,
                                           uint16_t row, uint16_t col);
const char *Xila_graphics_table_get_cell_value(Xila_graphics_obj_t *obj,
                                               uint32_t row, uint32_t col);
uint32_t Xila_graphics_table_get_row_count(Xila_graphics_obj_t *obj);
uint32_t Xila_graphics_table_get_column_count(Xila_graphics_obj_t *obj);
int32_t Xila_graphics_table_get_column_width(Xila_graphics_obj_t *obj,
                                             uint32_t col);
bool Xila_graphics_table_has_cell_ctrl(Xila_graphics_obj_t *obj, uint32_t row,
                                       uint32_t col,
                                       Xila_graphics_table_cell_ctrl_t ctrl);
void Xila_graphics_table_get_selected_cell(Xila_graphics_obj_t *obj,
                                           uint32_t *row, uint32_t *col);
char *Xila_graphics_table_get_cell_user_data(Xila_graphics_obj_t *obj,
                                             uint16_t row, uint16_t col);
Xila_graphics_obj_t *Xila_graphics_tabview_create(Xila_graphics_obj_t *parent);
Xila_graphics_obj_t *Xila_graphics_tabview_add_tab(Xila_graphics_obj_t *obj,
                                                   const char *name);
void Xila_graphics_tabview_rename_tab(Xila_graphics_obj_t *obj, uint32_t idx,
                                      const char *new_name);
void Xila_graphics_tabview_set_active(Xila_graphics_obj_t *obj, uint32_t idx,
                                      Xila_graphics_anim_enable_t anim_en);
void Xila_graphics_tabview_set_tab_bar_position(Xila_graphics_obj_t *obj,
                                                Xila_graphics_dir_t dir);
void Xila_graphics_tabview_set_tab_bar_size(Xila_graphics_obj_t *obj,
                                            int32_t size);
uint32_t Xila_graphics_tabview_get_tab_count(Xila_graphics_obj_t *obj);
uint32_t Xila_graphics_tabview_get_tab_active(Xila_graphics_obj_t *obj);
Xila_graphics_obj_t *
Xila_graphics_tabview_get_content(Xila_graphics_obj_t *obj);
Xila_graphics_obj_t *
Xila_graphics_tabview_get_tab_bar(Xila_graphics_obj_t *obj);
Xila_graphics_obj_t *Xila_graphics_tileview_create(Xila_graphics_obj_t *parent);
Xila_graphics_obj_t *Xila_graphics_tileview_add_tile(Xila_graphics_obj_t *tv,
                                                     uint8_t col_id,
                                                     uint8_t row_id,
                                                     Xila_graphics_dir_t dir);
void Xila_graphics_tileview_set_tile(Xila_graphics_obj_t *tv,
                                     Xila_graphics_obj_t *tile_obj,
                                     Xila_graphics_anim_enable_t anim_en);
void Xila_graphics_tileview_set_tile_by_index(
    Xila_graphics_obj_t *tv, uint32_t col_id, uint32_t row_id,
    Xila_graphics_anim_enable_t anim_en);
Xila_graphics_obj_t *
Xila_graphics_tileview_get_tile_active(Xila_graphics_obj_t *obj);
void Xila_graphics_subject_init_int(Xila_graphics_subject_t *subject,
                                    int32_t value);
void Xila_graphics_subject_set_int(Xila_graphics_subject_t *subject,
                                   int32_t value);
int32_t Xila_graphics_subject_get_int(Xila_graphics_subject_t *subject);
int32_t
Xila_graphics_subject_get_previous_int(Xila_graphics_subject_t *subject);
void Xila_graphics_subject_init_string(Xila_graphics_subject_t *subject,
                                       char *buf, char *prev_buf, size_t size,
                                       const char *value);
void Xila_graphics_subject_copy_string(Xila_graphics_subject_t *subject,
                                       const char *buf);
const char *Xila_graphics_subject_get_string(Xila_graphics_subject_t *subject);
const char *
Xila_graphics_subject_get_previous_string(Xila_graphics_subject_t *subject);
void Xila_graphics_subject_init_pointer(Xila_graphics_subject_t *subject,
                                        char *value);
void Xila_graphics_subject_set_pointer(Xila_graphics_subject_t *subject,
                                       char *ptr);
const char *Xila_graphics_subject_get_pointer(Xila_graphics_subject_t *subject);
const char *
Xila_graphics_subject_get_previous_pointer(Xila_graphics_subject_t *subject);
void Xila_graphics_subject_init_color(Xila_graphics_subject_t *subject,
                                      Xila_graphics_color_t color);
void Xila_graphics_subject_set_color(Xila_graphics_subject_t *subject,
                                     Xila_graphics_color_t color);
Xila_graphics_color_t
Xila_graphics_subject_get_color(Xila_graphics_subject_t *subject);
Xila_graphics_color_t
Xila_graphics_subject_get_previous_color(Xila_graphics_subject_t *subject);
void Xila_graphics_subject_init_group(Xila_graphics_subject_t *subject,
                                      Xila_graphics_subject_t **list,
                                      uint32_t list_len);
void Xila_graphics_subject_deinit(Xila_graphics_subject_t *subject);
Xila_graphics_subject_t *
Xila_graphics_subject_get_group_element(Xila_graphics_subject_t *subject,
                                        int32_t index);
Xila_graphics_observer_t *
Xila_graphics_subject_add_observer(Xila_graphics_subject_t *subject,
                                   Xila_graphics_observer_cb_t observer_cb,
                                   char *user_data);
Xila_graphics_observer_t *Xila_graphics_subject_add_observer_obj(
    Xila_graphics_subject_t *subject, Xila_graphics_observer_cb_t observer_cb,
    Xila_graphics_obj_t *obj, char *user_data);
Xila_graphics_observer_t *Xila_graphics_subject_add_observer_with_target(
    Xila_graphics_subject_t *subject, Xila_graphics_observer_cb_t observer_cb,
    char *target, char *user_data);
void Xila_graphics_obj_remove_from_subject(Xila_graphics_obj_t *obj,
                                           Xila_graphics_subject_t *subject);
void Xila_graphics_subject_notify(Xila_graphics_subject_t *subject);
Xila_graphics_observer_t *Xila_graphics_obj_bind_flag_if_eq(
    Xila_graphics_obj_t *obj, Xila_graphics_subject_t *subject,
    Xila_graphics_obj_flag_t flag, int32_t ref_value);
Xila_graphics_observer_t *Xila_graphics_obj_bind_flag_if_not_eq(
    Xila_graphics_obj_t *obj, Xila_graphics_subject_t *subject,
    Xila_graphics_obj_flag_t flag, int32_t ref_value);
Xila_graphics_observer_t *Xila_graphics_obj_bind_state_if_eq(
    Xila_graphics_obj_t *obj, Xila_graphics_subject_t *subject,
    Xila_graphics_state_t state, int32_t ref_value);
Xila_graphics_observer_t *Xila_graphics_obj_bind_state_if_not_eq(
    Xila_graphics_obj_t *obj, Xila_graphics_subject_t *subject,
    Xila_graphics_state_t state, int32_t ref_value);
Xila_graphics_observer_t *
Xila_graphics_obj_bind_checked(Xila_graphics_obj_t *obj,
                               Xila_graphics_subject_t *subject);
Xila_graphics_observer_t *
Xila_graphics_arc_bind_value(Xila_graphics_obj_t *obj,
                             Xila_graphics_subject_t *subject);
Xila_graphics_observer_t *
Xila_graphics_slider_bind_value(Xila_graphics_obj_t *obj,
                                Xila_graphics_subject_t *subject);
Xila_graphics_observer_t *
Xila_graphics_roller_bind_value(Xila_graphics_obj_t *obj,
                                Xila_graphics_subject_t *subject);
Xila_graphics_observer_t *
Xila_graphics_dropdown_bind_value(Xila_graphics_obj_t *obj,
                                  Xila_graphics_subject_t *subject);
