/**
 * @file 
 * @author Denise Ratasich
 * @date 02.10.2013
 *
 * @brief Examples for testing validation at compile time of MA.
 */

#include <std_msgs/Float64.h>

#define METHOD		MOVING_AVERAGE

// --- valid ---

// for all valid examples below
#define TOPICS_IN					\
  ((signal, data, std_msgs::Float64))
#define TOPICS_OUT					\
  ((signal_fused, 0))

// #define WINDOW_SIZE		5

// #define WINDOW_SIZE		5
// #define WEIGHTING_COEFFICIENTS	(1) (2) (5) (2) (1)

// #define WINDOW_SIZE		2
// #define WEIGHTING_COEFFICIENTS	(1) (2) (1)

// --- invalid ---

// // only 1 topic allowed
// #define TOPICS_IN					\
//   ((signal, data, std_msgs::Float64))		\
//   ((signal, data, std_msgs::Float64))
// #define TOPICS_OUT					\
//   ((signal_fused, 0))

// // output topic missing
// #define TOPICS_IN					\
//   ((signal, data, std_msgs::Float64))

// // only 1 output topic allowed
// #define TOPICS_IN					\
//   ((signal, data, std_msgs::Float64))
// #define TOPICS_OUT					\
//   ((signal_fused_0, 0))				\
//   ((signal_fused_1, 1))

// // for all examples below:
// #define TOPICS_IN					\
//   ((signal, data, std_msgs::Float64))
// #define TOPICS_OUT					\
//   ((signal, data, std_msgs::Float64))

// // window size must be given too
// #define WEIGHTING_COEFFICIENTS			\
//   (1) (2) (5) (2) (1)

// // invalid number of coefficients
// #define WINDOW_SIZE			2
// #define WEIGHTING_COEFFICIENTS		(1)

// // invalid number of coefficients
// #define WINDOW_SIZE			2
// #define WEIGHTING_COEFFICIENTS		(1) (2) (1) (1)

// // invalid window size, invalid number of coefficients
// #define WINDOW_SIZE			-1
// #define WEIGHTING_COEFFICIENTS		(1) (2) (1) (1)

// // invalid number of coefficients
// #define WINDOW_SIZE			3
// #define WEIGHTING_COEFFICIENTS
