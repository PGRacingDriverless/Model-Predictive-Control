#ifndef MPC_H
#define MPC_H

#include <vector>
#include "Eigen-3.3/Eigen/Core"

using namespace std;

class MPC {
private:
  size_t N; // number of timesteps in the horizon
  float dt; // time step duration
  float Lf; // distance between the front of the vehicle and its center of gravity
  float ref_velocity; // reference velocity
  size_t x_start;
  size_t y_start;
  size_t psi_start;
  size_t v_start;
  size_t cte_start;
  size_t epsi_start;
  size_t delta_start;
  size_t a_start;
public:
  MPC();
  MPC(size_t N, float dt, float Lf, float ref_velocity);

  virtual ~MPC();

  // Solve the model given an initial state and polynomial coefficients.
  // Return the first actuatotions.
  vector<double> Solve(Eigen::VectorXd state, Eigen::VectorXd coeffs);
};

#endif /* MPC_H */
