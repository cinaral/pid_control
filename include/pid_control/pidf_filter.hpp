#ifndef PIDF_FILTER_HPP_CINARAL_220925_0347
#define PIDF_FILTER_HPP_CINARAL_220925_0347

#include "types.hpp"

namespace pid_control
{
//* Proportional-Integral-Derivative (Filtered) filter
//*                                  s
//* PIDF(s) = K_p + K_i s + K_d -----------
//*                              T_f s + 1
//*
//* x -> PIDF(s) -> y
// template <uint_t Y_DIM>
// void
// PIDF(const real_t T_s, const real_t T_f, const real_t K_p[], const real_t K_i[], const real_t K_d[],
//      const real_t x_prev[], const real_t x[], const real_t x_next[], const real_t y_prev[], const real_t y[],
//      real_t y_next[])
//{
//	const real_t coef_LHS = 2. * (2. * T_f + T_s);

//	for (uint_t i = 0; i < Y_DIM; ++i) {
//		const real_t coef_x_prev =
//		    (2. * K_p[i] * (2. * T_f - T_s) + K_i[i] * T_s * (T_s - 2. * T_f) + 4. * K_d[i]) / coef_LHS;
//		const real_t coef_x = (-8. * K_p[i] * T_f + 2. * K_i[i] * T_s * T_s - 8. * K_d[i]) / coef_LHS;
//		const real_t coef_x_next =
//		    (2. * K_p[i] * (2. * T_f + T_s) + K_i[i] * T_s * (T_s + 2. * T_f) + 4. * K_d[i]) / coef_LHS;
//		const real_t coef_y_prev = (4. * T_f - T_s) / coef_LHS;
//		const real_t coef_y = (-8. * T_f) / coef_LHS;

//		y_next[i] = coef_x_prev * x_prev[i] + coef_x * x[i] + coef_x_next * x_next[i] -
//		    coef_y_prev * y_prev[i] - coef_y * y[i];
//	}
//}
} // namespace pid_control

#endif