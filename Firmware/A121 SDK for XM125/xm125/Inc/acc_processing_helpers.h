// Copyright (c) Acconeer AB, 2022
// All rights reserved
// This file is subject to the terms and conditions defined in the file
// 'LICENSES/license_acconeer.txt', (BSD 3-Clause License) which is part
// of this source code package.

#ifndef ACC_PROCESSING_HELPERS_H_
#define ACC_PROCESSING_HELPERS_H_

#include <complex.h>
#include <stdbool.h>
#include <stdint.h>

#include "acc_control_helper.h"

/** \example acc_processing_helpers.c
 * @brief This is a collection of helper functions for processing of
 * the sparse IQ data that is generated by Acconeer's A121 radar sensor.
 * The functions are used by Acconeer's processing examples to show
 * common processing steps when working on sparse IQ data.
 * The purpose of the helper functions is to increase the readability
 * of the example programs. The helper functions do not provide optimized
 * implementations of the processing steps.
 */


typedef struct
{
	uint32_t      data_length;
	float complex *data;
} acc_vector_iq_t;

typedef struct
{
	uint32_t data_length;
	float    *data;
} acc_vector_float_t;


/**
 * @brief Allocate storage for an IQ vector
 *
 * @param[in] data_length Length of the vector
 * @return Pointer to vector or NULL if allocation failed
 */

acc_vector_iq_t *acc_vector_iq_alloc(uint32_t data_length);


/**
 * @brief Allocate storage for a float vector
 *
 * @param[in] data_length Length of the vector
 * @return Pointer to vector or NULL if allocation failed
 */
acc_vector_float_t *acc_vector_float_alloc(uint32_t data_length);


/**
 * @brief Free storage of data elements in an IQ vector
 *
 * @param[in] vector Vector to be freed
 */
void acc_vector_iq_free(acc_vector_iq_t *vector);


/**
 * @brief Free storage of data elements in a float vector
 *
 * @param[in] vector Vector to be freed
 */
void acc_vector_float_free(acc_vector_float_t *vector);


/**
 * @brief Convert time constant to smoothing factor
 *
 * @param[in] time_constant_s Time constant
 * @param[in] update_rate_hz Update rate
 * @return Smoothing factor
 */
float acc_processing_helper_tc_to_sf(float time_constant_s, float update_rate_hz);


/**
 * @brief Calculate a dynamic smoothing factor
 *
 * Calculate a smoothing factor that are lower for the
 * first sweeps. For the first n sweeps the exponential average will
 * be equal to the arithmetic mean of the first n sweeps.
 *
 * @param[in] static_sf The target smoothing factor that will be used after the first sweeps
 * @param[in] update_count The update count should be 0 for the first sweep and increased by one for each update
 * @return Dynamic smoothing factor
 */
float acc_processing_helper_dynamic_sf(float static_sf, uint32_t update_count);


/**
 * @brief Update the exponential average of an IQ vector
 *
 * @param[in] current The new IQ vector that will be included in the updated exponential average
 * @param[in, out] averaged_data The filtered data or exponential average that should be updated
 * @param[in] sf Smoothing factor that determines how much of the old data that should be kept
 */

void acc_vector_iq_update_exponential_average(const acc_vector_iq_t *current, acc_vector_iq_t *averaged_data, float sf);


/**
 * @brief Update the exponential average of a float vector
 *
 * @param[in] current The new IQ float that will be included in the updated exponential average
 * @param[in, out] averaged_data The filtered data or exponential average that should be updated
 * @param[in] sf Smoothing factor that determines how much of the old data that should be kept
 */

void acc_vector_float_update_exponential_average(const acc_vector_float_t *current, acc_vector_float_t *averaged_data, float sf);


/**
 * @brief Converts a newly captured IQ frame with one sweep to an IQ vector
 *
 * The resulting vector can be used with the processing functions in this file.
 *
 * @param[in] control_helper_state Pointer to control helper radar state struct
 * @param[out] vector_out IQ vector
 */
