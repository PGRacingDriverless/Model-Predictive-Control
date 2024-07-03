#include "Eigen-3.3/Eigen/Core"
#include "Eigen-3.3/Eigen/QR"

/**
 * Fits a polynomial curve to the given data points using the least squares method.
 *
 * @param xvals The x-values of the data points.
 * @param yvals The y-values of the data points.
 * @param order The order of the polynomial to fit.
 * @return The coefficients of the polynomial curve.
 */
Eigen::VectorXd polyfit(Eigen::VectorXd xvals, Eigen::VectorXd yvals,
                        int order);


/**
 * Evaluates a polynomial function at a given point.
 *
 * @param coeffs The coefficients of the polynomial.
 * @param x The value at which the polynomial is evaluated.
 * @return The result of evaluating the polynomial at the given point.
 */
double polyeval(Eigen::VectorXd coeffs, double x)