void acc_get_iq_sweep_vector(const acc_control_helper_t *control_helper_state, acc_vector_iq_t *vector_out);


/**
 * @brief Extract an IQ vector with sweep data for a specific point from a newly captured IQ frame with multiple sweeps
 *
 * The resulting vector can be used with the processing functions in this file.
 *
 * @param[in] control_helper_state Pointer to control helper radar state struct
 * @param[in] point The point to get the IQ vector for
 * @param[out] vector_out IQ vector
 */
void acc_get_iq_point_vector(const acc_control_helper_t *control_helper_state, uint32_t point, acc_vector_iq_t *vector_out);


/**
 * @brief Calculate filter vector length
 *
 * Calculate filter vector length given peak width and step size. The peak width
 * varies depending on profile.
 *
 * @param[in] peak_width_points Peak width in base points
 * @param[in] step_length Step length in base points
 * @return Filter vector length
 */
uint32_t acc_processing_helper_get_filter_length(uint32_t peak_width_points, uint32_t step_length);


/**
 * @brief Create a distance filter vector
 *
 * Create a triangle shaped distance filter vector. Use the function
 * acc_processing_helper_get_filter_length when allocating memory for the
 * output vector to get the right length of the filter for a given peak width
 * and step size.
 *
 * @param[out] vector_out Filter vector
 */

void acc_vector_float_create_depth_filter_vector(acc_vector_float_t *vector_out);


/**
 * @brief Apply a FIR filter to an IQ vector
 *
 * Performs coherent filtering of the input vector.
 *
 * @param[in] vector_a IQ vector
 * @param[in] filter_vector Filter vector
 * @param[out] vector_out Filtered result
 *
 */
void acc_vector_iq_apply_filter(const acc_vector_iq_t *vector_a, acc_vector_float_t *filter_vector, acc_vector_iq_t *vector_out);


/**
 * @brief Copy an IQ vector
 *
 * Copy the contents of one IQ vector to another IQ vector.
 *
 * @param[in] vector_a Source IQ vector
 * @param[out] vector_out Destination IQ vector
 *
 */
void acc_vector_iq_copy(const acc_vector_iq_t *vector_a, acc_vector_iq_t *vector_out);


/**
 * @brief Add two IQ vectors
 *
 * @param[in] vector_a First input vector
 * @param[in] vector_b Second input vector
 * @param[out] vector_out The result a + b
 */
void acc_vector_iq_add(const acc_vector_iq_t *vector_a, const acc_vector_iq_t *vector_b, acc_vector_iq_t *vector_out);


/**
 * @brief Subtract two IQ vectors
 *
 * @param[in] vector_a First input vector
 * @param[in] vector_b Second input vector
 * @param[out] vector_out The result a - b
 */
void acc_vector_iq_subtract(const acc_vector_iq_t *vector_a, const acc_vector_iq_t *vector_b, acc_vector_iq_t *vector_out);


/**
 * @brief Multiply two IQ vectors
 *
 * Perform element wise multiplication of two IQ vectors.
 *
 * @param[in] vector_a First input vector
 * @param[in] vector_b Second input vector
 * @param[out] vector_out The result a * b
 */
void acc_vector_iq_mult(const acc_vector_iq_t *vector_a, const acc_vector_iq_t *vector_b, acc_vector_iq_t *vector_out);


/**
 * @brief Multiply first IQ vector with conjugate of second IQ vector
 *
 * Make element wise multiplication of an IQ vector with the conjugate
 * of another IQ vector. The amplitudes of the result will be the product of the amplitudes
 * of the input vectors. The phases of the result will be the phase differences of the two
 * input vectors.
 *
 * The function can be used when calculating the phase difference between two consecutive
 * sweeps.
 *
 * @param[in] vector_a First input vector
 * @param[in] vector_b Second input vector
 * @param[out] vector_out The result: a * conj(b)
 */
void acc_vector_iq_mult_conj(const acc_vector_iq_t *vector_a, const acc_vector_iq_t *vector_b, acc_vector_iq_t *vector_out);


/**
 * @brief Rotate the phase of elements in an IQ vector
 *
 * @param[in, out] vector_a The IQ vector to be modified
 * @param[in] radians The angle in radians to rotate the phase
 */
void acc_vector_iq_rotate_phase_inline(acc_vector_iq_t *vector_a, float radians);


/**
 * @brief Update an IQ vector with its conjugate
 *
 * Replace the elements in an IQ vector with the conjugate of the elements.
 *
 * @param[in, out] vector_a The IQ vector to be modified
 */
void acc_vector_iq_conj_inline(acc_vector_iq_t *vector_a);


/**
 * @brief Amplitude of an IQ vector
 *
 * Calculate the amplitude of the elements in an IQ vector.
 *
 * @param[in] vector_a Input IQ vector
 * @param[out] vector_out The amplitude of the elements in the input vector
 */
void acc_vector_iq_amplitude(const acc_vector_iq_t *vector_a, acc_vector_float_t *vector_out);


/**
 * @brief Coherent mean amplitude of IQ vector
 *
 * Calculate the coherent mean amplitude of the elements in an IQ vector.
 *
 * @param[in] vector_a Input IQ vector
 * @return The coherent mean amplitude of the elements in vector_a
 */
float acc_vector_iq_coherent_mean_amplitude(const acc_vector_iq_t *vector_a);


/**
 * @brief Non-coherent mean amplitude of IQ vector
 *
 * Calculate the non-coherent mean amplitude of the elements in an IQ vector.
 *
 * @param[in] vector_a Input IQ vector
 * @return The non-coherent mean amplitude of the elements in vector_a
 */
float acc_vector_iq_noncoherent_mean_amplitude(const acc_vector_iq_t *vector_a);


/**
 * @brief Phase of an IQ vector
 *
 * Calculate the phase of the elements in an IQ vector.
 *
 * @param[in] vector_a Input IQ vector
 * @param[out] vector_out The phase of the elements in the input vector
 */
void acc_vector_iq_phase(const acc_vector_iq_t *vector_a, acc_vector_float_t *vector_out);


/**
 * @brief Index of element with maximum value in a float vector
 *
 * @param[in] vector_a Input vector
 * @return The index of the element with the highest value
 */
uint32_t acc_vector_float_argmax(acc_vector_float_t *vector_a);


/**
 * @brief Index of element with maximum value in a float vector disregarding edge elements
 *
 * Find the index of the maximum element in a float vector disregarding
 * the first and last elements in the vector.
 *
 * @param[in] vector_a Input vector
 * @param[in] elements_to_skip The number of elements to skip
 * @return The index of the element with the highest value
 */
uint32_t acc_vector_float_argmax_skip_edges(acc_vector_float_t *vector_a, uint32_t elements_to_skip);


/**
 * @brief Interpolate peak position
 *
 * The function fits a second degree polynomial to three consecutive amplitude
 * values where second element is expected to contain the maximum measured amplitude.
 * The function then finds the position of the maximum amplitude of the polynomial.
 * The position is normalized and a return value of 0 means that the peak is at the
 * position of the second amplitude. A value of -1 and 1 means that the peak is at
 * the position of the first or third input amplitude respectively.
 *
 * @param[in] y1 The first amplitude value
 * @param[in] y2 The second amplitude value
 * @param[in] y3 The third amplitude value
 * @return Interpolated peak position
 */
float acc_processing_helper_interpolate_peak_position(float y1, float y2, float y3);


/**
 * @brief Print float vector
 *
 * Print a float vector to stdout.
 *
 * @param[in] label A string description of the vector
 * @param[in] vector_a The float vector to print
 */
void acc_vector_float_print(const char *label, acc_vector_float_t *vector_a);


/**
 * @brief Print IQ vector
 *
 * Print an IQ vector to stdout.
 *
 * @param[in] label A string description of the vector
 * @param[in] vector_a The IQ vector to print
 */
void acc_vector_iq_print(const char *label, acc_vector_iq_t *vector_a);


#endif
